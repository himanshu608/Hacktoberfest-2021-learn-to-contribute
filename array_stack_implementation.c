#include<stdio.h>
#include<stdlib.h>
int push(int *array,int *top)
{
    int ele;
    (*top)=(*top)+1;
    if((*top)>=5)
    {
        printf("Stack overflow\n");
        (*top)--;
    }
    else
    {
    printf("\nEnter the element to push in stack:\t");
    scanf("%d",&ele);
    array[(*top)]=ele;
    printf("The last element %d is at position %d\n",ele,(*top)+1);
    }
    return 0;
}
int show(int *array,int *top)
{
    if((*top)==-1)
    {
        printf("no element in the array\n");
    }
    for(int i=(*top);i>=0;i--)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
int pop(int*array,int *top)
{
    if((*top)==-1)
    {
        printf("Stack underflow!!!\n");
    }
    else
    {
        (*top)--;
        printf("The element %d is poped from %d position\n",array[(*top)],(*top));

    }
    return 0;
}
int main()
{
    int *array,p=1,choice,size,top=-1;;
    printf("Enter the size of stack:\t");
    scanf("%d",&size);
    array=malloc(size*sizeof(int));
    while(p!=0)
    {
    printf("\n1.Show\n2.Push\n3.Pop\n4.Exit\nEnter the choice:\t");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:show(array,&top);break;
        case 2:push(array,&top);break;
        case 3:pop(array,&top);break;
        case 4:p=0;break;
    }
    }
    return 0;


}
