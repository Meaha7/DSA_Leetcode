void dfs(int s, vector<int> g[], bool vis[])
{   
    if(vis[s]) return;
    
    cout<<s<<" ";
    vis[s]=true;
    if(g[s].size()==0) return;

    for(int i=0;i<g[s].size();i++){
        dfs(g[s][i],g,vis);
    }
}