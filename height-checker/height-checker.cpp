class Solution {
public:
    int heightChecker(vector<int>& heights) {
    int n=heights.size();
    int expected[n];
    for (int i = 0; i<n;++i)
    {
        expected[i] = heights[i];
    }
    int c = 0;
    sort(expected, expected + n);
    for (int i= 0; i< n; i++)
    {
        if (heights[i] != expected[i])
        {
            c++;
        }
    }
    return c;
    }
};