// QUESTION: Left rotate a given Array by 1 place.

vector<int> RotateBy1Place(vector<int>& arr){
  int temp = arr[0];
  int i = 0;
  for(i = 1; i < arr.size(); i++){
    arr[i-1] = arr[i];
  }
  arr[i] = temp;
  return arr;
}
