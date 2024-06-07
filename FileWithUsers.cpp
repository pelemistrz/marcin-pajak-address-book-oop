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

string FileWithUsers::getFileWithUsers(){
    return fileWithUsers;
}

vector<User> FileWithUsers::loadUsersFromFile(){
    User user;
    vector<User> users;
    ifstream file;

    file.open(fileWithUsers, ios::in);

    string line;
    if(file.good())
    {
        while(getline(file,line,'|'))
        {
            user.setId(atoi(line.c_str()));

            getline(file,line,'|');
            user.setLogin(line);

            getline(file,line);
            user.setPassword(line);

            users.push_back(user);
        }
        file.close();
    }
    return users;
}
