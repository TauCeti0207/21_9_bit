#include<stdio.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
//���1 - 100����
int main1401()
{
	int i = 1;
	while (i < 101)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);

		}
		i++;
	}
	return 0;
}

//
//switch��������������α��ʽ
//float day = 1.2;
//switch (day)
//�Ͳ���
//case������������γ������ʽ
//������1.0 Ҳ������n
//��Ҫ����break
//caseҲ���Ǳ���Ҫ���ϵ�
//default ����Ƿ�����
//˳��û��Ҫ��
//switch����Ƕ��ʹ��

int main1402()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
//EOF  ��ctrl + z
//end of file ������ - 1
//�ļ�������־

int main1403()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}
//password ������ �����ټ�& ����, ���������������׵�ַ
//
//���뺯���������뻺�����ж�ȡ����
//������123456ʱ���ᰴ�»س���\n
//��scanfֻ������123456ʣ��\n
//\n��ASCIIֵ��10
//�ᱻgetchar����, ֱ�ӽ���else��� ����ȷ����
//
//����������getchar�ѻ�������ȡ�ɾ�
//scanf�����ո��ֹͣ����
//
//�޸�Ϊ
int main1405()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}



int main1406()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
		printf("\n");
	}
	return 0;
}
//ֻ���0 - 9������
//
//forѭ��
//break / continue
//switchû��continue
//breakֻ������һ��ѭ��
//continue��ֹ����ѭ��, ��������ѭ��
//break ��ֹ����ѭ��


//forѭ���õ����
int	main1407()
{
	int i = 0, j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
//Ϊʲôʮ���Ǻ�
//��ѭ����j��10��, ȥ���, j��ȻΪ10, ȱ�����¸���ֵ

int	main1408()
{
	int i = 0, j = 0;
	for (; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}

//100���Ǻ�



int main1409()
{
	int i = 1, sum = 1, n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	return 0;
}

//��n�׳�


int main1410()
{
	int i = 1, sum = 0, n = 0, ret = 1, k = 0;
	scanf("%d", &k);
	for (n = 1; n <= k; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}

//1!+ 2!+ 3!+ ...
//retÿ�ν�����ѭ��ʱҪ���¸�ֵΪ1, ��Ȼ�����һ���ۼƵ�retһ��˽�ȥ


int main1411()
{
	int i = 1, sum = 0, n = 0, ret = 1, k = 0;
	scanf("%d", &k);
	for (n = 1; n <= k; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);
	return 0;
}
//
//�Ż���
//����ÿ����׳˶��Ǵ�ͷ��ʼ��


int main1412()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ���,�±���:%d", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("�Ҳ���");

	}
	return 0;
}
//˳�����, ʱ��Ч�ʺܵ�
//O(n)

int main1413()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���,�±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}

//���ֲ���, ʱ��Ч�ʴ�����
//ע��ѭ����������������±�����ұ��±�ʱ
//ֻ��left <= right���ܲ���


//������� Sleep��Ҫwindows.h

int main1414()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//��ȡ�ַ����������һ��Ԫ���±���-2 �������/0
	//������strlen,�������/0,������ַ�������
	int right = strlen(arr1) - 1;
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);  //��Ϣ1000ms
		right--;
		left++;
	}
	return 0;
}


//�ٲ����system(��cls��)�����Ļ
//
//
//== �ǲ��������ж�2���ַ����Ƿ����
//Ӧ��ʹ�ÿ⺯��, strcmp stdlib.h
//���2���ַ������, ����0
int main1415()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ,��¼�ɹ�");
			break;
		}
		else
		{
			printf("�������\n");
		}

	}
	if (i == 3)
	{
		printf("�������������,�˳�����\n");
	}
	return 0;

}



int main1416()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

//�������ִӴ�С����


int main1417()
{
	int m = 0, n = 0, r = 0;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("���Լ����%d\n", n);
	return 0;
}
//ȡ���Լ��, 18 % 24 = 18
//շת�����

int main1418()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//1�ܱ�4�����Ҳ��ܱ�100����
		//2�ܱ�400����������
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//�ж�����

int main1513()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//1�ܱ�4�����Ҳ��ܱ�100����
		//2�ܱ�400����������
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}


	}
	printf("\ncount = %d\n", count);
	return 0;
}

//Ҳ����һ���������ж�


int main1514()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//1�Գ����ж�
		//13 2-12ȥ��̽
		//����2-i-1������
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount = %d\n", count);
	return 0;
}

//�ҳ�100 - 200֮�������


int main1515()
{
	//һ����=a*b,������a��b<=��ƽ�������
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{

		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount = %d\n", count);
	return 0;

}

//�Ż���, �Գ���������

int main1516()
{
	//һ����=a*b,������a��b<=��ƽ�������
	int i = 0;
	int count = 0;
	//ż��������������
	for (i = 101; i <= 200; i += 2)
	{

		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount = %d\n", count);
	return 0;

}
//�����Ż�

int main1604()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}
//1-100���ֶ��ٸ�����9
//����2��if���ֲ��й�ϵ,���ܳ���2��99


int main1605()//�������  1-1/2+1/3+...
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
		//ע���ʹ�ø�����,��Ȼ1/2=0
		//��������flag��������1����
	}
	printf("sum= %lf\n", sum);
	return 0;
}

int main1606()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0]; //�����һ��ֵ�����ֵ
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)//ֱ�Ӵӵڶ�������ʼ�Ƚ��Ƿ�Ϊ���ֵ
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}


int main1607() //99�˷���
{
	int i = 0;
	//ȷ����ӡ9��
	for (i = 0; i <= 9; i++)
	{
		//��ӡһ��
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
			//-2d��ʾ�������,2λ����,������ÿո���
		}
		printf("\n");	//��ӡ��һ���ٻ���
	}
	return 0;
}

void menu()
{
	printf("*******************************\n");
	printf("*******1.play   0.exit*********\n");
	printf("*******************************\n");
}
//RAND_MAX   //#define RAND_MAX 0x7fff  32767
void game()
{
	//1����1-100֮�������  0-32767 ����̫���˲�̫��

	int ret = 0;
	int guess = 0;


	ret = rand() % 100 + 1;
	//α�����
	//printf("%d\n", ret);
	//2������
	// 
	while (1)
	{
		printf("�²�����:\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��,�¶���!!!\n");
			break;
		}
	}
	//printf("������\n");
}
int main1608()	//��������Ϸ,
//1��������һ�������
//2������,�в˵�,�����Ը�
{
	srand((unsigned int)time(NULL));	//����һ�ξ�����,��ҪƵ��ȥ����
	//srand ��Ҫ����Ĳ���������unsigned int ǿ��ת������
	// ��time ���ص��� time_t �� ��long���ض���
	// 
	//time_t time( time_t *destTime );
	//__time32_t _time32(__time32_t * destTime);
	//__time64_t _time64(__time64_t * destTime);
	// 
	// 
	//ʱ���,�������ʼʱ��1970 0ʱ0��0��
	// ��ǰ�����ʱ��-��ʼʱ�� =xxxx(��)
	// ��ʱ��������������������ʼ��
	//���srand�����ֲ���,rand��ֵҲ��һֱ����
	//srand��Ҫ����һ�������
	//�����������,ֻ�ܸ���һ����ʱ�ڱ仯����ֵ����,!! ʱ���
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);	//������0ʱ,ǡ���˳�switchѭ����whileѭ��,!!���
	return 0;
}



// crt_rand.c
// This program seeds the random-number generator
// with a fixed seed, then exercises the rand function
// to demonstrate generating random numbers, and
// random numbers in a specified range.



void SimpleRandDemo(int n)
{
	// Print n random numbers.
	for (int i = 0; i < n; i++)
	{
		printf("  %6d\n", rand());
	}
}

void RangedRandDemo(int range_min, int range_max, int n)
{
	// Generate random numbers in the interval [range_min, range_max], inclusive.

	for (int i = 0; i < n; i++)
	{
		// Note: This method of generating random numbers in a range isn't suitable for
		// applications that require high quality random numbers.
		// rand() has a small output range [0,32767], making it unsuitable for
		// generating random numbers across a large range using the method below.
		// The approach below also may result in a non-uniform distribution.
		// More robust random number functionality is available in the C++ <random> header.
		// See https://docs.microsoft.com/cpp/standard-library/random
		int r = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
		printf("  %6d\n", r);
	}
}

int main1609(void)
{
	// Seed the random-number generator with a fixed seed so that
	// the numbers will be the same every time we run.
	srand(1792);

	printf("Simple random number demo ====\n\n");
	SimpleRandDemo(10);
	printf("\nRandom number in a range demo ====\n\n");
	RangedRandDemo(-100, 100, 10);
}
//ÿһ�����ɵ���������ͬ��



int main1610()	//goto ��ѭ�����
{
again:
	printf("hello\n");
	goto again;
	return 0;

}
//goto���������ȥ ���ҳ���ԭ�нṹ ���׳���bug ������ʹ��
//��Ҫ������ֹ���Ƕ��
//
//cmd command - ������


int main1704()
{
	char input[20] = { 0 };
	//shutdown -s -t 60		һ���ӹػ�
	//shutdown -a  ȡ���ػ�
	//system()ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע��:��ĵ��Խ���1���Ӻ�ػ�,��������������ȡ���ػ�\n������:\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("�ٸ���һ�λ���\n");
		goto again;
	}
	return 0;
}


//�ṹ��
//struct
//	�Լ����������һ������
//	�ṹ�����.��Ա
//	�ṹ��ָ��->��Ա



	struct Book
{
	char name[20];
	short price;
};
//struct Book b1 = { "c���Գ������",55 };
//struct Book* pb = &b1;
//strcpy(b1.name, "C++");


//string copy�ַ�������, �⺯�� string.h
//name��һ������ ���Ǳ��� ����ֱ�Ӹ�ֵ�޸�ֵ
//
//
//����
//Ϊʲô���п⺯��
//һЩ����ʹ�õ��Ĺ���, c���Ա����ṩ, Ϊ�����Ч��

int main1705()
{
	//strcpy string copy
	//strlen string length
	char arr1[] = "bit";
	char arr2[20] = "########\0";
	//������������ʵ��bit\0######
	// ��ӡʱ����\0 �ͽ�����,�ַ���������־
	// ĩβ����\0�Ͳ���������� ��������....��
	printf("%s\n", arr2);
	strcpy(arr2, arr1);
	//strcpy���ĩβ��\0Ҳ������ȥ
	printf("%s\n", arr2);
	return 0;
}



//����������1 ������������0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)	//2->i-1������ ȥ�Գ�
	{
		if (n % j == 0)
		{
			return 0;	//return 0��breakǿ��  return 0ִ�к� breakû�л���ִ��
			//break;	//return 0һִ�� ����ֱ�ӽ��� breakֻ������һ��ѭ��
		}
	}
	if (j > sqrt(n))
	{
		return 1;
	}
}
int main1706()
{
	//��ӡ100-200֮�������
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)	//ż��������������
	{
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n�ܹ�%d������\n", count);
	return 0;
}



int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;	//����Ҫ���� ��Ҫ��ӡ
	}
	else
	{
		return 0;
	}
}
int main1801()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж��Ƿ�Ϊ����
		if (is_leap_year(year))
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\n%d\n ", count);
	return 0;
}


int binary_search(int arr[], int k, int sz)//�����������arr��һ��ָ�� ָ��Ĵ�С��Զ��4/8 ȡ����ƽ̨
{
	//����ֵ�������� ������int
	int left = 0;
	//�����ڴ���ʱΪ�˱���ռ��˷�,�����������׵�ַ

	int right = sz - 1;	//�ǵ�Ҫ-1 �����С-1
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;	//�����±�
		}
	}
	return -1;
}
int main1802()
{
	//���ֲ���
	//��һ�����������в��Ҿ���ĳ����
	//����ҵ��˷���������±�,�Ҳ�������-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,20 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ���,�±���%d\n", ret);
	}
	return 0;
}

//!!��������Ҫע��

void Add(int* p)
{
	(*p)++;	//ע��++���ȼ�����,Ҫ��()
}
int main1803()	//ÿ�ε��ú��� numֵ��1 Ҫ�ô���ַ���ܸı�num��ֵ
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}


int main1804()
{
	int len = 0;
	//1 
	len = strlen("abc");
	printf("%d\n", len);

	//2 ��ʽ����
	printf("%d\n", strlen("abc"));
	return 0;
}


int main1805()
{
	//printf return value is
	//On success, the total number of characters written is returned.
	printf("%d ", printf("%d ", printf("%d ", 43)));
	//43 2 1
	return 0;
}


//��������������ͷ�ļ�.h
//�����Ķ���������һ��Դ�ļ� add.c
//Ҫ��ʹ�� include����
//#include��add.h��	�Լ�д��Ҫ�á���
//
//��������ֻ������ �����ĺ����ǲ�����Ĵ���
//��������ʹ��


//#ifndef __ADD_H__	//���û�ж��� __ADD_H ����ֵΪ�� �Ͷ���  �����������ظ�include
//#define __ADD_H__
//int Add(int x, int y);
//#endif // !__ADD_H__



//�ݹ�

int main1806()	//�ݹ�
{
	printf("�Ǻ�\n");
	main();	//��򵥵ĵݹ�
	return 0;
}
//һֱѭ���Ǻ�,Ȼ��ջ��� Stack overflow
//�κ�һ�κ������ö������ڴ�����ռ�  ��������ռ� ջ���ռ䱻ռ�� Ȼ��ջ���
//ջ�� ���� ��̬��
//ջ�� �ֲ����� �����β�
//���� ��̬���ٵ��ڴ� malloc ccalloc
//��̬�� ȫ�ֱ��� static ���εı���


void print(int n)
{
	if (n > 9)	//�ݹ�Ҫ�ҵ����� ���������ż����ݹ� ��Ȼ����ѭ�� ջ���
		//ÿ�εݹ�֮��Խ��Խ�ӽ�����
		//�ݹ��2����Ҫ����
		//ûд��2����Ҫ���� �����Ǵ����

	{
		print(n / 10);
		//���������ص���
	}
	printf("%d ", n % 10);
}
int main1901()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//�ݹ� �����Լ������Լ�
	//�Ѹ���������һ����С���� ��ԭ��������
	//1234
	//123 4
	//12 3 4
	//1 2 3 4
	print(num);
	return 0;
}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//�Լ�дһ���������ַ�������
int main1902()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}


//Ҫ����ʹ����ʱ���� ���ַ������� �粻����count
//�ݹ�
int my_strlen1(char* str)
{
	if (*str != 0)	//�ݹ�ı�Ҫ����
	{
		return 1 + my_strlen1(str + 1);
	}
	else
	{
		return 0;
	}
}
//�Լ�дһ���������ַ�������
int main1903()
{
	char arr[] = "bit";
	int len = my_strlen1(arr);
	printf("len = %d\n", len);
	return 0;
}


//�ݹ������
//��n�Ľ׳�
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int main1904()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac1(n);
	printf("%d\n", ret);
	return 0;
}


int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}
int main2002()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);
	printf("%d\n", ret);
	return 0;
}


//쳲���������
//1 1 2 3 5 8 13 21 34 55
int count = 0;

int Fib(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
	{
		return 1;

	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
//������50��쳲��������� Ҫ��ܾ�
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//2��50�η�...
//��ǰ�������úܶ�
int main2003()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD ������������ ��ȥ����ô��������� ��ȥ����ôʵ��
	ret = Fib(n);
	printf("ret= %d\n", ret);
	printf("count= %d\n", count);
	//���������40��쳲���������ʱ ���˶��ٴ�Fib(3)
	//���ظ�������3900w��

	return 0;
}


int Fib1(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;	//��n��1��2�� 쳲��������е�ֵҲǡ��Ϊ1 ���Է���1����
}
//������50��쳲��������� Ҫ��ܾ�
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//2��50�η�...
//��ǰ�������úܶ�
int main2004()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD ������������ ��ȥ����ô��������� ��ȥ����ôʵ��
	ret = Fib1(n);	//�ٶȼ���Ŀ�!!! ��100��쳲���������ֻ��Ҫһ˲��ͳ�����
	//��Fib ���˺ü�����
	printf("ret= %d\n", ret);

	return 0;
}

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
//�ݹ鼴ʹ�����Ҫ��Ҫ����Ҳ���ܳ���ջ���
int main2005()
{
	test(1);
	return 0;
}

void Move_(char From, char Dest)					//�ƶ�һ��Բ�̣���Բ�̴���Դ�ƶ���Ŀ�ĵ�  ��From �ƶ���Dest 
{
	printf("��һ��Բ�̴�%c���� -> %c����\n", From, Dest);
}
void Hanoi(char A, char B, char C, int  n)	//�ܹ���n��Բ�̣�����n��Բ��  ���� B ���� �� A �����ƶ���  C ����
{
	if (n == 1)								//��ֻ��һ��Բ��ʱ��ֱ��Բ�̴� A �� �ƶ��� C ��
	{
		Move_(A, C);
	}
	else
	{
		Hanoi(A, C, B, n - 1);				 //����ֻһ��Բ��ʱ�������Ƚ����� ��n -1����Բ�� ���� C����  �� A �����ƶ��� B ����

		Move_(A, C);					//A��ʣ��һ��Բ�̣���ʣ�µ�һ��Բ�̴� A �ƶ��� C
		Hanoi(B, A, C, n - 1);			//�ٽ���n-1����Բ�� ���� A���� �� B���� �ƶ��� C����
	}
}
int main2006()	//��ŵ������
{

	int  n = 0;							//��ŵ������
	char A = 'A';						//A����
	char B = 'B';						//B����
	char C = 'C';						//C����
	scanf("%d", &n);

	Hanoi(A, B, C, n);						//��n��Բ�̣�������B���ӣ���A�����ƶ���C����
	return 0;
}


//����
int main2007()
{
	//�����С�����ǳ������ʽ
	//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr4));
	//sizeof����arr4���ڿռ�Ĵ�С 7*1
	//strlen���ַ������� �ҵ�\0��ֹͣ ��\0����¼
	return 0;
}

//1 strlen��sizeofû��ʲô����
//2 strlen���ַ������� ֻ����ַ����󳤶� �⺯�� ��Ҫ����ͷ�ļ�
//3 sizeof ������� ���� ���͵Ĵ�С ��λ���ֽ� ֻ�ǲ�����
int main2008()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	// 4 3 3 ���ֵ
	printf("%d\n", strlen(arr2));
	printf("%d\n", arr1[3]);	//arr1�еĽ�����־\0Ҳ���ܴ�ӡ��

	return 0;
}

//�����ڵ�ַ�ռ��������� �ɵ͵�ַ���ߵ�ַ
int main2009()	//�о��������ڴ��еĴ���
{
	//��ά�����о��Բ���ʡ��,�п���ʡ��
	int arr[3][4] = { {1,2,3},{4,5} };
	int arr2[][4] = { {1,2,3},{4,5} };
	char arr1[3][4];
	return 0;
}

int main2010()	//�����ά��������
{

	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main2011()	//��ӡ��ά�����ַ
//���е�˳������ ��ά�������ڴ���Ҳ�������洢
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p ", i, j, &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void bubble_sort(int* arr[], int sz)
{
	//һ��ð������,��һ�˱Ƚϴ���-1
	//10��Ԫ�رȽ�9��,��һ��9��Ԫ�رȽ�8�� 
	//ȷ������ 10��Ԫ��9��
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}

//ð������
int main2012()	//������Ϊ������������
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr�������� �ų�����
	//��������д��� ����ȥ������Ԫ�ص�ַ ����ռ��˷� &arr[0]
	bubble_sort(arr, sz);
	//��������Ԫ��
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//�Ľ�:
void bubble_sort(int* arr[], int sz)
{
	//һ��ð������,��һ�˱Ƚϴ���-1
	//10��Ԫ�رȽ�9��,��һ��9��Ԫ�رȽ�8�� 
	//ȷ������ 10��Ԫ��9��
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;	//������һ������������Ѿ�����
		//ÿһ������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]);
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;	//��������������ʵ����ȫ���� 
			}
		}
		if (flag == 1)
		{
			break;	//��һ��ȷʵ���� ֱ������
		}
	}

}

//ð������
int main2013()	//������Ϊ������������
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr�������� �ų�����
	//��������д��� ����ȥ������Ԫ�ص�ַ ����ռ��˷� &arr[0]
	bubble_sort(arr, sz);
	//��������Ԫ��
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//ȱ�� Ч�ʱȽϵ� ̫��ʵ�� �������ȥ���Ѿ�������ľ�û��Ҫһֱ�Ƚ�


int main2014()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };


	//������������Ԫ�ص�ַ
	//2������
	//1.sizeof (������) ���������������Ĵ�С ��λ���ֽ�
	//2.&������  �������ȡ�����������ַ
	printf("%p\n", arr);
	printf("%p\n", arr + 1);	//+4

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);	//+4


	printf("%p\n", &arr);	//���������ַ
	//���岻��ͬ
	printf("%p\n", &arr + 1);	//���������ַ	+40 10��Ԫ��

	return 0;
}