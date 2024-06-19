#ifndef FILETEXT_H
#define FILETEXT_H

#include <iostream>
#include <string>

using namespace std;

class FileText{
    const string NAME_OF_FILE;
public:
    FileText(string nameOfFile): NAME_OF_FILE(nameOfFile){}
    string getNameOfFile();


};

#endif
