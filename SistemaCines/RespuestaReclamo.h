#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class RespuestaReclamo {
	private:
		int codigo;
		int fecha;
		String^ tipodeBien;
		String^ tipodeReclamo;
		String^ detalle;
		bool veredicto;
	public:
		RespuestaReclamo();
		RespuestaReclamo(int codigo, int fecha, String^ tipodeBien, String^ tipodeReclamo, String^ detalle, bool veredicto);
	};
}