#include<stdio.h>

void spiralprint(int rows,int cols,int arr[rows][cols])
{
    int i,r=0,c=0;
    while(r<rows&&c<cols){
    for(i=c;i<cols;i++){
        printf("%d ",arr[r][i]);
    }
    r++;

    for(i=r;i<rows;i++){
        printf("%d ",arr[i][cols-1]);
    }
    cols--;

    if(r<rows) {
        for(i=cols-1;i>=c;i--){
            printf("%d ",arr[rows-1][i]);
        }
        rows--;
    }
    
    if(c<cols) {
        for(i=rows-1;i>=r;i--){
            printf("%d ",arr[i][c]);
        }
        c++;
    }
    }



}
int main()
{
    int arr[][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    spiralprint(3,5,arr);
}