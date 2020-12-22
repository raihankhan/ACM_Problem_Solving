#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int px,py,mx,my,t;
    cin >> t ;
    while(t--)
    {
        cin >> px >> py >> mx >> my ;
        cout << 2*mx-px << " " << 2*my - py << endl;
    }
    return 0;
}
