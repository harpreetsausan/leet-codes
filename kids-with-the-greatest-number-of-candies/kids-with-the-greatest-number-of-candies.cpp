class Solution {

public:

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int max=candies[0],i;

        int n = candies.size();

        for(i=0;i<n;i++)

        {

            if(candies[i]>max)

                max=candies[i];

        }

        vector<bool> result(n);

        for(i=0;i<n;i++)

        {

            result[i]=(candies[i] + extraCandies >= max);

        }

        return result;

    }

};

