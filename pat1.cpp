#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // Loop for rows
    {
        for (int j = 0; j < i; j++) // Print i spaces
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) // Print n - i stars
        {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
