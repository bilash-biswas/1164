#include<stdio.h>
void prime(int num){
    int count=0,i;
    for(i=1;i<=(int)(num/2);i++){
        if(num%i==0){
            count=count+i;
        }
    }
    if(count!=num){
        printf("%d nao eh perfeito\n",num);
    }else if(count==num){
        printf("%d eh perfeito\n",num);
    }

}

int main()
{
    int n,s=0,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        prime(a);
    }

    return 0;
}
