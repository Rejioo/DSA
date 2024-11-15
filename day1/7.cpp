
#include <iostream>
#include <vector>
#include <climits>
#include <bits/stdc++.h>


using namespace std;

int diff(vector<int> &arr, int m) {
    int n = arr.size();
  
    sort(arr.begin(), arr.end());

    int mindiff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++) {
          
        int diff = arr[i + m - 1] - arr[i];
      
        if (diff < mindiff)
            mindiff = diff;
    }
    return mindiff;
}

int main() {
    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
      
    cout << diff(arr, m)<<endl;

    vector<int> arr2 = {7, 3, 2, 4, 9, 12, 56};
    int m2= 5;
      
    cout << diff(arr2, m2)<<endl;
    
    return 0;
}
