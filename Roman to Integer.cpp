class Solution {
public:
    int romanToInt(string s) {
        map<char, int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;

        int Int = m[s[s.size()-1]];
        int temp = m[s[s.size()-1]];
        for(int i = s.size()-2 ;i>=0 ;i--)
        {
            if(temp > m[s[i]])
            {
                Int -= m[s[i]];
            }
            else
            {
                Int += m[s[i]];
                temp = m[s[i]];
            }

        }

        return Int;

    }
};
