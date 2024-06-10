#include "FileWithContacts.h"

using namespace std;

vector<Contact> FileWithContacts::loadContactsFromFile(int idLoggedUser)
{
    fstream file;
    file.open(fileWithContacts,ios::in);
    string line;
    Contact contact;
    vector<Contact> contacts;
    int idContact;
    int idUserWhoCreatedContact;

    if (file.good())
    {
        while (getline(file,line,'|'))
        {
            idContact = atoi(line.c_str());
            contact.setId(idContact);

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
    return contacts;
}
