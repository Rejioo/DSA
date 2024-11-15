#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	vector<vector<bool>> mat=	{{0, 0, 0, 1},
                                	{0, 1, 1, 1},
                                	{1, 1, 1, 1},
                                	{0, 0, 0, 0}};
	int maxc=0;
	int r = mat.size();
	int c = mat[0].size();
	int count=0;
	for (int i = 0 ; i<r;i++){
		for(int j=0;i<c;j++){
			if (mat[i][j]==1){
				c++;
			}

		}if(maxc>=count){
		maxc=count;
		count=0;
		}
	}

	cout<<maxc<<endl;
}
