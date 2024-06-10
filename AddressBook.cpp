#include "AddressBook.h"

void AddressBook::userRegistration(){
    userManager.userRegistration();
}

void AddressBook::userLogIn(){
      userManager.userLogIn();
}

void AddressBook::userLogOut(){
    userManager.userLogOut();
}

void AddressBook::userChangePassword(){
    userManager.userChangePassword();
}
int AddressBook::getIdLoggedUser(){
    return userManager.getIdLoggedUser();
}

void AddressBook::loadContactsFromFile(int idLoggedUser){
    contactManager.loadContactsFromFile(idLoggedUser);
}

void AddressBook::showAllContacts(){
    contactManager.showAllContacts();
}

void AddressBook::newContact(int idLoggedUser){
    contactManager.newContact(idLoggedUser);
}






