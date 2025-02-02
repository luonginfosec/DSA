//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin >> n >> m;
    ll a[n], b[m];
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    ll i = 0, j = 0 , result = 0;
    while(i < n){
        if(a[i] > b[j]){
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else if(a[i] == b[j]){
            ll tmp = 0, tmp1 = 0;
            ll res = a[i];
            while(a[i] == res && i < n){
                tmp++;
                i++;
            }
            while (b[j] == res && j < m)
            {
                tmp1++;
                j++;
            }
            result += tmp*tmp1;
        }   
    }
    cout << result << endl;
}