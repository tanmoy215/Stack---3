#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{3,2,1,5,3,5,3,9};
    stack<int> st;
    for(int i=0;i<arr.size();i++){
        st.push(arr[i]);
    }
    stack<int> dupli;
    int mn = st.top();
    while(st.size()>0){
        mn = min(mn,st.top()); 
        dupli.push(st.top());                          //brute force 
        st.pop();                                      //TC = O(n) & SC  = O(n)
    }
     while(dupli.size()>0){
        st.push(dupli.top());
        dupli.pop();
     }
    cout<<mn<<endl;
    return 0;
}