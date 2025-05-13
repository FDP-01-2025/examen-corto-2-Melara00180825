#include <iostream>

using namespace std;

int main(){

int edad;
/*para las tallas*/
int e1=34, e2=38, e3=40, e4=42;
int genero;
/*para el genero*/
string g1="masculino", g2="Femenino";
int tipo;
/*para el tipo de zapato*/
string z1="Deportivo", z2="Casual", z3="Premium" ;
/*para el precio del zapato hombre*/
float pr1=80, pr2=120, pr3=250 ;
/*para el precio del zapato mujer*/
float p1=70, p2=100, p3=250 ;
/*para agregar el descuento a los zapatos*/
int zo;
/*para aplicar el descuento*/
float zr;
/*para pagar*/
float pago;

    cout<<"Bienvenido al programa para comprar zapatos"<<endl;
    cout<<"Por favor ingresa tu edad"<<endl;
    /*Presentamos el menu*/
    cout<<"menu"<<endl;
    cout<<"1. 0-12 years"<<endl;
    cout<<"2. 13-17 years"<<endl;
    cout<<"3. 18-64 years"<<endl;
    cout<<"4. 65 years en delante"<<endl;
    /*ingresamos la opcion segun la edad*/
    cin>> edad;
/*switch para ver la talla de quien compra*/
switch (edad)
{
case 1:
    cout<<"tu talla es: "<<e1<<endl;
    break;
    edad=e1;
case 2:
    cout<<"tu talla es : "<<e2<<endl;
    edad=e2;
    break;
case 3:
    cout<<"tu talla es : "<<e3<<endl;
    edad=e3;
    break;
case 4:
    cout<<"tu talla es : "<<e4<<endl;
    edad=e4;
    break;

default:
    cout<<"Favor ingresa una opcion del menu"<<endl;
    cout<<"menu"<<endl;
    cout<<"1. 0-12 años"<<endl;
    cout<<"2. 13-17 años"<<endl;
    cout<<"3. 18-64 años"<<endl;
    cout<<"4. 65 años en delante"<<endl;
    break;
}
    
    cout<<"menu"<<endl;
    cout<<"1. Masculino"<<endl;
    cout<<"2. Femenino"<<endl;
    cout<<"3. Mostrar todo"<<endl;
    cin>>genero;
/*Switch para ver el genero de quien compra*/
switch (genero)
{
case 1:
    cout<<"Para: "<<g1<<endl;
    break;
case 2:
    cout<<"Para: "<<g2<<endl;
    break;
case 3:
    cout<<"Tu resumen hast ahora es"<<endl;
    cout<<"Tu Talla es: "<<edad<<endl;
    
    break;
default:
    cout<<"Por favor ingresa una opcion valida. Recuerda que los caracteres deben de ir escritos en mayusculas"<<endl;
    break;
 
}
/*para hombre*/
    if (genero=1){
    cout<<"Tipos de zapatos disponibles"<<endl;
    cout<<"1. Deportivo"<<endl;
    cout<<"2. Casual"<<endl;
    cout<<"3. Premium"<<endl;
    cin>> tipo;

    switch (tipo)
       
    {
    case 1:
        cout<<"has elegido: "<<z1<<endl;
        cout<<"El precio es de: $"<<pr1<<endl;
        cout<<"¿Deseas aplicar el descuento del 20%: "<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cin>> zo;
        switch (zo)
        {
        case 1:
            zr=pr1-(pr1*0.20);
            cout<<"El precio con descuento es de: $"<<zr<<endl;

            break;
        case 2:
            cout<<"Has seleccionado sin descuentos"<<endl;

            break;
        default:
            cout<<"Ingresa datos validos"<<endl;

            break;
        }
        break;
    case 2:
        cout<<"has elegido: "<<z2<<endl;
        cout<<"El precio es de: $"<<pr2<<endl;
        cout<<"¿Deseas aplicar el descuento del 20%: "<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cin>> zo;
        switch (zo)
        {
        case 1:
            zr=pr2-(pr2*0.20);
            cout<<"El precio con descuento es de: $"<<zr<<endl;

            break;
        case 2:
            cout<<"Has seleccionado sin descuentos"<<endl;

            break;    
        default:
            cout<<"Ingresa datos validos"<<endl;

            break;
        }
        break;
    
    case 3:
        cout<<"has elegido: "<<z3<<endl;
        cout<<"El precio es de: $"<<pr3<<endl;
        cout<<"¿Deseas aplicar el descuento del 20%: "<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cin>> zo;
        switch (zo)
        {
        case 1:
            zr=pr3-(pr3*0.20);
            cout<<"El precio con descuento es de: $"<<zr<<endl;

            break;
        case 2:
            cout<<"Has seleccionado sin descuentos"<<endl;

            break;    
        default:
            cout<<"Ingresa datos validos"<<endl;

            break;
        }
        break;
    
    default:
            cout<<"Ingresa datos validos"<<endl;

        break;
    }
    /*para Mujer*/
    } else if (genero=2){
    cout<<"Tipos de zapatos disponibles"<<endl;
    cout<<"1. Casual"<<endl;
    cout<<"2. Elegante"<<endl;
    cout<<"3. Premium"<<endl;
    cin>> tipo;

    switch (tipo)
       
    {
    case 1:
        cout<<"has elegido: "<<z1<<endl;
        cout<<"El precio es de: $"<<p1<<endl;
        cout<<"¿Deseas aplicar el descuento del 20%: "<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cin>> zo;
        switch (zo)
        {
        case 1:
            zr=p1-(p1*0.20);
            cout<<"El precio con descuento es de: $"<<zr<<endl;

            break;
        case 2:
            cout<<"Has seleccionado sin descuentos"<<endl;

            break;
        default:
            cout<<"Ingresa datos validos"<<endl;

            break;
        }
        break;
    case 2:
        cout<<"has elegido: "<<z2<<endl;
        cout<<"El precio es de: $"<<p2<<endl;
        cout<<"¿Deseas aplicar el descuento del 20%: "<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cin>> zo;
        switch (zo)
        {
        case 1:
            zr=p2-(p2*0.20);
            cout<<"El precio con descuento es de: $"<<zr<<endl;

            break;
        case 2:
            cout<<"Has seleccionado sin descuentos"<<endl;

            break;    
        default:
            cout<<"Ingresa datos validos"<<endl;

            break;
        }
        break;
    
    case 3:
        cout<<"has elegido: "<<3<<endl;
        cout<<"El precio es de: $"<<p3<<endl;
        cout<<"¿Deseas aplicar el descuento del 20%: "<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cin>> zo;
        switch (zo)
        {
        case 1:
            zr=p3-(p3*0.20);
            cout<<"El precio con descuento es de: $"<<zr<<endl;

            break;
        case 2:
            cout<<"Has seleccionado sin descuentos"<<endl;

            break;    
        default:
            cout<<"Ingresa datos validos"<<endl;

            break;
        }
        break;
    
    default:
            cout<<"Ingresa datos validos"<<endl;

        break;
    }
    } 
    cout<<"Ingresa el pago"<<endl;
    cin>> pago;

    if (pago<zr){

        cout<<"pago insuficiente"<<endl;
    }
    else {
        cout<<"pago realizado correctamente"<<endl;

    }

    
    return 0;
}