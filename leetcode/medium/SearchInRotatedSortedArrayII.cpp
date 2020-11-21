// Problem link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

class Solution {
public:
    bool extraSearch(vector<int>& arr, int low, int high, int target) {
        if( low > high ) return false;
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return true;
        
        bool x = false, y = false, z = false, m = false;
        if(arr[mid] <= arr[high]) {
            if(target >= arr[mid] && target <= arr[high]) 
                x = extraSearch(arr, mid+1, high, target);
            else
                y = extraSearch(arr, low, mid-1, target);
        }
        
        if(arr[low] <= arr[mid]){
            if(target >= arr[low] && target <= arr[mid])
                z = extraSearch(arr, low, mid-1, target);
            else
                m = extraSearch(arr, mid+1, high, target);
        }
        return x || y || z || m;
    }
        
    bool search(vector<int>& nums, int target) {
        return extraSearch(nums, 0, int(nums.size()) -1, target);
    }
};
