
#include <iostream>
#include <vector>
#include <climits>


using namespace std;
#include <iostream>
#include <vector>
using namespace std;

int factorial(n)
{
    

    vector<long long> fact(n + 1);

    fact[0] = 1;

    for (int i = 1; i <= n; i++) {
        fact[i] = i * fact[i - 1];
    }

	
    return fact[n];
}

int main(){
	int n=5;
	int res=factorial(n);
	cout<<res<<endl;
}
