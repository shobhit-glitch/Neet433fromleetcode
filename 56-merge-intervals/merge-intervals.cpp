class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        sort(intervals.begin(),intervals.end());
        // for(int i=0;i<intervals.size();i++){
        //     if(i!=(intervals.size()-1) &&  intervals[i][1]>=intervals[i+1][0] ){
        //         int m=min(intervals[i][0],intervals[i+1][0]);
        //         int n=max(intervals[i+1][1],intervals[i][1]);
        //         v.push_back({m,n});
        //         i++;
               
        //     }
        //     else{
        //         v.push_back({intervals[i][0],intervals[i][1]});
        //     }
            
        // }
        int i = 0;
        while (i < intervals.size()) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            
            // Check if the current interval overlaps with the next interval(s)
            while (i < intervals.size() - 1 && end >= intervals[i + 1][0]) {
                end = max(end, intervals[i + 1][1]);
                i++;
            }
            
            v.push_back({start, end});
            i++;
        }
        return v;
    }
};