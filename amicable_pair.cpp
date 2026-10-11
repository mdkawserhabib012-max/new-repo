#include<iostream>
using namespace std;

int sum(int n)
{
    int s = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s += i;
    }

    return s;
}

int main()
{
    int L, R;

    while (cin >> L >> R)
    {
        if (L == 0 && R == 0)
            break;

        int count = 0;

        for (int a = L; a <= R; a++)
        {
            int b = sum(a);

            if (b > a && b <= R && sum(b) == a)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
