#include <iostream>

#include <string>
#include <windows.h>
#include <vector>
#include <sstream>

#include "AddressBook.h"

using namespace std;

int main(){

    AddressBook addressBook("Users.txt");

    char choice;
    while(1)
    {
        if(addressBook.getIdLoggedUser()==0)
        {
            cout << endl;
            cout<<"     >>> MENU GLOWNE <<<"<<endl;
            cout<<"-------------------------------"<<endl;
            cout << "1. Sign in" << endl;
            cout << "2. Log in" << endl;
            cout << "9. Exit" << endl;
            cout<<"-------------------------------"<<endl;
            cout<<"Twoj wybor"<<endl;
            cin >> choice;
            if (choice == '1')
            {
                addressBook.userRegistration();
            }
            if (choice == '2')
            {
                addressBook.userLogIn();
            }
            if (choice == '9')
            {
                exit(0);
            }
        }

        if(addressBook.getIdLoggedUser() !=0)
        {


            cout<<endl;
            cout<<"Welcome in Address Book. Please choose one option: " <<endl<<endl;
            cout<<"1. Add new contact."<<endl;
            cout<<"2. Search by name."<<endl;
            cout<<"3. Search by surname."<<endl;
            cout<<"4. Show all contacts."<<endl;
            cout<<"5. Delete contact."<<endl;
            cout<<"6. Edit contact."<<endl;
            cout<<"7. Log out."<<endl;
            cout<<"9. Exit."<<endl;
            cin>>choice;

            if (choice == '7'){
                addressBook.userLogOut();
            } else if (choice == '9')
            {
                exit(0);
            }
        }
    }
    return 0;
}
