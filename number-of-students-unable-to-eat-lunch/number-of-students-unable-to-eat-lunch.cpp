class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sa) {
    int n= 0;
    vector<int>::iterator i = s.begin();
    vector<int>::iterator j = sa.begin();
    while (i != s.end() && j != sa.end()&&n<=10000)
    {
        if (*i == *j)
        {
            s.erase(s.begin());
            sa.erase(sa.begin());
        }
        else
        {
            rotate(s.begin(), s.begin() + 1, s.end());
        }
        n++;
    }
    return s.size();
    }  
};