//#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char one[1]={'1'},fir_[1000000]={'\0'},fir[1000000]={'\0'},sec[1000000]={'\0'},sec_[1000000]={'\0'},count_[1000000]={'\0'},count[1000000]={'\0'},last[1000000]={'\0'};
char plus_show(char *fir,char *sec,char *last);
char plus(char *fir,char *sec,char *last);

int main(){
	scanf("%s",fir);
	scanf("%s",sec);
	count[0]='1';
	strcpy(fir_,fir);
	//printf("fir_:%s\n",fir_);
	while(1){
		//printf("%d %s\n",strcoll(count,sec),last);
		if(strcoll(count,sec)==0&&sec[0]=='1'&&strlen(sec)==1){
			printf("%s\n",fir);
			return 0;
		}
		else if(strcoll(count,sec)==0){
			printf("%s\n",last);
			return 0;
		}
		else{
			plus(fir,fir_,last);//¼Ó·¨ 
			/*for(int nm=0;nm<strlen(fir_);nm++){
				fir_[nm]='\0';
			}*/
			strcpy(fir_,last);
			/*for(int nm=0;nm<strlen(last);nm++){
				last[nm]='\0';
			}*/
			plus(one,count,count_);//count++ 
			//printf("count_:%s\n",count_);
			/*for(int nm=0;nm<strlen(count);nm++){
				count[nm]='\0';
			}*/
			strcpy(count,count_);
			//printf("count:%s\n",count);
			/*for(int nm=0;nm<strlen(count_);nm++){
				count_[nm]='\0';
			}*/
		}
	}
	return 0;
}

char plus(char *fir,char *sec,char *last){
	int i,j,k;
	i=j=k=0;
	int first=0,second=0,judge=0,judge_=0;
	//printf("this is a program about plus.\n");
	//printf("first number:\n");
	
	//printf("second number:\n");
	
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
			int li;
			li=strlen(last)+1;
			for(i=li;i>=1;i--){
				last[i]=last[i-1];
			}
			last[0]='1';
		}
		//printf("%s\n",last);
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
			int li;
			li=strlen(last)+1;
			for(i=li;i>=1;i--){
				last[i]=last[i-1];
			}
			last[0]='1';
		}
		//printf("%s\n",last);
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
			int li;
			li=strlen(last)+1;
			for(i=li;i>=1;i--){
				last[i]=last[i-1];
			}
			last[0]='1';
		}
		//printf("%s\n",last);
	}
}

char plus_show(char *fir,char *sec,char *last){
	int i,j,k;
	i=j=k=0;
	int first=0,second=0,judge=0,judge_=0;
	//printf("this is a program about plus.\n");
	//printf("first number:\n");
	
	//printf("second number:\n");
	
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
			int li;
			li=strlen(last)+1;
			for(i=li;i>=1;i--){
				last[i]=last[i-1];
			}
			last[0]='1';
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
			int li;
			li=strlen(last)+1;
			for(i=li;i>=1;i--){
				last[i]=last[i-1];
			}
			last[0]='1';
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
			int li;
			li=strlen(last)+1;
			for(i=li;i>=1;i--){
				last[i]=last[i-1];
			}
			last[0]='1';
		}
		printf("%s\n",last);
	}
}
