#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FileHandler {
    private:
        fstream* fileStream;
        string line;

        void CreateFile(string file) {
            fileStream->open(file, fstream::out);
        }

        bool HandleOpeningError() {
            if (!fileStream->is_open()) {
                cerr << "> Error opening the file." << endl;
                Dispose();

                return false;
            }

            return true;
        }

    public:
        FileHandler(string file, bool canCreateFile = false) {
            fileStream = new fstream(file);

            if (!fileStream->is_open() && canCreateFile)
                CreateFile(file);

            if (!HandleOpeningError())
                return;
        }

        void WriteFile(string line) {
            (*fileStream) << line << endl;
        }

        void ReadFile(void(*action)(string line)) {
            while (getline((*fileStream), line)) {
                action(line);
            }
        }

        void Dispose() {
            fileStream->close();
        }
};