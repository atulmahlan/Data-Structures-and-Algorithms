// QUESTION: Given a string queryIP, return "IPv4" if IP is a valid IPv4 address, "IPv6" if IP is a valid IPv6 address or "Neither" if IP is not a correct IP of any type.
// A valid IPv4 address is an IP in the form "x1.x2.x3.x4" where 0 <= xi <= 255 and xi cannot contain leading zeros. For example, "192.168.1.1" and "192.168.1.0" are valid IPv4
// addresses while "192.168.01.1", "192.168.1.00", and "192.168@1.1" are invalid IPv4 addresses.
// A valid IPv6 address is an IP in the form "x1:x2:x3:x4:x5:x6:x7:x8" where:
// 1 <= xi.length <= 4
// xi is a hexadecimal string which may contain digits, lowercase English letter ('a' to 'f') and upper-case English letters ('A' to 'F').
// Leading zeros are allowed in xi.
// For example, "2001:0db8:85a3:0000:0000:8a2e:0370:7334" and "2001:db8:85a3:0:0:8A2E:0370:7334" are valid IPv6 addresses, while "2001:0db8:85a3::8A2E:037j:7334" and 
// "02001:0db8:85a3:0000:0000:8a2e:0370:7334" are invalid IPv6 addresses.


class Solution {
private:
    bool isValidIPv4(const string& ip) {
        vector<string> parts = split(ip, '.');
        if(parts.size() != 4) return false;

        for(string part : parts)
        {
            if(part.empty() || part.size() > 3) return false;
            if(part[0] == '0' && part.size() > 1) return false;

            for(char c : part)
            {
                if(!isdigit(c)) return false;
            }

            int num = stoi(part);
            if(num < 0 || num > 255) return false;
        }

        return true;
    }

    bool isValidIPv6(const string& ip) {
        vector<string> parts = split(ip, ':');
        if(parts.size() != 8) return false;

        for(string part : parts) 
        {
            if(part.empty() || part.size() > 4) return false;

            for(char c : part)
            {
                if(!isxdigit(c)) return false;
            }
        }

        return true;
    }

    vector<string> split(const string& s, char delimiter) {
        vector<string> tokens;
        string token;

        istringstream tokenStream(s);

        while(getline(tokenStream, token, delimiter))
        {
            tokens.push_back(token);
        }
        return tokens;
    }

public:
    string validIPAddress(string queryIP) {
        if(queryIP.empty()) return "Neither";
        if(queryIP.back() == '.' || queryIP.back() == ':') return "Neither";

        if(isValidIPv4(queryIP))
        {
            return "IPv4";
        }

        else if(isValidIPv6(queryIP))
        {
            return "IPv6";
        }

        else 
        {
            return "Neither";
        }
    }
};
