/* Live to DIE || DIE to Live  */
 /* for (auto &i : a) cin >> i; */
#include <bits/stdc++.h>
using namespace std;
// Typedef ->>
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
// Define ->>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define MAX 200

int multiply(int x, int res[], int res_size);


void factorial(int n)
{
	int result[MAX];

	
	result[0] = 1;
	int temp_size = 1;

	
	for (int x = 2; x <= n; x++)
		temp_size = multiply(x, result, temp_size);

	
	for (int i = temp_size - 1; i >= 0; i--)
		cout << result[i];
}


int multiply(int x, int result[], int temp_size)
{
	int carry = 0; 
	for (int i = 0; i < temp_size; i++) {
		int prod = result[i] * x + carry;

		
		result[i] = prod % 10;

	
		carry = prod / 10;
	}

	
	while (carry) {
		result[temp_size] = carry % 10;
		carry = carry / 10;
		temp_size++;
	}
	return temp_size;
}

void solve()
{
    int n ;
    cin>>n;
    factorial(n);
}
int main()
{
    fast;
    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}









