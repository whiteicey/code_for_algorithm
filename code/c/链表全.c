 #include "common.h"

 typedef int ElemType;
 
 typedef struct
 {
   ElemType *elem; 		/* �洢�ռ��ַ */
   int length; 			/* ��ǰ���� */
   int listsize; 		/* ��ǰ����Ĵ洢����(��sizeof(ElemType)Ϊ��λ) */
 }SqList;


 void visit(ElemType *c) /* ListTraverse()���õĺ���(����Ҫһ��) */
 {
   printf("%d ",*c);
 }


 
 Status InitList(SqList &L) /* ��ʼ��˳��� */
 { /* �������������һ���յ�˳�����Ա� */
   L.elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
   if(!L.elem)
     exit(OVERFLOW); /* �洢����ʧ�� */
   L.length=0; /* �ձ���Ϊ0 */
   L.listsize=LIST_INIT_SIZE; /* ��ʼ�洢���� */
   return OK;
 }

 Status DestroyList(SqList &L)
 { /* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������˳�����Ա�L */
   free(L.elem);
   L.elem=NULL;
   L.length=0;
   L.listsize=0;
   return OK;
 }

 Status ClearList(SqList &L)
 { /* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������L����Ϊ�ձ� */
   L.length=0;
   return OK;
 }

 Status ListEmpty(SqList L)
 { /* ��ʼ������˳�����Ա�L�Ѵ��ڡ������������LΪ�ձ��򷵻�TRUE�����򷵻�FALSE */
   if(L.length==0)
     return TRUE;
   else
     return FALSE;
 }

 int ListLength(SqList L)
 { /* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
   return L.length;
 }

 Status GetElem(SqList L,int i,ElemType &e)
 { /* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
   /* �����������e����L�е�i������Ԫ�ص�ֵ */
   if(i<1||i>L.length)
     exit(ERROR);
   e=L.elem[i-1];
   return OK;
 }

 int LocateElem(SqList L,ElemType e)
 { /* ��ʼ������˳�����Ա�L�Ѵ���*/
   /* �������������L�е�1����e��ȵ�����Ԫ�ص�λ�� */
   /*           ������������Ԫ�ز����ڣ��򷵻�ֵΪ0��*/
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
 { /* ��ʼ������˳�����Ա�L�Ѵ��� */
   /* �����������cur_e��L������Ԫ�أ��Ҳ��ǵ�һ��������pre_e��������ǰ���� */
   /*           �������ʧ�ܣ�pre_e�޶��� */
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
 { /* ��ʼ������˳�����Ա�L�Ѵ��� */
   /* �����������cur_e��L������Ԫ�أ��Ҳ������һ��������next_e�������ĺ�̣� */
   /*           �������ʧ�ܣ�next_e�޶��� */
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

 Status ListInsert(SqList &L,int i,ElemType e) /* ����Ԫ�� */
 { /* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L)+1 */
   /* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
   ElemType *newbase,*q,*p;
   if(i<1||i>L.length+1) /* iֵ���Ϸ� */
     return ERROR;
   if(L.length>=L.listsize) /* ��ǰ�洢�ռ�����,���ӷ��� */
   {
     newbase=(ElemType *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
     if(!newbase)
       exit(OVERFLOW); /* �洢����ʧ�� */
     L.elem=newbase; /* �»�ַ */
     L.listsize+=LISTINCREMENT; /* ���Ӵ洢���� */
   }
   q=L.elem+i-1; /* qΪ����λ�� */
   for(p=L.elem+L.length-1;p>=q;--p) /* ����λ�ü�֮���Ԫ������ */
     *(p+1)=*p;
   *q=e; /* ����e */
   L.length++; /* ����1 */
   return OK;
 }

 Status ListDelete(SqList &L,int i,ElemType &e) /* ɾ��Ԫ�� */
 { /* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
   /* ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1 */
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
   //printf("�����������ɾ���㷨\n");
   return OK;
 }

 Status ListTraverse(SqList L,void(*vi)(ElemType*))
 { /* ��ʼ������˳�����Ա�L�Ѵ��� */
   /* ������������ζ�L��ÿ������Ԫ�ص��ú���vi()��һ��vi()ʧ�ܣ������ʧ�� */
   /*           vi()���βμ�'&'��������ͨ������vi()�ı�Ԫ�ص�ֵ */
   ElemType *p;
   int i;
   p=L.elem;
   for(i=1;i<=L.length;i++)
     vi(p++);
   printf("\n");
   return OK;
 }


Status Part(SqList &L) 
 { /* ��ʼ������˳�����Ա�L�Ѵ��� */
   /* �����������˳�����a1Ϊ����л��֣�����a1С���ƶ���a1ǰ�棬��a1����ƶ���a1���� */
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
   //printf("����������ɻ����㷨��\n");
   return OK;
 }
 
 Status Merge(SqList A, SqList B, SqList &C) 
 { /* ��ʼ������˳�����Ա�A/B/C�Ѵ��ڣ�ABԪ�ؾ���С���� */
   /* �����������AB�е�Ԫ�غϲ����뵽C�У������ִ�С�������� */
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
   //printf("����������ɺϲ��㷨��\n");
   return OK;
 }
 
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   SqList L;
   ElemType e,e0;
   Status res;
   int i,j;
   
   res=InitList(L);
   printf("��ʼ��L��L.elem=%u L.length=%d L.listsize=%d\n\n",L.elem,L.length,L.listsize);
   
   for(i=1;i<=5;i++)
     res=ListInsert(L,1,i);
   printf("��L�ı�ͷ���β���1��5��");
   ListTraverse(L,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ */
   printf("L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   res=ListEmpty(L);
   printf("L�Ƿ�գ�res=%d(1:�� 0:��)\n",res);
   printf("\n");
    
   res=ClearList(L);
   printf("���L��L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   res=ListEmpty(L);
   printf("L�Ƿ�գ�res=%d(1:�� 0:��)\n",res);
   printf("\n");
   
   for(i=1;i<=10;i++)
     ListInsert(L,i,i);
   printf("��L�ı�β���β���1��10��");
   ListTraverse(L,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ */
   printf("L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   printf("\n");
   
   
   ListInsert(L,1,0);
   printf("��L�ı�ͷ����0��");
   ListTraverse(L,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ */
   printf("L.elem=%u(�п��ܸı�) L.length=%d(�ı�) L.listsize=%d(�ı�)\n",L.elem,L.length,L.listsize);
   printf("\n");
   
   GetElem(L,5,e);
   printf("��5��Ԫ�ص�ֵΪ��%d\n",e);
	
	i = 8; 
	j=LocateElem(L,i);/* ����ֵΪi��Ԫ�� */
	if(j)
		printf("��%d��Ԫ�ص�ֵΪ%d\n",j,i);
	else
		printf("û��ֵΪ%d��Ԫ��\n",i);
   
   for(i=1;i<=2;i++) /* ������ͷ�������ݵ�ǰ�� */
   {
     GetElem(L,i,e0); /* �ѵ�j�����ݸ���e0 */
     j=PriorElem(L,e0,e); /* ��e0��ǰ�� */
     if(j==INFEASIBLE)
       printf("Ԫ��%d��ǰ��\n",e0);
     else
       printf("Ԫ��%d��ǰ��Ϊ��%d\n",e0,e);
   }
   printf("\n");

	i = 8;
	res=ListDelete(L,i,e); /* ɾ����i������ */
	if(res==ERROR)
		printf("ɾ����%d������ʧ��\n",res);
	else
		printf("ɾ����Ԫ��ֵΪ��%d\n",e);

   printf("�������L��Ԫ�أ�");
   ListTraverse(L,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ */
   printf("\n");
   
   
   res=ClearList(L);/*�ٴ����*/ 
   for(i=1;i<=7;i++)  /* ��L�ı�ͷ���β���2��4��6��8��10��12��14*/
     res=ListInsert(L,1,2*i);
   res=ListInsert(L,1,9);  /* ��L�ı�ͷ����9*/
   printf("����ǰL��Ԫ�أ�");
   ListTraverse(L,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ Ϊ 9��14��12��10��8��6��4��2*/   
   res=Part(L);/*���û��ֺ���*/ 
   printf("���ֺ�L��Ԫ�أ�");
   ListTraverse(L,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ Ϊ 9��14��12��10��8��6��4��2*/   
   DestroyList(L);
   printf("����L��L.elem=%u L.length=%d L.listsize=%d\n",L.elem,L.length,L.listsize);
   
   printf("\n******************\n\n");
   SqList A, B, C; /*��������˳���*/ 
   /*��ʼ������˳���,����A��B��������*/ 
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
   printf("˳���A��Ԫ�أ�");
   ListTraverse(A,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ Ϊ 2��4��5��10��15*/  
   printf("˳���B��Ԫ�أ�"); 
   ListTraverse(B,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ Ϊ 1��6��8��12*/    
 
	
   Merge(A,B,C); 
   printf("�ϲ���˳���C��Ԫ�أ�"); 
   ListTraverse(C,visit); /* ���ζ�Ԫ�ص���visit()�����Ԫ�ص�ֵ Ϊ 1��6��8��12*/     
   
   /*��������˳���*/ 
   DestroyList(A);
   DestroyList(B);
   DestroyList(C);
   
   
   

	return 0;
}
