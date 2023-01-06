class Solution {
public:
    int trailingZeroes(int n) {
        int t=5,count=0;
        while(t<=n){
            count += n/t;
            
            t=t*5;
            cout<<count<<" "<<t<<endl;
        }
        return count;
    }
};