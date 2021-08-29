class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i=0;i<nums1.size();++i){
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();++i){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(),arr.end());
        if(arr.size()%2!=0){
            return arr[0+(nums1.size()+nums2.size())/2.00000];
        }
        else{
            int mid=(arr.size())/2;
            return((arr[mid]+arr[mid-1])/2.00000);
        }
    }
};