#include <bits/stdc++.h>
using namespace std;

bool triplets(vector<int>& arr, int sum)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {

        int l = i + 1;
        int r = n - 1; 

        while (l < r) {
            int curr = arr[i] + arr[l] + arr[r];
            if (curr == sum) {
                cout  << arr[i] <<", "
                    << arr[l] << ", " << arr[r]<<endl;
                return true;
            } else if (curr < sum)
                l++;
            else
                r--;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1,2,4,5,6  };
    int sum = 7;
    triplets(arr, sum);
    return 0;
}

