#include <iostream>
#include <string>
 using namespace std;
char gCode ;
int main(){
cout<< "Enter Gender Code (F/m): ";
cin>> gCode;


if (gCode == 'f'||gCode == 'F'){
    cout << "You are a Woman" << endl;
 }else if (gCode == 'm'||gCode == 'M'){
 cout << "You are a Good Man" << endl;
 }else{
 cout << "Invalid!" << endl;
 return 0;
 }
}

