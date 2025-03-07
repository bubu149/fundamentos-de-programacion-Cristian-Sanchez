//Contexto: Como parte del análisis de circuitos en la carrera de Electrónica, es común realizar mediciones de voltaje en distintos puntos de un circuito. Este ejercicio tiene como objetivo desarrollar un programa que permita al usuario ingresar una serie de mediciones de voltaje y calcular el promedio de estas mediciones. Además, el programa debe determinar si el promedio se encuentra dentro de un rango de voltaje aceptable para un dispositivo electrónico específico.
//1.	Entrada de datos:
//o	El usuario debe ingresar el número de mediciones de voltaje que desea realizar.
//o	El programa debe pedir al usuario que ingrese cada medición de voltaje de forma secuencial.
//2.	Validación de datos:
//o	Cada medición debe ser un número positivo, y el programa debe verificar que las mediciones ingresadas estén en un rango realista de voltaje (por ejemplo, 0 a 1000 V).
//3.	Cálculo del promedio:
//o	El programa debe calcular el promedio de todas las mediciones ingresadas.
//4.	Verificación de condiciones:
//o	Si el promedio de voltaje es menor que 300 V, el programa debe mostrar el mensaje: "El promedio de voltaje es bajo. Revisa tu circuito."
//o	Si el promedio es mayor que 700 V, el programa debe mostrar el mensaje: "El promedio de voltaje es alto. Verifica que no haya sobrecarga en el circuito."
//o	Si el promedio está entre 300 V y 700 V, el programa debe mostrar: "El promedio de voltaje está dentro del rango aceptable."
#include <iostream>

using namespace std;

int main()
{
    //declara un variable de tipo char para mi do while
    char continuar;
    //inicio mi do while
     do{
    float n,v,vt,p;
    cout << "numero de veces" << endl;
    cin>>n;
    cout << "voltaje " << endl;
    //insegreso un repetidor de mi for que inicia en 0 y termina en n, incrementa en 1 cada vuelta
    for ( int i=0; i<n; i++){
    cout<<"ingrese el voltaje"<<"["<<i<<"]"<<endl;
    cin>>v;
    // consulto el voltaje si el voltaje estae n el rango
    if(v>0&v<1000){
    vt=vt+v;
    }
    else{
     cout<<" el voltaje no esta en el rango "<<vt<<endl;
    }
    }
    p=vt/n;
    if(p<300 ){
             cout<<"--------------------"<<endl;
            cout<<"el voltaje total es: "<<vt<<endl;
            cout<<"el promedio : "<<p<<endl;

     cout<<"****VOLTAJE BAJO **** "<<endl;
     cout<<"--------------------"<<endl;

    }
    else if (p>300 & p<700){
             cout<<"--------------------"<<endl;
            cout<<"el voltaje total es: "<<vt<<endl;
            cout<<"el promedio : "<<p<<endl;

        cout<<"voltaje dentro del rango "<<vt<<endl;
         cout<<"--------------------"<<endl;
    }
    else
{
     cout<<"--------------------"<<endl;
            cout<<"el voltaje total es: "<<vt<<endl;
            cout<<"el promedio : "<<p<<endl;

    cout<<"voltaje demaciado alto "<<vt<<endl;}
 cout<<"--------------------"<<endl;

    cout<<"desae continuar y o n"<<endl;
    cin>>continuar;

    }while( continuar =='y');
    return 0;
}
