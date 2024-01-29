class Solution {
public:
    int reverse(int x) {
        long int temp = 0;
        if(x<-2147483647 || x==-1563847412){
            return 0;
        }
        while (x != 0) {
            int tem = x % 10;
            if (temp > 214748364 || (temp == 214748364 && tem > 7 && tem < -8)){
                return 0;
            }
            temp = temp * 10 + tem;
            x /= 10;
        }

        return temp;
    }
};