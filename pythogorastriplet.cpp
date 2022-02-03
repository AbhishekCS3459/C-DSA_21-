// Pythogoras Triplet
// a*a + b*b = c*c
// then it is pythogoras triplet
#include<iostream>
using namespace std;
bool pythogoras(int x,int y, int z){
    int a= max(x,max(y,z));
    int b,c;
    if (a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=z;
        c=x;
    }
    else
    {
        c=x;
        b=z;
    }
    if (a*a==b*b + c*c)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int t,d,v;
    cin>>t>>d>>v;
    if (pythogoras(t,d,v))
    {
        cout<<"Yes it is a pythogoras triplet";

    }
    else
    {
        cout<<"It is not a pythogoras triplet";
    }
    
    
    return 0;
}

