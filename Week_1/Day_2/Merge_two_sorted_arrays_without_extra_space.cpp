class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
        
        
        
        // for(int i=0;i<m;i++)
        // {
        //     if(nums1[i]>nums2[0])
        //     {
        //         swap(nums1[i], nums2[0]);
        //         //sort(nums2.begin(), nums2.end());
        //         int f=nums2[0];
        //         int k;
        //         for(k=1;k<n&&nums2[k]<f;k++)
        //         {
        //             nums2[k-1]=nums2[k];
        //         }
        //         nums2[k-1]=f;
        //     }
        // }
//         int i,j,g=m+n;
//         for(g=nextgap(g);g>0;g=nextgap(g))
//         {
//             for(i=0;i+g<n;i++)
//                 if(nums1[i]>nums1[i+g])
//                     swap(nums1[i], nums1[i+g]);
                
//             for(j=g>n?g-n:0; j<n&&j<m;i++,j++)
//                 if(nums1[i]>nums2[j])
//                     swap(nums1[i], nums2[j]);
            
//             if(j<m)
//             {
//                 for(j=0;j+g<m;j++)
//                     if(nums2[j]>nums2[j+g])
//                         swap(nums2[j], nums2[j+g]);
//             }
//         }
        
        
    }
};