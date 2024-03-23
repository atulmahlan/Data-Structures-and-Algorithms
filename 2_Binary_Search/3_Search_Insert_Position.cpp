int searchInsert(vector<int>& arr, int m)
{
	int n = arr.size();
	int lower = 0, high = n-1;
	int ans = n;
	while (lower <= high) {
		int mid = (lower + high)/2;
		if (arr[mid] >= m) {
			ans = mid;
			high = mid - 1;
		}
		else {
			lower = mid + 1;
		}
	}
	return ans;
}
