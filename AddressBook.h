#include <iostream>
#include "ContactManager.h"
#include "UserManager.h"


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
    int getIdLoggedUser();

    void loadContactsFromFile(int idLoggedUser);
    void showAllContacts();
    void newContact(int idLoggedUser);

};
