class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n=matrix.size();
	    int i,j,k;
	      for(int i = 0; i < n; i++){
	            for(int j = 0; j < n; j++){
	                if(matrix[i][j] == -1)
	                matrix[i][j] = INT_MAX;
	             }
	       }
	    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (matrix[i][j] > (matrix[i][k] + matrix[k][j])
                    && (matrix[k][j] != INT_MAX
                        && matrix[i][k] != INT_MAX))
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
      for(int i = 0; i < n; i++){
	            for(int j = 0; j < n; j++){
	                if(matrix[i][j] == INT_MAX)
	                matrix[i][j] = -1;
	             }
	       }
	}
};