//https://leetcode.com/problems/unique-morse-code-words/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        map<string ,int> mp;
        for(int i=0; i<words.size(); i++){
            string temp = words[i];
            string mc = "";
            for(int j=0; j<temp.length(); j++){
                mc += morse[temp[j]-97];
            }
            mp[mc]++;
        }
        return mp.size();  
    }
};