#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <sstream>

#include "AddressBook.h"

using namespace std;

int main()
{

    AddressBook addressBook("Users.txt", "Contacts.txt");

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
            cout<<"Your choice: ";
            cin >> choice;

            switch(choice) {
            case '1':
                addressBook.userRegistration();
                break;
            case '2':
                addressBook.userLogIn();
                break;
            case '9':
                exit(0);
                break;
            default:
                break;
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
            cout<<"7. Change password."<<endl;
            cout<<"8. Log out."<<endl;
            cout<<"9. Exit."<<endl;

            cin>>choice;

            switch(choice){
            case '1':
              addressBook.newContact();
            break;
            case '2':
               addressBook.searchByName();
               break;
            case '3':
               addressBook.searchBySurname();
                break;
            case '4':
                cout<<endl<<endl<<choice<<endl;
                addressBook.showAllContacts();
                break;
            case '5':
                addressBook.deleteContact();
                break;
            case '6':
               addressBook.editContact();
                break;
            case '7':
                addressBook.userChangePassword();
                break;
            case '8':
                addressBook.userLogOut();
                break;
            case '9':
                exit(0);
                break;
            default:
                break;
            }
        }
    }
    return 0;
}
