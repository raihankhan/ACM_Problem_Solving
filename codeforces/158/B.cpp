#include<bits/stdc++.h>
using namespace std;
int s[5]={0} , n , x ;
main(){
	cin>>n ;
	for(int i=0;i<n;i++){
		cin>>x;
		s[x]++;
	}
	s[0]=max(s[1]-s[3],0) +3;
int cars=s[4]+s[3]+(2*s[2]+s[0])/4;
cout<<cars<<endl;
return 0;
}
