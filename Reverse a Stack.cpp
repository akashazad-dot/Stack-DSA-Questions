class Solution{
public:
        queue<int>ans;

    void Reverse(stack<int> &St){
        // stack<int>ans;
        // while(!St.empty()){
        //     int t=St.top();
        //     St.pop();
        //     ans.push(t);
        // }
        
        // St=ans;
        
        if(St.empty()){
            return;
        }
        
        ans.push(St.top());
        St.pop();
        Reverse(St);
        
        while(!ans.empty()){
            St.push(ans.front());
            ans.pop();
        }
        return;
    }
};
