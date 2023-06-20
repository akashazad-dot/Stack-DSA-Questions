class Solution {
  public:
    int findMaxLen(string s) {
        stack<int>temp;
        int ans=0;
        temp.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                temp.push(i);
            }
            else {
                temp.pop();
                if(temp.empty()){
                    temp.push(i);
                }
                ans=max(ans,i-temp.top());  

            }
        }
        
        return ans;
    }
};
