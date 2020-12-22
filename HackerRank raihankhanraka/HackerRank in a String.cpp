#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
string h = "hackerrank";
int len=s.length(),i,k=0;
for(i=0 ; i<len ; i++)
{
    if(s[i]==h[k])
    {
        k++;
    }
    if(k==10) break;
}

if(k==10)
return "YES";
else return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
