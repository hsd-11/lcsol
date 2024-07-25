class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0,j=n-1;i<n || j>=0;i++){
            while(nums[j]==0)
                j--;
            if(nums[i]==0){
                while(nums[j]!=0)
                    swap(arr[i],arr[i+1])
        }
    }
};
