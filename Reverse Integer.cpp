class Solution {
public:
    int reverse(int x) {
        long long int r,n, reverse;
        n=10;
        reverse = 0;

        while(x)
        {
            r=x%10;
            x /= 10;
            reverse = reverse*n + r;
        }

        if(reverse>=2147483647 || reverse<= -2147483648)
            return 0;
        return reverse;

    }
};
