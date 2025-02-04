//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,a[10001],b[10001],final;
vector<vector<ll>> vt;
void sinh(){
    ll i = k;
    while(i >= 1 && b[i] == n - k + i){
        i--;
    }
    if(i == 0) final = 1;
    else{
        vector<ll> tmp;
        b[i]++;
        for(ll j = i + 1; j <= k; j++){
            b[j] = b[j-1] + 1;
        }
        for(ll j = 1; j <= k; j++){
            tmp.push_back(b[j]);
        }
        vt.push_back(tmp);
    }
}
void ktao(){
    vt.clear();
    final = 0;
    cin >> n >> k;
    vector<ll> tmp;
    for(ll i = 1; i <= k; i++){
        cin >> a[i];
        b[i] = i;
        tmp.push_back(b[i]);
    }   
    vt.push_back(tmp);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ktao();
        while(!final) sinh(); 
        ll oke = 0;
        for (ll i = 0; i < vt.size(); i++)
        {
            ll tmp = 1;
            for (ll j = 1; j <= k; j++)
            {
                if (a[j] != vt[i][j - 1])
                {
                    tmp = 0;
                    break;
                }
            }
            if (tmp)
            {
                cout << i + 1 << endl;
                oke++;
            }
            if (oke)
                break;
        }
    }
}