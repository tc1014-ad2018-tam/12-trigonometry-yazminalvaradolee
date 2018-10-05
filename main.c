/*
 * Programa para meter una angulo y que este mismo te de las funciones trigonometricas en radianes
 *
 * Autora: Yasmin Alvarado Lee
 * correo:yazminalvlee@gmail.com
 *
 * Fecha: 4 de octubre del 2018
 */

#include <stdio.h>
#include <math.h>

    //Variables
    double angulo = 0;
    double radian = 0;


//Funcion seno
    void sine (double angulo){
        double s = 0;
        s = sin(angulo);//seno por el angulo
        printf ("\n sine: %lf \n",s);
    }
// Funcion coseno
void cosine (double angulo) {
    double c = 0;
    c = (cos(angulo)); //coseno por el angulo
    printf ("\n cosine: %lf \n", c);
}
//Funicion tangente
    void tangent (double angulo) {
        double t = 0;
        t = tan(angulo); //tangente por el angulo
        printf ("\n tangent: %lf \n", t);
    }
//Funcion cotangente
void cotangent (double angulo) {
    double cot = 0;
    cot = (1/tan(angulo)); //1 entre tangente por el angulo
    printf ("\n cotangent: %lf \n", cot);
}

//Funcion secante
    void secant (double angulo) {
        double sc = 0;
        sc = (1/cos(angulo)); //1 entre coseno por el angulo
        printf ("\n secant: %lf \n", sc);
    }

//Funcion cosecante
    void cosecant (double angulo) {
        double csc = 0;
        csc = (1/sin(angulo)); //1 entre seno del angulo
        printf ("\n cosecant: %lf \n", csc);
    }

//En cotangente,secante y cosecante son divididas entre 1 porque es la inversa a seno , coseno y tangente

    int main() {
        printf("Dime un angulo:");
        scanf ("%lf", &angulo);
        //Operacion para convertir los grados a radianes
        radian = (angulo*0.0174533); //El angulo que va a dar el usuario multiplicado a lo que va a dar un radian

//Aqui a la hora de dar la respuesta se va a dar el resultado en radianes, gracias a la operacion de arriba
    sine (radian);
    cosine (radian);
    tangent (radian);
    secant (radian);
    cosecant (radian);
    cotangent (radian);


        return 0;
    }
