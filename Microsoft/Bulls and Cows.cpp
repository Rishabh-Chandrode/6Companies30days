class Solution {
public:
    string getHint(string secret, string guess) {
        int a=0,b=0;
        int arr[10]={0};
        int n=secret.length();
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]) a++;
            int t=secret[i]-48;
            arr[t]++;
        }
        
        for(int i=0;i<n;i++){
            int t=guess[i]-48;
            if(arr[t]>0) {
                b++;
                arr[t]--;
               
            }
        }
        string s;
        s+=to_string(a);
        
        s.push_back('A');
        b=b-a;
        s+=to_string(b);
        s.push_back('B');
        return s;
        
    }
};