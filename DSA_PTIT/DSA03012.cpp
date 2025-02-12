//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while (t--) {
        cin >> s;
        map<char,ll> mp;
        for(auto x : s){
            mp[x]++;
        }
        ll oke = 1;
        for(auto x : mp){
            if(2*x.second - 1 > s.size()){
                cout << "-1" << endl;
                oke = 0;
                break;
            }
        }
        if(oke) cout << "1" << endl;
    }
}