class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int temp=nums[0];
        
    map<int,int>mpp;
    for(int ele : nums){
        mpp[ele]++;
    }
for(auto it : mpp)
{
    if(it.second>n/2){
        return it.first;
    }

}    
return -1;
    
    }
};