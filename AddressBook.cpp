#include "AddressBook.h"

void AddressBook::userRegistration(){
    userManager.userRegistration();
}

void AddressBook::userLogIn(){
      userManager.userLogIn();
      if(userManager.isLogIn()){
        contactManager = new ContactManager(NAME_OF_FILE_WITH_CONTACTS, userManager.getIdLoggedUser());
      }
//
}

void AddressBook::userLogOut(){
    userManager.userLogOut();
    delete contactManager;
    contactManager = NULL;
}

void AddressBook::userChangePassword(){
    userManager.userChangePassword();
}
int AddressBook::getIdLoggedUser(){
    return userManager.getIdLoggedUser();
}

void AddressBook::showAllContacts(){
    contactManager->showAllContacts();
}

void AddressBook::newContact(){
    contactManager->newContact();
}






