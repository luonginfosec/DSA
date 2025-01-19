#include <iostream>
#include <vector>
using namespace std;

bool check(const vector<int> &A, const vector<int> &B)
{
    int n = A.size();
    int m = B.size();

    int j = 0;

    for (int i = 0; i < n; ++i)
    {

        if (j < m && A[i] == B[j])
        {
            ++j;
        }
    }

    return j == m;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M);

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < M; ++i)
    {
        cin >> B[i];
    }

    if (check(A, B))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}