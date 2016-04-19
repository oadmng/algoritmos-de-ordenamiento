#include <iostream>
#include <vector>
using namespace std;
void insertion(vector<int> lista, int tamano){
    int cont=1;
    for(int i=1;i<tamano;i++){
        int ind=0;
        for(int j=0;j<=cont;j++){
            if(lista[i]<=lista[cont-j]){
                ind=cont-j;
            }
        }
        lista.insert(lista.begin()+ind,lista[i]);
        lista.erase(lista.begin()+i+1);
        cont=cont+1;
    }
    for(int i=0;i<tamano;i++){
    cout<<lista[i]<<endl;
 }
}
int main(){
 vector<int> lista;
 lista.push_back(-7);
 lista.push_back(56);
 lista.push_back(43);
 lista.push_back(2);
 lista.push_back(7);
 lista.push_back(-1);
 lista.push_back(-45);
 lista.push_back(23);
 lista.push_back(21);
 int tamano=9;
 insertion(lista,tamano);

}
