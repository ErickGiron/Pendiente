#include <iostream>
using namespace std;

class punto
{
	private:
		double x;
		double y;
	public:
		void tomarpuntos(const char num)
		{
			cout << "El punto "<< num <<" en x :" << endl;        //Se pide los puntos al usuario
			cin  >> x;
			cout << "El punto "<< num <<" en y :" << endl;
			cin  >> y;
		}
		void mostrarpuntos(const char num)
		{
			cout <<"El punto " << num << " es : ( "<< x << " , " << y << " )" << endl;
		}
		void llamarpunto(double& X, double& Y)
		{
			X=x;
			Y=y;
		}
};
inline void swap(double& i, double& j)			
{													// Intercambio entre las dos variables		
	double temp = i;
	i = j;
	j = temp;
}

int main ()
{
	double pendiente, x1, x2, y1, y2;
	punto p1, p2;
	p1.tomarpuntos('1');
	p1.mostrarpuntos('1');
	p2.tomarpuntos('2');
	p2.mostrarpuntos('2');
	p1.llamarpunto(x1,y1);
	p2.llamarpunto(x2,y2);
	swap(x1,x2);
	swap(y1,y2);
	cout <<"El nuevo punto 1 es : ( " << x1<< " , " << y1 << " )" << endl;
	cout <<"El nuevo punto 2 es : ( " << x2<< " , " << y2 << " )" << endl;
	pendiente= (y2-y1)/(x2-x1);
	cout << "La pendiente es :" << pendiente << endl;
}
