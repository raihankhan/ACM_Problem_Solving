#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i=0;
    cin >> a >> b >> c ;
    int arr[5]={a+b+c,a*(b+c),(a+b)*c,a*b*c};
    sort(arr,arr+4);
    cout << arr[3] << endl;
    return 0;
}
