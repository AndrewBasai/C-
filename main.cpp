#include <iostream>
#include <string.h>
#include <stdlib.h>
#define N 7 //number of airflot
using namespace std;

struct AEROFLOT {
	char name[100]; //aeroflot array, which consists of name, number and type fields
	int num;
	char type[100];	
}tr[N];

int main(){
	int i;
	char srch [50];  //an array for recording the required airflot
	cout<< "Enter: finish point, plane num, type plane";
	
	for (i=0; i<N; i++) {
        cout << "\n" << i+1 <<"-i route:" << endl;  //filling the array with planes
        cin>> tr[i].name >> tr[i].num >> tr[i].type;
    }
    for(i=0; i<N-1; i++){
    	for(int j=i+1; j<N; j++){
    	if(strcmp(tr[i].name, tr[j].name) > 0){	//sort array by name
    			swap(tr[j],tr[i]);
				}
		}	
    }
	for(i=0; i<N; i++){
		cout <<"Sort arrey:"<<' '<< tr[i].name << ' ' << "Plane num:" <<' '<< tr[i].num <<' '<< "Plane type:" <<' '<< tr[i].type<< ' '<<endl; //output of the sorted array
		}	
	while (true) {
		cout << "Enter plane type" << endl; //sort array by type
		cin >> srch;
		bool f = false;
		for (i=0; i < N; i++){
		if (strcmp (tr[i].type, srch)==0) {
		cout <<"Distination:"<<' '<< tr[i].name << ' ' << "Plane num:" <<' '<< tr[i].num <<' '<< "Plane type:" <<' '<< tr[i].type<< ' '<<endl;
		f = true;
	        }
       }
	if (!f) cout << "No matches"<<endl; // if no such airflot are found
   }
	return 0;	
}
