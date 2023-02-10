
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_operations(vector<int>& A) {
    sort(A.begin(), A.end());
    int operations = 0;
    for (int i = 1; i < A.size(); i++) {
        int diff = A[i] - A[i-1] - 1;
        if (diff > 0) {
            operations += diff;
            A[i] -= diff;
        }
    }
    return operations;
}

int main() {
    vector<int> A = {88,78};
    cout << min_operations(A) << endl;
    return 0;
}
