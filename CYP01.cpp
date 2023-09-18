#include<stdio.h>

void main(void)
{
	int ancho, alto, izx, izy, derx, dery;
	float px, py, pancho, palto;

	scanf_s("%i", &ancho);
	scanf_s("%i", &alto);
	scanf_s("%f", &px);
	scanf_s("%f", &py);
	scanf_s("%f", &pancho);
	scanf_s("%f", &palto);

	izx = px * ancho;
	izy = py * alto;
	derx = izx + pancho * ancho;
	dery = izy + palto * alto;

	printf("%i ", ancho);
	printf("%i", alto);
	printf("%6.2f", px);
	printf("%6.2f", py);
	printf("%6.2f", pancho);
	printf("%6.2f ", palto);
	printf("%i ", izx);
	printf("%i ", izy);
	printf("%i ", derx);
	printf("%i", dery);

}
