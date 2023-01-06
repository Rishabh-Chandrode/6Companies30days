class Solution {
public:
    int fd(int x1,int y1,int x2,int y2){
        int d = ( (x2-x1)*(x2-x1) ) + ( (y2-y1)*(y2-y1) );
        return d;
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int count=0;
       
        int n=points.size();
        for(int i=0;i<n;i++){
             map<int,int> m;
            for(int j=0;j<n;j++){
                if(j==i) continue;
                int d=fd(points[i][0],points[i][1],points[j][0],points[j][1]);
               // cout<<i<<" - "<<j<<endl;
                m[d]++;
            }
             for(auto i:m){
            
            if(i.second){
                count+=i.second*(i.second-1);
                
            }
           // cout<<count<<" -  "<<i.first<<" "<<i.second<<endl;
        }
        }
       
        return count;
    }
};