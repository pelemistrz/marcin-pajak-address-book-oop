#ifndef FILEWITCONTACTS_H
#define FILEWITCONTACTS_H


#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>

#include "Contact.h"
#include "Helper.h"

using namespace std;

class FileWithContacts{
    const string fileWithContacts;

public:
    FileWithContacts(string fileWithContacts) : fileWithContacts(fileWithContacts){};
    vector<Contact> loadContactsFromFile(int idLoggedUser);
    int getIdLastContact();
    void addContactToTheFile(Contact contact);

};
#endif
