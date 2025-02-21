//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    ll l = 0, ds[256] = {0}, max_len = 1;
    for(ll r = 0; r < s.size(); r++){
        ds[s[r]]++;
        if(ds[s[r]] == 2){
            while(ds[s[r]] == 2){
                ds[s[l]]--;
                l++;
            }
        }
        max_len = max(max_len,r-l+1);
    }
    cout << max_len << endl;
}