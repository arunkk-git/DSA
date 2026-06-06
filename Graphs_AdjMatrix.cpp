/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::cout<<"Graphs \n";
    cout<<" Enter num of Nodes(n) , Edges(e)";
    int n,e;
    cin>>n>>e;
    cout <<"Node = "<<n << " Edges = "<<e;
      vector<vector<int>> GRAPH(n+1, vector<int>(n + 1,false)); 

    for(int i = 0; i < e ; i++){
        int n1, n2,n3;
        cin >> n1>>n2>>n3;
        GRAPH[n1][n2] = n3;
        GRAPH[n2][n1] = n3;
    }
    //cout<< "Print \n";
    for (auto  row : GRAPH){
        cout <<endl;
        //cout<< "row "<<row.size();
        for(auto col : row){
           // cout << col << " " ;
        }
    }
    for ( int i =0 ; i< n ; i++){
        cout <<endl;
            for (int j =0 ; j < n ; j++){
                if(i == 0)
                    cout << j << "  | " ;
                else if(i > 0 && j == 0)
                    cout <<  i  << "  | " ;
                else
                   cout << GRAPH[i][j] << "  | "  ;
                }
    }

    return 0;
}