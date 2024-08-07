// QUESTION: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// SOLUTION 1---->
vector<int> swap(vector<int>& arr, int index1, int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;

        return arr;
    }
    void moveZeroes(vector<int>& a) {
        int j = -1;
        int n = a.size();
        
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1) return;

        for (int i = j + 1; i < n; i++) {
            if (a[i] != 0) {
                swap(a,i,j);
                j++;
            }
        }
    }


// SOLUTION 2----->
void moveZeroes(vector<int>& nums) 
    {
        // 1) Placement of non-zero
        int k = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        // 2) Placement of 0s
        for (int i = k; i < n; i++)
        {
            nums[i] = 0;
        }
    }
