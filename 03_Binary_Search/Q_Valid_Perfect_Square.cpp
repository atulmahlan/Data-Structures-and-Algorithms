// QUESTION: Given a positive integer num, return true if num is a perfect square or false otherwise.
// A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
// You must not use any built-in library function, such as sqrt.


class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 1) return false;

        long left = 0;
        long right = num;

        while(left <= right)
        {
            long mid = left + (right - left) / 2;
            long midSquare = mid * mid;

            if(midSquare == num) return true;
            else if(midSquare < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};
