
#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int maxArea(vector<int>& height) {
        int area = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            area = max(area, (right - left) * min(height[left], height[right]));

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return area;        
    };


int main(){
	vector<int> height= {1,8,6,2,5,4,8,3,7};
	int res=maxArea(height);
	cout<<res<<endl;

}
