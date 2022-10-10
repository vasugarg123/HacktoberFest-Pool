class Solution {
public:
    #define ll long long
    int longestSubsequence(string s, int k) {
        ll a = 0; 
        reverse( s.begin(), s.end());
        int i,d=0, n = s.size();
        for(i =0 ; i< n && i < 31; i++){
            if( s[i] == '1'){
                if( a + (1<<i) > k ){
                    d++;
                }
                else {
                    a+= (1<<i);
                }
            }
            
        }
        while( i< n){
            if(s[i] == '1'){
                d++;
            }
            i++;
        }  
        return (n-d);
    }
};
