//push efficient pop complex



class MyQueue {
public:
    stack<int> st ; 
    stack<int> helper ;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
        
    }
    
    int pop() { // remove at Bottom 
    while( st.size() > 0){
        helper.push(st.top());
        st.pop();

    }
    int x = helper.top();
    helper.pop();
    while( helper.size() > 0){
        st.push(helper.top());
        helper.pop();

    }
    return x;
    }
    
    int peek() {  // retrieve 

    while( st.size() > 0){
        helper.push(st.top());
        st.pop();

    }
    int x = helper.top();
    
    while( helper.size() > 0){
        st.push(helper.top());
        helper.pop();

    }
    return x;
    }


         
    
    
    bool empty() {
        if(st.size() == 0 ) return true ;
        else return false ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */




// pop efficeint push complex
void push(int x ){
    // push at bottom 

    if ( st.size() ==0) {
        st.push(x) ;
        return ;
    }
    else{
        while ( st.size() != 0){
            helper.push(st.top())
                st.pop();
        }
        st.push(x);
        while(helper.size() >0 ){

            st.push(helper.top());
            helper.pop();
        }
        
    }
}


void pop( ){
    int x = st.top();
    st.pop(x);
    return x;

}


