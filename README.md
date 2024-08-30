###### Compile:

g++ .\main.cpp -o main

###### Create one file for input:

input.txt<br>
Met<br>
Pro<br>
Stop

###### Choose one of the followind modes:

ConvertToDNA        (amino acid to DNA)<br>
FromDNAToCodons     (from DNA to amino acid)<br>
FromRNAToCodons     (from RNA to amino acid)<br>
FromDNAToRNA        (from DNA to RNA)<br>
FromRNAToDNA        (from RNA to DNA)<br>
Or leave the first line with a amino acid, to convert amino acids to RNA sequence (default mode) (amino acid to RNA).<br>

example (ConvertToDNA)

input.txt<br>
ConvertToDNA<br>
Met<br>
Pro<br>
Stop<br>

output.txt<br>
TAC<br>
GGA<br>
ATT

###### Make the conversion:

.\main.exe input.txt output.txt