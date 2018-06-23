# include <iostream>
# include "vector.h"

using namespace std;

template< class T >
class Matrix
{
private:
	int r,c;

	vector<vector<T>> mat;
public:

	Matrix( Matrix<T> & m1)
	{
		r = m1.r;
		c = m1.c;
		vector<T> temp(r,0),temp1;
		mat.resize(c,temp);

		int count = 0;
		
		
		for(int i = 0 ; i < c ; i++)
		{
			for(int k = 0 ; k < count ; k++)
			{
				temp1.pop_back();
			
			}

			count = 0;
			for (int j = 0 ; j < r ; j++)
			{
				
				temp1.push_back(m1[i][j]);
				count++;
			
			}
			mat.set(i,temp1);
		
		}
	
	}

	const Matrix & operator=( Matrix<T> & m1)
	{
		r = m1.r;
		c = m1.c;
		vector<T> temp(r,0),temp1;
		mat.resize(c,temp);
		int count = 0;
		
		
		for(int i = 0 ; i < c ; i++)
		{
			for(int k = 0 ; k < count ; k++)
			{
				temp1.pop_back();
			
			}

			count = 0;
			for (int j = 0 ; j < r ; j++)
			{
				
				temp1.push_back(m1[i][j]);
				count++;
			
			}
			mat.set(i,temp1);
		
		}

		return *this;
	
	
	}

	void makem(int x, int y)
	{
		r = x;
		c = y;

		vector<T> temp(x,0);

		//mat.resize(d2, vector<float>(d1,0));
		mat.resize(y,temp);
	
	}

	Matrix(int x, int y)
	{
		r = x;
		c = y;

		vector<T> temp(x,0);

		//mat.resize(d2, vector<float>(d1,0));
		mat.resize(y,temp);

		
		/*vector<T> temp;
		temp.reallocate(x);

		for(int i = 0 ; i < x ; i++)
		{
			mat[i].reallocate(y);
		
		}*/

		/*vector<T> temp;

		for(int i = 0 ; i < x ; i++)
		{
			mat.reallocate(temp.reallocate(y))
				
		
		}*/
		
		/*for(int i = 0 ; i < y ; i++)
		{
			temp.push_back(0);
		
		}
		for(int i = 0 ; i < x ; i++)
		{
		    mat.push_back(temp);
		}*/
	}

	int getrow()
	{
		return r;
	
	}

	int getcol()
	{
		return c;
	
	}
	
	vector<T> & operator[](int i)
	{
		return mat[i];
	
	}

	
	};

