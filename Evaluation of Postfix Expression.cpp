class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int>st;
        for(int i=0;i<S.size();i++){
            if(S[i]=='+'||S[i]=='-'|| S[i]=='*'|| S[i]=='/'){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c;
                if(S[i]=='+'){
                    c=a+b;
                }
                else if(S[i]=='-'){
                    c=b-a;
                }
                else if(S[i]=='*'){
                    c=a*b;
                }
                else{
                    c=b/a;
                }
                
                st.push(c);
            }
            else{
                st.push(int(S[i])-48);
            }
            
        }
        return st.top();
    }
};

