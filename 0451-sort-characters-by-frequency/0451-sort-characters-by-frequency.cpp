class Solution {
public:
    string frequencySort(string s) {
      map<char,int>mp;
       for(char x:s)
       {
        mp[x]++;
       }
       vector<pair<char,int>>v(mp.begin(),mp.end());
       sort(v.begin(), v.end(), [](auto a, auto b) {
            return a.second > b.second;
        });

        // Build answer
        string ans = "";

        for(auto x : v) {
            ans += string(x.second, x.first);
        }

        return ans;
  }
}; 