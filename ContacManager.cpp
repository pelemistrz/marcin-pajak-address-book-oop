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

void ContactManager::newContact(){
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
    newContact.setIdUserWhoCreatedContact(ID_LOGGED_USER);
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

 void ContactManager::searchByName(){
    string name;
    bool isFound = false;
    cout <<"Please enter name: "<<endl;
    cin.sync();
    cin >> name;
    cout<<endl;

    for(int i=0; i<contacts.size(); i++)
    {
        if (name == contacts[i].getName())
        {
            showContact(i);
            isFound = true;
        }
    }
    if(!isFound)
    {
        cout << "\n"
             << "There is no contact with this name"
             << "\n"
             << "\n";
    }
 }
 void ContactManager::searchBySurname(){
    string surname;
    bool isFound = false;
    cout <<"Please enter surname: "<<endl;
    cin.sync();
    cin >> surname;
    cout<<endl;

    for(int i=0; i<contacts.size(); i++)
    {
        if (surname == contacts[i].getSurname())
        {
            showContact(i);
            isFound = true;
        }
    }
    if(!isFound)
    {
        cout << "\n"
             << "There is no contact with this surname"
             << "\n"
             << "\n";
    }
 }

 void ContactManager::deleteContact(){
    int idContactToDelete;
    cout << "Please provide contact id to remove." << endl;
    cin >> idContactToDelete;
    int i = 0;
    bool isFound = false;

    while (i < contacts.size())
    {
        if (idContactToDelete == contacts[i].getId())
        {
            isFound = true;
            break;
        }
        i++;
    }
    if (!isFound)
    {
        cout << "There is no contact with this id." << endl;

    }
    else
    {
        cout << "Are you sure you want remove this contact? Enter \'y\' for yes on \'n\' for no" << endl;
        char yesOrNo;
        cin.sync();
        cin >> yesOrNo;

        if (yesOrNo == 'y')
        {
            vector<Contact>::iterator itr;
            itr = contacts.begin();
            fileWithContacts.deleteContactFromFile(contacts[i].getId());
            contacts.erase(itr + i);
            cout << "Contact has been deleted." << endl;
        }
    }
 }

void ContactManager::editContact(){
    int contactIdForEdit;
    Contact contact;
    cout << "Please provide contact id for editing: " << endl;
    cin >> contactIdForEdit;
    int i = 0;
    bool isFound = false;

    while (i < contacts.size())
    {
        if (contactIdForEdit == contacts[i].getId())
        {
            isFound = true;
            break;
        }
        i++;
    }
    if (!isFound)
    {
        cout << "There is no id" << endl;
        return;
    }
    else
    {
        cout << "Which field do you want edit  " << endl;
        char choice;

        cout << "1. Change name. " << endl;
        cout << "2. Change surname. " << endl;
        cout << "3. Change email. " << endl;
        cout << "4. Change address. " << endl;
        cout << "5. Change phone number." << endl;
        cout << "6. Main menu." << endl;
        cin >> choice;
        cin.sync();

        string line;
        switch (choice)
        {
        case '1':
            cout << "Please provide name." << endl;
            getline(cin, line);
            contacts[i].setName(line);
            break;
        case '2':
            cout << "Please provide surname." << endl;
            getline(cin, line);
            contacts[i].setSurname(line);
            break;
        case '3':
            cout << "Please provide email." << endl;
            getline(cin, line);
            contacts[i].setEmail(line);
            break;
        case '4':
            cout << "Please provide address." << endl;
            getline(cin, line);
            contacts[i].setAddress(line);
            break;
        case '5':
            cout << "Please provide phone." << endl;
            getline(cin, line);
            contacts[i].setPhone(line);
            break;
        case '6':
            return;
            break;
        default:
            break;
        }
        fileWithContacts.editContactInFile(contactIdForEdit, contacts[i]);
   }
}
