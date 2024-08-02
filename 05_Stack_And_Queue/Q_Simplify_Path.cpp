// QUESTION: Given an absolute path for a Unix-style file system, which begins with a slash '/', transform this path into its simplified canonical path.
// In Unix-style file system context, a single period '.' signifies the current directory, a double period ".." denotes moving up one directory level, and multiple slashes such  // as "//" are interpreted as a single slash. In this problem, treat sequences of periods not covered by the previous rules (like "...") as valid names for files or directories.
// The simplified canonical path should adhere to the following rules:
// It must start with a single slash '/'.
// Directories within the path should be separated by only one slash '/'.
// It should not end with a slash '/', unless it's the root directory.
// It should exclude any single or double periods used to denote current or parent directories.
// Return the new path.


class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        string temp;
        string result;

        for(int i = 0 ; i < path.size() ; i++)
        {
            if(path[i] == '/') continue;

            temp.clear();

            while(i < path.size() && path[i] != '/')
            {
                temp += path[i];
                i++;
            }

            if(temp == ".") continue;
            if(temp == "..")
            {
                if(!stack.empty()) stack.pop_back();
            }
            else 
            {
                stack.push_back(temp);
            }
        }

        for (const string& dir : stack) 
        {
            result.append("/").append(dir);
        }

        return result.empty() ? "/" : result;
    }
};
