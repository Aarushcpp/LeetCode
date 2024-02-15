class Solution {
public:
    int Binary_FirOc(vector<int>&arr,int target)
    {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[mid]==target)
            {
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    int Binary_LastOc(vector<int>&arr,int target)
    {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[mid]==target)
            {
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       int  firstOcc=Binary_FirOc(nums,target);
       int  LastOcc=Binary_LastOc(nums,target);
        return {firstOcc,LastOcc};
    }
};
