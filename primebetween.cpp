// Print all the prime numbers between two given numbers
#include <iostream>
using namespace std;
bool isprime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i;
        }
    }

    return 0;
}
