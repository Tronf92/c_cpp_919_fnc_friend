#include <iostream>

using namespace std;

class exemplu{

	int a,b;

	public:
		friend int suma(exemplu x);
		void set_ab(int i, int j);

};

void exemplu::set_ab(int i, int j){
	a=i;
	b=j;
}

int suma(exemplu obiect){
	return obiect.a + obiect.b;
}

void main(){
	exemplu intreg;

	cout << "Aduna 3 cu 4 : " << endl;
	intreg.set_ab(3,4);
	cout << "Rezultat = " << suma(intreg);

	system("pause");
}
