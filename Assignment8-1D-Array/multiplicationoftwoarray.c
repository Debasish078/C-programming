//program to multiply the elements of two arrays
#include<stdio.h>
int main(){
    int arr1[5],arr2[5],arr3[5],i;
    printf("Enter the elements of an array :\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of 2nd array :\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    printf("After the multiplication the value of the matrix will be :\n");
    for(i=0;i<5;i++){

        arr3[i]=arr1[i]*arr2[i];
        printf("%d\n",arr3[i]);
    }

    return 0;
}
