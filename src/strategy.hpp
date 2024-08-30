#pragma once
#include <string>

using namespace std;

class Strategy {
    public:
        virtual ~Strategy() = default;
        virtual string execute(string code) const = 0;
};