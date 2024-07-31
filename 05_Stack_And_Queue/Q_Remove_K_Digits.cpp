// QUESTION: Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.


class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> stack;
        
        for (char digit : num) 
        {
            while (!stack.empty() && stack.back() > digit && k > 0) 
            {
                stack.pop_back();
                k--;
            }

            stack.push_back(digit);
        }
        
        while (k > 0) 
        {
            stack.pop_back();
            k--;
        }

        string result = "";
        bool leadingzero = true;

        for(char digit : stack)
        {
            if(leadingzero && digit == '0') continue;
            leadingzero = false;
            result += digit;
        }

        return result.empty() ? "0" : result;
    }
};
