// Pythogoras Triplet
// a*a + b*b = c*c
// then it is pythogoras triplet
#include<iostream>
using namespace std;
bool yespythogoras(int x, int y, int z){
    if (z*z==x*x+y*y)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if (yespythogoras(a,b,c))
    {
        cout<<"Yes it is a pythogoras triplet";
    }
    else
    {
        cout<<"Its not a pythogoras triplet";
    }
    
    return 0;
}
