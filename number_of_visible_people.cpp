#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,6,8,5,11,9};
     int n = sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     int ans[n];
     ans[n-1]=0;
     stack<int> st;
     st.push(arr[n-1]);
     for(int i=n-2;i>=0;i--){
         int count=0;
         while(st.size()>0 && arr[i]>st.top()){
            st.pop();
            count++;
         }
         if(st.size()!=0) count++;
         ans[i] = count;
         st.push(arr[i]);
     }
     cout<<endl;
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }
    return 0;
}