class Solution {
public:
    int specialArray(vector<int>& nums) {
     int c=1;
        int mx=0;
        sort(nums.begin(),nums.end());
        while(c<=nums.size())
        {
            int count=0;
            for(auto i:nums)
            {
                if(i>=c)count++;
            }
            if(count ==c)
                mx=max(mx,count);
            c++;
        }
        if(mx==0)return -1;
        return mx;
    }
};
