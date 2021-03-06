#ifndef CONEXION_H
#define CONEXION_H
#include <iostream>
#include "Arco.h"
#include "Cola.h"
#include "Paquete.h"

using namespace std;
/*
Esta clase representa el arco de el grafo que ilustra la red a simular.
Consta de un par de terminales, la especificación del ancho de banda y
una cola para emular las limitaciones del canal. 
*/
class Conexion : public Arco
{
	private:
		Cola<Paquete> canal;
	public:		
		Conexion(int, int, int);
		~Conexion();
		//set<int> obtener_terminales();
		void cargar(Paquete);
		Paquete leer();
		int obtener_ancho_banda();
		bool conexion_saturada();
		bool conexion_libre();
};

#endif // CONEXION_H
