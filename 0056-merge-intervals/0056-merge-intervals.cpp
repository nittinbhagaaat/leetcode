class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        vector<vector<int>> r;
        sort(i.begin(), i.end());

        r.push_back(i[0]);
        for(int x = 1; x < i.size(); x++){
            if(r.back()[1] >= i[x][0]){
                r.back()[1] = max(r.back()[1], i[x][1]);
            } else {
                r.push_back(i[x]);
            }
        }
        return r;
    }
};