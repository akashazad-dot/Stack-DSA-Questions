void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	false;
}

bool isEmpty(stack<int>& s){
	if(s.size()==0){
	    return true;
	}
	return false;
}

int pop(stack<int>& s){
	if(s.empty()){
	    return -1;
	}
	int temp=s.top();
	s.pop();
	return temp;
}

int getMin(stack<int>& s){
	int minimum_n=1e9;
	while(!s.empty()){
	    minimum_n=min(minimum_n,s.top());
	    s.pop();
	}
	
	return minimum_n;
}
