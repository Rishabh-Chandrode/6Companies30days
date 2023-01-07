class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n=nums.size();
        map<int,int> f,v;
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }
        for(auto i:nums){
            if(f[i]==0) continue;
            f[i]--;
            if(v[i]>0){
                v[i]--;
                v[i+1]++;
            }else{
                if(f[i+1]>0 && f[i+2]>0){
                    f[i+1]--;
                    f[i+2]--;
                    v[i+3]++;
                }else{
                    return 0;
                }
            }
        }
        return true;
    }
};