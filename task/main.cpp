#include <iostream>
using namespace std;

// A prime number is a natural number (positive integer) greater than 1 that has exactly two distinct positive divisors: 1 and itself;
void Prime_Numbers(int n,int m)
{
    // i start from n+1 and end to  m-1: to generate similar output;
    // i make counter to when the any number his counter equal two so that is a prime number;
    for(int i=n+1; i<=m-1; i++)
    {
        int counter=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                counter++;
            }
        }
        if(counter==2)
            cout << i << " ";
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    Prime_Numbers(n,m);
}
