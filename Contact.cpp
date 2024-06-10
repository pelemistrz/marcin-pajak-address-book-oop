#include "Contact.h"

void Contact::setId(int newId){
    id = newId;
}
void Contact::setName(string newName){
    name = newName;
}
void Contact::setSurname(string newSurname){
    surname = newSurname;
}
void Contact::setEmail(string newEmail){
    email = newEmail;
}
void Contact::setAddress(string newAddress){
    address = newAddress;
}
void Contact::setPhone(string newPhone){
    phone = newPhone;
}
 void Contact::setIdUserWhoCreatedContact(int newIdUserWhoCreatedContact){
    idUserWhoCreatedContact = newIdUserWhoCreatedContact;
 }

int Contact::getId(){
    return id;
}
 int Contact::getIdUserWhoCreatedContact(){
    return idUserWhoCreatedContact;
 }

string Contact::getName(){
    return name;
}
string Contact::getSurname(){
    return surname;
}
string Contact::getEmail(){
    return email;
}
string Contact::getAddress(){
    return address;
}
string Contact::getPhone(){
    return phone;
}
