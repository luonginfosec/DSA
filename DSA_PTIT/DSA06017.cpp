// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin >> n >> m;
        ll a[n], b[m];
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        sort(a,a+n);
        sort(b,b+m);
        ll i = 0, j = 0;
        while(i < n && j < m){
            if(a[i] > b[j]){
                cout << b[j] << " ";
                j++;
            }
            else if(a[i] < b[j]){
                cout << a[i] << " ";
                i++;
            }
            else{
                cout << a[i] << " ";
                i++;
            }
        }
        while(i < n){
            cout << a[i] << " ";
            i++;
        }
        while(j < m){
            cout << b[j] << " ";
            j++;
        }
        cout << endl;
    }
}