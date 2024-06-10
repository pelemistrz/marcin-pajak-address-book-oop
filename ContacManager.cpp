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

void ContactManager::newContact(int idLoggedUser){
    int newContactId =  fileWithContacts.getIdLastContact() + 1;


    string name, surname, email, address, phone;

    cout << "Please provide name " << endl;
    cin >> name;
    cout << "Please provide surname: " << endl;
    cin >> surname;
    cout << "Please provide email: " << endl;
    cin >> email;
    cout << "Please provide address: " << endl;
    cin.sync();
    getline(cin, address);
    cout << "Please provide phone number: " << endl;
    cin.sync();
    getline(cin, phone);

    Contact newContact;

    newContact.setId(newContactId);
    newContact.setIdUserWhoCreatedContact(idLoggedUser);
    newContact.setName(name);
    newContact.setSurname(surname);
    newContact.setEmail(email);
    newContact.setAddress(address);
    newContact.setPhone(phone);

    contacts.push_back(newContact);

    fileWithContacts.addContactToTheFile(newContact);

        cout<<"Contact has been added"<<endl;
        system("pause");
        system("cls");

}


