void bfs(int s, vector<int> adj[], bool vis[])
{
    //cout<<adj[2].size();
    for(int i=0;i<sizeof(vis)/sizeof(vis[0]);i++){
        vis[i]=0;
    }
    queue<int> q;
    q.push(s);

    while(q.size()!=0){
        
        for(int i=0;i<adj[q.front()].size();i++) {
            if((vis[adj[q.front()][i]])==true) continue;
            q.push(adj[q.front()][i]);
        }
        if(!vis[q.front()]) cout<<q.front()<<" ";
        vis[q.front()]=true;
        q.pop();
    }
}