#include<bits/stdc++.h>
using namespace std;


void printBoard( int n, int board[n][n]){
    cout<<"[ ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]==1){
                cout<<j<<" ";
            }
        }
    }
    cout<<"]";
}

bool isSafe(int row,int col, int board[n][n]){
    for(int i=0; i<col; i++){
        if(board[row][i]==1){
            return false;
        }
    }
    for(int i=0, int j=0; i<row, j<col; i++, j++){
           if(board[i][j]==1){
            return false;
        }   
    }
    for(int i=row, int j=col; i<n, j>0; i++, j--){
           if(board[i][j]==1){
            return false;
        }
    }
    return true;
}

bool nqsolveutil( int col, int n, int board[n][n]){
    if(col==n){
        printBoard(board, n);
        return true;
    ]
    bool res = false;
    for(int i =0; i<n; i++){
        if(isSafe(row, col, board)){
            board[i][col] = 1;
            res = nqsolveutil(col, n, board)||res;
            board[i][col] = 0;
        }
        return res;
    }
}


void solve(){
    int n; scanf("%d", &n);
    int board[n][n];
    memset(board, 0, sizeof(board));
    int col = 0;
    nqsolveutil(col, n, board);
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        solve();
    }
}