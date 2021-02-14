#include <stdio.h>
#include <stdlib.h>
int main(){
int *ptr;
int i=0;
ptr=(int *)calloc(5,sizeof(int));
while(i<5){
printf("Enter the value of %d element.\n",i+1);
scanf("%d", &ptr[i]);
i++; 
}
i=0;
while(i<5){
printf("The value of %d element is %d.\n",i+1,ptr[i]);
i++;
}
free(ptr);
return 0;
}