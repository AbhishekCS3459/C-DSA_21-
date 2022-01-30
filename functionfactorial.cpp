// WAP A PROGRAM TO FIND THE FACTORIAL OF A NUMBER USING FUNCTION
int factorial(int s){
    if (s==1 || s==0)
    {
        return 1;
    }
    else
    return (s * factorial(s-1));
}
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int s;
    cout<<"Enter the value of s"<<endl;
    cin>>s;
    cout<<factorial(s);
    return 0;
}
