#include <iostream>
#include "src/genetic_code.hpp"
#include "src/file_handler.hpp"
#include "src/instruction_to_rna_strategy.hpp"
#include "src/instruction_to_dna_strategy.hpp"

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

void setStrategy(string code) {
    if (code == "ConvertToDNA") {
        geneticCode->set_strategy(make_unique<InstructionToDnaStrategy>());
    } else {
        geneticCode->set_strategy(make_unique<InstructionToRnaStrategy>());
    }
}

void translateGeneticCode(string code) {
    outputFileHandler->WriteFile(geneticCode->convert(code));
}

int main(int argc, char* argv[]) {
    if (!HandleArguments(argc, argv)) {
        return 1;
    }

    inputFileHandler = new FileHandler(argv[1]);
    outputFileHandler = new FileHandler(argv[2], true);

    inputFileHandler->ReadFile(&setStrategy, 1);
    inputFileHandler->ReadFile(&translateGeneticCode);

    inputFileHandler->Dispose();
    outputFileHandler->Dispose();

    return 0;
}