#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int lengthOfNumber(int number)
{
	int use_number = number;
	int length = 0;
	while (use_number)
	{
		use_number = use_number / 10;
		length++;
	}
	return length;
}


int is_digit()
{
	int digit;
	int check = 0;
	do
	{
		int check = scanf("%d", &digit);
		if (check)
			return digit;
		else
		{
			printf("Error, repeat !\n");
			scanf("%*c");
			// return 1;
		}
	} while (!check);
	return 0;
}

//int get_int() {
//	int n;
//	int* a = NULL;
//	do {
//		n = scanf("%d", a);
//		if (n < 0)
//			return 0;
//		if (n == 0) {
//			printf("%s\n", "Error! Repeat input");
//			scanf("%*c");
//			return -1;
//		}
//	} while (n == 0);
//	return 1;
//}

int* input_original_seq(int _number_)
{
	int* _Seq_;
	int count;
	printf("Input number of elements in your sequence --> ");
	_number_ = is_digit();

	_Seq_ = (int*)malloc(sizeof(int) * _number_);

	printf("Original sequence\n");
	for (count = 0; count <= _number_ - 1; count++)
	{
		printf("\t");
		_Seq_[count] = is_digit();
	}
	return _Seq_;
}

int size_array(int* _Seq_)
{
	int count = 0;
	while (_Seq_[count])
	{
		//printf("%d\n", count);
		//printf("%d\n", _Seq_[count]);
		count++;
	}
	return count;
}

void output_modified_sequence(int* _Seq_, int _size_)
{
	int first, last;
	int replace;
	int count = 0;
	int numberLength;
	for (; count <= _size_; count++)
	{
		replace = _Seq_[count];
		numberLength = lengthOfNumber(replace);
		last = replace % 10;
		first = 

	}
}


void output_result_sequence(int* _Seq_, int _digit)
{
	int counter;
	for (counter = 0; counter < _digit; counter++)
	{
		int tmp = _Seq_[counter];
		int lengthNumber = lengthOfNumber(tmp);
		printf("%d ", lengthNumber);
	}
}


int main()
{
	int numberOfElements = 0;
	int* originalSeq = NULL;

	originalSeq = input_original_seq(numberOfElements);
	numberOfElements = size_array(originalSeq) - 1;
	printf("%d\n", numberOfElements);
	// output_result_sequence(originalSeq, numberOfElements);

	int ss = 0;

	return 0;
}