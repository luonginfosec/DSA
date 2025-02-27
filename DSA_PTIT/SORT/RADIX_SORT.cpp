//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int getMax(vector<int> &arr){
    return *max_element(arr.begin(),arr.end());
}
void countingSort(vector<int> &arr, int exp){
    int n = arr.size();
    vector<int> output(n);
    vector<int> count(10,0);
    for(int i = 0; i < n; i++){
        int digit = (arr[i] / exp)  % 10;
        count[digit]++;
    }
    for(int i = 1; i < 10; i++){
        count[i] += count[i-1];
    }
    for(int i = n - 1; i >= 0; i--){
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    for(int i = 0; i < n; i++){
        arr[i] = output[i];
    }
}
void radixSort(vector<int> &arr) {
    int maxVal = getMax(arr);
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    radixSort(arr);
    for(auto x : arr){
        cout << x << " ";
    }
}