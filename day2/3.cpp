#include <bits/stdc++.h>
using namespace std;

bool eq(vector<int>& arr1, vector<int>& arr2)
{
    int N = arr1.size(), M = arr2.size();
    if (N != M)
        return false;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for (int i = 0; i < N; i++)
        if (arr1[i] != arr2[i])
            return false;

    return true;
}

int main()
{
    vector<int> arr1 = { 3, 5, 2, 5, 2 };
    vector<int> arr2 = { 2, 3, 5, 5, 2 };

    if (eq(arr1, arr2))
        cout << "True"<<endl;
    else
        cout << "False";
    return 0;
}

