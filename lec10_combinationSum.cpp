#include<iostream>
#include<vector>
using namespace std;

void combinationSum(int arr[],int size, int target , vector<int> & add, vector<vector<int> > &ans,int index){
    if(index==size){
        if(target ==0){
            ans.push_back(add);
            return;
        }
        return;
    }
    if(arr[index]<=target){
        add.push_back(arr[index]);
        combinationSum(arr,size,target-arr[index],add,ans,index);
        add.pop_back(); // is line ko isi block me rakhna hoga kyuki if wali condition me hi add hua tha
        //toh if wali condition me hi pop hoga
    }
    
    combinationSum(arr,size,target,add,ans,index+1);
}
int main()
{
    int arr[4] = {1,2,3,4};
    int target = 7;
    vector<int> add;
    vector<vector<int> > ans;
    combinationSum(arr,4,target,add,ans,0); 
    for (auto i : ans) {
        for (auto j:i) cout <<j<<" ";
        cout << endl;
    }
}