// QUESTION: We are given an array asteroids of integers representing asteroids in a row.
// For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). 
// Each asteroid moves at the same speed.
// Find out the state of the asteroids after all collisions. 
// If two asteroids meet, the smaller one will explode.
// If both are the same size, both will explode. 
// Two asteroids moving in the same direction will never meet.


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        
        for (int a = 0 ; a < asteroids.size() ; a++) 
        {
            bool exploded = false;
            
            while (!s.empty() && s.top() > 0 && asteroids[a] < 0) 
            {
                if (s.top() < -asteroids[a]) 
                {
                    s.pop();
                    continue;
                } 

                else if (s.top() == -asteroids[a]) 
                {
                    s.pop();
                }

                exploded = true;
                break;
            }
            
            if (!exploded) 
            {
                s.push(asteroids[a]);
            }
        }
        
        vector<int> result(s.size());
        for (int i = s.size() - 1; i >= 0; i--) 
        {
            result[i] = s.top();
            s.pop();
        }
        
        return result;
    }
};
