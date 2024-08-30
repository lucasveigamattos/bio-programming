#include <map>
#include "strategy.hpp"

using namespace std;

class RnaToDnaStrategy : public Strategy {
    private:
        map<char, char> rnaToDnaTable;

    public:
        RnaToDnaStrategy() {
            rnaToDnaTable = {
                {'C', 'G'},
                {'G', 'C'},
                {'U', 'A'},
                {'A', 'T'}
            };
        }

        string execute(string code) const override {
            string dnaSequence = "";

            for (int i = 0; i < code.length(); i++) {
                if (!rnaToDnaTable.count(code[i]))
                    return "";
                    
                dnaSequence += rnaToDnaTable.at(code[i]);
            }

            return dnaSequence;
        }
};