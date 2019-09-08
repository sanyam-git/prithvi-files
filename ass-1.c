#include<stdio.h>
#include<string.h>
int main()

{
char input[100];char word[10];
printf("Enter the string:\n");scanf("%[^\n]",input);
printf("Enter the word:\n");scanf(" %[^\n]",word);

int start,end,len_word=strlen(word),len_input=strlen(input);
int i,j;int count=0;int occ_arr[20];int count_index=0;


for(i=0,j=0;j<len_word,i<len_input;)
	{if(input[i]==word[j]) {i++;j++;count++;if(count==len_word){occ_arr[count_index]=i-len_word;count_index++;}} //written input[j] instead of word[j]
	else{j=0;i++;count=0;}
	}

start=occ_arr[0];end=occ_arr[--count_index]+len_word;

for(i=0;i<start;i++)
printf("%c",input[i]);
for(i=end;i<len_input;i++)
printf("%c",input[i]);



return 0;
}

