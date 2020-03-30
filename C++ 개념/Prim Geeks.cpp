
#include <iostream>
#define INF 1000L
using namespace std;

int get_min_Index(int distance[], bool visited[], int N){
	int min = INF, min_Index;
	for(int i = 0 ; i < N; i++)
	{
		if(!visited[i] && distance[i] < min)
		{
			min = distance[i], min_Index = i;
		}
	 } 
	 return min_Index;
}

int printMST(int parent[], int N, int graph[][5]){
	cout << "Edge Weight!" << endl;
	for(int i = 1; i < N; i++)
	{
		cout << parent[i] << " to " << i << " weight : " << graph[i][parent[i]];
	}
}

void primMST(int graph[][5])
{
	int N = 5;
	int parent[N];
	int distance[N];
	bool visited[N] = {false};
	
	for(int i = 0 ; i < N ; i++)
	{
		distance[i] = INF;
	}
	distance[0] = 0;
	parent[0] = -1; //First Node is always root of MST
	
	for(int count = 0 ; count < N-1 ; count++)
	{
		int u = get_min_Index(distance, visited, N);
		visited[u] = true;
		
		for(int i = 0; i < N; i++)
		{
			if(!graph[u][i] && !distance[i] && graph[u][i] < distance[i])
			{
			parent[i] = u;
			distance[i] = graph[u][i];
			}
			
		}
		
	}
	printMST(parent, N, graph);
}


int main(void)
{
	int N = 5;
	
	int arr[N][N] = {
						{0, 2, 0, 6, 0}, 
						{2, 0, 3, 8 ,5},
						{0, 3, 0 ,0, 7},
						{6, 8, 0, 0, 9},
						{0, 5, 7, 9, 0}
					};
					
	primMST(arr);					
}
