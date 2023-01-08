class Solution {
public:
    vector<int> ans;
    int maxpoints=-1;
    void util(vector<int>& aliceArrows,vector<int>& bobArrows,int numArrows,int ind,int points){
        if(ind<0 || numArrows<=0){
            if(points>maxpoints){
                maxpoints=points;
                ans=bobArrows;
               
            }
            return;
        }
        if(ind==0 && numArrows>0){
            bobArrows[ind] = numArrows;
            if(bobArrows[ind]>aliceArrows[ind]){
                points+=ind;
            }
            numArrows=0;
            util(aliceArrows,bobArrows,numArrows,ind-1,points);
            bobArrows[ind] = 0;
        }
        if(numArrows >aliceArrows[ind]){
            bobArrows[ind]=aliceArrows[ind]+1;
            numArrows = numArrows-aliceArrows[ind]-1;
            util(aliceArrows,bobArrows,numArrows,ind-1,points+ind);
            numArrows = numArrows+aliceArrows[ind]+1;
            bobArrows[ind]=0;
           
        }
        util(aliceArrows,bobArrows,numArrows,ind-1,points);
    }
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        vector<int> bobArrows;
        for(int i=0;i<12;i++){
            ans.push_back(0);
            bobArrows.push_back(0);
        }
        int points=0;
        util(aliceArrows,bobArrows,numArrows,11,points);
        return ans;
    }
};