class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size = matrix.size();
       for(int i=0;i<size;i++)
       {
        int high = matrix[i].size()-1;
        int low =0;
        if(target >= matrix[i][low] && target <= matrix[i][high])
        {
            while(low<=high)
            {
                int mid = (low+high)/2;
                if(matrix[i][mid]==target)
                    return true;
                else if(matrix[i][mid]>target)
                    high=mid-1;
                else
                    low=mid+1;               
            }
        }

       }
       return false;

}
    };
