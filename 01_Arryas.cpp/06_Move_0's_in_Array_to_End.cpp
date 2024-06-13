// QUESTION: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

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
