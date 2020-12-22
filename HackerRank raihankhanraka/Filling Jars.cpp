#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    lli n,m,i,a,b,k,sum=0;
    cin >> n >> m ;
    for(i=1;i<=m;i++)
    {
        cin >> a >> b >> k ;
        sum+=k*((abs(a-b))+1);
    }
    cout << sum/n << endl;
    return 0;
}
