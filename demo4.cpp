#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main()
{
    int n;
    cin >> n; // 输入数组大小

    vector<int> a(n);
    int sumA = 0;

    // 输入数组 a
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sumA += a[i];
    }

    // 计算组合数
    vector<long long> dp(sumA + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = sumA; j >= a[i]; j--)
        {
            dp[j] = (dp[j] + dp[j - a[i]]) % MOD;
        }
    }

    long long answer = dp[sumA];
    cout << answer << endl;

    return 0;
}
