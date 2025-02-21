// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    map<ll, vector<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    int oke = 0;
    for (auto &x : mp)
    {
        if (x.second.size() >= 2)
        {
            ll l = 0, r = x.second.size() - 1;
            while (l < r)
            {
                if (x.second[r] - x.second[l] <= k)
                {
                    oke = 1;
                    break;
                }
                else
                {
                    r--;
                }
            }
        }
    }
    if (oke)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
void solve1()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n); 
    for (auto &x : a)
        cin >> x;

    map<ll, int> d; 
    int oke = 0;

    for (ll i = 0; i <= k; i++)
    {
        d[a[i]]++;
        if (d[a[i]] == 2)
        {
            oke = 1;
            break;
        }
    }
    for (ll i = k + 1; i < n; i++)
    {
        d[a[i]]++;
        d[a[i - k - 1]]--;
        if (d[a[i]] == 2)
        {
            oke = 1;
            break;
        }
    }
    cout << (oke ? "YES" : "NO") << endl;
}
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second < b.second;
}
void solve2(){
    ll n,k;
    cin >> n >> k;
    pair<ll,ll> a[n];
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a,a+n,cmp);
    for(ll i = 1; i < n; i++){
        if(a[i].first == a[i-1].first){
            if(a[i].second - a[i-1].second <= k){
                cout << "YES" << endl;
                return ;
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // solve();
    // solve1();
    solve2();
}