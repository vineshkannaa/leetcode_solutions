class Solution {
public:
    bool isPalindrome(int x) {
        long int temp=0;
        long int copy=x;
        do{
            temp*=10;
            temp+=(x%10);
            x/=10;
        }while(x!=0);
        if(temp==copy && copy>=0){
            return true;
        }else{
            return false;
        }
    }
};