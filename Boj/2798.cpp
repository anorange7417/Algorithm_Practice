#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int N, M;
int card[100];
int mymax = 0;
// 선택의 순간 5번, 선택지는 고를지 말지로 2 번

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> card[i];
    int pick[N] = {0};
    pick[N - 1] = 1;
    pick[N - 2] = 1;
    pick[N - 3] = 1;
    do
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (pick[i] == 1)
            {
                sum += card[i];
            }
        }
        if (abs(sum - M) < abs(mymax - M))
        {
            if (sum <= M)
                mymax = sum;
        }
    } while (next_permutation(pick, pick + N));
    cout << mymax;
    return 0;
}