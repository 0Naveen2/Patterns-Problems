#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start = 1;
    int end;
    cin >> end;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "   ";
        }
        int count = n + 1 - i;
        for (int j = 0; j < count; j++)
        {
            cout << start++;
            cout << "*";
        }
        int right = end - count + 1;
        for (int j = right; j <= end; j++)
        {
            cout << j;
            if (j != end)
                cout << "*";
        }

        end = right - 1;
        cout << endl;
    }

    return 0;
}
