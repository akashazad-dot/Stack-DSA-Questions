void QueueStack :: push(int x)
{
    q1.push(x);
    for(int i=1;i<=q1.size()-1;++i){
        q1.push(q1.front());
        q1.pop();
    }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
          if(q1.empty()){
              return -1;
          }
          
          int popped=q1.front();
          q1.pop();
          return popped;
}
