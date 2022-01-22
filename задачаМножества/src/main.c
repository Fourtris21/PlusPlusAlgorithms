#include <stdio.h>
#include <stdlib.h>

#define ELEM(arr) (sizeof(arr)/sizeof(arr[0]))
#define DIM(A) (sizeof(A)/sizeof(*(A))) 

//метод за изчистване на множествата

int * Unique(int arr[], int sizeOfArr)
{
	int i;
	int counter = 0;
	int * newArray = malloc(sizeof(int) * sizeOfArr);
	if(newArray == NULL)
	{
		return NULL;
	}
	int position = 0;
	for ( i = 0; i < sizeOfArr; i++)
	{
		counter = 0;
		for (int j = 0; j < sizeOfArr; j++)
		{
			if(i != j)
			{
				if(arr[i] == arr[j])
				{
					counter ++;
				}
			}
			if(i == j && counter == 0)
			{
				newArray[position] = arr[i];
				position ++;
				
			}
			if(i == j)
			{
				break;
			}
		}
	}
	return newArray;
}
//метод за ръчно броене на елементите в масив
int  CountOfElementsInUniqueArray(int arr[], int sizeOfArr)
{
	int i;
	int counter = 0;
	int countArrayElements = 0;
	int * newArray = malloc(sizeof(int) * sizeOfArr);
	if(newArray == NULL)
	{
		return NULL;
	}
	int position = 0;
	for ( i = 0; i < sizeOfArr; i++)
	{
		counter = 0;
		for (int j = 0; j < sizeOfArr; j++)
		{
			if(i != j)
			{
				if(arr[i] == arr[j])
				{
					counter ++;
				}
			}
			if(i == j && counter == 0)
			{
				newArray[position] = arr[i];
				position ++;
				countArrayElements++;
				
			}
			if(i == j)
			{
				break;
			}
		}
	}
	return countArrayElements;
}
//метод за намиране на сечението на две множества
void Sechenie(int size, int size2)
{
	int *arr;
	arr = (int*)malloc(sizeof(int) * size);
	printf("Enter the first mnojestwo: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	arr = Unique(arr, size);
	//free(arr);

	int *arr2;
	arr2 = (int*)malloc(sizeof(int) * size2);
	printf("Enter the second mnojestvo: ");
	for (int i = 0; i < size2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	arr2 = Unique(arr2, size2);
	
	int sizeOfNewArr = CountOfElementsInUniqueArray(arr, size);
	int sizeOfNewArr2 = CountOfElementsInUniqueArray(arr2, size2);

	for (int i = 0; i < sizeOfNewArr; i++)
	{
		for (int j = 0; j < sizeOfNewArr2; j++)
		{
			if(arr[i] == arr2[j])
			{
				printf("%d\n", arr[i]);
			}
		}
		
	}
	
	//return arr;


	
	 
}
int main()
{
	//my calculator
	int size, size2;

	printf("Enter the size of the first array: ");
	scanf("%d", &size);
	printf("Enter the size of the second array: ");
	scanf("%d", &size2);
	printf("Sega izberete kakwo iskate da ptarite s tezi dwe mnojestwa\n");
	printf("nepishete nqkoq ot slednite funkcii: Sechenie, Obedinenie, Razlika, Simetrichna razlika\n");
	//scanf()
	/*switch (expression)
	{
	case /* constant-expression *///:
		/* code */
		/*break;
	
	default:
		break;
	}*/

	Sechenie(size, size2);
	//проверка на метода Sechenie дали връща уникалните стрингове(множества)
	/*int * newArr = Sechenie(size, size2);
	if(newArr == NULL)
	{
		return 1;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", newArr[i]);
	}*/
	
	
	//проверка на Unique метода
	/*int arr[] = {1,2,2,3,4,4};
	int sizeOfArr = DIM(arr);
	
	int i;
	int * newArr = Unique(arr, sizeOfArr);
	int count = CountOfElementsInUniqueArray(arr, sizeOfArr);
	if(newArr == NULL)
	{
		return 1;
	}
	for (i = 0; i < count ; i++)
	{
		printf("%d\n", newArr[i]);
	}
	free(newArr);*/
	
	 
	return 0;

}
