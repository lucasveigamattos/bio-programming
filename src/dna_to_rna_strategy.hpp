#include <map>
#include "strategy.hpp"

using namespace std;

class DnaToRnaStrategy : public Strategy {
    private:
        map<char, char> dnaToRnaTalbe;
    
    public:
        DnaToRnaStrategy() {
            dnaToRnaTalbe = {
                {'G', 'C'},
                {'C', 'G'},
                {'A', 'U'},
                {'T', 'A'}
            };
        }

        string execute(string code) const override {
            string rnaSequence = "";

            for (int i = 0; i < code.length(); i++) {
                if (!dnaToRnaTalbe.count(code[i]))
                    return "";
                
                rnaSequence += dnaToRnaTalbe.at(code[i]);
            }

            return rnaSequence;
        }
};