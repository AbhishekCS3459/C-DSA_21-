// Formulae of nCr = n!/((n-r)!*r!)
#include<iostream>
using namespace std;
int factorial(int num){
    if (num==0||num==1)
    {
        return 1;
    }
    else
    {
        return (num *(factorial(num-1)));
    }
    
}
int main(int argc, char const *argv[])
{
    int n,r;
    cin>>n>>r;
    int nCr= (factorial(n))/((factorial(n-r))* factorial(r));
    cout<<nCr;
    return 0;
}
