// Array is sorted and given need to find the row with max 1...
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int m;
    int n;
    cin >> m;
    cin >> n;
    int array[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    int count[m];
    for (int i = 0; i < m; i++)
    {
        int _count = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] == 0)
            {
                ++_count;
            }
        }
        count[i] = _count;
    }
    int index;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(count[i]>count[j]){
                index=i;
            }
        }
    }
    return 0;
}