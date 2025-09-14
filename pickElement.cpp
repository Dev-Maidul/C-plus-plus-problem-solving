// leetCode problem
//https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mx=-1, index=-1;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>mx)
            {
                mx=arr[i];
                index=i;
            }
        }
        return index;
    }
};