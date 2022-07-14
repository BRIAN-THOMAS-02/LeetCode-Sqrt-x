Sqrt(x) - "https://leetcode.com/problems/sqrtx/submissions/"
SUBMISSION 


class Solution 
{
public:
    int binarySearch(int x)
    {
        int left = 1 , right = x / 2 , mid , ans;
        long temp;

        while(left <= right)
        {
            mid = (left + (right - left) / 2);
            temp = (long)mid * (long)mid;

            if(temp == x)
                return mid;
            if(temp < x)
                ans = mid , left = mid + 1;
            else
                right = mid - 1;
        }
    return ans;
    }

    int mySqrt(int x)
    {
        if(x <= 1)
            return x;
        return binarySearch(x);
    }
};
