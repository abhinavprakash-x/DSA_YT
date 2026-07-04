#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1,  2,  3,  4},
                                  {5,  6,  7,  8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};
    int row = matrix.size();
    int col = matrix[0].size();

    // CW 1: Wave Form
    cout << "Wave Form: \n";
    for(int j = 0; j < col; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < row; ++i)
                cout << matrix[i][j] << " ";
        }
        else {
            for(int i = row - 1; i >= 0; --i)
                cout << matrix[i][j] << " ";
        }
    }

    // CW 2: Spiral Form
    cout << endl << "Spiral Form: \n";
    int top = 0;
    int right = col - 1;
    int bottom = row - 1;
    int left = 0;

    while(top <= bottom && left <= right)
    {
        for(int j = left; j <= right; ++j)
            cout << matrix[top][j]  << " ";
        top++;

        for(int i = top; i <= bottom; ++i)
            cout << matrix[i][right] << " ";
        right--;

        if(top <= bottom)
        {
            for(int j = right; j >= left; --j)
                cout << matrix[bottom][j] << " ";
            bottom--;
        }

        if(left <= right)
        {
            for(int i = bottom; i >= top; --i)
                cout << matrix[i][left] << " ";
            left++;
        }
    }

    // CW 3: Transpose of a Matrix
    cout << "\nTranspose: \n";
    for(int i = 0; i < row - 1; ++i) {
        for(int j = i + 1; j < col; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // HW 2: Reverse Each Row of Matrix
    cout << "Reverse Columns: \n";
    for(int j = 0; j < col; ++j) {
        for(int i = 0; i < row / 2; ++i) {
            swap(matrix[i][j], matrix[row - i - 1][j]);
        }
    }

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// HW 1: Transpose of a Matrix (GeekforGeeks)



// HW 3: Spiral Matrix (Leetcode 56)



// HW 4: Spiral Matrix II (Leetcode 57)



// HW 5: Print Diagonally (GeekforGeeks)



// HW 6: Matrix Zig-Zag Diagonal Pattern (GeekforGeeks)



// HW 7: Matrix Snake Pattern (GeekforGeeks)

