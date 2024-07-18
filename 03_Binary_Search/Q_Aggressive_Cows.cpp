// QUESTION: Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).
// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. 
// To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible.
// What is the largest minimum distance?


bool canWePlace(vector<int> &stalls, int distance, int cows) {
    int cntCows = 1;
    int last = stalls[0];
    
    for(int i = 0 ; i < stalls.size() ; i++)
    {
        if((stalls[i] + last) >= distance)
        {
            cntCows++;
            last = stalls[i];
        }
        if(cntCows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n-1] - stalls[0];
    
    while(low <= high) 
    {
        int mid = (low + high) / 2;
        if(canWePlace(stalls, mid, k) == true)
        {
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return high;
}
