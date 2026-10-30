#include <iostream>
#include <string>

using namespace std;

int sum,num,i;
double avg;

int main(){

for (i = 5; i >= 1; i--){
        cout<< "Enter Number "<<i<<": ";
        cin>> num;
        sum=num+i;
        avg=num/5;
   }

cout << "Sum is = " << sum<<endl;
cout << "Avarage is = " << avg;

return 0;

}
