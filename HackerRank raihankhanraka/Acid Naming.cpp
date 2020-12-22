#include <bits/stdc++.h>

using namespace std;

string acidNaming(string s) {
    // Complete this function
    int len=s.length();
    if(s[0]=='h' && s[1]=='y' && s[2]=='d' && s[3]=='r' && s[4]=='o' && s[len-2]=='i' && s[len-1]=='c')
        return "non-metal acid" ;
    else if(s[len-2]=='i' && s[len-1]=='c')
        return "polyatomic acid" ;
    else
        return "not an acid";
}

int main() {
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string acid_name;
        cin >> acid_name;
        
        string result = acidNaming(acid_name);
        cout << result << endl;
    }
    return 0;
}
