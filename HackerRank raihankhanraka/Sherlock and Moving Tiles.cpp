#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,max=0,limit,sum,temp,st=0;
    cin >> n ;
    limit=sqrt(n)+1;
    for(i=1;i<=limit;i++)
    {
        if(n%i==0)
        {
            sum=0;
            
                temp=i;
                while(temp)
                {
                    sum+=temp%10;
                    temp=temp/10;
                }
                if(sum==max) {if(i<st) st=i;}
                else if(sum>max) {max=sum;  st=i;}
            
            if(n/i!=i)
            {
                sum=0;
                temp=n/i;
                while(temp)
                {
                    sum+=temp%10;
                    temp=temp/10;
                }
                if(sum==max) {if(n/i<st) st=n/i;}
                else if(sum>max) {max=sum;  st=n/i;}
                
            }
        }
    }
    cout << st << endl;
    return 0;
}
