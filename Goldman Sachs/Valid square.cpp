class Solution {
public:
    int fd(int x1,int y1,int x2,int y2){
        int t,d;
        d=(x2-x1)*(x2-x1);
        t=(y2-y1)*(y2-y1);
        d=d+t;
        
        
        return d;
        
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int d1,d2,s1,s2,s3,s4;
        s1=fd(p1[0],p1[1],p2[0],p2[1]);
        s2=fd(p2[0],p2[1],p3[0],p3[1]);
        s3=fd(p3[0],p3[1],p4[0],p4[1]);
        s4=fd(p1[0],p1[1],p4[0],p4[1]);
        d1=fd(p1[0],p1[1],p3[0],p3[1]);
        d2=fd(p2[0],p2[1],p4[0],p4[1]);
        vector<int> v;
        v.push_back(s1);
        v.push_back(s2);
        v.push_back(s3);
        v.push_back(s4);
        v.push_back(d1);
        v.push_back(d2);
        
        sort(v.begin(),v.end());
        for(int i=0;i<6;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        if(v[4]==v[5]){
            if(v[0]==v[1] && v[0]==v[2] && v[0]==v[3]){
                if(v[0]==0) return 0;
                if( 2*v[0] == v[4] ){
                    
                    return 1;
                }else{
                    
                    cout<<"(1)"<<endl;
                    return 0;
                }
            }else{
                cout<<"(2)"<<endl;
                return 0;
            }
        }else{
            cout<<"(3)"<<endl;
            return 0;
        }

    }
};