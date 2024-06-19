#include <iostream>
#include "ContactManager.h"
#include "UserManager.h"


using namespace std;

class AddressBook{
    UserManager userManager;
    ContactManager *contactManager;
    const string NAME_OF_FILE_WITH_CONTACTS;

public:
    AddressBook(string nameOfFileWithUsers, string nameOfFileWithContacts) : userManager(nameOfFileWithUsers), NAME_OF_FILE_WITH_CONTACTS(nameOfFileWithContacts){
        contactManager = NULL;
    }

    ~AddressBook(){
        delete contactManager;
        contactManager = NULL;
    }

    void userRegistration();
    void userLogIn();
    void userLogOut();
    void userChangePassword();
    int getIdLoggedUser();

    void loadContactsFromFile(int idLoggedUser);
    void showAllContacts();
    void newContact();
    void searchByName();
    void searchBySurname();
    void deleteContact();
    void editContact();

};
