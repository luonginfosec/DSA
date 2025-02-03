//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        string result = "";
        cin >> s;
        result += s[0];
        for(ll i = 1; i < s.size(); i++){
            ll tmp = (s[i-1] - '0') ^ (s[i] - '0');
            result.push_back(tmp + '0');
        }
        cout << result << endl;
    }
}