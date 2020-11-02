#include <iostream>
#include <cmath>
using namespace std;
int N;
int sub = 0;
int mymin = 2000000;
char myinput[10];
void check(int N)
{
    if (N < 54)
        sub = 0;
    else
        sub = 54;
    for (int i = N - sub; i < N; i++)
    {
        int sum = 0;
        int j = 0;
        while (myinput[j] != 0)
        {
            j++;
            sum += myinput[j];
        }
        sum += i;
        if (sum == N)
            if (mymin > sum)
                mymin = i;
    }
}

int main()
{
    cin >> myinput;
    check(N);
    if (mymin == 2000000)
        cout << "0";
    else
        cout << mymin;
    return 0;
}