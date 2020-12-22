#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            cout << " " ;
        for(j=0;j<=i;j++)
            cout << "#" ;
        cout << endl;
    }
    
    return 0;
}
