//https://leetcode.com/problems/is-subsequence/?envType=study-plan&id=level-1
//code:
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,m=s.length(),n=t.length();
        string str;
        while(i<m && j<n){
            if(s[i]==t[j]){
                str.push_back(t[j]);
                i++;
            }
            j++;
        }
        if(s==str) return true;
        return false;

    }
};
