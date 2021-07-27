class Solution {
public:
 int maximumWealth(vector<vector<int>>& accounts) {

int max = INT_MIN;

for(auto cust : accounts)
{
int sum = 0;

for(auto c : cust)
sum += c;

if(sum > max)
max = sum;
}
return max;
}
};