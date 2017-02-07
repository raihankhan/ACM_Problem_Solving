#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 string s[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
cin>>n;
while(n>5)
n=n/2-2;
cout << s[n-1]  << endl;;
return 0;
}
