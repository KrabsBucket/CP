class Solution {
public:
    int minLights(vector<int>& lights) {
        int l = 0;
        int c = 0;
        int k = 0;
        int t = 0;
        for (int i = 0; i < lights.size(); i++)
        {
            t--;
            if (lights[i] != 0 )
            {
                if (i - lights[i] <= 0 && i+lights[i] >= lights.size()-1)
                {
                    return 0;
                }
            }
            if (lights[i] == 0 && t < 0)
            {
                l++;
            }
            else if (lights[i] != 0)
            {
                c = l - lights[i];
                if (c > 0)
                {
                    c+=2;
                    c/=3;
                    k += c;
                }
                l = 0;
                t = lights[i];
            }
        }

        if (l == lights.size())
        {
            return (lights.size()+2)/3;
        }
        else
        {
        return (max(0, k+(l+2)/3));
        }

    }
};
