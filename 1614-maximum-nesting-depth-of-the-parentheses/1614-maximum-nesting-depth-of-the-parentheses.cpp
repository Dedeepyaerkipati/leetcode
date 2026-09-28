class Solution {
public:
    int maxDepth(string s) {
       
        int ans=0,depth=0;
        for(char c:s)
        {
            if(c=='(')
            {
                ans++;
                depth=max(depth,ans);
            }
            else if(c==')')
            {
                ans--;
            }
        }
        return depth;

        
    }
};