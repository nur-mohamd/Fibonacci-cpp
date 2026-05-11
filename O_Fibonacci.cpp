#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long first = 0, second = 1;

    if(n == 1)
    {
        cout << 0;
    }
    else if(n == 2)
    {
        cout << 1;
    }
    else
    {
        long long next;

        for(int i = 3; i <= n; i++)
        {
            next = first + second;

            first = second;
            second = next;
        }

        cout << next;
    }

    return 0;
}