#include "AddressBook.h"

AddressBook::AddressBook(){
    userManager.loadUsersFromFile();
}

void AddressBook::userRegistration(){
    userManager.userRegistration();
}



