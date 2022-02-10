// Decimal to octal

#include <bits\stdc++.h>
using namespace std;
int decimaltooctal(int num)
{
    int ans = 0;
    int x = 1;
    while (x <= num)
    {
        x = x * 8;
    }
    x = x / 8;
    while (x > 0)
    {
        int lastdigit = num / x;
        num = num - lastdigit * x;
        x = x / 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    cout << decimaltooctal(num);
    return 0;
}
