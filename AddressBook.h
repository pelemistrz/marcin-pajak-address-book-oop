#include <iostream>
#include <vector>

#include "User.h"

using namespace std;

class AddressBook{
    int idLoggedUser;
    int idLastContact;
    int idDeletedContact;

    vector<User> users;

public:
    void userRegistration(vector<User> &users);
};
