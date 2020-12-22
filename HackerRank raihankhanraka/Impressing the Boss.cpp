#include <bits/stdc++.h>

using namespace std;

using namespace std;
string canModify(vector<int> &a) {
    /*
     * Write your code here.
     */
    int n = a.size();
    int flag=0;
   for(int i=1;i<n-1;i++){
       
       if(a[i] < a[i-1]){
           if(a[i+1] >= a[i-1]){
               a[i] = a[i-1];
               flag=1;
               break;
           }
           else if(a[i+1] < a[i-1]){
               a[i-1] = a[i];
               flag=1;
               break;
           }
       }
   }
    string s = "YES";
    for(int i=1;i<n-1;i++){
        if(a[i] < a[i-1]){
            s = "NO";
            break;
        }
    }
    if(flag==1 && a[n-1] < a[n-2]){
        s = "NO";
    }
    return s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		cout << canModify(a) << endl;
	}
}