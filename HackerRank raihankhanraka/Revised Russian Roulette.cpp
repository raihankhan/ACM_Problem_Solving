#include <bits/stdc++.h>

using namespace std;

vector <int> revisedRussianRoulette(vector <int> doors,int n,int max) {
    // Complete this function
    int i,min=0;
    vector <int> k ;
    for(i=0;i<n-1;i++)
    {
        if(doors[i]==1)
        {
            doors[i]=0;
            min++;
            if(doors[i+1]==1)
            { doors[i+1]=0;
             }
            
        }
    }
    if(doors[n-1]==1) min++;
    k.push_back(min);
    k.push_back(max);
    return k;
}

int main() {
    int n,max=0;
    cin >> n;
    vector<int> doors(n);
    for(int doors_i = 0; doors_i < n; doors_i++){
       cin >> doors[doors_i];
        if(doors[doors_i]==1) max++;
    }
    vector <int> result = revisedRussianRoulette(doors,n,max);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "\n");
    }
    cout << endl;


    return 0;
}
