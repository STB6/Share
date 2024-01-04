#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *create(int *arr, int n)
{
    Node *head, *tail;
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    tail = head;
    for (int i = 0; i < n; i++)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        node->data = arr[i];
        node->next = NULL;
        tail->next = node;
        tail = node;
    }

    return head;
}

Node *merge(Node *head1, Node *head2)
{
    Node *head, *tail;
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    tail = head;
    Node *p1 = head1->next, *p2 = head2->next;
    while (p1 && p2)
    {
        Node *node1 = (Node *)malloc(sizeof(Node));
        node1->data = p1->data;
        node1->next = NULL;
        tail->next = node1;
        tail = node1;
        p1 = p1->next;
        Node *node2 = (Node *)malloc(sizeof(Node));
        node2->data = p2->data;
        node2->next = NULL;
        tail->next = node2;
        tail = node2;
        p2 = p2->next;
    }
    while (p1)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        node->data = p1->data;
        node->next = NULL;
        tail->next = node;
        tail = node;
        p1 = p1->next;
    }
    while (p2)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        node->data = p2->data;
        node->next = NULL;
        tail->next = node;
        tail = node;
        p2 = p2->next;
    }
    return head;
}

void printList(Node *head)
{
    Node *p = head->next;
    while (p)
    {
        printf("%5d", p->data);
        p = p->next;
    }
    printf("\n");
}
int main(void)
{
    int a[] = {5, 10, 15}, b[] = {1, 4, 6, 8, 30, 45};
    Node *list1 = create(a, sizeof(a) / sizeof(int));
    Node *list2 = create(b, sizeof(b) / sizeof(int));
    Node *mergedList = merge(list1, list2);
    printList(mergedList);
    return 0;
}