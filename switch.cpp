#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int value;
    char vowelchek;
    cin>>value;
    switch (value)
    {
        case 1:
        cout<<"Mujuboss";
        break;
        case 2:
        cout<<"Hello";
        break;
    
    default:
    cout<<"NOTHING MATCHED";
        break;
    }
    cin>>vowelchek;
    switch (vowelchek)
    {
    case 'a':
        cout<<"vowel";
        break;
    case 'h':
    cout<<"it worked";
    break;
   default:
    cout<<"IT is done";
        break;
    }
return 0;
}