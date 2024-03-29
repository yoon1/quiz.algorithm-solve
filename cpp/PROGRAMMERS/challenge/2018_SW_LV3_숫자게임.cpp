#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    int idx_A = 0, idx_B = 0;
    while (idx_A < A.size())
    {
        if (A[idx_A] < B[idx_B])
        {
            idx_B++;
            answer++;
        }
        idx_A++;
    }
    return answer;
}