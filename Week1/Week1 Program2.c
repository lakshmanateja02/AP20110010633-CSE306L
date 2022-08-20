#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[100];
	int n;
	int i,j;
	printf("How many tests will you perform:");
	scanf("%d",&n);
	for(j=0;j<n;j++){
		char state='a';
	    printf("\nEnter a binary string :");
	    scanf("%s",&str);
	    for(i=0;str[i]!='\0';i++){
		   if(str[i]=='0' || str[i]=='1'){
		   switch(state){
			 case 'a':
				    if(str[i]=='0')
				      state='b';
				    else
				      state='d';
				    break;
		     case 'b':
				    if(str[i]=='0')
				      state='c';
				    else
				      state='d';
				    break;
		     case 'c':
				    if(str[i]=='0')
				      state='c';
				    else
				      state='d';
				    break;
		     case 'd':
				    if(str[i]=='0')
				      state='b';
				    else
				      state='e';
				    break;
		     case 'e':
				    if(str[i]=='0')
				      state='b';
				    else
				      state='e';
				    break;
		    default:
			    printf("\nSomething Went Wrong Please Try again\n");
				  
		   }
	   }
	   else{
		printf("Enter only binary string\n");
		return main();
	   }
	   
	 }
	   if(state=='c' || state=='e')
	     printf("String Accepted\n");
	   
	   else
	   printf("String not Accepted\n");
}
}
