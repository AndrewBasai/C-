#include <iostream>
#include <string.h>
#include <stdlib.h>
#define N 7 //кількість літаків
using namespace std;

struct AEROFLOT {
	char name[100]; //масив аєрофлот, який складається з полів назва, номер, та тип
	int num;
	char type[100];	
}tr[N];

int main(){
	int i;  //лічильник
	char srch [50];  //масив для запису шуканих літаків
	cout<< "Enter: finish point, plane num, type plane";
	
	for (i=0; i<N; i++) {
        cout << "\n" << i+1 <<"-i route:" << endl;  //заповнення масиву з літакими
        cin>> tr[i].name >> tr[i].num >> tr[i].type;
    }
    for(i=0; i<N-1; i++){
    	for(int j=i+1; j<N; j++){
    	if(strcmp(tr[i].name, tr[j].name) > 0){	// сортування мавису по ім'ю
    			swap(tr[j],tr[i]);
				}
		}	}
	for(i=0; i<N; i++){
		cout <<"Sort arrey:"<<' '<< tr[i].name << ' ' << "Plane num:" <<' '<< tr[i].num <<' '<< "Plane type:" <<' '<< tr[i].type<< ' '<<endl; // виведення відсортованого масиву
		}	
	while (true) {
				 cout << "Enter plane type" << endl; //пошук літака за типом і його вивід на дисплей
				 cin >> srch;
				 bool f = false;
				 for (i=0; i < N; i++){
				 	if (strcmp (tr[i].type, srch)==0) {
				        cout <<"Distination:"<<' '<< tr[i].name << ' ' << "Plane num:" <<' '<< tr[i].num <<' '<< "Plane type:" <<' '<< tr[i].type<< ' '<<endl;
				        f = true;
						    }
						}
					if (!f) cout << "No matches"<<endl; // якщо таких літаків не знайдено
					}
	return 0;	
}
