#include <iostream>

#include "UserManager.h"
#include "ContactManager.h"

using namespace std;

class AddressBook{
    UserManager userManager;
    ContactManager contactManager;

public:
    AddressBook(string fileWithUsers, string fileWithContacts) : userManager(fileWithUsers), contactManager(fileWithContacts){
        userManager.loadUsersFromFile();
    }

    void userRegistration();
    void userLogIn();
    void userLogOut();
    void userChangePassword();
    void loadContactsFromFile(int idLoggedUser);
    void showAllContacts();

    int getIdLoggedUser();
};
