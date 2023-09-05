library(readxl)
library(here)
library(tidyr)
library(stringr)
library(dplyr)
library(readr)

## read capacity constraints of each daycare center
constraints_dir <- file.path(here::here("data"), region,'constraints.xlsx')
constraints <- read_excel(constraints_dir)
constraints[is.na(constraints)] = 0
constraints %>%
  tidyr::gather(age, constraint, starts_with('age')) %>%
  mutate(age = as.integer(str_replace(age,'age','')))-> constraints
constraints$constraint = as.integer(constraints$constraint)
constraints$center_id = as.integer(constraints$center_id)
constraints$age = as.integer(constraints$age)

# IMPORTANT#  IN THE EXCEL CONTAINING CONSTRAINTS and in the above data.frame constraints
# center 501-520 treat 0 to 2 year-old kids indifferently and the constraints are on the number of these kids in total
# for 0-2 year-old kids assigned to center 501-520, only record the constraints (the maximal sum of 0 to 2 year-old kids) in the col of age 0 (the number for age 1 and 2 are 0)
stu_dir <- file.path(here::here("data"), region,'student_information.xlsx')

## read preferences of students
stu_pref <- read_csv(file.path(here::here("data"), region,'stu_pref_all.csv'))
stu_pref[is.na(stu_pref)] = 0
max_choice = ncol(stu_pref) - 1

stu_pref %>%
  tidyr::gather(choice, center_id, -student_id) %>%
  mutate(choice = as.integer(choice))-> stu_pref

n_sch = n_distinct(constraints$center_id)
n_stu = n_distinct(stu_pref$student_id)

##some students may report a school which does not appear in the list 'constraints' (that school does not exist or have no opening)
##rearrange the stu_pref to exclude such schools while keep other preference relation unchanged
constraints %>% distinct(center_id) -> all_center_id
stu_pref %>%
  inner_join(all_center_id, by = 'center_id') -> stu_pref

## add center 0 (not assigned) as the bound of rational choices for each student
choice_add0 = data.frame(student_id = 1:n_stu, choice = max_choice + 1,  center_id = 0)
rbind(choice_add0, stu_pref) -> stu_pref

stu_pref %>%
  group_by(student_id) %>%
  arrange(choice) %>% 
  mutate(num = 1:n_distinct(choice)) %>% 
  mutate(choice = num) %>%
  select(-num) %>%
  ungroup -> stu_pref

stu_pref$student_id = as.integer(stu_pref$student_id)
stu_pref$center_id = as.integer(stu_pref$center_id)

## read scores(priority)
stu_score <- read_excel(stu_dir, sheet = "stu_score")
stu_score$student_id = as.integer(stu_score$student_id)

## read students' age
stu_info <- read_excel(stu_dir, sheet = "stu_info") 
stu_info$student_id = as.integer(stu_info$student_id)
stu_info$age = as.integer(stu_info$age)
