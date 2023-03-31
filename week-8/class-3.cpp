#include<iostream>
#include<vector>

using namespace std;

bool isSafe(int i,int j,int row,int col,int arr[3][3],vector<vector<bool>>&visited){
    if((i>=0 && i < row) && (j >= 0 && j < col) && (arr[i][j] == 1) && visited[i][j] == false){
        return true;
    }
    else{
        return false;
    }
}


void findMaze(int row,int col,int srcx,int srcy,int arr[3][3],vector<vector<bool>> &visited,vector<string>&path,string output){
    // base case
    if(srcx == row - 1 && srcy == col - 1){
        path.push_back(output);
        return;
    }

    //down
    if(isSafe(srcx+1,srcy,row,col,arr,visited)){
        visited[srcx+1][srcy] = true;
        findMaze(row,col,srcx+1,srcy,arr,visited,path,output + "D");
        // backtracing
        visited[srcx+1][srcy] = false;
    }
    //left
        if(isSafe(srcx,srcy-1,row,col,arr,visited)){
        visited[srcx][srcy - 1] = true;
        findMaze(row,col,srcx,srcy-1,arr,visited,path,output + "L");
        // backtracing
        visited[srcx][srcy-1] = false;
    }
    //right
        if(isSafe(srcx,srcy+1,row,col,arr,visited)){
        visited[srcx][srcy+1] = true;
        findMaze(row,col,srcx,srcy+1,arr,visited,path,output + "R");
        // backtracing
        visited[srcx][srcy+1] = false;
    }
    //up
        if(isSafe(srcx+1,srcy,row,col,arr,visited)){
        visited[srcx-1][srcy] = true;
        findMaze(row,col,srcx-1,srcy,arr,visited,path,output + "U");
        // backtracing
        visited[srcx-1][srcy] = false;
    }
}
int main(){
    int arr[3][3] ={
        {1,0,0},
        {1,1,0},
        {1,1,1}
    };

    int row = 3;
    int col = 3;

    vector<vector<bool>> visited(row , vector<bool>(col,false));  // create 2D vector fill up with flase

    vector<string>path;
    string output = "";

    findMaze(row,col,0,0,arr,visited,path,output);

    cout << "Print all the path " << endl;
    for(auto it:path){
        cout << it << " ";
    }

    return 0;
}