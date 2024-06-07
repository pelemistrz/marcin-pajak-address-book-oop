#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

using namespace std;

class Contact{
    int id;
    string name;
    string surname;
    string email;
    string address;
    string phone;


public:
    void setId(int newId);
    void setName(string newName);
    void setSurname(string newSurname);
    void setEmail(string newEmail);
    void setAddress(string newAddress);
    void setPhone(string newPhoe);

    int getId();
    string getName();
    string getSurname();
    string getEmail();
    string getAddress();
    string getPhone();
};

#endif // USER_H




