#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph                           
{
	private: 
		int v;
		std::vector<int> *adj;
		
	public:
			
		Graph(int v); 
		void add_edge(int v, int w);
		void BFS();

};


Graph::Graph(int v) {
		this->v = v;
		adj = new std::vector<int> [v];
		}

void Graph::add_edge(int v, int w){
	adj[v].push_back(w);
}


void Graph::BFS(int s){
	bool *visited = new bool[v];
	for (int i = 0; i < v; ++i)
	{
		visited[i] = false;
	}

	std::vector<int> q;

	visited[s] = true;
	q.push_back(s);

	std::vector<int>::iterator i;

	while(!q.empty()){
		s = q.front();
		cout << s << " ";
		q.pop_front();


		for (int i = adj[s].begin(); i! =adj[s].end(); ++i)
		{
			if(!visited[*i])
			{
				visited[*i] = true;
				q.push_back(*i);
			}		
		}
	}
}

int main()
{
	int edges;
	int x,y;
	cin >> edges;
	Graph g(4);
	for (int i = 0; i < edges; ++i)
	{
		cin >> x >> y;
		g.add_edge(x,y);
	}
//	
	cout << "The Traversal is : " << '\n';
	g.BFS(2);
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











