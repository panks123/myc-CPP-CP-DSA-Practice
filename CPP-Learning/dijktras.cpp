#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<limits.h>

using namespace std;
struct Edge{
   int S,D,W;
};

int findMinVertex(unordered_map<int,int> &dist,unordered_map<int, int> &visited, vector<int> &v, int size)
{
    int min = -1;
    for(int ver : v)
    {
        if(visited[ver]==0 && (min == -1 || dist[ver] < dist[min]))
           {
               min = ver;

           }

    }
    return min;

}
int Dijkstras(Edge edge[] ,int M, unordered_map<int, int> &visited, unordered_map<int,int>& dist)
{
   int V = dist.size();
   vector<int> v;
   unordered_map<int, int>:: iterator itr;
   for(itr = dist.begin(); itr != dist.end(); itr++)
    v.push_back(itr->first);

   for(int i=0; i< V-1; i++)
   {

       int minVertex = findMinVertex(dist,visited,v,V);
       visited[minVertex] = 1;
       for(int j=0 ; j<M; j++)
       {
           struct Edge E  = edge[j];
           if(minVertex == E.S && visited[E.D]==0 )
           {
               if(E.W + dist[minVertex] < dist[E.D])
                  dist[E.D] = E.W + dist[minVertex];

           }
           if(minVertex == E.D && visited[E.S]==0)
           {
               if(E.W + dist[minVertex] < dist[E.S])
                   dist[E.S] = E.W + dist[minVertex];
           }
       }

   }




}

int main(){
    int M,A,B;
    cin>> M >> A>> B;
    struct Edge edge[M];
    unordered_map<int, int> visited;
    unordered_map<int, int> dist;
    for(int i=0 ;i< M; i++){
        cin>> edge[i].S >> edge[i].W >> edge[i].D;
        visited[edge[i].S] =0;
        visited[edge[i].D] =0;
        dist[edge[i].S] = 32767;
        dist[edge[i].D] = 32767;
    }

    dist[A] = 0;
    Dijkstras(edge,M,visited, dist);
    if(dist[B] != 32767 && dist[B] !=0)
        cout<< "YES" <<"\n" << dist[B];
    else
        cout<< "NO";
}
