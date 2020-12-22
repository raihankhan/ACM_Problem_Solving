#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
       unsigned long long int n;
    int t;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        cout << ((n% 1000000007) * (n%1000000007))%1000000007 << endl;
    }
    return 0;
}
