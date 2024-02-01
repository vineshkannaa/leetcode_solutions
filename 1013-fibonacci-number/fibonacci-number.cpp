class Solution {
public:
    int basefib(int x){
        if(x==0){
            return 0;
        }else if(x==1 || x==2){
            return 1;
        }else if(x<0){
            return 0;
        }else{
            return basefib(x-2)+basefib(x-1);
        }
    }
    int fib(int n) {
        if(n==1){
            return 1;
        }else{
            return basefib(n-1)+basefib(n-2);
        }
    }
};