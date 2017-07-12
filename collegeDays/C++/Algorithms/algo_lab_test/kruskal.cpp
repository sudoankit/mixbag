// sudoankit 
// Kruskal Algrithm - to find the MST of a graph

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define ll long long 

using namespace std;

const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;

pair<ll, pair<int,int> > p[MAX];

void initialize(){
	for (int i = 0; i < MAX; ++i)
	{
		id[i] = i;
	}
}

int root(int x){
	while(id[x] != x ){
		id[x] = id[id[x]];   // finds the root
		x = id[x];
	}
	return x;
}

void do_union(int x, int y){
	int p = root(x);
	int q = root(y);
	id[p] = id[q];

}

ll Kruskal(pair<ll, pair<int,int> > p[]){

	int x,y;

	ll cost, minCost = 0;

	for (int i = 0; i < edges; ++i)
	{
		x = p[i].second.first;
		y = p[i].second.second;
		cost = p[i].first;
	

	if (root(x) != root(y)) // check if loop exist or not.
	{
		minCost += cost;
		do_union(x,y);
	}
}

	return minCost;
}

int main(){
	int x,y;
	ll weight,cost,minCost;

	initialize();

	cin >> nodes >> edges;
	for (int i = 0; i < edges; ++i)
	{
		cin >> x >> y >> weight;
		p[i] = make_pair(weight,make_pair(x,y));
	}

	sort(p, p+edges);
	minCost = Kruskal(p);
	cout << minCost << '\n';
	for (int i = 0; i < edges; ++i)
	{
		cout << p[i].second.first << ' ';
		cout << p[i].second.second << '\n';
	}

}










