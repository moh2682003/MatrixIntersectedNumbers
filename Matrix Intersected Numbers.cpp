#include <iostream>
#include <cstdlib>


using  namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillRandomMatrixWithRandomNumber(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Matrix[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrixArray(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			
			printf("%02d  ", arr[i][j]);
		}
		cout << endl;
	}
	cout << "***********************************" << endl;
}

bool CheckNumberInMatrix(int Matrix[3][3], short Rows, short Cols, int Number)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
				return true;
		}
	}
	return false;
}

void PrintIntersectedNumberInMatrix(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	bool Found = false;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (CheckNumberInMatrix(Matrix2, Rows, Cols, Matrix1[i][j]))
			{
				cout << Matrix1[i][j] << "   ";
				Found = true;
			}

		}
	}
	if (Found == false)
		cout << "No Intersected Number\n";
}






int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3],Matrix2[3][3];
	
	FillRandomMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "Matrix 1\n";
	PrintMatrixArray(Matrix1, 3, 3);


	FillRandomMatrixWithRandomNumber(Matrix2, 3, 3);
	cout << "Matrix 2\n";
	PrintMatrixArray(Matrix2, 3, 3);
	
	cout << "\nIntersected Number are : ";
	PrintIntersectedNumberInMatrix(Matrix1, Matrix2, 3, 3);
	cout << endl;

	system("pause");
	

}