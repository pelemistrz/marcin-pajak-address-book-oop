#include "FileWithUsers.h"

FileWithUsers::FileWithUsers(){

}

void FileWithUsers::addUserToTheFile(User user){
    string fileWithUsers = "Users.txt";
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

vector<User> FileWithUsers::loadUsersFromFile(){
    User user;
    vector<User> users;
    string fileWithUsers = "Users.txt";
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
