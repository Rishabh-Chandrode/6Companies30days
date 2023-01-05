class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN;
        int numsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i]*i;
            numsum+=nums[i];
        }
        maxsum=sum;
        for(int i=n-1;i>0;i--){
            sum = sum + numsum -(n*nums[i]);
            if(maxsum<sum){
                maxsum=sum;
            }
        }
        return maxsum;
    }
};