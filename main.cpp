#include <iostream>
#include "src/genetic_code.hpp"
#include "src/file_handler.hpp"

using namespace std;

GeneticCode* geneticCode = new GeneticCode();

FileHandler* inputFileHandler;
FileHandler* outputFileHandler;

bool HandleArguments(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "> Need to specify the input and output file." << endl;
        return false;
    }

    return true;
}

void translateGeneticCode(string code) {
    outputFileHandler->WriteFile(geneticCode->translateCodeToNitrogenousBase(code));
}

int main(int argc, char* argv[]) {
    if (!HandleArguments(argc, argv)) {
        return 1;
    }

    inputFileHandler = new FileHandler(argv[1]);
    outputFileHandler = new FileHandler(argv[2], true);

    inputFileHandler->ReadFile(&translateGeneticCode);

    inputFileHandler->Dispose();
    outputFileHandler->Dispose();

    return 0;
}