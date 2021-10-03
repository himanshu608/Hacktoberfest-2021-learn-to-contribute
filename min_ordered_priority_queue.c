// A program for the array implementation of min-ordered priority queue
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 5
int pq[N], item, front = -1, rear = -1, i;

void enqueue(int);
void dequeue();
void peek();
void display();

void main()
{

    //clrscr();
    int ch;
    do
    {
        printf("\n\t\t***Main Menu***");
        printf("\n 1.Enqueue \n 2.Dequeue \n 3.Peek \n 4.Display\n 5.Exit");
        printf("\n Enter your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number that you want to insert:");
            scanf("%d", &item);
            enqueue(item);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\n Enter your choice:");
        }
        // printf("\n Do u want to continue:::");
        // scanf("\n%c", &g);
    } while (1);
    getch();
}

void enqueue(int item)
{
    if (front == -1 && rear == -1)
    {
        rear = front = 0;
        pq[rear] = item;
        display();
    }
    else if (rear == N - 1)
    {
        printf("The queue is full.");
    }
    else
    {
        int i = rear;
        while (i >= front && item < pq[i])
        {
            pq[i + 1] = pq[i];
            i--;
        }
        pq[i + 1] = item;
        rear++;
        display();
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Empty Queue");
    }
    else if (rear == front)
    {
        printf("The dequeue element from queue is %d", pq[front]);
        front = rear = -1;
    }
    else
    {
        printf("The dequeue element from queue is %d", pq[front]);
        front++;
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Empty");
    }
    else
    {
        printf("The front of the queue is %d", pq[front]);
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty.");
    }
    else
    {
        for (i = front; i < rear + 1; i++)
        {
            printf("%d\t", pq[i]);
        }
    }
}
