#include <bits\stdc++.h>
using namespace std;
int decimaltobinnary(int num)
{
    int ans = 0;
    int x = 1;
    while (x <= num)
    {
        x = x * 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastdigit = num / x;
        num = num - lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }

    return ans;
}
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    cout << decimaltobinnary(num);
    return 0;
}
