#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    
    int qtd,altura,largura,level,posxmagia,posymagia,dano,raio,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,CCx,CCy,CBx,CBy,CEx,CEy,CDx,CDy;
    string magia;

    cin >> qtd;

    for(int i = 0; i < qtd; i++){

        cin >> largura >> altura >> Ax >> Ay;
        cin >> magia >> level >> posxmagia >> posymagia;

        if(magia == "fire"){
            dano = 200;

            switch (level){
            case 1:
                raio = 20;
            break;
            case 2:
                raio = 30;
            break;
            case 3:
                raio = 50;
            break;            
            }
        }
        if(magia == "water"){
            dano = 300;

            switch (level){
            case 1:
                raio = 10;
            break;
            case 2:
                raio = 25;
            break;
            case 3:
                raio = 40;
            break;            
            }
        }
        if(magia == "earth"){
            dano = 400;

            switch (level){
            case 1:
                raio = 25;
            break;
            case 2:
                raio = 55;
            break;
            case 3:
                raio = 70;
            break;            
            }
        }
        if(magia == "air"){
            dano = 100;

            switch (level){
            case 1:
                raio = 18;
            break;
            case 2:
                raio = 38;
            break;
            case 3:
                raio = 60;
            break;            
            }
        }

        Bx = Ax;
        By = Ay + altura;
        Cx = Ax + largura;
        Cy = By;
        Dx = Ax + largura;
        Dy = Ay;

        CCx = posxmagia;
        CCy = posymagia + raio;
        CBx = posxmagia;
        CBy = posymagia - raio;
        CEx = posxmagia - raio;
        CEy = posymagia;
        CDx = posxmagia + raio;
        CDy = posymagia;

        //Circulo cima
        if(CCx >= Ax && CCx <= Dx && CCy >= Ay && CCy <= By){
            cout << "Dano: " << dano << endl;
        }else
        //Circulo baixo
        if(CBx >= Ax && CBx <= Dx && CBy >= Ay && CBy <= By){
            cout << "Dano: " << dano << endl;
        }else
        //Circulo direita
        if(CDx >= Ax && CDx <= Dx && CDy >= Ay && CDy <= By){
            cout << "Dano: " << dano << endl;
        }else
        //Circulo esquerda
        if(CEx >= Ax && CEx <= Dx && CEy >= Ay && CEy <= By){
            cout << "Dano: " << dano << endl;
        }else

        //Ponto A
        if((sqrt(  pow((Ax-posxmagia),2)  +   pow((Ay-posymagia),2) )) <= raio ){
            cout << "Dano: " << dano << endl;
        }else
        //Ponto B
        if((sqrt(  pow((Bx-posxmagia),2)  +   pow((By-posymagia),2) )) <= raio ){
            cout << "Dano: " << dano << endl;
        }else
        //Ponto C
        if((sqrt(  pow((Cx-posxmagia),2)  +   pow((Cy-posymagia),2) )) <= raio ){
            cout << "Dano: " << dano << endl;
        }else
        //Ponto D
        if((sqrt(  pow((Dx-posxmagia),2)  +   pow((Dy-posymagia),2) )) <= raio ){
            cout << "Dano: " << dano << endl;
        }else{
            cout << "Dano: " << "000" << endl;
        }


    }
    
    return 0;
}