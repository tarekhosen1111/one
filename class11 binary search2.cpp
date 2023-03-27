class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>vc;
        for(auto u:st)
        {
            int tar=u;
            int l=0,h=nums2.size()-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(tar==nums2[mid]){
                    vc.push_back(tar);
                    break;
                }
                if(tar>nums2[mid]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return vc;
    }
};
