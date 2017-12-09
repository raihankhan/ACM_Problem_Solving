#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int count=0;
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
     if(a[i]!=b[i]){
          count++;
     }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
	if(a==b && count==2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}