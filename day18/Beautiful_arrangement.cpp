class Solution {
public:
    int count=0;
    int countArrangement(int n) {
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=i+1;
        permute(a,0,n);
    return count;
    }
        void swap(int a[],int i,int j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    void permute(int a[],int k,int n)
    {
        if(k==n)
        count++;
        for(int i=k;i<n;i++)
        {
            swap(a,i,k);
            if(a[k]%(k+1)==0||(k+1)%a[k]==0)
                permute(a,k+1,n);
            swap(a,i,k);
        }

    }
};