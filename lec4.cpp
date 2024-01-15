//reverse an array
#include<iostream>
#include<string>
using namespace std;

void printArray(int arr[],int size,int i){
    if(size==i) return;
    cout<<arr[i]<<endl;
    printArray(arr,size,i+1);
}
void reverse(int arr[],int size,int i){
    if(size==i) return ;
    cout<<arr[size-1-i]<<endl;
    reverse(arr,size,i+1);
}
void swap(int &l ,int &r){
    int temp = l;
    l = r;
    r = temp;
}
void reverseUsing2Ptr(int arr[],int l ,int r){
    if(l>=r) {
        printArray(arr,5,0);
        return;
        }
    swap(arr[l],arr[r]);
    reverseUsing2Ptr(arr,l+1,r-1);
}
void reverseUsing1Ptr(int arr[], int i , int size){
    if(i>=size/2) {
        printArray(arr,5,0);
        return;
    }
    swap(arr[i],arr[size-i-1]);
    reverseUsing1Ptr(arr,i+1,size);
}
int isPalindrome(int arr[],int i ,int size){
    if(i>=size/2) return 1;
    if(arr[i]!=arr[size-1-i]) return 0;
    return isPalindrome(arr,i+1,size);
}
int main(){
    int arr[5] = {1,2,3,2,1};
    //printArray(arr,5,0);
    //reverse(arr,5,0);
    //reverseUsing2Ptr(arr,0,4);
    //reverseUsing1Ptr(arr,0,5);
    int ans =isPalindrome(arr,0,5);
    if(ans) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
}