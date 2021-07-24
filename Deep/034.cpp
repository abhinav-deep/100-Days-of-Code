//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1, s=0;
        while(n){
            int r=n%10;
            p *= r;
            s += r;
            n /= 10;
        }
        return p-s;
    }
};