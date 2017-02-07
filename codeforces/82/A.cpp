#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n;
string cola[ 6] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"} ;
cin >> n ;
while(n>5)
    n=n/2 -2 ;
cout << cola[n-1] << endl;
return 0;
}
