/* Add descricao
 * Status: Tested on https://codeforces.com/gym/102028/problem/L and https://judge.yosupo.jp/problem/enumerate_triangles
 * Usage:
 * adj[i] -> todos os vizinhos (grafo nao direcionado)
 * g[i] -> vizinhos de i tal que deg[i]>deg[j] ou deg[i] == deg[j] e i<j
 * deg[i] -> grau
 */
 // int ok(int i,int j){return deg[i]==deg[j]?i<j:deg[i]>deg[j];}
 // if(ok(i,j))g[i].pb(j);else g[j].pb(i);
 
 for(int i=0;i<n;i++){


	// Quadrados:
	for(int to1 : g[i]){
		cnt[to1]=0;
		for(int to2 : adj[to1]){
			cnt[to2]=0;
		}
	}
	for(int to1 : g[i]){
		for(int to2 : adj[to1])if(id[i]<id[to2]){
			res+=cnt[to2]; // qtd de quadrados
			cnt[to2]++;
			if(res>=M)res-=M;
		}
	}
}
