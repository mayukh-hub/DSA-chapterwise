#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(n%(i+1)==0){
            sum+=arr[i]*arr[i];
        }
    }
    cout<<"Sum of squares: "<<sum;
    

}