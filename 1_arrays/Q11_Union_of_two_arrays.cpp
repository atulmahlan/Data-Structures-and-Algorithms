#include <bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();
    int i=0, j = 0;

    vector<int> unionarr;

    while ( i < n1 && j < n2 ){
        while(i<n1-1 && a[i]==a[i+1]){
            i++;
        }
        while(j<n2-1 && b[j]==b[j+1]){
            j++;
        }
        if ( a[i] < b[j] ){
            unionarr.push_back(a[i++]);
        }
        else if(a[i]>b[j]){
            unionarr.push_back(b[j++]);
        }else{
            i++;
        }
    }

    while ( j < n2 ){
        unionarr.push_back(b[j++]);
    }

    while ( i < n1 ){
        unionarr.push_back(a[i++]);
    }

    return unionarr;
}
