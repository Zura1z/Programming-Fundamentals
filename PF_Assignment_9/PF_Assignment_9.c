#include <stdio.h>
#include <stdlib.h>

void FileReader(FILE *Filename, int *CountArray, char *CharArray);
int MaxCount(int *count, int *max, char *maxchar);
void CharCount(int *BigFileCount, int *FileCount, int *stringdup);

int main(int argc, char *argv[])
{
	FILE *StandardFile, *TestFile;
	StandardFile = fopen("big.txt", "r");
	TestFile = fopen(argv[1], "r");
	char BigString[6999999], TestString[1000000];

	int StandardCount[96] = {0};
	int TestFileCount[96] = {0};

	int CipherKey[126] = {0};

	FileReader(TestFile, &TestFileCount[0], &TestString[0]);
	FileReader(StandardFile, &StandardCount[0], &BigString[0]);

	CharCount(&StandardCount[0], &TestFileCount[0], &CipherKey[0]);
	for (int i = 10; i < 127; i++)
	{
		printf("%c", (char)CipherKey[i]);
		if (i == 10)
		{
			i = 31;
			continue;
		}
	}
	return 0;
}
void FileReader(FILE *Filename, int *CountArray, char *CharArray)
{
	char ch;
	int i = 0,x;

	if (Filename == NULL)
	{
		printf("Error while opening the file.\n");
		exit(1);
	}
	while ((ch = fgetc(Filename)) != EOF)
	{
		CharArray[i] = ch;
		if (CharArray[i] >= 32 && CharArray[i] <= 126)
		{
			x = CharArray[i] - 32;
			CountArray[x]++;
		}
		if (CharArray[i] == 10)
		{
			x = 95;
			CountArray[x]++;
		}
		i++;
	}
	CharArray[i] = '\0';
	fclose(Filename);
}
int MaxCount(int *count, int *max, char *maxchar)
{
	int j;
	for (int c = 0; c < 96; c++)
	{
		if (c == 95)
		{
			if (count[c] >= *max)
			{
				*maxchar = (char)10;
				*max = count[c];
				j = c;
				continue;
			}
		}
		if (count[c] >= 0)
		{
			if (count[c] > *max)
			{
				*maxchar = (char)(c + 32);
				*max = count[c];
				j = c;
			}
		}
	}
	return j;
}
void CharCount(int *BigFileCount, int *FileCount, int *stringdup)
{
	for (int i = 0; i < 96; i++)
	{
		int max = 0,max2 = 0;
		char maxch,maxch2;
		for (int f = 0; f < 96; f++)
		{
			int j;
			j = MaxCount(&BigFileCount[0], &max, &maxch);
			BigFileCount[j] = 0;
			if (max == 0)
			{
				break;
			}
			j = MaxCount(&FileCount[0], &max2, &maxch2);
			FileCount[j] = 0;
			int p = (int)maxch;
			if (max2 > 0)
			{
				stringdup[p] = (int)maxch2;
			}
			else if (max2 == 0)
			{
				stringdup[p] = (int)maxch;
			}
			max2 = 0;max = 0;
		}
	}
}