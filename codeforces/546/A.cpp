#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k,w,dollar;
    cin >> k >> n >> w ;
    dollar = k*((w*(w+1))/2);
    if(dollar<= n)
        cout << "0" << endl ;
    else
        cout << dollar-n << endl;

    return 0;
}


