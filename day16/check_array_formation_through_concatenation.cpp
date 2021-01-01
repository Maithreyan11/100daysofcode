class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int r;
        for(int i=0;i<pieces.size();i++)
        {
                for(int k=0;k<arr.size();k++)
                {
                    if(arr[k]==pieces[i][0])
                    { r=k;break;}
                }
            //cout<<r<<endl;
            if(r==arr.size())
                return false;
            for(int j=1;j<pieces[i].size();j++)
            {
                if(r+j<arr.size()&&arr[r+j]==pieces[i][j])
                    continue;
                else
                    return false;
            }
        }
        return true;
    }
};