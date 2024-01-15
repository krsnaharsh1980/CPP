#include<iostream>
using namespace std;
/*
int sum(int count,int summ){
    if(count==0) return summ;
    return sum(count-1,summ+count);

}
*/
int sum1(int count){
    if(count==1) return 1;
    return count+ sum1(count-1);
}
int fact(int n){
    if (n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    //int sum =0;
    //int ans = sum(n,0);
    //int ans = sum1(n);
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
    
}