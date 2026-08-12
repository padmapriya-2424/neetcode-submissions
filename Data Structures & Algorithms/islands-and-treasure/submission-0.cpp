class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        int l=0;
        
        while(!q.empty())
        {
            vector<pair<int,int>> cur;
            int a=q.size();
            l++;
            for(int i=0;i<a;i++)
            {
                pair<int,int> x=q.front();
                cur.push_back(x);
                q.pop();
            }
            for(int i=0;i<a;i++)
            {
                pair<int,int> t=cur[i];
                int x=t.first;
                int y=t.second;
                if(x+1<n && y<m && x+1>=0 && y>=0 && vis[x+1][y]!=1)
                {
                    if(grid[x+1][y]!=-1)
                    {
                        grid[x+1][y]=l;
                        vis[x+1][y]=1;
                        q.push({x+1,y});
                    }
                }
                if(x<n && y+1<m && x>=0 && y+1>=0 && vis[x][y+1]!=1)
                {
                    if(grid[x][y+1]!=-1)
                    {
                        grid[x][y+1]=l;
                        vis[x][y+1]=1;
                        q.push({x,y+1});
                    }
                }
                if(x-1<n && y<m && x-1>=0 && y>=0 && vis[x-1][y]!=1)
                {
                    if(grid[x-1][y]!=-1)
                    {
                        grid[x-1][y]=l;
                        vis[x-1][y]=1;
                        q.push({x-1,y});
                    }
                }
                if(x<n && y-1<m && x>=0 && y-1>=0 && vis[x][y-1]!=1)
                {
                    if(grid[x][y-1]!=-1)
                    {
                        grid[x][y-1]=l;
                        vis[x][y-1]=1;
                        q.push({x,y-1});
                    }
                }
            }
        }
    }
};
