# hanoi
#include <stdio.h>
void towerofhanoi(int num,char frompeg,char topeg,char auxpeg){
    if(num==1){
        return;
    }
    towerofhanoi(num-1,frompeg,auxpeg,topeg);
    printf("\nMoving disc %d from peg %c to peg %c",num,frompeg,topeg);
    towerofhanoi(num-1,topeg,frompeg,auxpeg);
}
int main(){
    int num;
    scanf("%d",&num
    return 0;
}
