/*
 * @authors Equipo docente programacion grado de ingenieria 
 * @university  UAL
 * @date 2019-02-06
 
/* calculoVectorial                            */
/* programa que suma dos vectores y calcula    */
/* su producto escalar y su producto vectorial */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main(){
    char c;
    float v1x,v1y,v1z;  /* componentes vector1            */
    float v2x,v2y,v2z;  /* componentes vector2            */
    float sx,sy,sz;     /* componentes vector suma        */
    float e;            /* producto escalar               */
    float px,py,pz;     /* componentes producto vectorial */

    do{ system("cls");
        printf("SUMA VECTORIAL, PRODUCTO ESCALAR Y VECTORIAL\n");
        printf("============================================\n\n");
        printf("Introducir componentes v1:\n");
        printf("\tv1.x: ");
        scanf(" %f",&v1x);
        printf("\tv1.y: ");
        scanf(" %f",&v1y);
        printf("\tv1.z: ");
        scanf(" %f",&v1z);
        printf("Introducir componentes v2:\n");
        printf("\tv2.x: ");
        scanf(" %f",&v2x);
        printf("\tv2.y: ");
        scanf(" %f",&v2y);
        printf("\tv2.z: ");
        scanf(" %f",&v2z);
        sx=v1x+v2x;
        sy=v1y+v2y;
        sz=v1z+v2z;
        e=v1x*v2x+v1y*v2y+v1z*v2z;
        px=v1y*v2z-v1z*v2y;
        py=v1z*v2x-v1x*v2z;
        pz=v1x*v2y-v1y*v2x;
        printf("\nSuma: (%.1f,%.1f,%.1f)",sx,sy,sz);
        printf("\nProducto escalar: %.1f",e);
        printf("\nProducto vectorial: (%.1f,%.1f,%.1f)",px,py,pz);
        printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
        c=toupper(getch());
    }while (c!='N');
    return 0;
}
