#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sum=0,sumw=0;
    char arr[9][9];
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
    {
        cin >> arr[i][j] ;
        if(arr[i][j]=='q')
        sum+=9;
        else if(arr[i][j]=='r' )
        sum+=5;
        else if(arr[i][j]=='b')
        sum+=3;
        else if(arr[i][j]=='n' )
        sum+=3;
        else if(arr[i][j]=='p' )
        sum+=1;
        if(arr[i][j]=='Q')
        sumw+=9;
        else if(arr[i][j]=='R' )
        sumw+=5;
        else if(arr[i][j]=='B')
        sumw+=3;
        else if(arr[i][j]=='N' )
        sumw+=3;
        else if(arr[i][j]=='P' )
        sumw+=1;
        }
    if(sumw>sum) cout << "White" << endl;
    else if(sumw==sum) cout << "Draw" << endl;
    else if(sum > sumw) cout << "Black" << endl;
    return 0;
}
