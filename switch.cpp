/* switch statement are the substitute for long if else statement*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"HELLO";
        break;
    case 2:
    cout<<"heilo";
    break;
    case 3:
    cout<<"Nikal laure";
    break;
    default:
    cout<<"It is not the case";
        break;
    }
    return 0;
}
