#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string vin,cat;
    int n,k=0,i;
    cin >> n ;
    cin >> vin >> cat ;
    for(i=0;i<n;i++)
    {
        if(vin[i]=='.') continue;
        if(vin[i]!=cat[i]) k++;
    }
    cout << k << endl;
    return 0;
}
