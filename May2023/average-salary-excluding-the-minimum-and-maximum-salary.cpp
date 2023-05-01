class Solution {
public:
    double average(vector<int>& salary) {

        double min = DBL_MAX;
        double max = DBL_MIN;
        double sum = 0;

        for(auto x: salary){
            sum += x;

            if(x < min){
                min = x;
            }

            if(x > max){
                max = x;
            }
        }

        sum = sum - min - max;
        return sum/(salary.size() - 2);
    }
};
