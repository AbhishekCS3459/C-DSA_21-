/*
there are two types of header files- 
1. system header files: It comes with the Compiler
2. User defined header files. It is written by the programmer
*/
#include<iostream>
#include"this.h"  /* Here this.h is a user defined header files which is to be made to make the program run atlest make 
empty file named this.h. */
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of operators in c++:"<<endl;
    cout<<"\nThe value of a + b is: "<<a+b;
    cout<<"\n The value of a - b is: "<<a-b;
    cout<<"\n The value of a * b is: "<<a*b;
    cout<<"\n The value of a / b is: "<<a/b;
    cout<<"\n The value of a++ is: "<<a++;  /* here a++ means first a will be printed then it will be incrimented*/
    cout<<"\n The value of a is:"<<a;         /* hence here a is incrimented by the above expression */
    cout<<"\n The value of a-- is: "<<a--;
    cout<<"\n The value of ++a is: "<<++a;
    cout<<"\n The value of --a is: "<<--a;
    cout<<endl;
    cout<<endl;
    /* Arithematic Operators - used to assign values to variables */
   /*  int a =3, b= 9 ;
    char d = 'd'; */
            // COMPARISION OPERATORS IN C++
          cout<<"Following are the  Comparision operators in C++"<<endl; 
           cout <<" The value of a == b is "<< (a==b)<< endl;
           cout <<" The value of a != b is "<< (a!=b)<< endl;
           cout <<" The value of a >= b is "<< (a>=b)<< endl;
           cout <<" The value of a <= b is "<< (a<=b)<< endl;
           cout <<" The value of a > b is "<< (a>b)<< endl;
           cout <<" The value of a < b is "<< (a<b)<< endl;
           cout <<" The value of a < b is "<< (a<b)<< endl;
           cout<<endl;
           // LOGICAL OPERATORS IN C++
               cout<<"Following are the Logical operators in C++"<<endl; 
           cout <<" The value of this Logical & Operator  ((a==b) && (a<b)) is :"<<((a==b) && (a<b))<< endl;
           cout <<" The value of this Logical or Operator  ((a==b) || (a<b)) is :"<<((a==b) || (a<b))<< endl;
           cout<<endl;




    
    
    return 0;
}
