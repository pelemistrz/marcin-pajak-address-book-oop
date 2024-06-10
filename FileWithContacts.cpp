#include "FileWithContacts.h"
#include "Helper.h"

using namespace std;

vector<Contact> FileWithContacts::loadContactsFromFile(int idLoggedUser){

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

int FileWithContacts::getIdLastContact(){

    int idLastContact = 0;
    string number = "";
    string lastLine;
    string line;
    fstream file;
    file.open(fileWithContacts, ios::in);
    if (file.good() == true)
    {
        while (getline(file, line)){
            lastLine = line;
        }
         file.close();
    }
    else {
        cout << "Nie udalo sie otworzyc pliku i wczytac danych." << endl;
    }

    number = Helper::getNumberFromString(lastLine,0);

    if (lastLine != "")
    {

        idLastContact = atoi(number.c_str());
    }
    return idLastContact;
}

void FileWithContacts::addContactToTheFile(Contact contact){
    fstream file;
    file.open(fileWithContacts,ios::out | ios::app);
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
}
