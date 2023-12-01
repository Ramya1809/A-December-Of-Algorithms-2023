#include <stdio.h>
void main(){
  int n,i,r[50],s=0,b=0,p=0;
    printf("Enter no. of batsman in the team : ");
    scanf("%d",&n);
    printf("Enter the runs scored by %d batsman : ",n);
    for (i=0;i<n;i++){
        r[i]=0;
        scanf("%d",&r[i]);
        s += r[i];
        if (r[i]>b){
            b=r[i];
            p=i;
        }
    }
    printf("The total runs scored by the team are %d\n",s);
    printf("The batsman number %d (index %d) scored the highest which is %d",p+1,p,b);
}
