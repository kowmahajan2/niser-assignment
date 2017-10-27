#include<iostream>
#include<string.h>


using namespace std;



int strlenu( char* str)
{
	int res = 0;
	for(; res >= 0; res++)
	{
		if(*(str + res) == '\0')
		{
			break;
		}
	}
	return res;
}

int strcpyu(char* str1,int size1, char* str2)
{
	int len2 = strlenu(str2);
	int len1 = strlenu(str1);
	if(size1>len2)
	{
		for(int i = 0;i<len1;i++)
		{
			*(str2 +i) = *(str1 + i);
		}
		return 1;
	}
	return 0;
}

int strcatu(char* str1,int size1, char* str2)
{
	int len1,len2;
	len1 = strlenu(str1);
	len2 = strlenu(str2);
	if(size1 >= len1 + len2)
	{
		for(int i = 0; i< len1 + len2 +2; i++)
		{
			*(str1 + len1 + i) = *(str2 + i);
		}
		return 1;
	}
	return 0;
}

bool strcmpu(char* str1, char* str2)
{
	int flag = 0,len1,len2;
	len1 = strlenu(str1);
	len2 = strlenu(str2);
	if(len1 == len2)
	{
		for(int i = 0; i<len1; i++)
		{
			if(*(str1 + i) != *(str2 + i))
			{
				flag = 1;
			}
		}
		if(flag == 1)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}

char* strchru(char* str1, char ch)
{
	char *res = NULL;
	for(int i = 0; i>=0 ; i++)
	{
		if(*(str1 + i) == ch)
		{
			res = (str1 + i);
			break;
		}
		else if(*(str1 + i)=='\0')
		{
			break;
			res = NULL;
		}
	}
	return res;
}

char* strstru(char* str1, char* str2)
{
	char* res = NULL;
	int len2, flag =0;
	len2 = strlenu(str2);
	for(int i = 0;i>=0; i++)
	{
		res = str1 + i;
		if(strcmpu(str1,str2))
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		return res;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	const int size = 20;
	char str1[size],str2[size],str3[size];
	char*ap;
	cout<<"\nyour first string \n";
	gets(str1);
	cout<<"\nyour second string \n";
	gets(str2);
	cout<<"size of strings";
	cout<<"\n"<<strlenu(str1)<<strlenu(str2);
	cout<<"concatenated strings are \n";
	strcatu(str1,size,str2);
	puts(str1);
	cout<<"\nreenter strings to compare";
	cout<<"\nyour first string \n";
	gets(str1);
	cout<<"\nyour second string \n";
	gets(str2);
	if(strcmpu(str1,str2))
	{
		cout<<"\nyes the strings are identical";
	}
	else
	{
		cout<<"\n the strings are mismatched";
	}
	cout<<"\n now if we copy the first string into the second string";
	strcpyu(str2,size,str1);
	cout<<"\nstr1\t";
	puts(str1);
	cout<<"\nstr2\t";
	puts(str2);
	char a;
	cout<<"\n enter a character to find in string";
	cin>>a;
	ap = strchru(str1,a);
	if(ap != NULL)
	{
		cout<<"\n"<<a<<" is found in string at"<<ap-str1 + 1;
	}
	else
	{
		cout<<"\n"<<a<<" was not found in string";
	}
	cout<<"\nenter a small string to find in the above string \n";
	gets(str3);
	ap = strstru(str1,str2);
	if(ap != NULL)
	{
		cout<<"\n";
		puts(str2);
		cout<<" is found in string at"<<ap-str1 + 1;
	}
	else
	{
		cout<<"\n";
		puts(str2);
		cout<<" was not found in string";
	}
	return 1;
}
