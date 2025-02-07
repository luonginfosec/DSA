//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll a[1001] = {0} , used[1001] = {0};
ll n,final;
void Try(ll k){
    if(k == n+1){
        for(ll i = 1; i <= n; i++){
            cout << s[a[i] - 1];
        }
        cout << " ";
        return;
    }
    for(ll  i = 1; i <= n; i++){
        if(!used[i]){
            used[i] = 1;
            a[k] = i;
            Try(k+1);
            used[i] = 0;
        }
        else{
            continue;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)     
    {
        cin >> s;
        n = s.size();
        Try(1);
        cout << endl;
    }
} 