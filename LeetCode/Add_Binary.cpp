class Solution {
public:
    string addBinary(string a, string b) {
        int la = a.size();
        int lb = b.size();
        
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        string res = "";
        int c = 0;
        int i = 0;
        
        while(c || i<la || i<lb){
            int b1 = i<la ? a[i]-'0' : 0;
            int b2 = i<lb ? b[i]-'0' : 0;
            
            int curr = b1+b2+c;
            c =curr/2;
            curr %= 2;
            res = to_string(curr) + res;
            i++;
        }
        return res;
    }
};