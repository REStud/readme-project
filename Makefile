# Created by: Gergely Attila Kiss
# email: kiss.gergely.attila17@gmail.com
# Date: 23 Aug 2023
# 
data-raw/.timestamp: code/extract_readmes.py temp/github.csv
	poetry run python $^ $(dir $@)
	touch $@
temp/github.csv: temp/github.json
	cat $< | jq '.[]| [.name, .sshUrl, .createdAt]| @csv' | tr -d \\\\ | tr -d '\"' > $@
temp/github.json:
	gh repo list restud-replication-packages -L 1000 --json 'name,sshUrl,createdAt' > $@
output/%.md: data-raw/%.doc
	mkdir -p $(dir $@)
	pandoc $< -o $@
output/%.md: data-raw/%.docx
	mkdir -p $(dir $@)
	pandoc $< -o $@
output/%.md: data-raw/%.tex
	mkdir -p $(dir $@)
	pandoc $< -o $@
output/%.md: data-raw/%.md
	mkdir -p $(dir $@)
	cp $< $@
output/%.md: data-raw/%.txt
	mkdir -p $(dir $@)
	pandoc $< -o $@