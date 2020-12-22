#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
vector<int>arr;
int dp[100007];
int solve(int id)
{
    int sum=int(-1*(1e9));
    if(id>=arr.size()) return 0;
    if(dp[id]!=-1) return dp[id];
    sum=max(sum,arr[id]+solve(id+2));
    sum=max(sum,solve(id+1));
    return dp[id]=sum;
}
// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> v) {
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<v.size();i++)
    arr.push_back(v[i]);
    int ans=solve(0);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = maxSubsetSum(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
