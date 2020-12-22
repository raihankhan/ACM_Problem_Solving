#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
using namespace std;
const int sz=1e5+7;
  class node
{
    public:
    bool isleaf;
    node *edge[10];
};
  class trie
{
    public:
    node *root;
    string IsConsistent;
    trie() { root = (node *)calloc(1,sizeof(node)); IsConsistent="YES"; }
      void insert(string &s)
    {
        int lim=s.length();
        node *curr=root;
          for(int i=0;i<lim;i++)
        {
            int j=s[i]-'0';
            if(curr->edge[j]==nullptr)
            {
                curr->edge[j]=(node *) calloc(1,sizeof(node));
              }
            else
            {
                if(i==lim-1)
                {
                    IsConsistent="NO";
                }
            }
              curr=curr->edge[j];
            if(curr->isleaf) IsConsistent="NO";
        }
          curr->isleaf=1;
    }
      void clean(node *curr)
    {
        for(int i=0;i<10;i++)
        {
            if(curr->edge[i]!=nullptr)
                clean(curr->edge[i]);
        }
        delete curr;
    }
    ~trie() { clean(root); }
  };
  void test(int T)
{
    int n,i;
    string s;
    trie t;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        t.insert(s);
    }
      cout << "Case " << T << ": " << t.IsConsistent << endl;
  }
void Test() {   int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    Test();
    //test(1);
    return 0;
}
       