//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void intersection_sort(vector<ll> &a,ll n){
    for(ll i = 1; i < n; i++){
        ll key = a[i];
        ll j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key;
        // Chọn key = a[i] ở vị trí hiện tại
        // Trong khi vẫn còn chưa đến cuối dãy nếu phần tử trước nó lớn hơn thì
        // tiến hành dịch dãy sang dến khi tìm được điểm chọn cho key
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> vt = {2,5,1,24,12,99,0};
    intersection_sort(vt,vt.size());
    for(auto x : vt){
        cout << x << " ";
    }
    // Thuật toán có độ phức tạp là O(n ^ 2)
    // Cố định a[0] với mỗi index đằng sau tìm vị trí thích hợp để chèn phần tử
}