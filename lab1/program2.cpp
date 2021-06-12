#include <iostream>

using namespace std; 
int main()
{
    char string[100] = "idea without execution is worthless";
    char *ptr = (char*)string;
    int position = 0;
    while (*(ptr) != '\0')
    {
        if (*ptr == 'c')
        {
            break;
        }
        ptr++;
        position++;
    }
    if(*ptr=='\0'){
        cout<<"character \'c\' not found in given string."<<endl;
    }else{
    cout << "Position of character \'c\' is: " << position << endl;
    }
    return 0;
}