#include <iostream>
#include <map>

using std::map;
using std::string;

class GeneticCode {
    private:
        map<string, string> geneticCodeTable;

    public:
        GeneticCode() {
            geneticCodeTable = {
                {"Phe", "UUU"},
                {"Phe", "UUC"},
                {"Leu", "UUA"},
                {"Leu", "UUG"},
                {"Ser", "UCU"},
                {"Ser", "UCC"},
                {"Ser", "UCA"},
                {"Ser", "UCG"},
                {"Tyr", "UAU"},
                {"Tyr", "UAC"},
                {"Stop", "UAA"},
                {"Stop", "UAG"},
                {"Cys", "UGU"},
                {"Cys", "UGC"},
                {"Stop", "UGA"},
                {"Trp", "UGG"},
                {"Leu", "CUU"},
                {"Leu", "CUC"},
                {"Leu", "CUA"},
                {"Leu", "CUG"},
                {"Pro", "CCU"},
                {"Pro", "CCC"},
                {"Pro", "CCA"},
                {"Pro", "CCG"},
                {"His", "CAU"},
                {"His", "CAC"},
                {"Gln", "CAA"},
                {"Gln", "CAG"},
                {"Arg", "CGU"},
                {"Arg", "CGC"},
                {"Arg", "CGA"},
                {"Arg", "CGG"},
                {"Lle", "AUU"},
                {"Lle", "AUC"},
                {"Lle", "AUA"},
                {"Met", "AUG"},
                {"Thr", "ACU"},
                {"Thr", "ACC"},
                {"Thr", "ACA"},
                {"Thr", "ACG"},
                {"Asn", "AAU"},
                {"Asn", "AAC"},
                {"Lys", "AAA"},
                {"Lys", "AAG"},
                {"Ser", "AGU"},
                {"Ser", "AGC"},
                {"Arg", "AGA"},
                {"Arg", "AGG"},
                {"Val", "GUU"},
                {"Val", "GUC"},
                {"Val", "GUA"},
                {"Val", "GUG"},
                {"Ala", "GCU"},
                {"Ala", "GCC"},
                {"Ala", "GCA"},
                {"Ala", "GCG"},
                {"Asp", "GAU"},
                {"Asp", "GAC"},
                {"Glu", "GAA"},
                {"Glu", "GAG"},
                {"Gly", "GGU"},
                {"Gly", "GGC"},
                {"Gly", "GGA"},
                {"Gly", "GGG"},
            };
        }

        string translateCodeToNitrogenousBase(string code) {
            return geneticCodeTable[code];
        }
};