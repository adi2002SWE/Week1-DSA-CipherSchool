#include <bits/stdc++.h>
using namespace std;
vector<string>dialpad={"", "", "abc", "def","ghi","jkl","mno", "pqrs", "tuv", "wxyz"};
void letterCombinations(string &input, string &strSoFar, vector<string>& result,int start, int end){
    if (start> end) {
        // unbalanced
        result.push_back(strSoFar);
        return;
    }
    else{
        char digitPressed =input[start];
        string possibleMoved = dialpad[digitpressed - '0'];
        for(int i=0; i<possibleMoves.size(); i++){
            strSofar.push_back(possibleMoves[i]);
            letterCombinations(input, strSoFar, result, open-1, close);
            strSofar.pop_back();   
        }
        
        strSofar.push_back('(');
        generateParenthesis(strSoFar, result, open, close-1);
        strSofar.pop_back();
    }
    // Next Recursion
    
}
vector<string> generateParenthesis (const int n) {
    vector<string> result;
    int open=n, close = n; 
    string strSoFar = ""; 
    generateParenthesis (strSoFar, result, open, close);
    return result;
int main(){
    
}