#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    sort(ar.begin(),ar.end());
    int ans=0,tallest,i;
    tallest=ar[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(ar[i]==tallest) ans++;
        if(ar[i]<tallest) break;
    }
    return ans;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
