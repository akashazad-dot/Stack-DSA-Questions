class Solution 
{   
    private:
    bool knows(vector<vector<int> >& M, int a,int b,int n){
        if(M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        while(st.size()>1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            
            if(knows(M,a,b,n)){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        
        int candidate=st.top();
        
        bool rowcheck=false;
        int zeroCount=0;
        
        for(int i=0;i<n;i++){
            if(M[candidate][i]==0){
                zeroCount++;
            }
        }
        
        if(zeroCount==n){
            rowcheck =true;
        }
        
        bool colCheck=false;
        int oneCount=0;
        
        for(int i=0;i<n;i++){
            if(M[i][candidate]==1){
                oneCount++;
            }
        }
        
        if(oneCount==n-1){
            colCheck=true;
        }
        if(rowcheck==true && colCheck==true){
            return candidate;
        }
        else{
            return -1;
        }
    }
};
