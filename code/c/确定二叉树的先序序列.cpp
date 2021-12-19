#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100
typedef struct BitNode
{
    int data;
    struct BitNode *lchild;
    struct BitNode *rchild;
}BitNode;
BitNode* CreateBiTree(char *instr, char *afterstr, int length)
{
    if (length == 0)
    {
        return NULL;
    }
    char c = afterstr[length - 1];
    int i = 0;
    while ((instr[i] != c) && i < length)
    {
        i = i + 1;
    }
    int leftlength = i;
    int rightlength = length - i - 1;
    BitNode *T;
    T = (BitNode*)malloc(sizeof(BitNode));
    T->data = c;
    T->lchild = NULL;
    T->rchild = NULL;
    T->lchild = CreateBiTree(&instr[0], &afterstr[0], leftlength);
    T->rchild = CreateBiTree(&instr[i + 1], &afterstr[i], rightlength);
    return T;
}
void PreOrderTraverse(BitNode *T)
{
    if (T)
    {
        printf("%c", T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}
int main()
{
    char instr[MAXSIZE];
    char afterstr[MAXSIZE];
    scanf("%s", instr);
    scanf("%s", afterstr);
    int length = strlen(instr);
    BitNode *T;
    T = (BitNode*)malloc(sizeof(BitNode));
    T = CreateBiTree(instr, afterstr, length);
    PreOrderTraverse(T);
    return 0;
}

