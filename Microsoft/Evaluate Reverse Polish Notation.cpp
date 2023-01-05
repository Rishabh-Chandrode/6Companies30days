class Solution {
public:
    int toint(string s){
        int t;
            if(s.length()>1){
                t=stoi(s);
            }else{
                char ch=s[0];
                t=ch;
                t=t-48;
            }
        return t;
    }
    
    int evalRPN(vector<string>& tokens) {
        
        stack<int> v;
        int top=-1;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int ans;
                int num2=v.top();
                v.pop();
                int num1=v.top();
                v.pop();
                if(tokens[i]=="+"){
                    ans = num1+num2;
                }else if(tokens[i]=="-"){
                    ans=num1-num2;
                }else if(tokens[i]=="*"){
                    ans=num1*num2;
                }else if(tokens[i]=="/"){
                    ans = num1/num2;
                }
                v.push(ans);
            }else{
                int t=toint(tokens[i]);
                v.push(t);
            }
            
            
        }
        return v.top();
    }
};