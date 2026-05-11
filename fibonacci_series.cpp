#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long first = 0, second = 1;

    if(n >= 1)
        cout << first << " ";

    if(n >= 2)
        cout << second << " ";

    for(int i = 3; i <= n; i++)
    {
        long long next = first + second;

        cout << next << " ";

        first = second;
        second = next;
    }

    return 0;
}