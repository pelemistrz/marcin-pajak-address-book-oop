#ifndef FILEWITCONTACTS_H
#define FILEWITCONTACTS_H


#include <fstream>
#include <iostream>
#include <vector>

#include "Contact.h"

using namespace std;

class FileWithContacts{
    const string fileWithContacts;

public:
    FileWithContacts(string fileWithContacts) : fileWithContacts(fileWithContacts){};
    vector<Contact> loadContactsFromFile(int idLoggedUser);

};
#endif
