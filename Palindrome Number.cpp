//#include<bits/stdc++.h>
//using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int p =x, r;
        int n =10;
        long long int reverse = 0;
        if (x <0) return false;
        while (x)
        {
            r = x%10;
            x /= 10;
            reverse = reverse *n +r;
        }

        if (reverse == p )
            return true;
        else return false;
    }
};

int main ()
{
    Solution obj;
    obj.isPalindrome(-121);
//    cout<<"1";

    return 0;
}
