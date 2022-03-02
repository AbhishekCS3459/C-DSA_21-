// Google kikstart question
// LONGEST ARITHEMATIC SUBARRAY
// An arithematic array is an array that contains atleast two integers and the diffrence between two consecutive array are equal
// Ex- [9,10];[13,14,15];[10,50,90] are arithematic subarray
//  {QUESTION}-To determine the maximum length of the longest contigious arithematic subarray
// {APPROACH}- "pd" stores previous common diffrence of first two,
// curr- stores current length of subarray
// ans-stores max arithematic subarray length
// ex-10,7,4,6,8,10,11-maximum length of the array which has same pd is 4,6,8,10 ans is 4
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of  n" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the value of the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pd = arr[1] - arr[0];
    int curr = 2;
    int ans = 2;
    for (int i = 0; i < n; i++)
    {
        if (pd == arr[i] - arr[i - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            curr = 2;
        }
        ans = max(ans, curr);
    }
    cout << ans << endl;
    return 0;
}