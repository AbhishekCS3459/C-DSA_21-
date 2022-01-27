#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    bool flag = 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            cout << "Its not a prime number";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Its a prime number";
    }

    return 0;
}