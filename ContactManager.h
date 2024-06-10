#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include "FileWithContacts.h"
#include "Contact.h"


using namespace std;

class ContactManager{
    vector<Contact> contacts;
    FileWithContacts fileWithContacts;

    void showContact(int whichContact);

public:
     ContactManager(string fileWithContacts) : fileWithContacts(fileWithContacts){}
     void loadContactsFromFile(int idLoggedUser);
     void showAllContacts();
     void newContact(int idLoggedUser);


};

#endif
