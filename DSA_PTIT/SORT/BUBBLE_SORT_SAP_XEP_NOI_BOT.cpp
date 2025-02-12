//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void bubble_sort(vector<ll> &a,ll n){
    for(ll i = 0; i < n - 1; i++){
        for(ll j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> vt = {2,5,1,24,12,99,0};
    bubble_sort(vt,vt.size());
    for(auto x : vt){
        cout << x << " ";
    }
    // Thuật toán có độ phức tạp là O(n ^ 2)
}