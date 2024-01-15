//Print all Subsequences

#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[],int size,vector<int> &ans,int i){
    if(i==size){
        if(ans.size()==0) cout<<"{}"<<endl;
        for(auto x: ans) cout << x << " ";
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    subsequence(arr,size,ans,i+1);
    ans.pop_back();
    subsequence(arr,size,ans,i+1);

}
int main()
{
    vector<int> ans;
    int arr[3] = {1,2,3};
    subsequence(arr,3,ans,0);
    return 0; 
}