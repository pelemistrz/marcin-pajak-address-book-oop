#ifndef FILEWITHUSERS_H
#define FILEWITHUSERS_H


#include <fstream>
#include <iostream>
#include <vector>

#include "User.h"
#include "Helper.h"
#include "FileText.h"

using namespace std;

class FileWithUsers : public FileText{


public:
    FileWithUsers(string nameOfFileWithUsers) : FileText(nameOfFileWithUsers){};
    void addUserToTheFile(User user);
    void saveAllUsersToTheFile(vector<User> &users);
    vector<User> loadUsersFromFile();
};
#endif
