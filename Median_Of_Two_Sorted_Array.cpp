
class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> p;
        float median;
        
        for(int i=0; i<nums1.size(); i++)
        {
            p.push_back(nums1[i]);
        }
        
        for(int j=0; j<nums2.size(); j++)
        {
            p.push_back(nums2[j]);
        }
            
        sort(p.begin(), p.end());
            
        if(p.size() % 2 != 0)
        {
            median = p[p.size()/2];
        }
        else
        {
            median = (p[p.size()/2] + p[p.size()/2 - 1])/2.0;
        }   
        
        return median;   
    }
};
