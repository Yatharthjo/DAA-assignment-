
#include<stdio.h>
void main()
{
    int arr[50],n,m,p,i,j,k,flag,c;

    printf("Enter the number of Test cases\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the length of the array");
        scanf("%d",&m);

        printf("Enter the elements of array");
        for(k=0; k<m; k++)
        {
            scanf("%d",&arr[k]);
        }
        printf("Enter the key you want to search \n");
        scanf("%d",&p);

        flag=0;
        c=0;
        for(k=0;k<m;k++)
        {
            if(arr[k]==p)
            {
                c++;
            }
           
        }
        if(c>=1)
        {
            printf("Key %d is present with the duplicate of %d\n",p,c);
        }
        else
        {
            printf("Key %d is not present \n",p);
        }
    }
}
