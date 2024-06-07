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
    UserManager(string fileWithUsers) : fileWithUsers(fileWithUsers){};
    void userRegistration();
    void loadUsersFromFile();
};
#endif
