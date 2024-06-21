class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int returnvariable = 0;
        for(int i = 0; i < customers.size(); i++){
            if(grumpy[i] == 0){
                returnvariable += customers[i];
            }
        }
        return maxMinutes(customers, grumpy, minutes, returnvariable);
    }

    int maxMinutes(vector<int>& customers, vector<int>& grumpy, int minutes, int returnvariable){
        if(minutes == 0) return returnvariable;
        int returnable = 0;
        int maxsofar = 0;

        for(int i = 0; i <= customers.size() - minutes; i++){
            int tempa = 0;
            int tempb = 0;
            for(int j = 0; j < minutes; j++){
                if(grumpy[i + j] == 1) tempb += customers[i + j];
                tempa += customers[i + j];
            }

            if(maxsofar <= tempb){
                maxsofar = tempb;
                returnable = tempb;
            }
        }
        return returnvariable + returnable;
    }
};
