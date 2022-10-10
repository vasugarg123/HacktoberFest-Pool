class Solution {
    int [][]dp;
    public int maxProfit(int k, int[] prices) {
        int n = prices.length;
        dp = new int[n+1][k+1];
        for(int i=0; i<= n ;i++){
            Arrays.fill(dp[i] , -1);            
        }
        
        help(0, n , k , dp , prices);
        if(dp[0][k] == -1) return 0;
        return dp[0][k];
    }
    
    private int help(int i , int n , int k , int [][]dp , int []prices){
        
        if(i == n || k == 0 )return 0;
        if(dp[i][k] != -1) return dp[i][k];
        
        int ans = 0;
        
             
        for(int j=i+1; j < n; j++){
            int tem = (prices[j] - prices[i]) + help(j + 1 , n , k-1 , dp , prices );
            ans = Math.max(tem , ans);
        }
        
        ans = Math.max(ans , help(i+1 , n, k , dp , prices));
        
        return dp[i][k] = ans;
        
    }
}
