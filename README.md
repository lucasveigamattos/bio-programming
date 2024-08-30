###### Compile:

g++ .\main.cpp -o main

###### Create one file for input:

input.txt
Met
Pro
Stop

###### Choose one of the followind modes:

ConvertToDNA        (amino acid to DNA)
FromDNAToCodons     (from DNA to amino acid)
FromRNAToCodons     (from RNA to amino acid)
FromDNAToRNA        (from DNA to RNA)
FromRNAToDNA        (from RNA to DNA)
Or leave the first line with a amino acid, to convert amino acids to RNA sequence (default mode) (amino acid to RNA).

example (ConvertToDNA)

input.txt
ConvertToDNA
Met
Pro
Stop

output.txt
TAC
GGA
ATT

###### Make the conversion:

.\main.exe input.txt output.txt