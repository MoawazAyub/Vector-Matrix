# include < iostream >
# include "Matrix.h"

using namespace std;

template <class T>
void inputm(Matrix<T> & m1)
{
	for (int i = 0 ; i < m1.getcol() ; i++)
	{
		cout << "enter elements of "<<i+1<<" row" <<endl;
		for(int j=0; j < m1.getrow();j++)
		{
			cin>>m1[i][j];
		
		}
		cout << endl;
	
	}
}

template <class T>
void outputm( Matrix<T> & m1)
{
	for (int i = 0 ; i < m1.getcol() ; i++)
	{
		for(int j=0; j < m1.getrow();j++)
		{
			cout<<m1[i][j]<<"\t";
		
		}
		cout << endl <<endl;
	
	}

}

template <class T>
Matrix<T> addmatrix( Matrix<T> & m1 ,  Matrix<T> & m2)
{
	if(m1.getrow() == m2.getrow() || m1.getcol() == m2.getcol())
	{
	Matrix<T> temp(m1.getrow(),m1.getcol());
	
	for(int i=0 ; i<m1.getcol();i++)
	{
		for(int j = 0 ; j < m1.getrow() ; j++)
		{
			temp[i][j] = m1[i][j] + m2[i][j];
		
		
		}
	
	
	}
	return temp;
	}
	else
	{
		Matrix<T> temp(m1.getcol(),m1.getrow());
		cout <<"Matrix can not be added"<<endl;
		return temp;
	
	
	}




}

template<class T>
void swapm(Matrix<T> & x,Matrix<T> & y)
{
	Matrix<T> z = x;
	x = y;
	y = z;
}

template <class T>
Matrix<T> transposematrix( Matrix<T> & m1 )
{
	
	//Matrix<T> temp(m1.getcol(),m1.getrow());
	if(m1.getcol() == m1.getrow())
	{
	for(int i=0 ; i<m1.getcol();i++)
	{
		for(int j = i ; j < m1.getrow() ; j++)
		{
			swap(m1[i][j], m1[j][i]);
		
		
		}
	
	
	}

	return m1;
	}
	else
	{
		Matrix<T> temp(m1.getcol(),m1.getrow());
	for(int i=0 ; i<m1.getrow();i++)
	{
		for(int j = 0 ; j < m1.getcol() ; j++)
		{
			temp[i][j] = m1[j][i];
		
		
		}
	
	
	}

	return temp;
	}
	
	
	
}




template <class T>
Matrix<T> multiplymatrix( Matrix<T> & m1 ,  Matrix<T> & m2)
{
	if(m1.getrow() == m2.getcol())
	{
	Matrix<T> temp(m1.getcol(),m2.getrow());
	
	for(int i=0 ; i<m1.getcol();i++)
	{
		for(int j = 0 ; j < m2.getrow() ; j++)
		{
			for(int k = 0 ; k < m1.getrow() ; k++)
			{
				
			temp[i][j] = temp[i][j] + (m1[i][k] * m2[k][j]);
			}
		
		}
	
	
	}
	return temp;
	}
	else
	{
		Matrix<T> temp(m1.getcol(),m1.getrow());
		cout <<"Matrix can not be multiplyed"<<endl;
		return temp;
	
	
	}




}

void menu()
{
	cout << "press 1 to add" << endl;
	cout << "press 2 to multiply" << endl;
	cout << "press 3 to transpose" << endl;
	cout << "press 0 to exit" << endl;

}
void main()
{
	Matrix<int> m1(2,2)  ,m2(2,2),m3(2,2);
	int r1 = 0,r2 = 0;
	int c1 = 0,c2 = 0;
	int q = -1;

	while( q != 0)
	{
		menu();
		cin >> q;
		if (q == 1)
		{
			cout << "enter first matrix dimention" << endl;
			cin>>r1;
			cin>>c1;
			cout << "enter second matrix dimention" <<endl;
			cin>>r2;
			cin>>c2;
			m1.makem(r1,c1);
			m2.makem(r2,c2);

			cout << "enter values of first matrix" <<endl;
			inputm(m1);

			cout << "enter values of second matrix" <<endl;
			inputm(m2);

			m3 =addmatrix(m1,m2);
			outputm(m3);
		
		}

		if (q == 2)
		{
			cout << "enter first matrix dimention" << endl;
			cin>>r1;
			cin>>c1;
			cout << "enter second matrix dimention" <<endl;
			cin>>r2;
			cin>>c2;
			m1.makem(r1,c1);
			m2.makem(r2,c2);

			cout << "enter values of first matrix" <<endl;
			inputm(m1);

			cout << "enter values of second matrix" <<endl;
			inputm(m2);

			m3 =multiplymatrix(m1,m2);
			outputm(m3);
		
		}

		if (q == 3)
		{
			cout << "enter first matrix dimention" << endl;
			cin>>r1;
			cin>>c1;
			
			m1.makem(r1,c1);
			

			cout << "enter values of first matrix" <<endl;
			inputm(m1);

			

			m3 =transposematrix(m1);
			outputm(m3);
		
		}
	
	
	}
	
	
	
	
}