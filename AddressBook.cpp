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




