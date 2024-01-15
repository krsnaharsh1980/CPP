#include<iostream>
using namespace std;

void function1(int count,int n){
    if(count==0) return;
    function1(count-1,n);
    cout<<count <<endl;
}
int main(){
    int n;
    cin>>n;
    function1(n,n);
    return 0;
    
}