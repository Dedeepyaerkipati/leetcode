class Solution {
public:
    int minimumDeletions(string s) {
        int b_count=0;
        int  ans=0;
        int c=0;
        for(char c:s)
        {
            if(c=='b')
            {
                b_count++;
            }
            else
            {
                ans=min(ans+=(c=='a'),b_count);
            }
        }
        return ans;
        
    }
};
