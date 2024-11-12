#include <iostream>

using namespace std;

struct Ponto3D{
	int x, y, z;
};

int main()
{
	struct Ponto3D umPonto;
	umPonto.x= 23; 
	umPonto.y= -15;
	umPonto.z= 78;
	cout << "Ponto: P(" << umPonto.x << "," << umPonto.y << "," <<
umPonto.z << ")" << endl;

	return 0;
}
