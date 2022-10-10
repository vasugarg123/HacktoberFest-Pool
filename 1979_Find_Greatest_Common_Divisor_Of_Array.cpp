#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int gcd(int a,int b)
    {
        if (b!=0)
            return gcd(b,a%b);
        else
            return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=gcd(nums[n-1],nums[0]);
        return ans;
    }
};
int main()
{
	int n;
	cout<<"\nEnter number of elements in the array:";
	cin>>n;
	cout<<"\nEnter the elements of array:";
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin>>A[i];
	Solution s;
	int ans=s.findGCD(A);
	cout<<"\nThe greatest common divisor of array is: "<<ans;
	return 0;
}
