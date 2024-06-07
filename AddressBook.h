#include <iostream>

#include "UserManager.h"

using namespace std;

class AddressBook{
    UserManager userManager;

public:
    AddressBook(string fileWithUsers) : userManager(fileWithUsers){
        userManager.loadUsersFromFile();
    }
    void userRegistration();
    void userLogIn();
    void userLogOut();


    int getIdLoggedUser();
};
