//method - 1
                        // #include<bits/stdc++.h>
                        // using namespace std;
                        // int main(){
                        //      stack<int> st;
                        //      st.push(10);
                        //      st.push(5);
                        //      st.push(6);
                        //      st.push(0);
                        //      st.push(-1);
                        //      st.push(8);
                        //      stack<int> helper;
                        //       int mn = INT_MAX;
                        //       while(st.size()>0){
                        //          mn = min(mn,st.top());
                        //          helper.push(st.top());
                        //          st.pop();
                        //       }
                        //     while(helper.size()>0){
                        //         st.push(helper.top());
                        //         helper.pop();
                        //     }
                        //     cout<<"Minimum value is : "<<mn<<endl;
                        //     return 0;
                        // }
 //method -2
  /*
  class MinStack {
public:
stack<int> st;
stack<int> helper;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(helper.size()==0 || val<helper.top()){
            helper.push(val);
        }
        else{
            helper.push(helper.top());
        }
    }
    
    void pop() {
        st.pop();
        helper.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return helper.top();
    }
};
  */

 //method - 3
 /*
 class MinStack {
public:
vector<int> ans;
    MinStack() {
        
    }
    
    void push(int val) {
        ans.push_back(val);
    }
    
    void pop() {
        ans.pop_back();
    }
    
    int top() {
        return ans[ans.size()-1];
    }
    
    int getMin() {
        int mn = ans[0];
        for(int i=1;i<ans.size();i++){
            mn = min(mn,ans[i]);
        }
        return mn;
    }
};
 */

 //method - 4
  