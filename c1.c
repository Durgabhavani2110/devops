#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch;
	char a[15];
	int i;
	printf("\n List of scientists are:");
	printf("\n1.Stepen Hawking\n2.Isaac Newton\n3.Albert Einstein\n4.Galileo Galilei\n5.Marie Curie");
	printf("\n Enter your choice:");
	for(i=0;i<15;i++)
	{
		scanf("%c",&a[i]);
	}
	if(strcmp(a,"Stephen Hawking")==0){
	fp=fopen("file1.txt","r");
	while ((ch=getc(fp))!=EOF)
	{
			
        if(ch == ',')
        printf("\t\t");
        else
        printf("%c",ch);
    }
    fclose(fp);
	}
	if(strcmp(a,"Isaac Newton")==0){
	fp=fopen("file2.txt","r");
	while ((ch=getc(fp))!=EOF)
	{
        if(ch == ',')
        printf("\t\t");
        else
        printf("%c",ch);
    }
    fclose(fp);
	}
    if(strcmp(a,"Albert Einstein")==0){
        fp=fopen("file3.txt","r");
	while ((ch=getc(fp))!=EOF)
	{
			
        if(ch == ',')
        printf("\t\t");
        else
        printf("%c",ch);
    }
    fclose(fp);
    }
    if(strcmp(a,"Galileo Galilei")==0){
    fp=fopen("file4.txt","r");
	while ((ch=getc(fp))!=EOF)
	{
			
        if(ch == ',')
        printf("\t\t");
        else
        printf("%c",ch);
    }
    fclose(fp);
    }
    if(strcmp(a,"Marie Curie")==0){
    fp=fopen("file5.txt","r");
	while ((ch=getc(fp))!=EOF)
	{
        if(ch == ',')
        printf("\t\t");
        else
        printf("%c",ch);
    }
    fclose(fp);
    }
}
