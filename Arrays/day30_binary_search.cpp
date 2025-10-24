#include<iostream>
using namespace std;

int binary_search_asc(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int binary_search_desc(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    
    int arr_asc[] = {1,3,4,5,6,7,8,12,14,17,19,23,26};
    int arr_desc[] = {23,21,18,17,15,12,10,6,4,3,1};

    int n1 = sizeof(arr_asc) / sizeof(arr_asc[0]);
    int target;
    cout<< "Enter Search Element: ";
    cin>> target;

    cout<<"Element Found at: "<< binary_search_asc(arr_asc, n1, target);
    cout<< endl;
    int n2 = sizeof(arr_desc) / sizeof(arr_desc[0]);
    cout<<"Element Found at: "<< binary_search_desc(arr_desc, n2, target);

    return 0;
}


/*
2. Search Insert Position (Leetcode 35)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
 */