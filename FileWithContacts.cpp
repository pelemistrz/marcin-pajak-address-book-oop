#include "FileWithContacts.h"
#include "Helper.h"

using namespace std;

vector<Contact> FileWithContacts::loadContactsFromFile(int idLoggedUser){

    fstream file;
    file.open(getNameOfFile(),ios::in);
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
    file.open(getNameOfFile(),ios::out | ios::app);
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
   void FileWithContacts::deleteContactFromFile(int idContactToDelete){
            fstream fileOryginal;
            fstream fileTemporary;
            int idUserWhoCreatedContact;

            fileOryginal.open(getNameOfFile(), ios::in | ios::out);
            fileTemporary.open("ContactTemporary.txt", ios::out);
            fileTemporary.clear();

            string line;
            Contact contact;

            while (getline(fileOryginal,line,'|'))
            {
                contact.setId(atoi(line.c_str()));

                getline(fileOryginal,line,'|');
                idUserWhoCreatedContact = atoi(line.c_str());
                contact.setIdUserWhoCreatedContact(idUserWhoCreatedContact);

                getline(fileOryginal,line,'|');
                contact.setName(line);

                getline(fileOryginal,line,'|');
                contact.setSurname(line);

                getline(fileOryginal,line,'|');
                contact.setPhone(line);

                getline(fileOryginal,line,'|');
                contact.setEmail(line);

                getline(fileOryginal,line);
                contact.setAddress(line);


               if(contact.getId() != idContactToDelete){

                 fileTemporary<<contact.getId()<<"|";
                 fileTemporary<<contact.getIdUserWhoCreatedContact()<<"|";
                 fileTemporary<<contact.getName()<<"|";
                 fileTemporary<<contact.getSurname()<<"|";
                 fileTemporary<<contact.getPhone()<<"|";
                 fileTemporary<<contact.getEmail()<<"|";
                 fileTemporary<<contact.getAddress()<<endl;
               }
            }
            fileOryginal.close();
            fileTemporary.close();

            remove(getNameOfFile().c_str());
            rename("ContactTemporary.txt",getNameOfFile().c_str());
   }

void FileWithContacts::editContactInFile(int idContactToEdit, Contact contactAfterEdit){
    fstream fileOryginal;
    fstream fileTemporary;
    Contact contact;
    string line;

    fileOryginal.open(getNameOfFile(), ios::in | ios::out);
    fileTemporary.open("ContactsTemporary.txt", ios::out);
    fileTemporary.clear();

    while (getline(fileOryginal,line,'|'))
    {
            contact.setId(atoi(line.c_str()));

            getline(fileOryginal,line,'|');

            contact.setIdUserWhoCreatedContact(atoi(line.c_str()));

            getline(fileOryginal,line,'|');
            contact.setName(line);

            getline(fileOryginal,line,'|');
            contact.setSurname(line);

            getline(fileOryginal,line,'|');
            contact.setPhone(line);

            getline(fileOryginal,line,'|');
            contact.setEmail(line);

            getline(fileOryginal,line);
            contact.setAddress(line);


       if(contact.getId() == idContactToEdit ){
             fileTemporary<<contactAfterEdit.getId()<<"|";
             fileTemporary<<contactAfterEdit.getIdUserWhoCreatedContact()<<"|";
             fileTemporary<<contactAfterEdit.getName()<<"|";
             fileTemporary<<contactAfterEdit.getSurname()<<"|";
             fileTemporary<<contactAfterEdit.getPhone()<<"|";
             fileTemporary<<contactAfterEdit.getEmail()<<"|";
             fileTemporary<<contactAfterEdit.getAddress()<<endl;


       } else {
             fileTemporary<<contact.getId()<<"|";
             fileTemporary<<contact.getIdUserWhoCreatedContact()<<"|";
             fileTemporary<<contact.getName()<<"|";
             fileTemporary<<contact.getSurname()<<"|";
             fileTemporary<<contact.getPhone()<<"|";
             fileTemporary<<contact.getEmail()<<"|";
             fileTemporary<<contact.getAddress()<<endl;
       }
    }
    fileOryginal.close();
    fileTemporary.close();

    remove(getNameOfFile().c_str());
    rename("ContactsTemporary.txt",getNameOfFile().c_str());
}

//   void FileWithContacts::saveContactToFile(Contact contact, fstream file){
//                 file<<contact.getId()<<"|";
//                 file<<contact.getIdUserWhoCreatedContact()<<"|";
//                 file<<contact.getName()<<"|";
//                 file<<contact.getSurname()<<"|";
//                 file<<contact.getPhone()<<"|";
//                 file<<contact.getEmail()<<"|";
//                 file<<contact.getAddress()<<endl;
//   }
