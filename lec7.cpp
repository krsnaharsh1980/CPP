//all kind of subsequences
//Printing subsequence whose sum is k
#include<iostream>
using namespace std;

void sumK(int arr[],int size, vector<int> &ans,int sum,int k,int i){
    if(i==size){
        if(sum==k){
            for(auto x: ans) cout<<x<<" ";
            cout<<endl;
        }
        return;
    }
    ans.push_back(arr[i]);
    sumK(arr,size,ans,sum+arr[i],k,i+1);
    ans.pop_back();
    sumK(arr,size,ans,sum,k,i+1);
}
int main()
{
    vector<int> ans;
    int arr[3] = {1,2,3};
    sumK(arr,3,ans,0,3,0);
    return 0; 
}