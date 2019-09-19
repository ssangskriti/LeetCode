class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        long long int i=0, j,k;
        string s="";
        k = 1;

        if(strs.empty()) return s;
        else if (strs.size()==1) return strs[0];

        while(k)
        {

            for(j=0;j<strs.size()-1;j++)
            {
                if(i==strs[j].size() || i==strs[j+1].size())
                {
                    k = 0;
                    break;
                }

                string p,q;
                p = strs[j];
                q = strs[j+1];
                if(p[i]==q[i])
                {
                    if(j == strs.size()-2)
                    {
                        s.push_back(p[i]);
                    }

                }
                else if(p[i]!=q[i])
                {
                    k = 0;
                    break;
                }

            }

            i++;
        }
        return s;
    }
};
