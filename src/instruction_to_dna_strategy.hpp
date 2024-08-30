#include <string>
#include <map>
#include "strategy.hpp"

using namespace std;

class InstructionToDnaStrategy : public Strategy {
    private:
        map<string, string> geneticCodeTable;
        map<char, char> rnaToDnaTable;
    
    public:
        InstructionToDnaStrategy() {
            geneticCodeTable = {
                {"Phe", "UUU"},
                {"Phe0", "UUU"},
                {"Phe1", "UUC"},
                {"Leu", "UUA"},
                {"Leu0", "UUA"},
                {"Leu1", "UUG"},
                {"Ser", "UCU"},
                {"Ser0", "UCU"},
                {"Ser1", "UCC"},
                {"Ser2", "UCA"},
                {"Ser3", "UCG"},
                {"Tyr", "UAU"},
                {"Tyr0", "UAU"},
                {"Tyr1", "UAC"},
                {"Stop", "UAA"},
                {"Stop0", "UAA"},
                {"Stop1", "UAG"},
                {"Cys", "UGU"},
                {"Cys0", "UGU"},
                {"Cys1", "UGC"},
                {"Stop2", "UGA"},
                {"Trp", "UGG"},
                {"Trp0", "UGG"},
                {"Leu2", "CUU"},
                {"Leu3", "CUC"},
                {"Leu4", "CUA"},
                {"Leu5", "CUG"},
                {"Pro", "CCU"},
                {"Pro0", "CCU"},
                {"Pro1", "CCC"},
                {"Pro2", "CCA"},
                {"Pro3", "CCG"},
                {"His", "CAU"},
                {"His0", "CAU"},
                {"His1", "CAC"},
                {"Gln", "CAA"},
                {"Gln0", "CAA"},
                {"Gln1", "CAG"},
                {"Arg", "CGU"},
                {"Arg0", "CGU"},
                {"Arg1", "CGC"},
                {"Arg2", "CGA"},
                {"Arg3", "CGG"},
                {"Lle", "AUU"},
                {"Lle0", "AUU"},
                {"Lle1", "AUC"},
                {"Lle2", "AUA"},
                {"Met", "AUG"},
                {"Met0", "AUG"},
                {"Thr", "ACU"},
                {"Thr0", "ACU"},
                {"Thr1", "ACC"},
                {"Thr2", "ACA"},
                {"Thr3", "ACG"},
                {"Asn", "AAU"},
                {"Asn0", "AAU"},
                {"Asn1", "AAC"},
                {"Lys", "AAA"},
                {"Lys0", "AAA"},
                {"Lys1", "AAG"},
                {"Ser4", "AGU"},
                {"Ser5", "AGC"},
                {"Arg4", "AGA"},
                {"Arg5", "AGG"},
                {"Val", "GUU"},
                {"Val0", "GUU"},
                {"Val1", "GUC"},
                {"Val2", "GUA"},
                {"Val3", "GUG"},
                {"Ala", "GCU"},
                {"Ala0", "GCU"},
                {"Ala1", "GCC"},
                {"Ala2", "GCA"},
                {"Ala3", "GCG"},
                {"Asp", "GAU"},
                {"Asp0", "GAU"},
                {"Asp1", "GAC"},
                {"Glu", "GAA"},
                {"Glu0", "GAA"},
                {"Glu1", "GAG"},
                {"Gly", "GGU"},
                {"Gly0", "GGU"},
                {"Gly1", "GGC"},
                {"Gly2", "GGA"},
                {"Gly3", "GGG"}
            };

            rnaToDnaTable = {
                {'C', 'G'},
                {'G', 'C'},
                {'U', 'A'},
                {'A', 'T'}
            };
        }

        string execute(string code) const override {
            if (!geneticCodeTable.count(code))
                return "";

            string result = "";
            string rnaSequence = geneticCodeTable.at(code);

            for (int i = 0; i < rnaSequence.length(); i++) {
                result += rnaToDnaTable.at(rnaSequence[i]);
            }

            return result;
        }
};