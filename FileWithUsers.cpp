#include "FileWithUsers.h"

FileWithUsers::FileWithUsers(){
    fileWithUsers = "Users.txt";
}

void FileWithUsers::addUserToTheFile(User user){

    file.open(fileWithUsers, ios::out | ios::app);
    if (file.good())
    {
        file << user.getId() << "|";
        file << user.getLogin() << "|";
        file << user.getPassword() << endl;

        file.close();
        cout << endl;
    }
}


