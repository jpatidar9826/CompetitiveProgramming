#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

void matrixDFS(int i, int j, int initialColor, int newColor, vector<vector<int>>& image)
{
    int n = image.size();
    int m = image[0].size();

    if(i < 0 || j < 0) return;
    if (i >= n || j>= m) return;
    if (image[i][j] != initialColor) return;

    image[i][j] = newColor; 
    
    

    matrixDFS(i - 1, j, initialColor, newColor, image);
    matrixDFS(i + 1, j, initialColor, newColor, image);
    matrixDFS(i, j + 1, initialColor, newColor, image);
    matrixDFS(i, j - 1, initialColor, newColor, image);
}

int main()
{

    return 0;
}