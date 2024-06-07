#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

#include "Contact.h"
#include "FileWithContacts.h"

using namespace std;

class ContactManager{
    vector<Contact> contacts;
    FileWithContacts fileWithContacts;

    int getIdNewUser();

public:
     ContactManager(string fileWithContacts) : fileWithContacts(fileWithContacts){}


};

#endif
