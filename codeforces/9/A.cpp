#include<bits/stdc++.h>
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define READ(f)         freopen(f, "r", stdin)
#define WRITE(f)        freopen(f, "w", stdout)
#define lli             long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define veci            vector<int>
#define vecl            vector<long long int>
#define pb              push_back
long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }

using namespace std;

int main()
{

    int a , b,num,denum=6;
    cin >> a >> b ;
    num=6-max(a,b)+1;
    if(num%2==0) {num=num/2; denum=denum/2;}
    else if(num%3==0) {num=num/3; denum=denum/3;}
    if(num==denum) {num=1; denum=1;}
    cout << num << "/" << denum << endl;


    return 0;
}



