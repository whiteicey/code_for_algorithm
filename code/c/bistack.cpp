#define MAXSIZE 100

typedef int Status;
const int OK = 0;
const int ERROR = -1;

typedef bool Direction;
typedef int ElemType;
const bool LEFT = 0;
const bool RIGHT = 1;

typedef struct twstack
{
	ElemType* base;
	int left, right;
} tws;
bool initstack(tws &tws)
{
	tws.base = (ElemType*)malloc(MAXSIZE * sizeof(ElemType));
	if (tws.base == NULL)
	{
		return false;
	}
	else
	{
		tws.left = 0;
		tws.right = MAXSIZE-1;
		return true;
	}
}

Status push(twstack &tws, Direction i, ElemType x)
{
	if (tws.left > tws.right)
	{
		return ERROR;
	}
	if (i == LEFT)
	{
		tws.base[tws.left] = x;
		++tws.left;
	} 
	else 
	{
		tws.base[tws.right] = x;
		--tws.right;
	}
}

Status pop(twstack &tws, Direction i,ElemType &e)
{
	if (i == LEFT)
	{
		if (tws.left == 0) return ERROR;
		e = tws.base[tws.left--];
	}
	else
	{
		if (tws.right == MAXSIZE-1) return ERROR;
		e = tws.base[tws.right++];
	}
	return OK;
}


