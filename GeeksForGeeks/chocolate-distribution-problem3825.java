//GeeksForGeekks - Chocolate Distribution Problem

import java.io.*;
import java.util.*;

class GfG {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            ArrayList<Integer> arr = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                arr.add(x);
            }
            int m = sc.nextInt();

            Solution ob = new Solution();

            System.out.println(ob.findMinDiff(arr, n, m));
        }

    }
}
// } Driver Code Ends

// User function Template for Java

class Solution {
    public long findMinDiff(ArrayList<Integer> a, int n, int m) {
        // your code here
        // 1 3 4 7 9 9 12 56

        int i, min = 0, max = 0;
        int b = 1000000, c = 0;
        int j = 1;

        Collections.sort(a);

        min = a.get(0);
        max = a.get(m - 1);
        i = m;
        b = max - min;
        while (i < n) {

            min = a.get(j);
            max = a.get(i);

            if (b > (max - min)) {
                b = max - min;
            }
            i++;
            j++;
        }

        return b;
    }
}