class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int x) {
        int max=INT_MIN;
        int n=candies.size();
        for(int i=0;i<n;i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        vector<bool>result;
        for(int i=0;i<n;i++){
            if(candies[i]+x >= max){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};
