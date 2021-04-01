#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define NINF -9999999

int dp[1005][2005];
int n;
int valor[1005];
int pesos[1005];

int calc(int i, int peso)
{
	if (i == n) return 0;
	if (peso == 0) return 0;
	if (peso < 0) return NINF;
	
	int &ans = dp[i][peso];
	
	if (ans == -1)
		ans = max(calc(i + 1, peso), valor[i] + calc(i, peso - pesos[i]));
	return ans;
}

int main()
{
	int pmax;
	while(cin >> n >> pmax)
	{	
		for (int i = 0 ; i < n ; ++i)
			cin >> pesos[i] >> valor[i];
		
		memset(dp, -1, sizeof dp);
	
		cout << calc(0, pmax) << '\n';
	}
}