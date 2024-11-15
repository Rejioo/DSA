//HEADERS

#include <iostream>
#include <vector>
#include <climits>



using namespace std;

int search(vector<int>& arr, int target) {
  
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] >= arr[low]) {
          
            if (target >= arr[low] && target < arr[mid])
                high = mid - 1;
          
            else
                low = mid + 1;
        }
      
        else {
          
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;
          
            else
                high = mid - 1;
        }
    }

    return -1; 
}
int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target=7 ;
    int result1 = search(arr, target);
    cout << result1 << endl;
}
