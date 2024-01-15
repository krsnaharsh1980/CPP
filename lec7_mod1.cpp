//all kind of subsequences
//print count of subsequences
#include<iostream>
using namespace std;

int  sumK(int arr[],int size,int sum,int k,int i){
    if(sum>k) return 0; //this line is added to improve time complexity
    if(i==size){
        if(sum==k) return 1;
        else return 0;
    }
    int left = sumK(arr,size,sum+arr[i],k,i+1);
    int right = sumK(arr,size,sum,k,i+1);
    return left+right;
}
int main() {
    int arr[3] = {1,2,3};
    cout<<sumK(arr,3,0,3,0)<<endl;
    return 0; 
}