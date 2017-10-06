
/*
786
Source Code by Raihan Khan Raka( optimistic olaf )
Department of Computer Science and Engineering
Comilla University
*/

#define pi 3.1416
#define  pb push_back
#define vec vector<int>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int m;
	string arr[30]={"zero","one","two","three","four","five","six","seven","eight","nine","ten" ,"eleven" ,"twelve" , "thirteen" ,"fourteen" , "fifteen","sixteen","seventeen" ,"eighteen" , "nineteen" ,"twenty" , "thirty","forty","fifty","sixty","seventy","eighty","ninety"   };
	cin >> m;
	if(m<=20)
        cout << arr[m]<< endl;
    else if(m%10==0)
    cout << arr[(m/10)+18] << endl;
    else
        cout << arr[(m/10)+18] << "-" << arr[m%10] << endl;
    return 0;
}
