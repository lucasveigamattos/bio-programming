#include <iostream>

using namespace std;

bool HandleArguments(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "> Need to specify the input and output file." << endl;
        return 1;
    }
}

int main(int argc, char* argv[]) {
    return 0;
}