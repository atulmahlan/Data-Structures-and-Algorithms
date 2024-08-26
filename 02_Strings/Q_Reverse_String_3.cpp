// QUESTION: Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.


class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;

        while(left < s.length())
        {
            while(right < s.length() && s[right] != ' ')
            {
                right++;
            }
            reverse(s.begin() + left , s.begin() + right);
            left = right + 1;
            right = left;
        }
        return s;
    }
};
