//@sudoankit
// depth first search @ dfs
// modified algo of GeeksforGeeks

#include<iostream>
#include<vector>
using namespace std;

class Graph                           
{
	private: 
		int v;
		std::vector<int> *adj;
		void helper_dfs(int v,bool visited[]);
	public:
			
		Graph(int v); 
		void add_edge(int v, int w);
		void dfs();

};


Graph::Graph(int v) {
		this->v = v;
		adj = new std::vector<int> [v];
		}

void Graph::add_edge(int v, int w){
	adj[v].push_back(w);
}

void Graph::helper_dfs(int v, bool visited[]){
	visited[v] = true;
	cout << " --> " << v;
	vector<int>::iterator i;
	for (i = adj[v].begin();  i  !=  adj[v].end(); ++i){
		if(!visited[*i]){
			helper_dfs(*i, visited);
			}
	}
}

void Graph::dfs(){
	bool * visited = new bool[v];
	for (int i = 0; i <v; ++i)
	{
		visited[i] = false;
	}

	for (int i = 0; i <v; i++){
        if (visited[i] == false)
            helper_dfs(i, visited);
		}

}

int main()
{
	int edges;
	int x,y;
	cin >> edges;
	Graph g(6);
	for (int i = 0; i < edges; ++i)
	{
		cin >> x >> y;
		g.add_edge(x,y);
	}
//	
	cout << "The Traversal is : " << '\n';
	g.dfs();
	return 0;
	//Graph g(4);
    //g.add_edge(0, 1);
    //g.add_edge(0, 2);
    //g.add_edge(1, 2);
    //g.add_edge(2, 0);
    //g.add_edge(2, 3);
    //g.add_edge(3, 3);
 //
    //cout << "Following is Depth First Traversal (starting from vertex 2) \n";
    //g.dfs(2);
}
