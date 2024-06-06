#include "UserManager.h"

void UserManager::userRegistration(){
    string login, password;
    cout << endl;
    cout << "Please provide login." << endl;
    cin >> login;

    int i = 0;
    int sizeUser = users.size();
    while (i < sizeUser)
    {
        if (users[i].getLogin() == login)
        {
            cout << "This login exists. Please provide different." << endl;
            cin >> login;
            i = 0;
        }
        else
        {
            i++;
        }
    }

    cout << "Please provide your password." << endl;
    cin >> password;

    User newUser;
    int userId = getIdNewUser();
    newUser.setId(userId);
    newUser.setLogin(login);
    newUser.setPassword(password);

    users.push_back(newUser);
    cout << "Your account has been created." << endl;

    fileWithUsers.addUserToTheFile(newUser);
}

int UserManager::getIdNewUser(){
        if (users.empty() == true)
        return 1;
    else
        return users.back().getId() + 1;
}