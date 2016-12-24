//https://leetcode.com/problems/hamming-distance/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_result = x ^ y;
        x = 0;
        while(xor_result) {
            xor_result &= xor_result - 1;
            x ++;
        }
        
        return x;
    }
};
