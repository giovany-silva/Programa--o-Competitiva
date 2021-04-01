#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        int X;
        unsigned long long Tot;
        cin >> X;
        Tot = pow(2,X)/12000;
        cout << Tot << " kg" << endl;
    }
    return 0;
}
