//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void selection_sort(vector<ll> &vt,ll n){
    for(ll i = 0; i < n - 1; i++){
        ll min_idx = i;
        for(ll j = i + 1; j < n; j++){
            if(vt[j] < vt[min_idx]){
                min_idx = j;
            }
        }
        swap(vt[min_idx],vt[i]);
        // Khởi tạo min_idx bằng vị trí hiện tại
        // Duyệt từ vị trí kế tiếp đến cuối nếu có số nào bé hơn thì tiến hành cập nhật min_idx = vị trí đó
        // Sau khi duyệt hết n ta tiến hành đổi chỗ phần tử tại i và min_idx cho nhau 
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> vt = {2,5,1,24,12,99,0};
    selection_sort(vt,vt.size());
    for(auto x : vt){
        cout << x << " ";
    }
    // Thuật toán có độ phức tạp là O(n ^ 2)
}