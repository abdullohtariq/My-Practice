#include<iostream>
using namespace std;





int functionone(int places,int size_Array,int size_Array1,int size_Array2,int size_Array3){

    for (int i = 0; i <= size_Array; i++){
            for (int j = 0; j <= size_Array1; j++){
                    for (int k = 0; k <= size_Array2; k++){
                            for (int l = 0; l <= size_Array3; l++){
                                cout<<places[i][j][k][l]<<endl;
    
    }
    }
    }
    }

    
    
    

}

int main(){

    int places[3][3][3][3]={{{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{12,14,15},{16,17,18}},
 {{19,20,21},{22,23,24},{25,26,27}}},{{{28,29,30},{31,32,33},{34,35,36}},{{37,38,39},
 {40,41,42},{43,44,45}},{{46,47,48},{49,50,51},{52,53,54}}},{{{55,56,57},{58,59,60},{61,62,63}},
 {{64,65,66},{67,68,69},{70,71,72}},{{73,74,75},{76,77,78},{79,80,81}}}};

    int size_Array = sizeof(places)/sizeof(places[0]);
    int size_Array1 = sizeof(places)[0]/sizeof(places[0][0]);
    int size_Array2 = sizeof(places)[0][0]/sizeof(places[0][0][0]);
    int size_Array3 = sizeof(places)[0][0][0]/sizeof(places[0][0][0][0]);

functionone(places,size_Array,size_Array1,size_Array2,size_Array3);





}