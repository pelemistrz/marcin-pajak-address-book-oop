#ifndef FILEWITHUSERS_H
#define FILEWITHUSERS_H


#include <fstream>
#include <iostream>
#include <vector>

#include "User.h"
#include "Helper.h"

using namespace std;

class FileWithUsers{
    fstream file;

public:
    FileWithUsers();
    void addUserToTheFile(User user);
    vector<User> loadUsersFromFile();
};
#endif
