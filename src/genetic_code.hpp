#include <memory>
#include "strategy.hpp"

using namespace std;

class GeneticCode {
    private:
        unique_ptr<Strategy> _strategy;

    public:
        void set_strategy(unique_ptr<Strategy> strategy) {
            _strategy = move(strategy);
        }

        string convert(string code) {
            if (!_strategy) {
                cout << "> Strategy isn't set." << endl;
                return NULL;
            }
            
            return _strategy->execute(code);
        }
};