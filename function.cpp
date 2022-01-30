/* Functions is a peice of code that performs a specific task */
// How to write a function
/* return type functionname(parameter1, parameter2,....){
    function body
}
Example write a function and use to find multiplacation of 3 numbers */
int multiply(int a,int b,int c){
    int multiplication = a*b*c;
    return multiplication;
}
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<multiply(a,b,c)<<endl;
    return 0;
}
