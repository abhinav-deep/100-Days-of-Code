/*
Problem - https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
Author - Abhinav Deep
Date - July 19, 2021
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int m = candies[0];
        for(int i=1;i<candies.size();i++){
            m = max(m,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(m - candies[i] <= extraCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};