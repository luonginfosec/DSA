// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Quick Sort dựa theo mô hình chia để trị
// Thuật toán được thực hiện xung quanh 1 chốt gọi là key
// Có nhiều phiên bản chọn chốt đầu,cuối,giữa,random
// Mấu chốt là xây dựng phân đoạn, định vị chính xác vị trí của chốt
// Chia dãy con ban đầu thành 2 dãy con dãy con ở phía trước nhỏ hơn hoặc
// bằng chốt dãy sau lớn hơn chốt
// Trường hợp xấu nhất là O(n), tốt nhất là O(nlog(n))
ll n;
ll partition(vector<ll> &a, ll l, ll h){
    ll x = a[h];
    ll i = l - 1;
    for(ll j = 1; j <= h - 1; j++){
        if(a[j] <= x){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i + 1;
}
void quick_sort(vector<ll> &a, ll l, ll h){
    if(l < h){
        ll p = partition(a,l,h);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,h);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> vt = {2, 5, 1, 24, 12, 99, 0};
    n = vt.size();
    quick_sort(vt, 0, n - 1);
    for(auto x : vt){
        cout << x << " ";
    }
}