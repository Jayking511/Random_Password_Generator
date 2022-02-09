#include <stdio.h>
#include<string.h>

int a=0,b=0,c=0,d=0,e=0,x;
char website[100],key[100],keyword[100],capital[100],small[100],numandchar[100],password[100],jumble[100];
int m,n;

int Keyword(const char* website,const char* key)
{
	strcpy(keyword,website);
	strcat(keyword,key);
	*keyword=Jumble(keyword);
	return *keyword;
}

int Capital(const char* keyword)
{
	for(a=2;a<x;a+=2)
	{
		capital[b]=keyword[a];
		b++;
	}
	strupr(capital);
	return *capital;
}

int Small(const char* keyword)
{
	for(a=1;a<x;a+=3)
	{
		small[c]=keyword[a];
		c++;
	}
	strlwr(small);
	return *small;
}

int Numandchar(const char* keyword)
{
	for(a=0;a<x;a++)
	{
		if(keyword[a]=='a')
		{
			numandchar[d]='@';
			d++;
		}
		else if(keyword[a]=='b')
		{
			numandchar[d]='6';
			d++;
		}
		else if(keyword[a]=='c')
		{
			numandchar[d]='(';
			d++;
		}
		else if(keyword[a]=='e')
		{
			numandchar[d]='3';
			d++;
		}
		else if(keyword[a]=='h')
		{
			numandchar[d]='#';
			d++;
		}
		else if(keyword[a]=='i')
		{
			numandchar[d]='!';
			d++;
		}
		else if(keyword[a]=='l')
		{
			numandchar[d]='1';
			d++;
		}
		else if(keyword[a]=='o')
		{
			numandchar[d]='0';
			d++;
		}
		else if(keyword[a]=='q')
		{
			numandchar[d]='9';
			d++;
		}
		else if(keyword[a]=='s')
		{
			numandchar[d]='$';
			d++;
		}
		else if(keyword[a]=='t')
		{
			numandchar[d]='+';
			d++;
		}
		else if(keyword[a]=='x')
		{
			numandchar[d]='*';
			d++;
		}
		else if(keyword[a]=='d'|keyword[a]=='f'|keyword[a]=='g'|keyword[a]=='j'|keyword[a]=='k'|keyword[a]=='m')
		{
			numandchar[d]='&';
			d++;
		}
		else
		{
			numandchar[d]='5';
			d++;
		}
	}
	return *numandchar;
}

int Password(const char* capital,const char* small,const char* numandchar)
{
	strcpy(password, small);
	strcat(password,numandchar);
	strcat(password,capital);
	*password=Jumble(password);
	strrev(password);
	strcat(password, "J");
	strrev(password);
	strcat(password, "j");
	strrev(password);
	strcat(password, "5");
	strrev(password);
	strcat(password, "$");
	return *password;

}

int Jumble(char* jumble)
{
	char array1[100],array2[100];
	int k;
	int f=0;
	strcpy(array1,jumble);
	strcat(jumble,array1);
	k=strlen(jumble);
	for(e=0;e<k;e+=3)
	{
		array2[f]=jumble[e];
		f++;
	}
	array2[f]='\0';
	strcpy(jumble,array2);
	return *jumble;
}

int main()
{
	int i=0,j=0;
	char ch1,ch2;
	printf("WEBSITE : ");
	scanf("%s", &website);
	printf("\n");
	m=strlen(website);

	printf("KEY : ");
	scanf("%s", &key);
	printf("\n");
	n=strlen(key);

	*keyword=Keyword(website,key);
	x=strlen(keyword);
	*capital=Capital(keyword);
	*small=Small(keyword);
	*numandchar=Numandchar(keyword);
	*password=Password(capital,small,numandchar);
	if(strlen(password)<=8)
	{
		strcat(password,password);
	}
	printf("PASSWORD : %s",password);
	return 0;
}
