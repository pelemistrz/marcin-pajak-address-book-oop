#ifndef FILEWITHUSERS_H
#define FILEWITHUSERS_H


#include <fstream>
#include <iostream>
#include <vector>

#include "User.h"
#include "Helper.h"

using namespace std;

class FileWithUsers{
    const string fileWithUsers;

public:
    FileWithUsers(string fileWithUsers) : fileWithUsers(fileWithUsers){};
    void addUserToTheFile(User user);
    vector<User> loadUsersFromFile();
};
#endif
