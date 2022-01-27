#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, y = 0, r;

    cout << "Enter the value of n\n";
    cin >> n;
   int  ncopy=n;
    while (n != 0)
    {
        r = n % 10;
        y = y + (r * r * r);
        n = n / 10;
    }
if (y==ncopy)
{
    cout<<"Its a armstrong";
}
else
{
    cout<<"Its not a armstrong";
}


    return 0;
}
