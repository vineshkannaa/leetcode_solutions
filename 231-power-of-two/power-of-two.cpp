class Solution {
public:
    bool isPowerOfTwo(int x) {
        int temp=0;
        if(x<=0){
            return false;
        }else if(x==1){
            return true;
        }
        else if(x%2!=0){
            return false;
        }else{
            do{
                temp+=x%2;
                x/=2;
            }while(x!=1);
            if(temp>0){
                return false;
            }else{
                return true;
            }
        }
    }
};