// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
set<string> result;
void sinh(ll pos, string cur, ll n, set<string> &result)
{
    if (pos == n - 1)
    {
        cur += 'A';
        result.insert(cur);
        return;
    }
    char prev = cur.back();
    if(prev == 'H'){
        sinh(pos + 1, cur + 'A', n, result);
    }
    else{
        sinh(pos + 1, cur + 'A', n, result);
        sinh(pos + 1, cur + 'H', n, result);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        result.clear();
        ll n;
        cin >> n;
        if (n < 2)
            continue;
        else
        {
            string init = "H";
            sinh(1,init,n,result);
            for(auto x : result){
                cout << x << endl;
            }
        }
    }
}