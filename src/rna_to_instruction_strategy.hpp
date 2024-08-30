#include <string>
#include <map>
#include "strategy.hpp"

using namespace std;

class RnaToInstructionStrategy : public Strategy {
    private:
        map<string, string> geneticCodeTable;
    
    public:
        RnaToInstructionStrategy() {
            geneticCodeTable = {
                {"UUU", "Phe"},
                {"UUC", "Phe"},
                {"UUA", "Leu"},
                {"UUG", "Leu"},
                {"UCU", "Ser"},
                {"UCC", "Ser"},
                {"UCA", "Ser"},
                {"UCG", "Ser"},
                {"UAU", "Tyr"},
                {"UAC", "Tyr"},
                {"UAA", "Stop"},
                {"UAG", "Stop"},
                {"UGU", "Cys"},
                {"UGC", "Cys"},
                {"UGA", "Stop"},
                {"UGG", "Trp"},
                {"CUU", "Leu"},
                {"CUC", "Leu"},
                {"CUA", "Leu"},
                {"CUG", "Leu"},
                {"CCU", "Pro"},
                {"CCC", "Pro"},
                {"CCA", "Pro"},
                {"CCG", "Pro"},
                {"CAU", "His"},
                {"CAC", "His"},
                {"CAA", "Gln"},
                {"CAG", "Gln"},
                {"CGU", "Arg"},
                {"CGC", "Arg"},
                {"CGA", "Arg"},
                {"CGG", "Arg"},
                {"AUU", "Lle"},
                {"AUC", "Lle"},
                {"AUA", "Lle"},
                {"AUG", "Met"},
                {"ACU", "Thr"},
                {"ACC", "Thr"},
                {"ACA", "Thr"},
                {"ACG", "Thr"},
                {"AAU", "Asn"},
                {"AAC", "Asn"},
                {"AAA", "Lys"},
                {"AAG", "Lys"},
                {"AGU", "Ser"},
                {"AGC", "Ser"},
                {"AGA", "Arg"},
                {"AGG", "Arg"},
                {"GUU", "Val"},
                {"GUC", "Val"},
                {"GUA", "Val"},
                {"GUG", "Val"},
                {"GCU", "Ala"},
                {"GCC", "Ala"},
                {"GCA", "Ala"},
                {"GCG", "Ala"},
                {"GAU", "Asp"},
                {"GAC", "Asp"},
                {"GAA", "Glu"},
                {"GAG", "Glu"},
                {"GGY", "Gly"},
                {"GGC", "Gly"},
                {"GGA", "Gly"},
                {"GGG", "Gly"}
            };
        }

        string execute(string code) const override {
            if (!geneticCodeTable.count(code))
                return "";

            return geneticCodeTable.at(code);
        }
};