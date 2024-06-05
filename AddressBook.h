#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

#include "User.h"

using namespace std;

class AddressBook{
    int idLoggedUser;
    int idLastContact;
    int idDeletedContact;
    string fileWithUsers;

    vector<User> users;

    int getIdNewUser();

public:
    AddressBook();
    void userRegistration();
};
