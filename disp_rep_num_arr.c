#include <stdio.h>

int main(){
    int i,j,size,ctr=0;
    int a[]={1,5,8,9,6,6,7,10,11,11,55,55};
    
    size=sizeof(a)/sizeof(a[0]);
    // printf("%d",size);
    
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j]){
                printf("%d ",a[i]);
                ctr++;
                break;
            }
        }
    }
    
    printf("\n%d num is repeated",ctr);

    return 0;
}
