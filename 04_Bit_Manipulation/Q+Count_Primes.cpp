// QUESTION: Given an integer n, return the number of prime numbers that are strictly less than n.


class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        std::bitset<5000000> isPrime; 
        isPrime.set(); 
        isPrime[0] = isPrime[1] = 0; 

        for (int i = 2; i * i < n; ++i) 
        {
            if (isPrime[i]) 
            {
                for (int j = i * i; j < n; j += i) 
                {
                    isPrime[j] = 0;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; ++i) 
        {
            if (isPrime[i]) 
            {
                count++;
            }
        }

        return count;
    }
};
