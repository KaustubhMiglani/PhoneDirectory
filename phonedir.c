#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct contact //defining struct contact//
	{char name[20];
	char organisation[20];
	char  number[20];
	char pincode[20];
	char state[20];
	struct contact* next;
	};
void printlist(struct contact* x)//a function to print the contents of linked list//
	{while(x!=NULL)
		{printf("One of the contacts is of %s and his details are %s  %s  %s %s \n",(*x).name,(*x).organisation,(*x).number,(*x).pincode,(*x).state);
		x=(*x).next;
		}
	}

struct contact* findblockname(struct contact* x,char k[])// a function that returns the adress of the element whose name is char k[] .//
		{while(x!=NULL)
			{if(strcmp(k,(x->name))==0)
					{return x;}		
		x=(*x).next;}
}
struct contact* findblockorganisation(struct contact* x,char k[])// a function that returns the adress of the element whose organisation is char k[] .//
		{while(x!=NULL)
			{if(strcmp(k,(x->organisation))==0)
					{return x;}		
		x=(*x).next;}
}
struct contact* findblocknumber(struct contact* x,char k[])// a function that returns the adress of the element whose number is char k[] .//
		{while(x!=NULL)
			{if(strcmp(k,(x->number))==0)
					{return x;}		
		x=(*x).next;}}
struct contact* findblockpincode(struct contact* x,char k[])// a function that returns the adress of the element whose pincode is char k[] .//
		{while(x!=NULL)
			{if(strcmp(k,(x->pincode))==0)
					{return x;}		
		x=(*x).next;}}
struct contact* findblockstate(struct contact* x,char k[])// a function that returns the adress of the element whose state is char k[] .//
		{while(x!=NULL)
			{if(strcmp(k,(x->state))==0)
					{return x;}		
		x=(*x).next;}}
struct contact* adress(struct contact* head,int j)//a function that returns the adress of j element starting from the head of the linked list.//
{struct contact*y=head;
int i=0;
for(i=0;i<j;i++)
	{y=(*y).next;
	}
	return y;
}

void sortname(struct contact* head,struct contact* arr[],int node)/*We create an array that contains adress of all elements of linked list.Then we sort the adresses in array according to their names and print the linkedlist in that order*/
	{int i=0;
	int j=0;
	struct contact* t;
	struct contact* x;
	for(i=0;i<node-1;i++)
		{for(j=0;j<node-1-i;j++)
			{if(strcmp((arr[j]->name),(arr[j+1]->name))>0)
					{t=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=t;
					
					}
			}
}
	i=0;
	for(i=0;i<node;i++)
		{x=arr[i];
		printf("One of the contacts is of %s and his details are %s  %s  %s %s \n",(*x).name,(*x).organisation,(*x).number,(*x).pincode,(*x).state);
			}
		







	}
void sortorganisation(struct contact* head,struct contact* arr[],int node)/*We create an array that contains adress of all elements of linked list.Then we sort the adresses in array according to their organisation and print the linkedlist in that order*/
	{int i=0;
	int j=0;
	struct contact* t;
	struct contact* x;
	for(i=0;i<node-1;i++)
		{for(j=0;j<node-1-i;j++)
			{if(strcmp((arr[j]->organisation),(arr[j+1]->organisation))>0)
					{t=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=t;
					
					}
			}
}
	i=0;
	for(i=0;i<node;i++)
		{x=arr[i];
		printf("One of the contacts is of %s and his details are %s  %s  %s %s \n",(*x).name,(*x).organisation,(*x).number,(*x).pincode,(*x).state);
			}
		







	}
void sortnumber(struct contact* head,struct contact* arr[],int node)/*We create an array that contains adress of all elements of linked list.Then we sort the adresses in array according to their numbers and print the linkedlist in that order*/
	{int i=0;
	int j=0;
	struct contact* t;
	struct contact* x;
	for(i=0;i<node-1;i++)
		{for(j=0;j<node-1-i;j++)
			{if(strcmp((arr[j]->number),(arr[j+1]->number))>0)
					{t=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=t;
					
					}
			}
}
	i=0;
	for(i=0;i<node;i++)
		{x=arr[i];
		printf("One of the contacts is of %s and his details are %s  %s  %s %s \n",(*x).name,(*x).organisation,(*x).number,(*x).pincode,(*x).state);
			}
		







	}
void sortpincode(struct contact* head,struct contact* arr[],int node)/*We create an array that contains adress of all elements of linked list.Then we sort the adresses in array according to their pincode and print the linkedlist in that order*/
	{int i=0;
	int j=0;
	struct contact* t;
	struct contact* x;
	for(i=0;i<node-1;i++)
		{for(j=0;j<node-1-i;j++)
			{if(strcmp((arr[j]->pincode),(arr[j+1]->pincode))>0)
					{t=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=t;
					
					}
			}
}
	i=0;
	for(i=0;i<node;i++)
		{x=arr[i];
		printf("One of the contacts is of %s and his details are %s  %s  %s %s \n",(*x).name,(*x).organisation,(*x).number,(*x).pincode,(*x).state);
			}
		}
void sortstate(struct contact* head,struct contact* arr[],int node)/*We create an array that contains adress of all elements of linked list.Then we sort the adresses in array according to their states and print the linkedlist in that order*/
	{int i=0;
	int j=0;
	struct contact* t;
	struct contact* x;
	for(i=0;i<node-1;i++)
		{for(j=0;j<node-1-i;j++)
			{if(strcmp((arr[j]->state),(arr[j+1]->state))>0)
					{t=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=t;
					
					}
			}
}
	i=0;
	for(i=0;i<node;i++)
		{x=arr[i];
		printf("One of the contacts is of %s and his details are %s  %s  %s %s \n",(*x).name,(*x).organisation,(*x).number,(*x).pincode,(*x).state);
			}
		







	}






	
void deleting(struct contact*head,struct contact* x,int node)/*a function that deletes the element having adress x from the linked list(whose head is head)*/
		{int i=0;
		struct contact*y=head;
		for(i=0;i<node;i++)
			{if(x==adress(head,i))
				{if(i==0)
				{head=(*head).next;}
				else{
				if(i==(node-1))
				{(adress(head,i-1)->next)=NULL;
				}

				else
				{adress(head,i-1)->next=adress(head,i+1);
				}
}
}
}
}
void editingname(struct contact* x,char poik[])//a function that edits the name of the element having adress x to poik[]//
	{strcpy((x->name),poik);}
void editingorganisation(struct contact* x,char poik[])//a function that edits the organisation of the element having adress x to poik[]//
	{strcpy((x->organisation),poik);}
void editingnumber(struct contact* x,char poik[])//a function that edits the number of the element having adress x to poik[]//
	{strcpy((x->number),poik);}
void editingpincode(struct contact* x,char poik[])//a function that edits the pincode of the element having adress x to poik[]//
	{strcpy((x->pincode),poik);}
void editingstate(struct contact* x,char poik[])//a function that edits the state of the element having adress x to poik[]//
	{strcpy((x->state),poik);}


















int main()
	{struct contact* head,*tail,*y;
	FILE* fptr;
	fptr=fopen("database.txt","r");
	char namedummy[20];
	char organisationdummy[20];
	char  numberdummy[20];
	char pincodedummy[20];
	char statedummy[20];
	int i=1;
	int k=0;
	int node=0;
	
	while((fscanf(fptr,"%s %s %s %s %s",namedummy,organisationdummy,numberdummy,pincodedummy,statedummy)>0))//creating a linked list and copying namedummy ,organisationdummy and so on in respective field//
		{y=(struct contact*)malloc(sizeof(struct contact));
		strcpy(((*y).name),namedummy);
		strcpy(((*y).organisation),organisationdummy);
		strcpy(((*y).number),numberdummy);
		strcpy(((*y).pincode),pincodedummy);
		strcpy(((*y).state),statedummy);
		(*y).next=NULL;
		if(k==0)
			{head=y;
			tail=y;
			k++;}
		else
		{(*tail).next=y;
		tail=y;
		}
		node++;	

		}
	
	struct contact* arr[node];
	y=head;
	i=0;
	while(y!=NULL)//creating an array of adresses to elements of linked list//
	{arr[i]=y;
	y=(*y).next;
	i++;
	}
	
	
	printlist(head);
	
	printf("On what basis do you wanna sort ?Press 1 for name ,2 for organsisation, 3 for number,4 for pincode and 5 for state \n");
	int pol;
	scanf("%d",&pol);
	switch(pol)//using switch case to determine on which basis to sort//
	{case 1:
		sortname(head,arr,node);
		break;
	case 2:
	sortorganisation(head,arr,node);
		break;
	case 3:
	sortnumber(head,arr,node);
		break;
	case 4:
	sortpincode(head,arr,node);
		break;
	case 5:
	sortstate(head,arr,node);
		break;
	}
	printf("On basis of what do you want to delete? Press 1 for name ,2 for organsisation, 3 for number,4 for pincode and 5 for state\n");
	scanf("%d",&pol);
printf("Please enter required field \n");
	char string3[1000];
	scanf("%s",string3);
	
	switch(pol)//using switch to determine on what basis to delete.That is if user types 3 and enters number of first element then first element is deleted and so on//
	{case 1:
		y=
findblockname(head,string3);
		deleting(head,y,node);
		break;
	case 2:
	y=findblockorganisation(head,string3);
	deleting(head,y,node);
		break;
	case 3:
	y=findblocknumber(head,string3);
	deleting(head,y,node);
		break;
	case 4:
	y=findblockpincode(head,string3);
	deleting(head,y,node);
		break;
	case 5:
	y=findblockstate(head,string3);
	deleting(head,y,node);
		break;
	}
printf("The final list now is \n");//printing final list//
printlist(head);	
printf("What do you want to edit? Press 1 for name ,2 for organsisation, 3 for number,4 for pincode and 5 for state\n");
	scanf("%d",&pol);
printf("Please enter required name  of contact \n");
scanf("%s",string3);
char poily[200];
printf("Pls enter new field");
scanf("%s",poily);
switch(pol)//editing based on the given field//
	{case 1:
		y=findblockname(head,string3);
		editingname(y,poily);
		break;
	case 2:
	y=findblockname(head,string3);
	editingorganisation(y,poily);
		break;
	case 3:
	y=findblockname(head,string3);
	editingnumber(y,poily);
		break;
	case 4:
	y=findblockname(head,string3);
	editingpincode(y,poily);
		break;
	case 5:
	y=findblockname(head,string3);
	editingstate(y,poily);
		break;
	}
	printlist(head);
printf("Do you want to add a new contact.Press 1 if you want to \n");
scanf("%d",&pol);
if(pol==1)//adding a new contact at the end of the list//
	{
	y=(struct contact*)malloc(sizeof(struct contact));
	printf("Enter name \n");
	scanf("%s",namedummy);
	strcpy((*y).name,namedummy);
	printf("Enter organisation \n");
	scanf("%s",organisationdummy);
	strcpy((*y).organisation,organisationdummy);
	printf("Enter number \n");
	scanf("%s",numberdummy);
	strcpy((*y).number,numberdummy);
	printf("Enter pincode \n");
	scanf("%s",pincodedummy);
	strcpy((*y).pincode,pincodedummy);
	printf("Enter state \n");
	scanf("%s",statedummy);
	strcpy((*y).state,statedummy);
	tail->next=y;
	printlist(head);
	}




















	}
