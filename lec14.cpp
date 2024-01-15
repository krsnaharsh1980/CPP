//Permutations 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void call(vector<int>& nums,vector<vector<int> > &ans,vector<int> &add,int freq[]){
        if(nums.size()==add.size()){
            ans.push_back(add);
            return;
        }
        //very important concept
        for(int i = 0;i<nums.size();i++){
            if(!freq[i]){
                add.push_back(nums[i]);
                freq[i]=1;
                call(nums,ans,add,freq);
                freq[i] =0;
                add.pop_back();
            }
        }
    }
    vector<vector<int> > permute(vector<int>& nums) {
        vector<vector<int> > ans;
        int freq[nums.size()];
        for(int i =0;i<nums.size();i++) freq[i] =0;
        vector<int> add;
        call(nums,ans,add,freq);
        return ans;
    }

    int main()
{
    vector<int> val;
    cout<<"Enter size"<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        val.push_back(x);
    }
    vector<vector<int> > res =permute(val);
    for(auto it:res){
        for(auto c :it )cout<<c<<" ";
        cout<<endl;
    }
}