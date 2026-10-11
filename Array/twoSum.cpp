#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      int target;
      cout<<"Enter target:";
      cin>>target;
    vector<int> ans(2,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans[0]=i;
                ans[1]=j;
                 break;
                
            }

        }
        if(ans[0]!=-1){
            break;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<" ";
   
}