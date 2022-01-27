/* making a simple calculator in c++*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float n1,n2;
    cout<<"Enter number n1"<<endl<<"Enter number n2"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"input an operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<< n1 / n2 << endl;
        break;
    
    default:
    cout<<"The will be no operation between n1 and n2";
        break;
    }
    return 0;
}
