#include<stdio.h>
int main()
{
	int n, t1=2,t2=3,t3=4,tn,i;
	n = 6;
	printf("Enter tribonacci(0): ");
    scanf("%d", &t1);
    printf("Enter tribonacci(1): ");
    scanf("%d", &t2);
    printf("Enter tribonacci(2): ");
    scanf("%d", &t3);
    printf("Enter n: ");
    scanf("%d", &n);
    if( n==0 ){
            tn = t1;
            printf("tribbonacci(%d) = %d", n, tn);
        }
    else if( n==1 ){
            tn = t2;
            printf("tribbonacci(%d) = %d", n, tn);
        }
    else if( n==2 ){
            tn = t3;
            printf("tribbonacci(%d) = %d", n, tn);
        }
    else{
        for(i=3;i<n;i++){
            tn = t1 + t2 + t3;
            t1=t2;
            t2=t3;
            t3=tn;
        }
        printf("tribbonacci(%d) = %d", n, tn);
    }
}