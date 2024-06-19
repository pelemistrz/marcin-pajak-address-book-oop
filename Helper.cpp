#include "Helper.h"


string Helper::getNumberFromString(string text, int position)
{
    string number = "";
    while(isdigit(text[position]) == true)
    {
        number += text[position];
        position ++;
    }
    return number;
}

//void Helper::showContact(Contact contact)
//{
//
//
//    cout << "ID: " << contact.getId() << endl;
//    cout << "Imie: " << contact.getName() << endl;
//    cout << "Nazwisko: " << contact.getSurname() << endl;
//    cout << "Telefon: " << contact.getPhone() << endl;
//    cout << "Email: " << contact.getEmail() << endl;
//    cout << "Adres: " << contact.getAddress() << endl;
//    cout << "\n";
//}
