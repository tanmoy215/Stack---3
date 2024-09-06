#include<bits/stdc++.h>
using namespace std;
int main(){
                        //nums = [1,3,-1,-3,5,3,6,7], k = 3
    int arr[]={1,3,-1,-3,5,3,6,7};
     int n = sizeof(arr)/sizeof(arr[0]);
      stack<int> st;
      int ngi[n];
      ngi[n-1]=n;
      st.push(n-1);
      for(int i=n-2;i>=0;i--){
         while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
         }
         if(st.size()==0) ngi[i]=n;
         else ngi[i] = st.top();
         st.push(i);
      }
      vector<int> ans;
      int k;
      cout<<"enter windows size : ";
      cin>>k;
      for(int i=0;i<n-k+1;i++){
            int mx = arr[i];
            int j=i;
            while(j<i+k){
                mx = arr[j];
                j=ngi[j];
            }
            ans.push_back(mx);
      }
      //output print
      for(auto i : ans){
        cout<<i<<" ";             //Output: [3,3,5,5,6,7]
      }
    return 0;
}