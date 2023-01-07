class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,vector<int>> m;
        int n=cards.size();
        for(int i=0;i<n;i++){
            m[cards[i]].push_back(i);
           

        }
        
        int d,mindis=INT_MAX;
        for(auto i:cards){
           
            for(int j=1;j<m[i].size();j++){
                d=m[i][j]-m[i][j-1];
                if(mindis>d) mindis=d;
            }
          
        }
        if(mindis==INT_MAX) return -1;
        return mindis+1;
    }
};