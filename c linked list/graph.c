#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nt;
};
struct node *createNode(int d)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->nt = NULL;
    return newnode;
}
struct Graph
{
    int vertexNum;
    struct node **adjlists;
};
struct Graph *createGraph(int ver)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->vertexNum = ver;
    graph->adjlists = (struct node *)malloc(ver * sizeof(struct node));
    for (int i = 0; i < ver; i++)
    {
        graph->adjlists[i] = NULL;
    }
    return graph;
}
void addEdge(struct Graph *graph, int s, int d)
{

    struct node *newNode = createNode(d);
    newNode->nt = graph->adjlists[s];
    graph->adjlists[s] = newNode;

    newNode = createNode(s);
    newNode->nt = graph->adjlists[d];
    graph->adjlists[d] = newNode;
}
void printGraph(struct Graph *graph)
{
    for (int i = 0; i < graph->vertexNum; i++)
    {
        struct node *temp = graph->adjlists[i];
        printf("\nvertex of %d is ", i);
        while (temp)
        {
            printf("-> %d ", temp->data);
            temp = temp->nt;
        }
        printf("\n");
    }
}
int main()
{
    struct Graph *graph =createGraph(4);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,0,3);
    addEdge(graph,1,2);
    printGraph(graph);
}