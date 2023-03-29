#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class Butacas {
		public: 
			int salaCodigo;
			DateTime horarioButacas;
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
			Butacas(); 
			Butacas(int salaCodigo, DateTime horarioButacas, int butaca1, int butaca2, int butaca3, int butaca4, int butaca5, int butaca6, int butaca7, int butaca8, int butaca9, int butaca10);

	};

}
