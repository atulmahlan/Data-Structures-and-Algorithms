int traffic(int n, int m, vector<int> vehicle) {
	int count = 0;
	int maximum = 0;

	for ( int i = 0; i < vehicle.size(); i++){
		if ( vehicle[i] == 1){
			count++;
			maximum = max(count,maximum);
		}
		else{
			count = 0;
		}
	}
	return maximum;
}
