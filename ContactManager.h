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
    const int ID_LOGGED_USER;
    vector<Contact> contacts;
    FileWithContacts fileWithContacts;

    void showContact(int whichContact);

public:
     ContactManager(string nameOfFileWithContacts, int idLoggedUser) : fileWithContacts(nameOfFileWithContacts), ID_LOGGED_USER(idLoggedUser){
//         contactManager->loadContactsFromFile(userManager.getIdLoggedUser());
         contacts = fileWithContacts.loadContactsFromFile(ID_LOGGED_USER);
     }

     void loadContactsFromFile(int idLoggedUser);
     void showAllContacts();
     void newContact();


};

#endif
