class Solution {
public:
    int minOperations(string s1, string s2) {
        {
            int c0 = 0;
            int c1 = 0;
            if (s1.size() == 1)
            {
                if (s1 != s2 && s1[0] == '1')
                {
                    return -1;
                }

            }
            for(int i = 0; i < s1.size(); i++)
            {
                if (s1[i] != s2[i])
                {
                    if (s1[i] == '0')
                    {
                        c0+=1;
                    }
                    else
                    {
                        c1 +=2;

                    }
                }
            }

            int c11 = 0;
            for(int i = 0; i < s1.size()-1 ; i++)
            {
                if (s1[i] == s1[i+1] && s1[i] == '1' && s1[i] != s2[i] && s1[i+1] != s2[i+1])
                {
                    c11++;
                    i++;
                }
            }

            return (c0+c1-3*c11);
        }
        
    }
};
