#include<stdio.h>
int main(){
   int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int lowest = arr[0];
    int pos = 0;
    for (int i=1;i<n;i++){
        if(arr[i]<lowest){
            lowest=arr[i];
            pos=i;
        }
    }
    printf("%d %d",lowest,pos+1);

    return 0;
}