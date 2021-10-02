#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pi;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<int,int> mi;
typedef unordered_map<int,int> umi;
typedef stack<int> st;
typedef queue<int> que;
typedef priority_queue<int> pq;


#define LOOP(i, a, b) for(int i = a; i<b; i++) 
#define ITLOOP(it, a, b) for(auto it=a; it!=b; it++)
#define F first
#define S second
#define PB push_back
#define MP make_pair

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int numOfRows = board.size();
        int numOfColumns = board[0].size();
        unordered_set<string> dupliCheck;

        for(int i=0; i<numOfRows; i++){
            for(int j=0; j<numOfColumns; j++){
                char currentVal = board[i][j];

                if(currentVal == '.'){
                    continue;
                }
                
                if(dupliCheck.find(to_string(currentVal) + "is in row " + to_string(i)) != dupliCheck.end() || 
                    dupliCheck.find(to_string(currentVal) + "is in column " + to_string(j)) != dupliCheck.end() ||
                    dupliCheck.find(to_string(currentVal) + "is in box " + to_string(i/3) + "-" + to_string(j/3)) != dupliCheck.end()){
                        return false;
                }
                else{
                    dupliCheck.insert(to_string(currentVal) + "is in row " + to_string(i));
                    dupliCheck.insert(to_string(currentVal) + "is in column " + to_string(j));
                    dupliCheck.insert(to_string(currentVal) + "is in box " + to_string(i/3) + "-" + to_string(j/3));
                }
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<vector<char>> board = {
        { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
        { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
        { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
        { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
        { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
        { '5', '.', '.', '.', '2', '.', '.', '.', '6' },
        { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
        { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
        { '.', '.', '.', '.', '8', '.', '.', '7', '9' }
    };
    bool res = s.isValidSudoku(board);
    cout<<res<<endl;
}