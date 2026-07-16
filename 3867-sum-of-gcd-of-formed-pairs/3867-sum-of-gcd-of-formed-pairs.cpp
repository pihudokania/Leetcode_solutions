class Solution {
public:
long long gcd (long long a,long long b){

    while(b!=0){
    long long temp=b;
       b=a%b;
      a=temp;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
    int  mxi=0;
        long long sum=0;
        vector<long long>prefixGcd;
        for(long long i=0;i<nums.size();i++){
         mxi = max(mxi, nums[i]);
         prefixGcd.push_back(gcd(nums[i],mxi));
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0;
        int j=prefixGcd.size()-1;
        while(j>i){
sum+=gcd(prefixGcd[i],prefixGcd[j]);
i++;
j--;

        }
        return sum;
    }
};