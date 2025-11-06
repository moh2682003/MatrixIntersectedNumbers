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

int CheckBiggestNumberInRandomMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int BiggestNumber = Matrix[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] > BiggestNumber)
				BiggestNumber = Matrix[i][j];
		}
	}
	return BiggestNumber; 
}

int CheckSmallNumberInRandomMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int SmallNumber = Matrix[0][0]; 
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (SmallNumber > Matrix[i][j])
				SmallNumber = Matrix[i][j];
		}
	}
	return SmallNumber;
}







int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];
	
	FillRandomMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "Matrix 1\n";
	PrintMatrixArray(Matrix1, 3, 3);

	cout << "\nThe Biggest Number In Random Matrix: " << CheckBiggestNumberInRandomMatrix(Matrix1, 3, 3) << endl ;


	cout << "\nThe Small Number In Random Matrix: " << CheckSmallNumberInRandomMatrix(Matrix1, 3, 3) << endl;
	
	
	system("pause");
}