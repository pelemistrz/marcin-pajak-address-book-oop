#include <iostream>

#include <string>
#include <windows.h>
#include <vector>
#include <sstream>

#include "AddressBook.h"

using namespace std;

int main(){

    AddressBook addressBook("Users.txt");
    addressBook.userRegistration();

    return 0;
}
