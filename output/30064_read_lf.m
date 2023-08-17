function loadfactor = read_lf()

%% Initialize variables.
filename = '../../../../../data/processed/loadfactor.csv';

delimiter = {''};

    startRow = 1;
    endRow = inf;


%% Format for each line of text:
formatSpec = '%f%[^\n\r]';

%% Open the text file.
fileID = fopen(filename,'r');

%% Read columns of data according to the format.
dataArray = textscan(fileID, formatSpec, endRow(1)-startRow(1)+1, 'Delimiter', delimiter, 'TextType', 'string', 'EmptyValue', NaN, 'HeaderLines', startRow(1)-1, 'ReturnOnError', false, 'EndOfLine', '\r\n');
for block=2:length(startRow)
    frewind(fileID);
    dataArrayBlock = textscan(fileID, formatSpec, endRow(block)-startRow(block)+1, 'Delimiter', delimiter, 'TextType', 'string', 'EmptyValue', NaN, 'HeaderLines', startRow(block)-1, 'ReturnOnError', false, 'EndOfLine', '\r\n');
    dataArray{1} = [dataArray{1};dataArrayBlock{1}];
end


%% Close the text file.
fclose(fileID);

%% Create output variable
loadfactor = table(dataArray{1:end-1}, 'VariableNames', {'loadfactor'});

end
