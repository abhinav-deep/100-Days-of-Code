/*
Problem - https://leetcode.com/problems/shuffle-string/
*/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffled = "";
        int l = s.length();
        shuffled.append(l, 'a');
    
        for(int i=0;i<l;i++){
            shuffled[indices[i]] = s[i]; 
        }
        return shuffled;
    }
};