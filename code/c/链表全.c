 #include "common.h"

 typedef int ElemType;
 
 typedef struct
 {
   ElemType *elem; 		/* 存储空间基址 */
   int length; 			/* 当前长度 */
   int listsize; 		/* 当前分配的存储容量(以sizeof(ElemType)为单位) */
 }SqList;


 void visit(ElemType *c) /* ListTraverse()调用的函数(类型要一致) */
 {
   printf("%d ",*c);
 }


 
 Status InitList(SqList &L) /* 初始化顺序表 */
 { /* 操作结果：构造一个空的顺序线性表 */
   L.elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
   if(!L.elem)
     exit(OVERFLOW); /* 存储分配失败 */
   L.length=0; /* 空表长度为0 */
   L.listsize=LIST_INIT_SIZE; /* 初始存储容量 */
   return OK;
 }

 Status DestroyList(SqList &L)
 { /* 初始条件：顺序线性表L已存在。操作结果：销毁顺序线性表L */
   free(L.elem);
   L.elem=NULL;
   L.length=0;
   L.listsize=0;
   return OK;
 }

 Status ClearList(SqList &L)
 { /* 初始条件：顺序线性表L已存在。操作结果：将L重置为空表 */
   L.length=0;
   return OK;
 }

 Status ListEmpty(SqList L)
 { /* 初始条件：顺序线性表L已存在。操作结果：若L为空表，则返回TRUE，否则返回FALSE */
   if(L.length==0)
     return TRUE;
   else
     return FALSE;
 }

 int ListLength(SqList L)
 { /* 初始条件：顺序线性表L已存在。操作结果：返回L中数据元素个数 */
   return L.length;
 }

 Status GetElem(SqList L,int i,ElemType &e)
 { /* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L) */
   /* 操作结果：用e返回L中第i个数据元素的值 */
   if(i<1||i>L.length)
     exit(ERROR);
   e=L.elem[i-1];
   return OK;
 }

 int LocateElem(SqList L,ElemType e)
 { /* 初始条件：顺序线性表L已存在*/
   /* 操作结果：返回L中第1个与e相等的数据元素的位序。 */
   /*           若这样的数据元素不存在，则返回值为0。*/
    ElemType *p=L.elem;
    for(int i=0;i<L.length;i++){
    	if(*p==e){
    		printf("%d\n",i+1);goto loop;
		}
		p++;
	} 
	printf("0\n");
    loop:return 0;
 }

 Status PriorElem(SqList L,ElemType cur_e,ElemType &pre_e)
 { /* 初始条件：顺序线性表L已存在 */
   /* 操作结果：若cur_e是L的数据元素，且不是第一个，则用pre_e返回它的前驱， */
   /*           否则操作失败，pre_e无定义 */
   int i=2;
   ElemType *p=L.elem+1;
   while(i<=L.length&&*p!=cur_e)
   {
     p++;
     i++;
   }
   if(i>L.length)
     return INFEASIBLE;
   else
   {
     pre_e=*--p;
     return OK;
   }
 }

 Status NextElem(SqList L,ElemType cur_e,ElemType &next_e)
 { /* 初始条件：顺序线性表L已存在 */
   /* 操作结果：若cur_e是L的数据元素，且不是最后一个，则用next_e返回它的后继， */
   /*           否则操作失败，next_e无定义 */
   int i=1;
   ElemType *p=L.elem;
   while(i<L.length&&*p!=cur_e)
   {
     i++;
     p++;
   }
   if(i==L.length)
     return INFEASIBLE;
   else
   {
     next_e=*++p;
     return OK;
   }
 }

 Status ListInsert(SqList &L,int i,ElemType e) /* 插入元素 */
 { /* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L)+1 */
   /* 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1 */
   ElemType *newbase,*q,*p;
   if(i<1||i>L.length+1) /* i值不合法 */
     return ERROR;
   if(L.length>=L.listsize) /* 当前存储空间已满,增加分配 */
   {
     newbase=(ElemType *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
     if(!newbase)
       exit(OVERFLOW); /* 存储分配失败 */
     L.elem=newbase; /* 新基址 */
     L.listsize+=LISTINCREMENT; /* 增加存储容量 */
   }
   q=L.elem+i-1; /* q为插入位置 */
   for(p=L.elem+L.length-1;p>=q;--p) /* 插入位置及之后的元素右移 */
     *(p+1)=*p;
   *q=e; /* 插入e */
   L.length++; /* 表长增1 */
   return OK;
 }

 Status ListDelete(SqList &L,int i,ElemType &e) /* 删除元素 */
 { /* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L) */
   /* 操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1 */
	ElemType *p=L.elem;
	for(int j=0;;j++){
		if(j==i-1){
			e=*p;break;
		}
		p++;
	}
	for(int j=i-1;j<L.length;j++){
		*p=*(p+1);
		p++;
	}
	L.length--;
   //printf("请大家自行完成删除算法\n");
   return OK;
 }

 Status ListTraverse(SqList L,void(*vi)(ElemType*))
 { /* 初始条件：顺序线性表L已存在 */
   /* 操作结果：依次对L的每个数据元素调用函数vi()。一旦vi()失败，则操作失败 */
   /*           vi()的形参加'&'，表明可通过调用vi()改变元素的值 */
   ElemType *p;
   int i;
   p=L.elem;
   for(i=1;i<=L.length;i++)
     vi(p++);
   printf("\n");
   return OK;
 }


Status Part(SqList &L) 
 { /* 初始条件：顺序线性表L已存在 */
   /* 操作结果：将顺序表以a1为界进行划分，即比a1小的移动到a1前面，比a1大的移动到a1后面 */
	ElemType *p,*q,temp;
	p=L.elem;
	for(int i=0;i<L.length;i++){
		for(int j=i;j<L.length;j++){
			if(*(p+i)>*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
   //printf("请大家自行完成划分算法！\n");
   return OK;
 }
 
 Status Merge(SqList A, SqList B, SqList &C) 
 { /* 初始条件：顺序线性表A/B/C已存在，AB元素均从小到大 */
   /* 操作结果：将AB中的元素合并插入到C中，并保持从小到大有序 */
   ElemType *p,*q,*r;
   p=A.elem;
   q=C.elem;
	for(int i=0;i<A.length;i++){
		*q=*p;
		p++;
		q++;
		C.length++;
	}
	p=B.elem;
	for(int i=0;i<B.length;i++){
		q=C.elem;
		for(int j=0;j<C.length;j++){
			if(*p<*q){
				r=C.elem+C.length-1;
				for(int k=C.length-1;k>=j;k--){
					*(r+1)=*r;
					r--;
				}
				r++;
				*r=*p;
				p++;
				C.length++;
			}
			q++;
		}
	}
   //printf("请大家自行完成合并算法！\n");
   return OK;
 }
 
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   SqList L;
   ElemType e,e0;
   Status res;
   int i,j;
   
   res=InitList(L);
   printf("初始化L后：L.elem=%u L.length=%d L.listsize=%d\n\n",L.elem,L.length,L.listsize);
   
   for(i=1;i<=5;i++)
     res=ListInsert(L,1,i);
   printf("在L的表头依次插入1～5后：");
   ListTraverse(L,visit); /* 依次对元素调用visit()，输出元素的值 */
   printf("L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   res=ListEmpty(L);
   printf("L是否空：res=%d(1:是 0:否)\n",res);
   printf("\n");
    
   res=ClearList(L);
   printf("清空L后：L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   res=ListEmpty(L);
   printf("L是否空：res=%d(1:是 0:否)\n",res);
   printf("\n");
   
   for(i=1;i<=10;i++)
     ListInsert(L,i,i);
   printf("在L的表尾依次插入1～10后：");
   ListTraverse(L,visit); /* 依次对元素调用visit()，输出元素的值 */
   printf("L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   printf("\n");
   
   
   ListInsert(L,1,0);
   printf("在L的表头插入0后：");
   ListTraverse(L,visit); /* 依次对元素调用visit()，输出元素的值 */
   printf("L.elem=%u(有可能改变) L.length=%d(改变) L.listsize=%d(改变)\n",L.elem,L.length,L.listsize);
   printf("\n");
   
   GetElem(L,5,e);
   printf("第5个元素的值为：%d\n",e);
	
	i = 8; 
	j=LocateElem(L,i);/* 查找值为i的元素 */
	if(j)
		printf("第%d个元素的值为%d\n",j,i);
	else
		printf("没有值为%d的元素\n",i);
   
   for(i=1;i<=2;i++) /* 测试求头两个数据的前驱 */
   {
     GetElem(L,i,e0); /* 把第j个数据赋给e0 */
     j=PriorElem(L,e0,e); /* 求e0的前驱 */
     if(j==INFEASIBLE)
       printf("元素%d无前驱\n",e0);
     else
       printf("元素%d的前驱为：%d\n",e0,e);
   }
   printf("\n");

	i = 8;
	res=ListDelete(L,i,e); /* 删除第i个数据 */
	if(res==ERROR)
		printf("删除第%d个数据失败\n",res);
	else
		printf("删除的元素值为：%d\n",e);

   printf("依次输出L的元素：");
   ListTraverse(L,visit); /* 依次对元素调用visit()，输出元素的值 */
   printf("\n");
   
   
   res=ClearList(L);/*再次清空*/ 
   for(i=1;i<=7;i++)  /* 在L的表头依次插入2、4、6、8、10、12、14*/
     res=ListInsert(L,1,2*i);
   res=ListInsert(L,1,9);  /* 在L的表头插入9*/
   printf("划分前L的元素：");
   ListTraverse(L,visit); /* 依次对元素调用visit()，输出元素的值 为 9、14、12、10、8、6、4、2*/   
   res=Part(L);/*调用划分函数*/ 
   printf("划分后L的元素：");
   ListTraverse(L,visit); /* 依次对元素调用visit()，输出元素的值 为 9、14、12、10、8、6、4、2*/   
   DestroyList(L);
   printf("销毁L后：L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   
   printf("\n******************\n\n");
   SqList A, B, C; /*定义三个顺序表*/ 
   /*初始化三个顺序表,并向A、B插入数据*/ 
   InitList(A);
   InitList(B);
   InitList(C);
   ListInsert(A,1,2);
   ListInsert(A,2,4);
   ListInsert(A,3,5);
   ListInsert(A,4,10);
   ListInsert(A,5,15);
   ListInsert(B,1,1);
   ListInsert(B,2,6);
   ListInsert(B,3,8);
   ListInsert(B,4,12);
   printf("顺序表A的元素：");
   ListTraverse(A,visit); /* 依次对元素调用visit()，输出元素的值 为 2、4、5、10、15*/  
   printf("顺序表B的元素："); 
   ListTraverse(B,visit); /* 依次对元素调用visit()，输出元素的值 为 1、6、8、12*/    
 
	
   Merge(A,B,C); 
   printf("合并后顺序表C的元素："); 
   ListTraverse(C,visit); /* 依次对元素调用visit()，输出元素的值 为 1、6、8、12*/     
   
   /*销毁三个顺序表*/ 
   DestroyList(A);
   DestroyList(B);
   DestroyList(C);
   
   
   

	return 0;
}
