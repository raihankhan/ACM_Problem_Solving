#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
const int CMAX=26;
 
class node{
public:
    int cnt;
    node *edge[CMAX];
};
 
class trie{
public:
   node *root;
   trie() { root= (node *) calloc(1, sizeof(node)); }
 
   void insert(string s)
   {
       node *curr=root;
       for(auto c:s)
       {
           int j=c-'a';
           if(curr->edge[j]==nullptr)
            curr->edge[j]=(node *) calloc(1, sizeof(node));
 
           curr=curr->edge[j];
           curr->cnt++;
       }
   }
 
   int prefix_count(string s)
   {
       node *curr=root;
       for(auto c:s)
       {
           int j=c-'a';
           if(curr->edge[j]==nullptr)
            return 0;
 
           curr=curr->edge[j];
       }
 
       return curr->cnt;
   }
};
 
void test(int T)
{
    int n,q;
    string s,op;
    scanf("%d",&n);
    trie t;
 
    while(n--)
    {
        cin >> op >> s;
        if(op=="add")
        t.insert(s);
        else
        printf("%d\n",t.prefix_count(s) );
    }
 
}
void Test() {   int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    //Test();
    test(1);
    return 0;
}
 
 
