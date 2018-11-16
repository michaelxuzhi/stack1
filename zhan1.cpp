#define EMPTY -1
#define SUCC 1
#define FAIL 0
const m=1000;
typedef int element_type;
int push(element_type s[],int &top,element_type x)
{
	if(top==m-1) return FAIL;
	s[++top]=x;
	return SUCC;
}
int pop(element_type s[],int &top,element_type &x)
{
	if(top==EMPTY) return FAIL;
	x=s[top--];
	return SUCC;
}