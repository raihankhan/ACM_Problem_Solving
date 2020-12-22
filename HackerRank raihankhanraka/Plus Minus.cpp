#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main(){
    double n,pos=0,neg=0,zero=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0) pos++;
        else if(arr[arr_i]<0)neg++;
        else zero++;
    }
    cout << fixed << setprecision(6) << pos/n << endl << setprecision(6) << neg/n << endl << setprecision(6) << zero/n << endl; 
    return 0;
}
