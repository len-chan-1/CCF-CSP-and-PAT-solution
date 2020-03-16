#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    gg y, d;
    cin >> y >> d;
    //存储每个月的天数
    array<gg, 13> month = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))  //闰年2月有29天
        month[2] = 29;
    gg i = 0;
    while (d > month[++i])
        d -= month[i];
    cout << i << '\n' << d;
    return 0;
}