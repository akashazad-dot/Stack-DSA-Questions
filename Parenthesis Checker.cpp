class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>temp;
        for(int i=0;i<x.size();i++){
            if(temp.empty()){
                temp.push(x[i]);
            }            
            else if(x[i]==')' && temp.top()=='('){
                temp.pop();
            }
            else if(x[i]=='}' && temp.top()=='{'){
                temp.pop();
            }
            else if(x[i]==']' && temp.top()=='['){
                temp.pop();
            }
            else{
                temp.push(x[i]);
            }
        }
        if(!temp.empty()){
            return false;
        }
        return true;
    }

};
