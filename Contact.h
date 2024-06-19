#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

using namespace std;

class Contact{
    int id;
    int idUserWhoCreatedContact;
    string name;
    string surname;
    string email;
    string address;
    string phone;


public:
    Contact(int id = 0,int idUserWhoCreatedContact = 0,string name = "",string surname = "",string email = "",string address = "",   string phone = ""){
        this->id = id;
        this->idUserWhoCreatedContact = idUserWhoCreatedContact;
        this->name = name;
        this->surname = surname;
        this->email = email;
        this->address = address;
        this->phone = phone;
    }

    void setId(int newId);
    void setIdUserWhoCreatedContact(int newIdUserWhoCreatedContact);
    void setName(string newName);
    void setSurname(string newSurname);
    void setEmail(string newEmail);
    void setAddress(string newAddress);
    void setPhone(string newPhoe);

    int getId();
    int getIdUserWhoCreatedContact();
    string getName();
    string getSurname();
    string getEmail();
    string getAddress();
    string getPhone();
};

#endif // USER_H




