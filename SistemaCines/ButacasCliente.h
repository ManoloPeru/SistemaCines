#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class ButacasCliente {
		public: 
			int CodigoProyeccion;
			int butaca1;
			int butaca2;
			int butaca3;
			int butaca4;
			int butaca5;
			int butaca6;
			int butaca7;
			int butaca8;
			int butaca9;
			int butaca10;
			
		public: 
			ButacasCliente(); 

			ButacasCliente(int CodigoProyeccion, int butaca1, int butaca2, int butaca3, int butaca4, int butaca5, int butaca6, int butaca7, int butaca8, int butaca9, int butaca10);

	};

}


/* 
namespace SistemaCinesModel {
	using namespace System;
	public ref class Butacas {
	private:
		int salaCodigo;
		DateTime horarioButacas;
		int numerobutaca;
		int estado;


	public:
		Butacas();

		Butacas(int salaCodigo, DateTime horarioButacas, int numerobutaca, int estado);

	};

}
*/
