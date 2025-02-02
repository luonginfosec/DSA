//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    /*
    Tìm độ dài mảng con ngắn nhất có tổng bằng k
    Ý tưởng sử dụng map
    Trường hợp đặc biệt
    n = 4 k = 4
    1 1 1 1 
    Tạo mảng có n + 1 vị trí để khi sum = 4 thì có thằng bằng 0 ở vị trí 0.
    Khai báo thằng 0 ở trong map name_map[0] = 0
    Tiến hành mảng cộng dồn, ở bước này chúng ta thực hiện cộng và tìm vị trí sum - k
    Ở mỗi bước lại gắn vị trí sum gần nhất xuất hiện
    */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    ll a[n+1] = {0};
    map<ll,ll> mp;
    mp[0] = 0;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll sum = 0;
    ll res = 1e9;
    for(ll i = 1;i <= n; i++){
        sum += a[i];
        if(mp.count(sum - k)){
            res = min(res, i - mp[sum-k]);
        }
        mp[sum] = i;
    }
    if(res == 1e9) cout << -1 << endl;
    else cout << res << endl;
}