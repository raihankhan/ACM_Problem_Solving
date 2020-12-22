#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumMoves function below.
int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
int n=grid.size();
int dis[n+7][n+7];
queue< pair<int,int> > q;

int dirX[4]={1,0,-1,0};
int dirY[4]={0,1,0,-1};
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=n;j++) dis[i][j]=INT_MAX;
}

q.push({startX,startY});
dis[startX][startY]=0;
while(!q.empty())
{
    int x=q.front().first;
    int y=q.front().second;
    q.pop();
    
    for(int i=0;i<4;i++)
    {
        for(int k=1;k<=n;k++)
        {
            int nx=x+(k*dirX[i]);
            int ny=y+(k*dirY[i]);
            if(nx<0 or nx>=n or ny<0 or ny>=n) break;
            if(grid[nx][ny]=='X') break;
            //cout << nx << " " << ny << endl;
            if(dis[nx][ny]==INT_MAX)
            {
                dis[nx][ny]=dis[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
}

return dis[goalX][goalY];


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    string startXStartY_temp;
    getline(cin, startXStartY_temp);

    vector<string> startXStartY = split_string(startXStartY_temp);

    int startX = stoi(startXStartY[0]);

    int startY = stoi(startXStartY[1]);

    int goalX = stoi(startXStartY[2]);

    int goalY = stoi(startXStartY[3]);

    int result = minimumMoves(grid, startX, startY, goalX, goalY);

    fout << result << "\n";

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
