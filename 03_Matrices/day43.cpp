#include <iostream>
using namespace std;

void search_matrix(int arr[][5], int q, int r, int c)
{
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            if(arr[i][j] == q) 
            {
                cout << q << " Found at index [" << i << "][" << j <<"]\n";
                return;
            }
    cout << q << " Not Found.\n";
}

int sum_diagonal(int C[][3], int r)
{
    int i = 0, j = r - 1;
    int sum = 0;
    while(i < r) {
        sum += C[i][i];
        i++;
    }

    i = 0;
    while(i < r) {
        if(i != j) sum += C[i][j];
        i++;
        j--;
    }
    return sum;
}

void reverse_array(int arr[], int n)
{
    for(int i = 0; i < n / 2; ++i)
        swap(arr[i], arr[n - i - 1]);
}

int main()
{
    // CW 1: Search Element

    int arr[5][5] = {51,2,3,42,5,331,24,4,66,2,83,6,93,22,31,12,5,23,87,57,34,28,94,36,80};
    int query1 = 83;
    int query2 = 79;

    search_matrix(arr, query1, 5, 5);
    search_matrix(arr, query2, 5, 5);

    // CW 2: Add 2 Matrix
    int A[3][3] = {5,6,7,8,4,3,2,1,9};
    int B[3][3] = {4,3,2,1,5,6,7,8,0};

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }

    // CW 3: Print row idx with max sum
    int sum, max_sum = INT_MIN, idx;
    for(int i = 0; i < 5; ++i) {
        sum = 0;
        for(int j = 0; j < 5; ++j) {
            sum += arr[i][j];
        }
        if(max_sum < sum) {
            max_sum = sum;
            idx = i;
        }
    }
    cout << "Max Row Sum: " << max_sum << " At index: " << idx << "\n";

    // CW 4: Print Sum of Diagonal Elements
    int C[3][3] = {1,2,3,4,5,6,7,8,9};
    sum = sum_diagonal(C, 3);
    cout << "Diagonal Element Sum: " << sum << endl;

    // CW 5: Reverse Each Row of Matrix
    for(int i = 0; i < 3; ++i) {
        reverse_array(C[i], 3);
    }

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // HW 1: Sum of Each Row
    sum = 0;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            sum += C[i][j];
        }
        cout << "Sum for Row " << i << ": " << sum << endl;
    }

    //HW 2: A - B
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << A[i][j] - B[i][j] << " ";
        }
        cout << endl;
    }

    // HW 3 = CW 4
    // HW 4: Column Major Order
    for(int j = 0; j < 3; ++j) {
        for(int i = 0; i < 3; ++i) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // HW 5: Largest Element in Matrix
    int max_elem = arr[0][0];
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            max_elem = max(max_elem, arr[i][j]);
        }
    }
    cout << "Max Element in Matrix: " << max_elem << endl;

    // HW 6: Smallest Element in Matrix
    int min_elem = arr[0][0];
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            min_elem = min(min_elem, arr[i][j]);
        }
    }
    cout << "Min Element in Matrix: " << min_elem << endl;

    return 0;
}