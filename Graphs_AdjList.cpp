#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::cout<<"Graphs \n";
	cout<< "Enter the Nodes (n)  Edges (e)";
	int n,e;
	cin>> n >>e;
	cout <<"\nNum Of Nodes = "<<n <<" Edges = "<<e<<"\n";
	vector<vector<std::pair<int, int>>> GRAPH (n+1);
	for (int i = 0; i < e; i++) {
		int n1, n2,n3;
		cin >>n1 >>n2 >>n3 ;
		GRAPH[n1].push_back({n2,n3});
		GRAPH[n2].push_back({n1,n3});
	}
	for (int node = 1; node <= n; node++) {
		cout << node << " : ";
		for (auto adjacent : GRAPH[node])
			cout << adjacent.first <<" -> " << adjacent.second<< ", ";
		cout << endl;
	}

	return 0;
}

/*

InPut:
5 9
1 2 3
1 4 5
1 5 4
2 3 3
2 4 1
2 5 7
3 4 9
3 5 4 
4 5 5

OutPut:

Graphs 
Enter the Nodes (n)  Edges (e)
Num Of Nodes = 5 Edges = 9
1 : 2 -> 3, 4 -> 5, 5 -> 4, 
2 : 1 -> 3, 3 -> 3, 4 -> 1, 5 -> 7, 
3 : 2 -> 3, 4 -> 9, 5 -> 4, 
4 : 1 -> 5, 2 -> 1, 3 -> 9, 5 -> 5, 
5 : 1 -> 4, 2 -> 7, 3 -> 4, 4 -> 5, 
*/