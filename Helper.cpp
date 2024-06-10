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
