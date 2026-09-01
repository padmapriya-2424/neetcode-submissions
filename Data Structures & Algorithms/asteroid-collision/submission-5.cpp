class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i:asteroids)
        {
            if(i>0) st.push(i);
            else if(st.empty()||st.top()<0) st.push(i);
            else
            {
                while(!st.empty())
                {
                    int x=st.top();
                    if(x<0){
                        st.push(i);
                        break;
                    }
                    if(x==abs(i))
                    {
                        st.pop();
                        break;
                    }
                    else if(x>abs(i))
                    {
                        break;
                    }
                    else if(x<abs(i))
                    {
                        st.pop();
                    }
                    if(st.empty())
                    {
                        st.push(i);
                        break;
                    }
                }
            }
        }
        int n=st.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--)
        {
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};