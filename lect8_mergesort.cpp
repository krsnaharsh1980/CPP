#include<iostream>
using namespace std;

void merge(int arr[],int low ,int mid , int high){
    int i = low;
    int j=mid+1;
    int k=0;
    int temp[high-low+1];
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }else{

            temp[k++] = arr[j++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=high){
        temp[k++] = arr[j++];
    }
    for(int i =low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    
}

void mergeSort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}
int main()
{
    int arr[7] = {3,2,4,6,7,4,8};
    mergeSort(arr,0,6);
    for(int i =0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}