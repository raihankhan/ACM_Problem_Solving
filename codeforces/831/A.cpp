#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

int n,i;

cin >> n ;
int arr[n];
for(i=0;i<n;i++)
{
    cin >> arr[i];
}
i=1;
while(arr[i]>arr[i-1] and i<n)i++;
while(arr[i]==arr[i-1]and i<n) i++;
while(arr[i]<arr[i-1] and i<n) i++;
if(i==n) cout << "YES" << endl;
else cout << "NO" << endl;
    return 0;
}

