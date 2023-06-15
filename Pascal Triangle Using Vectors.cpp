// Pascal Triangle using Vectors...
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
vector<vector<int>> pascalTriangle(int rows)
{
    vector<vector<int>> pascal(rows);
    for (int i = 0; i < rows; i++)
    {
        vector<int> ith_vector =pascal[i];
        ith_vector.resize(i+1);

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }
}
int main()
{
    /*
    0C0
    1C0 1C1
    2C0 2C1 2C2
    3C0 3C1 3C2 3C3
    4C0 4C1 4C2 4C3 4C4
    */
    int rows;
    /*
    a[i][j]=a[i-1][j]+a[i-1][j-1]
    */
    cin >> rows;
    vector<vector<int>> ans;
    ans = pascalTriangle(rows);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}