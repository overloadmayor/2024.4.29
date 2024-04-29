#include <iostream>
using namespace std;
signed main()
{
    cout << __cplusplus << endl;
    auto temp = [v = 1](auto y) mutable -> bool
    {
        cout << v << endl;
        v = 2;
        cout << v << endl;
        if (!y)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    };
    cout << temp('a') << endl;
}