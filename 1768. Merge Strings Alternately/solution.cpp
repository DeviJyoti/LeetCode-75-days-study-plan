class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        
        string ans;
        int c;
        if(n>m){
        c=n;
        }else{
           c=m;
       }
        for(int i=0;i<c;i++){

            if(i>=n){
                ans+=word2[i];
            }else if(i>=m){
                ans+=word1[i];
            }else{
                ans +=word1[i];
                ans +=word2[i];
            }
        }
        return ans;
    }
};
