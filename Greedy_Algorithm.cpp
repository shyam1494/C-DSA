//Greedy Algorithm implementation

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long maxCost(int N, vector<int> A) {
    /*
    Input - N, A
    Output - X
    */
    sort(A.begin(), A.end(), greater<int>());
    int score = 0;
    while (A.size() > 1) {
        int x = A[0];
        int y = A[1];
        score += x + y;
        A.erase(A.begin(), A.begin() + 2);

    }
    return score;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i_A = 0; i_A < N; i_A++)
        {
            cin >> A[i_A];
        }

        long long out_;
        out_ = maxCost(N, A);
        cout << out_;
        cout << "\n";
    }
}

