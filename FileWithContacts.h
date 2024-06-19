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
    const string NAME_OF_FILE_WITH_CONTACTS;
    int idLastContact;
//    void saveContactToFile(Contact contact, fstream file);

public:
    FileWithContacts(string nameOfFileWithContacts) : NAME_OF_FILE_WITH_CONTACTS(nameOfFileWithContacts){
        idLastContact = 0;
    };

    vector<Contact> loadContactsFromFile(int idLoggedUser);
    int getIdLastContact();
    void addContactToTheFile(Contact contact);
    void deleteContactFromFile(int idContactToDelete);
    void editContactInFile(int idContactToEdit, Contact contactAfterEdit);

};
#endif
