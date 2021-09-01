#include <iostream>

using namespace std; 

int main(){
	int x, z;
	cout<<"Masukan Nilai X : ";
	cin>>x;
	cout<<"Masukan Nilai Z : ";
	cin>>z;
	
	if(x%2!=0 && z%2!=0){
		cout<<"Semua bilangan ganjil";
	}else if(x%2!=0 && z%2==0){
		cout<<" X ganjil dan Z genap";
	}else if(x%2==0 && z%2==0 ){
		cout<<"Semua bilangan genap";
	}else{
		cout<<"X genap dan Y ganjil";
	}
}
