class Solution {
    public void swap(int[] a, int i, int j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    public void reverse(int[] a, int i, int j)
    {
        while(i<j)
        {
            swap(a,i,j);
            i++;
            j--;
        }
    }
    public void nextPermutation(int[] a) {
        if(a==null || a.length<=1)
            return;
        int i=a.length-2;
        while(i>=0 && a[i]>=a[i+1])
            i--;
        if(i>=0)
        {
            int j=a.length-1;
            while(a[j]<=a[i])
                j--;
            swap(a,i,j);
        }
        reverse(a,i+1,a.length-1);
    }
}