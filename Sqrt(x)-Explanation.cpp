Sqrt(x) - "https://leetcode.com/problems/sqrtx/"
EXPLANATION 


#include <bits/stdc++.h>
using namespace std;

int binarySearch(int x)
{
    int left = 1 , right = x / 2 , mid , ans;
    long temp;
    
    while(left <= right)
    {
        cout<<"\n\nleft : "<<left<<"\tright : "<<right;
        
        mid = (left + (right - left) / 2);
        cout<<"\n\nmid : "<<mid;
        
        temp = (long)mid * (long)mid;
        cout<<"\ntemp : "<<temp;
        
        //mid * mid can be large, so use long
        if(temp == x)
            return mid;
            
        if(temp < x)
        {
            ans = mid , left = mid + 1;
            cout<<"\nans : "<<ans;
            cout<<"\nleft : "<<left;
        }
        
        else
        {
            right = mid - 1;
            cout<<"\nright : "<<right;
        }
    }
    cout<<"\n\nans : "<<ans<<"\n\n";
    return ans;
}

int mySqrt(int x)
{
    if(x <= 1)
        return x;
    return binarySearch(x);
}


int main()
{
    int x = 7;
    cout << mySqrt(x) << '\n';
}
