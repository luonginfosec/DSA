//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> sinh(ll n) {
    if (n == 0) {
        return {"0"};
    }
    else if (n == 1) {
        return {"0", "1"};
    }
    else {
        vector<string> tmp = sinh(n - 1);
        vector<string> result;
        for (const string& s : tmp) {
            result.push_back("0" + s);
        }

        for (ll i = tmp.size() - 1; i >= 0; i--) {
            result.push_back("1" + tmp[i]);
        }

        return result;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<string> result = sinh(n);
        for (const auto& x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
