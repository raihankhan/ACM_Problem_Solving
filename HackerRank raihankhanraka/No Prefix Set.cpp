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
    string SetStatus,badset;
    trie() { root = (node *)calloc(1,sizeof(node)); SetStatus="GOOD SET"; badset=""; }

    void insert(string &s,int id)
    {
        int lim=s.length();
        node *curr=root;

        for(int i=0;i<lim;i++)
        {
            int j=s[i]-'a';
            if(curr->edge[j]==nullptr)
            {
                curr->edge[j]=(node *) calloc(1,sizeof(node));

            }
            else
            {
                if(i==lim-1 and badset=="")
                {
                    SetStatus="BAD SET";
                    badset=s;
                }
            }

            curr=curr->edge[j];
            if(curr->isleaf and badset=="") SetStatus="BAD SET",badset=s;
        }

        curr->isleaf=1;
    }
    
    string PrintSetStatus()
    {
        if(badset=="") return SetStatus;
        else return SetStatus+"\n"+badset;
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
    trie t;
    cin >> n;
    vector<string>s(n+1);
    for(i=0;i<n;i++)
    {
        cin >> s[i];
        t.insert(s[i],i);
    }

    cout <<  t.PrintSetStatus() << endl;

}
void Test() {   int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    //Test();
    test(1);
    return 0;
}
