// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).
// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float result;
        vector<int>array;
        for(int i=0;i<nums1.size();i++){
            array.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            array.push_back(nums2[i]);
        }
        stable_sort(array.begin(),array.end());
        int n=array.size();
        if(n==0){
            return 0.0;
        }
            if(n%2!=0){
                result= array[n / 2];
            }
            else{
                result=(array[(n - 1) / 2] + array[n / 2]) / 2.0;
            } 
    return result;    
    }
};
