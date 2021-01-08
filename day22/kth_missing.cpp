class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt=0,j=0,r;
        for(int i=1;i<2000;i++)
        {
            if(j<arr.size()&&arr[j]==i)
                j++;
            else
                cnt++;
            if(cnt==k)
            {
                r=i;
                break;
            }
        }
        return r;
    }
};