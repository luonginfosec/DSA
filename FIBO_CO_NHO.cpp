//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f[101];
ll cnt = 0;
ll fibo(ll n){
    cnt++;
    if(f[n] != 0) return f[n];
    if(n < 2) return n;
    ll tmp = fibo(n-1) + fibo(n-2);
    f[n] = tmp;
    return f[n];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    f[0] = 0;
    f[1] = 1;
    fibo(5);
    cout << cnt << endl;
}