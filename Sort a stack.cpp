void sortedwayinsert(stack<int>&s,int num)
{
    if(s.empty()||s.top()<num)
    {
        s.push(num);
        return;
    }
    int ele=s.top();
    s.pop();
    sortedwayinsert(s,num);
    s.push(ele);
    
}
void SortedStack :: sort()
{
   //Your code here
   if(s.empty())
   return;
   int num=s.top();
   s.pop();
   sort();
   sortedwayinsert(s,num);
    }
