class Solution {
public:
    char findTheDifference(string s, string t) {
        int s1=0,s2=0;
        for(int i=0;i<t.size();i++)
        {
            if(i<s.size())
            {
                s1+=s[i];
            }
            s2+=t[i];
            
        }
        return (char)(s2-s1);
    }
};