#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double d=(b*b)-(4*a*c);
	if(a==0&&b==0&&c==0){
		cout<<-1;
		return 0;
	}
	if(a==0&&b==0){
		cout<<0;
		return 0;
	}
	if(a==0){
		cout<<1<<endl<<fixed<<setprecision(5)<<(-1*c/b);
		return 0;
	}
	if(d<0){
		cout<<0;
		return 0;
	}
	if(d==0){
		cout<<1<<endl<<fixed<<setprecision(5)<<-1*(b/(2*a));
		return 0;
	}
	double e=(-b-(sqrt(d)))/(2*a),f=(-b+(sqrt(d)))/(2*a);
	cout<<2<<endl<<fixed<<setprecision(9)<<min(e,f)<<endl<<fixed<<setprecision(9)<<max(e,f);
}
