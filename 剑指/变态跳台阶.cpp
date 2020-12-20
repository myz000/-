class Solution {
public:
    int F[100]={};
    int jumpFloorII(int number) {
        if(number==0)return 1;
        if(number==1)return 1;
        F[0]=1;
        F[1]=1;
        for(int i=2;i<=number;i++)F[i]=2*F[i-1];
        return F[number];
    }
};