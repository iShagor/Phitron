#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    int chotoFactroial = fact(n - 1);
    return chotoFactroial * n;
}
int main()
{
    int n;
    cin >> n;
    int ans = 1;
    // O(N)
    for (int i = 1; i <= n; i++)
    {
        ans *= 1;
    }
    cout << ans << endl;
    return 0;
}