// QUESTION: Given a number, write code to convert it to it's Binary form.

string convert2Binary(int n) {
    string result = "";
  
    while(n != 1) 
    {
        if(n % 2 == 1) result += '1';
        else result += '0';
        n = n / 2;
    }
    reverse(result.begin(), result.end());
    return result;
}
