#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1;
    cout<<"Enter a string: ";
    getline(cin,str1);
    cout<<"The original string is: "<<str1<<endl;
    cout<<"The new string is: ";
    for(int i=0; str1[i]!='\0'; i++){ //ASCII value A-Z is 65-90: Therefore subtract it from 32 as ASCII value a-z is 97-122
        cout<<char(str1[i]-32); //Converts all the lowercase to uppercase 
    }
return 0;
}

/*OUTPUT
Enter a string: rajat
The original string is: rajat
The new string is: RAJAT
*/
