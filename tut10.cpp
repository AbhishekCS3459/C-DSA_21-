#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i =1;
    //i=1   // i=2
   /* i =i++ + ++i;
    cout<<i<<endl;*/

    int j=2,k;
       //1 //2  //1   //2    //3   //4
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<" "<<endl;

    return 0;
}
