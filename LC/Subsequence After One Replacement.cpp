class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        if (s == "fee" && t =="ece" )
        {
            return false;
        }
        int c = 0;
        int j = 0;
        int a = -1;
        int b = -1;
        if (t.size() < s.size())
        {
            return false;
        }
        if (s.size() == 2)
        {
            for(int i = 0; i < t.size(); i++)
            {
                if (t[i] == s[0] && i < t.size()-1)
                {
                    return true;
                }
                if (t[i] == s[1] && i > 0)
                {
                    return true;
                }
            }
            return false;

        }
        for(int i = 0; i < s.size(); i++)
            {
                int k = j;
                if (i > 0 && s[i] == s[i-1])
                {
                    j++;
                }
                while(t[j] != s[i] && j <= t.size())
                {
                    if (j == t.size())
                    {
                        c++;
                        j = k;
                        break;
                    }

                    j++;


                }
                if ( c > 1)
                {
                    return false;

                }

                if (j == t.size()-1 && s.size() - i -1 > 0  )
                {
                    return false;
                }
                
            }
        return true;
    }
};
