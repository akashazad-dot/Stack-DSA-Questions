char* reverse(char *S, int len)
{
    stack<char>st;
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }f 
    int i=0;
    while(!st.empty()){
        S[i]=st.top();
        i++;
        st.pop();
    }
    return S;
}
