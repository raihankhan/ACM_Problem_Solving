#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i,n;
    long long int sum;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        int arr[n];
        sum=1;
        for(i=0;i<n-1;i++)
        {  cin >> arr[i] ; sum*=arr[i]; sum=sum%1234567; }
        cout << sum << endl;
        
    }
    return 0;
}
