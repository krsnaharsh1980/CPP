#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int col ,vector<int> &leftRow,vector<int> &lowerDiagonal,
    vector<int> &upperDiagonal,vector<vector<string> > &ans,vector<string> &board,int n ){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row =0;row<n;row++){
            if(leftRow[row]==0&&upperDiagonal[n-1+col-row]==0&&lowerDiagonal[row+col]==0){
                leftRow[row]=1;
                upperDiagonal[n-1+col-row] =1;
                lowerDiagonal[row+col] =1;
                board[row][col] ='Q';
                solve(col+1,leftRow,lowerDiagonal,upperDiagonal,ans,board,n);
                leftRow[row]=0;
                upperDiagonal[n-1+col-row] =0;
                lowerDiagonal[row+col] =0;
                board[row][col] ='-';
            }
        }
    }
    vector<vector<string> > solveNQueens(int n) {
        vector<int> leftRow(n,0);
        vector<int> lowerDiagonal((2*n-1),0);
        vector<int> upperDiagonal((2*n-1),0);
        vector<vector<string> > ans;
        vector<string> board(n);
        string s(n,'-');
        for(int i = 0;i<n;i++){
            board[i] =s;
        }
        solve(0,leftRow,lowerDiagonal,upperDiagonal,ans,board,n);
        return ans;
    }

    int main(){
        int n;
        cin>>n;
        vector<vector<string> > res=solveNQueens(n);
        for(auto x:res){
            for(auto y:x){
                cout<<y<<endl;
                }
                cout<<endl;
            }

    }