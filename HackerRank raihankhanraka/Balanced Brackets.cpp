#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
   int len=s.length();
   if(len&1) return "NO";

   stack<char>st;
   char x;

   for(int i=0;i<len; i++)
   {
       if(s[i]=='(' or s[i]=='{' or s[i]=='[')
       {
           st.push(s[i]);
       }
       else if(s[i]==')')
       {
           if(st.empty()) return "NO";
            x=st.top();
            if(x=='(')
            st.pop();
            else return "NO";
       }
       else if(s[i]=='}')
       {
           if(st.empty()) return "NO";
            x=st.top();
            if(x=='{')
            st.pop();
            else return "NO";
       }
       else if(s[i]==']')
       {
           if(st.empty()) return "NO";
            x=st.top();
            if(x=='[')
            st.pop();
            else return "NO";
       }
   }
    if(!st.empty()) return "NO";
   return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
