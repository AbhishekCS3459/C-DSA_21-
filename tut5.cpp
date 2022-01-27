#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the value of num1: \n";          /*<< is called insertion operator */
   cin>> num1;       /* >> is called Extration operator (as it is used to extract the input to console).In
   this line cin>> num1 means to take that value which user is going to give*/
   cout<<"Enter the vaue of num2: \n";
   cin>> num2;
   cout<<"The Sum is "<< num1 + num2;
    return 0;
}
