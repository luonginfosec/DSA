#include <iostream>
#include <vector>

using namespace std;

const int MAX_VALUE = 9999;
vector<int> count(MAX_VALUE + 1, 0);

void countingSort(const vector<int>& arr) {
    fill(count.begin(), count.end(), 0);

    for (int num : arr) {
        count[num]++;
    }

    for (int i = 0; i <= MAX_VALUE; i++) {
        while (count[i]--) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        countingSort(a);
    }

    return 0;
}