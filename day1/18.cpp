#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> nge(n, -1);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break;
            }
        }
    }

    return nge;
}

int main() {
    vector<int> arr = {13 , 7, 6 , 12};
    vector<int> result = nextGreaterElement(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << arr[i] << "\t ->\t " << result[i] << endl;
    }
    return 0;
}

