#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int small = i + 1;
            int med = n + 2 * i + 1;
            int large = n + 2 * i + 2;
            cout << small << " " << med << " " << large<<" ";
        }
        cout << endl;
    }
    return 0;
}
