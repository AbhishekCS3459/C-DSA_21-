#include <iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;
}
int main(){
    // If we print 9 in local variable then it will be the output otherwise global variable will be printed
    int glo = 9;
    glo =78;
    int a= 14, b = 15;
    float pi = 3.15;
    char c ='u';
    bool is_true = true;
    sum();
    cout<<glo<< is_true;         
    /*
    cout<<"This is tutorial 4. \nHere the value of a is "<<a<<".\n The value of b is " << b;
    cout<<"\n The Value of pi is: "<<pi;
    cout<<"\n The Value of c is: "<<c; */
    
    return 0;
}