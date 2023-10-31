#include <stdio.h>
#include <stdlib.h>
int mystrlen(char ch[]){
    int i;
    for (i=0;ch[i] != '\0';i++){
    }
    return i;
}
int mystrupr(char ch[]){
     for (int i=0;i<mystrlen(ch);i++){
     	if(ch[i] >= 97 && ch[i] <= 123){
     		ch[i] -= 32;
     		printf("%c", ch[i]);
	 	}
	 	else{
	 		printf("%c",ch[i]);
		 }
	 }
	 printf("\n");
}
int mystrlwr(char ch[]){
	for(int i=0;i<mystrlen(ch);i++){
		if(ch[i] >= 65 && ch[i] <= 91){
			ch[i] += 32;
			printf("%c", ch[i]);
		}
		else{
			printf("%c",ch[i]);
		}
	}
	printf("\n");
}
int mystrcmp(char ch1[],char ch2[]){
	for(int i=0;ch1[i] != '\0'&& ch2[i] != '\0';i++){
//		printf("%d\n",i);
		if(ch1[i] != ch2[i]){
			return(ch1[i]-ch2[i]);
		}
	}
	return 0;
}
void mystrcpy(char cha[]){
	int n = mystrlen(cha);
	char *cpy = (char *)calloc(n,sizeof(char));
	for (int i=0;cha[i] != '\0';i++){
		cpy[i] = cha[i];
		printf("%c",cpy[i]); 
	}
}
char* mystrrev(char cha[]){
	int n = mystrlen(cha);
	int i=0,j=n-1;
	char *cpy = (char *)calloc(n,sizeof(char));
	while(i<n){
		cpy[i] = cha[j];
		i++;
		j--;
	}
	return cpy;
}
int mystrchr(char ch[],char cha){
	for(int i=0;ch[i] != '\0';i++){
		if(ch[i] == cha){
			return i;
		}
	}
	return -1;
}
char *mystrcpy(char ch[],char aj[]){
	for (int i=0;i<mystrlen(ch);i++){
		ch[i] = aj[i];
	}
	return ch;
}
int main()
{
   	char ch[] = {'a','p','o','o','r','v','\0'};
   	char aj[6] = "DeV"; 
   	char string1[] = "apoorv";
   	char string2[] = "apoprv";
   	printf("Now strlen\n");
   	int len = mystrlen(ch);
   	printf("%d\n",len);
	printf("\n\nNow strupr\n"); 
	mystrupr(aj);
	printf("\n\nNow strlwr\n");
    mystrlwr(aj);
	printf("\n\nNow strcmp\n");
    int cmp = mystrcmp(string1,string2);
    printf("%d",cmp);
	printf("\n\nNow strrev\n");
   	mystrcpy(aj);
   	printf("\n\nNow strrev\n");
   	char *cha = mystrrev(aj);
   	for (int i=0;i<mystrlen(aj);i++){
   		printf("%c",cha[i]);
   	}
   	printf("\n\nNow strchr\n");
   	int index = mystrchr(ch,'o');
   	printf("%d",index);
   	printf("\n\nNow strcpy\n");
   	char character[] = "hi_bye"; 
   	char *hi = mystrcpy(character,aj);
   	for(int i=0;i<mystrlen(aj);i++){
   		printf("%c",hi[i]);
	}
   	
    return 0;
}