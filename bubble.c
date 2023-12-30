//program of bubble sorting

#include<stdio.h>
#include<stdlib.h>

void printArray(int*A,int n){
     for (int i=0; i < n; i++)
     {
        printf("%d ", A[i]);
     }
     printf("\n");
}

void bubblesort(int*A, int n){
    int temp;
    int issorted=0;
    for (int i=0; i < n-1; i++)
    {
        for (int j = 0; j<n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
            
        }
        
    }
    
}

// void bubblesortAdaptive(int*A,int n){
//     int temp;
//     int issorted=0;
//     for (int i=0; i<n-1; i++)
//     {
//       issorted=1;
//         for (int j=0; j<n-1-i; j++)
//          {
//             if (A[j]>A[j+1])
//             {
//                 temp=A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
                
//             }
            
//         }
//       if(issorted){
//         return;
//         }
//     }
    
// }

int main(){
    int A[] = {1 , 45 , 69 , 7 , 18 };
    int n = 5;

    printf("print before sorting\n");
    printArray(A,n);
    printf("\n");
    
    bubblesort(A,n);
    printf("print after sorting\n");
    printArray(A,n);


    return 0;
}