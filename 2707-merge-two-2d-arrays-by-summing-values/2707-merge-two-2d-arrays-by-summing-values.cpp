class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        const int n1=nums1.size(), n2=nums2.size();
        vector<vector<int>> ans;
        for(int i=0, j=0; i<n1|| j<n2; ){
            int id1=(i==n1)?2000:nums1[i][0], id2=(j==n2)?2000:nums2[j][0];
            int x=(i==n1)?0:nums1[i][1], y=(j==n2)?0:nums2[j][1];
            bool i12=id1<=id2, i21=id1>=id2;
            int id=(i12)?id1:id2, z=(i12)*x+(i21)*y;
            ans.push_back({id, z});
            i+=i12, j+=i21;
        }
        return ans;
    }
};