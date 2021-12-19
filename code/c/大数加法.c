#include<stdio.h>
#include<string.h>
char fir[1000000]={'\0'},sec[1000000]={'\0'},last[10000000]={'\0'};
int main(){
	int i,j,k;
	i=j=k=0;
	int first=0,second=0,judge=0,judge_=0;
	printf("this is a program about plus.\n");
	printf("first number:\n");
	scanf("%s",fir);
	printf("second number:\n");
	scanf("%s",sec);
	first=strlen(fir);
	second=strlen(sec);
	//printf("%d\n",first);
	//printf("%d\n",second);
	judge=judge_=0;
	if(first>second){
		for(i=second-1,j=first-1;i>=0;j--,i--){
			judge=fir[j]-48+sec[i]-48;
			if(judge>9&&judge_==0){
				judge_=1;
				judge=judge%10;
				last[j]=judge+48;
			}
			else if(judge>9&&judge_==1){
				judge=judge+1;
				judge_=1;
				judge=judge%10;
				last[j]=judge+48;
			}
			else if(judge<=9&&judge_==1){
				judge=judge+1;
				if(judge>9){
					judge_=1;
					judge=judge%10;
					last[j]=judge+48;
				}
				else{
					last[j]=judge+48;
					judge_=0;
				}
			}
			else if(judge<=9&&judge_==0){
				last[j]=judge+48;
				judge_=0;
			}
		}
		for(i=first-second-1;i>=0;i--){
			if(judge_==0){
				last[i]=fir[i];
				judge_=0;
			}
			else if(judge_==1){
				judge=fir[i]-48+1;
				if(judge>9){
					judge_=1;
					judge=judge%10;
					last[i]=judge+48;
				}
				else{
					judge_=0;
					last[i]=judge+48;
				}
			}
		}
		if(judge_==1){
			printf("1");
		}
		printf("%s\n",last);
	}
	else if(first<second){
		for(i=first-1,j=second-1;i>=0;j--,i--){
			judge=sec[j]-48+fir[i]-48;
			if(judge>9&&judge_==0){
				judge_=1;
				judge=judge%10;
				last[j]=judge+48;
			}
			else if(judge>9&&judge_==1){
				judge=judge+1;
				judge_=1;
				judge=judge%10;
				last[j]=judge+48;
			}
			else if(judge<=9&&judge_==1){
				judge=judge+1;
				if(judge>9){
					judge_=1;
					judge=judge%10;
					last[j]=judge+48;
				}
				else{
					last[j]=judge+48;
					judge_=0;
				}
			}
			else if(judge<=9&&judge_==0){
				last[j]=judge+48;
				judge_=0;
			}
		}
		for(i=-first+second-1;i>=0;i--){
			if(judge_==0){
				last[i]=sec[i];
				judge_=0;
			}
			else if(judge_==1){
				judge=sec[i]-48+1;
				if(judge>9){
					judge_=1;
					judge=judge%10;
					last[i]=judge+48;
				}
				else{
					judge_=0;
					last[i]=judge+48;
				}
			}
		}
		if(judge_==1){
			printf("1");
		}
		printf("%s\n",last);
	}
	else{
		for(i=second-1,j=first-1;i>=0;j--,i--){
			judge=fir[j]-48+sec[i]-48;
			if(judge>9&&judge_==0){
				judge_=1;
				judge=judge%10;
				last[j]=judge+48;
			}
			else if(judge>9&&judge_==1){
				judge=judge+1;
				judge_=1;
				judge=judge%10;
				last[j]=judge+48;
			}
			else if(judge<=9&&judge_==1){
				judge=judge+1;
				if(judge>9){
					judge_=1;
					judge=judge%10;
					last[j]=judge+48;
				}
				else{
					last[j]=judge+48;
					judge_=0;
				}
			}
			else if(judge<=9&&judge_==0){
				last[j]=judge+48;
				judge_=0;
			}
		}
		if(judge_==1){
			printf("1");
		}
		printf("%s\n",last);
	}
}
