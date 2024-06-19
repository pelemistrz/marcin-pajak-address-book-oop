#include "FileWithContacts.h"
#include "Helper.h"

using namespace std;

vector<Contact> FileWithContacts::loadContactsFromFile(int idLoggedUser){

    fstream file;
    file.open(NAME_OF_FILE_WITH_CONTACTS,ios::in);
    string line;
    Contact contact;
    vector<Contact> contacts;
    int idContact;
    int idUserWhoCreatedContact;
    int number = 0;

    if (file.good())
    {
        while (getline(file,line,'|'))
        {
            idContact = atoi(line.c_str());
            contact.setId(idContact);
            number = idContact;

            getline(file,line,'|');
            idUserWhoCreatedContact = atoi(line.c_str());
            contact.setIdUserWhoCreatedContact(idUserWhoCreatedContact);

            getline(file,line,'|');
            contact.setName(line);

            getline(file,line,'|');
            contact.setSurname(line);

            getline(file,line,'|');
            contact.setPhone(line);

            getline(file,line,'|');
            contact.setEmail(line);

            getline(file,line);
            contact.setAddress(line);

            if(contact.getIdUserWhoCreatedContact() == idLoggedUser){
                contacts.push_back(contact);
            }
        }

    }
    idLastContact = number;
    return contacts;
}

int FileWithContacts::getIdLastContact(){

    return idLastContact;
}

void FileWithContacts::addContactToTheFile(Contact contact){
    fstream file;
    file.open(NAME_OF_FILE_WITH_CONTACTS,ios::out | ios::app);
        if (file.good())
        {
            file<<contact.getId()<<"|";
            file<<contact.getIdUserWhoCreatedContact()<<"|";
            file<<contact.getName()<<"|";
            file<<contact.getSurname()<<"|";
            file<<contact.getPhone()<<"|";
            file<<contact.getEmail()<<"|";
            file<<contact.getAddress()<<endl;

            file.close();
            cout<<endl;
        }
    this->idLastContact += 1;
}
