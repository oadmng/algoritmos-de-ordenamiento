#include <iostream>
using namespace std;
void coctail(int *lista, int tamano){
    bool esOrdenado=false;
    int repe=0;
    int repe2=0;
    while(esOrdenado==false){
        int order=0;
        for(int i=(0+repe2);i<(tamano-1-repe);i++){
            if(*(lista+i)>*(lista+i+1)){
                int tem=*(lista+i+1);
                *(lista+i+1)=*(lista+i);
                *(lista+i)=tem;
                order=order+1;
            }
        }
        repe=repe+1;
        if(order==0){
            esOrdenado=true;
            continue;
        }
        order=0;
        for(int i=0+repe2;i<tamano-1-repe;i++){
            if(*(lista+tamano-1-repe-i+repe2)<*(lista+tamano-1-repe-i+repe2-1)){
                int tem=*(lista+tamano-1-repe-i+repe2-1);
                *(lista+tamano-1-repe-i+repe2-1)=*(lista+tamano-1-repe-i+repe2);
                *(lista+tamano-1-repe-i+repe2)=tem;
                order=order+1;
            }
        }
        repe2=repe2+1;
        if(order==0){
            esOrdenado=true;
            continue;
        }

    }
}
int main(){
    int a[20]={1,4,2,3,5,6,7,5,4,5,6,9,8,7,45,34,23,76,89,23};
    int numero=20;
    coctail(a,numero);
    for(int i=0;i<numero;i++){
        cout<<a[i]<<endl;
    }
}
