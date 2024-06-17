#include<bits/stdc++.h>

using namespace std;

int n, ans, a[25][25];

void dfs(int u, int cnt){
	for(int i = 0; i < n; i++){
		if(a[u][i] == 1){
			a[u][i] = a[i][u] = 0;
			dfs(i, cnt + 1);
			a[u][i] = a[i][u] = 1;
		}
	}
	ans = max(ans, cnt);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m; ans = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				a[i][j] = 0;
			}
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x][y] = a[y][x] = 1;
		}
		for(int i = 0; i < n; i++){
			dfs(i, 0);
		}
		cout << ans << endl;
	}
}
