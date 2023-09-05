function datamat_bs = read_siat_bs()

filename = '../../../../../data/processed/estimation_sample.csv';
delimiter = ',';
startRow = 2;


%% Format for each line of text:
formatSpec = '%f%f%f%f%f%f%f%f%f%f%[^\n\r]';

%% Open the text file.
fileID = fopen(filename,'r');

%% Read columns of data according to the format.
dataArray = textscan(fileID, formatSpec, 'Delimiter', delimiter, 'TextType',...
    'string', 'EmptyValue', NaN, 'HeaderLines' ,startRow-1, 'ReturnOnError', false, 'EndOfLine', '\r\n');

%% Close the text file.
fclose(fileID);

%% Create output variable
datmat = table(dataArray{1:end-1}, 'VariableNames', {'exptick','pdepair','tickecon',...
    'tick1st','mkt_bus','bizPassenger','flightID','seats1st','seatsECON','nonstop'});

rng(1776)
bsNum = 100;
numObs = size(datmat,1);
bsIdx = randi(numObs,numObs,bsNum);

datamat_bs = cell(1,bsNum);
for ix = 1:bsNum
    
    datamat_bs{ix} = datmat(bsIdx(:,ix),:);
    
end




end