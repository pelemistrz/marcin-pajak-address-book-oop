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


int AddressBook::getIdLoggedUser(){
    return userManager.getIdLoggedUser();
}




