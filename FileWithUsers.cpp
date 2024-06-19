#include "FileWithUsers.h"

void FileWithUsers::addUserToTheFile(User user){
    fstream file;
    file.open(NAME_OF_FILE_WITH_USERS, ios::out | ios::app);
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
    fstream file;

    file.open(NAME_OF_FILE_WITH_USERS, ios::in);

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

void FileWithUsers::saveAllUsersToTheFile(vector<User> &users){
    fstream file;

    file.open(NAME_OF_FILE_WITH_USERS, ios::out | ios::trunc);
    int usersSize = users.size();

    if (file.good())
    {
        for(int i=0; i < usersSize; i++){
            file << users[i].getId() << "|";
            file << users[i].getLogin() << "|";
            file << users[i].getPassword() << endl;
        }

        file.close();
        cout << endl;
    }

}
