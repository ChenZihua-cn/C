# include<stdio.h>

int Josephus(int n, int m){
    if(n == 1){
        return 0;
    }else{
        return (Josephus(n-1, m)+ m) %n;
    }
}

int main(void){
int n,m;

printf("请输入两个数字");
scanf("%d %d",&n,&m);

int results;

results = Josephus(n,m);
printf("%d",results);
return 0;
}