#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
srand(time(NULL));
int i,j;
int *p_mt;
int mt[N][M];
p_mt = &mt[0][0];
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
*p_mt=1+rand()%100;
printf("%d\n", *p_mt);
++p_mt;
}
}
}
