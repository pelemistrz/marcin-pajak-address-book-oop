#include "ContactManager.h"

void ContactManager::loadContactsFromFile(int idLoggedUser){
    contacts = fileWithContacts.loadContactsFromFile(idLoggedUser);
}


void ContactManager::showAllContacts()
{

    int numberOfContacts = contacts.size();
    if (numberOfContacts == 0)
    {
        cout << "There is no contacts" << endl;
    }
    cout << endl;
    for (int i = 0; i < numberOfContacts; i++)
    {
        showContact(i);
    }
}


void ContactManager::showContact(int whichContact)
{


    cout << "ID: " << contacts[whichContact].getId() << endl;
    cout << "Imie: " << contacts[whichContact].getName() << endl;
    cout << "Nazwisko: " << contacts[whichContact].getSurname() << endl;
    cout << "Telefon: " << contacts[whichContact].getPhone() << endl;
    cout << "Email: " << contacts[whichContact].getEmail() << endl;
    cout << "Adres: " << contacts[whichContact].getAddress() << endl;
    cout << "\n";
}
