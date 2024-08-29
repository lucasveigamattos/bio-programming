#pragma once
#include <string>

using namespace std;

class Strategy {
    public:
        virtual ~Strategy() = default;
        virtual std::string execute(std::string code) const = 0;
};