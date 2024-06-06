#ifndef USERMANAGER_H
#define USERMANAGER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

#include "User.h"
#include "FileWithUsers.h"

using namespace std;

class UserManager{
    int idLoggedUser;
    vector<User> users;
    FileWithUsers fileWithUsers;

    int getIdNewUser();

public:
    void userRegistration();
};
#endif
