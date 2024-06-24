// Question: An encoded string is given and the task is to decode it.
// The encoding pattern is such that the occurence of the string is given at the starting of the string and each string is enclosed by square brackets.

string decodedString(string s) {
   string result = "";

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] != ']')
        {
            result.push_back(s[i]);
        }
        else
        {
            string str = "";
            while(!result.empty() && result.back() != '[')
            {
                str.push_back(result.back());
                result.pop_back();
            }
            reverse(str.begin() , str.end());

            result.pop_back();

            string num = "";
            while(!result.empty() && result.back() >= '0' && result.back() <= '9'))
            {
                num.push_back(result.back());
                result.pop_back();
            }

            reverse(num.begin() , num.end());

            int int_num = stoi(num);

            while(int_num)
            {
                result += str;
                int_num--;
            }
        }
    }
    return result;
}
