#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int arr[6],i,less,a=0,great,n;
    for(i=0;i<5;i++)
    {
        cin >> arr[i] ;
        a+=arr[i];
    }
    less=a-arr[0];
    great=a-arr[0];
    for(i=1;i<5;i++)
        {
        n=a-arr[i];
        if(n<less)
            less=n;
        if(n>great)
            great=n;        
        }
    cout << less << " " << great << endl;
    return 0;
}