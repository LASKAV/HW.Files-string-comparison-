// ������ ��� ��������� �����.�������, ��������� �� �� ������ .���� ���, 
// �� ���������� ������, ������� �� ��������� �� ������� �����.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>


void viz();

int main()
{
	setlocale(LC_ALL, "ru");

	// "file1.txt"
	// "file2.txt"
		 
	FILE* F = fopen("file1.txt", "rt");  // "rt" - ��� ������ � ��������� ���� � ������ �����

	if (F == NULL)
	{
		std::cout << "File 1 �� ���������" << std::endl;
		return -1;
	}
	std::cout << "File 1 ������ " << std::endl;


	char str1[100];
	fgets(str1, 100, F);

	viz();
	std::cout << str1;
	viz();

	FILE* G = fopen("file2.txt", "rt");  // "rt" - ��� ������ � ��������� ���� � ������ �����

	if (G == NULL)
	{
		std::cout << "File 2 �� ���������" << std::endl;
		return -1;
	}
	std::cout << "File 2 ������ " << std::endl;

	char str2[100];
	fgets(str2, 100, G);

	viz();
	std::cout << str2;
	viz();

	std::cout << "file1.txt = " << strlen(str1) << std::endl;
	std::cout << "file2.txt = " << strlen(str2) << std::endl;
	int rezalt1 = strlen(str1);
	int rezalt2 = strlen(str2);
	
	 // ������ �������� �������� ������ ��� ��� ?

	if (rezalt1 == rezalt2)
	{
		std::cout << "������ ���������! " << std::endl;

	}
	else
	{
		std::cout << "C����� �� ���������" << std::endl;
		for (size_t i = 0; i < rezalt2; i++)
		{

			if (str2[i] == str1[i])
			{
				
			}
			else
			{
				std::cout << str2[i];
			}				
		}
	}
	





	fclose(F);
	fclose(G);

	return 0;

}

void viz()
{
	std::cout << std::endl;
	for (size_t i = 0; i < 60; i++)
	{
		std::cout << char(126);
	}
	std::cout << std::endl;
}

