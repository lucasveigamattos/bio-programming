#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FileHandler {
    private:
        string _file;
        bool _canCreateFile;
        fstream* fileStream;
        string line;

        void CreateFile(string file) {
            fileStream->open(file, fstream::out);
        }

        bool HandleOpeningError() {
            if (!fileStream->is_open()) {
                cerr << "> Error opening the file." << endl;
                return false;
            }

            return true;
        }

        bool NewFileStream() {
            if (_file.empty())
                return false;

            fileStream = new fstream(_file);
            if (!fileStream->is_open() && _canCreateFile) {
                CreateFile(_file);
            }

            if (!HandleOpeningError())
                return false;
            
            return true;
        }

    public:
        FileHandler(string file, bool canCreateFile = false) {
            _file = file;
            _canCreateFile = canCreateFile;

            NewFileStream();
        }

        void WriteFile(string line) {
            if (line.empty())
                return;

            (*fileStream) << line << endl;
        }

        void ReadFile(void(*action)(string line)) {
            if (!NewFileStream())
                return;

            while (getline((*fileStream), line)) {
                action(line);
            }
        }

        void ReadFile(void(*action)(string line), int numberLinesToRead) {
            if (!NewFileStream())
                return;

            for (int i = 0; i < numberLinesToRead; i++) {
                getline((*fileStream), line);
                action(line);
            }
        }

        void Dispose() {
            if (!fileStream->is_open())
                return;

            fileStream->close();
        }
};