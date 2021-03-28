#include<stdio.h>
#include<stdlib.h>
struct n{
	int x;
	n*next;
};
typedef n node;

struct node *IntsertingAsFirstNode(struct node *start, int data){
	struct node *temp, *p;
	temp=(struct node*)malloc(sizeof(node));
	temp->x=data;
	temp->next=start
	start=temp;
	return start;
}
struct node *InsertAtTheEnd(struct node *start, int data){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(node));
	temp->x=data;
	p=start;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=temp;
	temp->next=NULL;
	return start;
}
struct node *InsertAfter(struct node *start, int data, int q){
	struct node *tmp *p
	tmp=(struct node *)malloc(sizeof(node));
	p=start;
	int i=0;
	while(i<q){
		p=p->next;
		i++;
	}
	temp->next=p->next;
	temp->x=data;
}
struct node *InsertBefore(struct node *start, int data, int q){
	struct node *tmp *p
	tmp=(struct node *)malloc(sizeof(node));
	p=start;
	int i=0;
	while(i<q-1){
		p=p->next;
		i++;
	}
	temp->next=p->next;
	temp->x=data;
}
struct node *SearchingBruh(struct node *start, int k){
	struct *p;
	p=start;
	int i=0;
	while(p!=start){
		p=p->next;
		i++;
		if(p->x=k){
			break;
		}
		if(p==NULL)
		printf("There is no %d in there",k)
	}
	
}

printf("I love fapp")

struct node *InsertBefore(struct nodfe *start, int data, int q){
	struct node *tmp *p;
	tmp=(struct node*)malloc(sizeof(node))
}


void Deletion{
	

}

int main(){
	node*root;
	root=(node*)malloc(sizeof(node));
	root->x=1;
	root->next=(node*)malloc(sizeof(node));
	root->next->x=2;
	root->next->next=(node*)malloc(sizeof(node));
	root->next->next->x=3;
	node*k;
	k=root;
	printf("%d",k->x);
	k=k->next;
	printf("%d",k->x);
	int i = 0;
	int k;
	scanf("%d",&k);
	while
}
