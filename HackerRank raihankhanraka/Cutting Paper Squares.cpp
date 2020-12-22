#include <bits/stdc++.h>

using namespace std;

unsigned long long int solve(unsigned long long int n, unsigned long long int m){
    // Complete this function
    return n*m-1;
}

int main() {
    unsigned long long int result,m,n;
    cin >> n >> m;
     result= solve(n, m);
    cout << result << endl;
    return 0;
}
