#include <iostream>
using namespace std;

int xxx(int n)
{
    if(n == 0)
    return 4;
    return 1 + xxx(n-1);
}

int recursive(int n)
{
    if (n<1) 
        return 2;
    else return 
        ((2*2) * recursive(n -1) + 1);
}

int f1(int n)
{
    if (n <= 0) 
        return 0;
    else if (n <= 2) 
        return n;
    else 
        return f1(n - 3) + f1(n - 2) + f1(n -1);
}

int main()
{
    cout << "Recursive Function examples" << endl;
    cout << xxx(5) << endl;
    cout << recursive(4) << endl;
    cout << f1(4) << endl;

    return 0;
}