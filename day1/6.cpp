
#include <iostream>
#include <vector>
#include <climits>
#include <bits/stdc++.h>

using namespace std;


int trap(vector<int>& height){



	int left=0;
	int right=height.size()-1;
	int leftmax=height[left];
	int rightmax=height[right];
	int res=0;
	while (left<right){
	    if (leftmax<rightmax){
		left++;
		leftmax=max(leftmax,height[left]);
		res+=leftmax-height[left];
	    }else{
		right--;
		rightmax=max(rightmax,height[right]);
		res+=rightmax-height[right];
	    }
	}
	return res;
}
int main() {

	int n;
    	cout << "Enter the number of elements in the height array: ";
	cin >> n;

    	vector<int> height(n);
    	for (int i = 0; i < n; i++) {
    	cout << "Enter the height values: ";
		cin >> height[i];
	}
		cout<<trap(height)<<endl;
    
}
