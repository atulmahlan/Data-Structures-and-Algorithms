// QUESTION: The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
// Given two integers x and y, return the Hamming distance between them.


class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorResult = x ^ y; 
        int distance = 0;
        
        while (xorResult > 0) 
        {
            distance += xorResult & 1;
            xorResult >>= 1;
        }
        
        return distance;
    }
};
