#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool bq,br;
    int number_vertex,number_edges,a,b,vertex;
    cout<< "Enter vertex number and edges number with space :";
    cin>>number_vertex>>number_edges;
    vector<int> v[number_vertex];
    for(int i=0; i<number_edges; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout<< "Enter source vertex or node :";
    cin>>vertex;
    vector<int> qqq;
    vector<int> result;
    qqq.push_back(vertex);
    while(!qqq.empty())
    {
        result.push_back(qqq.front());
        vertex=qqq.front();
        qqq.erase(qqq.begin());
        for(auto i : v[vertex])
        {
            bq=false;
            br=false;
            for(auto j : qqq)
            {
                if(j==i)
                {
                    bq=true;
                    break;
                }
            }
            for(auto j : result)
            {
                if(j==i)
                {
                    br=true;
                    break;
                }
            }
            if(bq==false and br==false)
                qqq.push_back(i);
        }
    }
    cout<< "BFS is :";
    for(auto i : result) cout<<i<< " ";
    cout<<endl;
    return 0;
}
