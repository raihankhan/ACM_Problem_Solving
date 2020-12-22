#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    int k,i,rem=0;
    string ans;
    if(s[8]=='P')
    {
        s[1]=s[1]+2;
        
        if(s[1]>57 ) { k = s[1]-'9'-1; s[1]='0'+k; rem=1; }
        
        s[0]=s[0]+1+rem;
        
        if(s[0]=='2' and s[1]=='4' ) { s[0]='1' ; s[1]='2'; }
        
        
    }
    else
         if(s[0]=='1' and s[1]=='2' ) { s[0]='0' ; s[1]='0'; }
    
    for(i=0;i<8;i++)
        ans+=s[i];
    
    return ans ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
