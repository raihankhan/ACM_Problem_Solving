#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
int solve(int n) {
    int a=-1 , b=2 , c=3 , d=4;
    if(n==1 or n==2)
        return a;
    if(n%2==1)
        return b;
    else if(n%4==0)
        return c;
    else return d;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
