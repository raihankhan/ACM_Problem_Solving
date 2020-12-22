#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,arr[100007],temp,y,swapp=0;
    cin >> n ;
    for(i=1 ; i<=n ; i++)
        cin >> arr[i];
    
    for(i=1;i<n ; i++)
    {
        if(arr[i]!=i)
        {
            y=i;
            while(arr[y]!=i)
            {
                y++;
            }
            swap(arr[y],arr[i]);
            //cout << arr[y] << " " << arr[i] << endl;
            swapp++;
        }
    }
    
    
    cout << swapp << endl;
    return 0;
}
