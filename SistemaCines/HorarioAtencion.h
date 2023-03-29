#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class HorarioAtencion {
	private:
		DateTime HoraApertura;
		DateTime HoraCierre;
		String^ diasAtencion;
	public:
		HorarioAtencion();
		HorarioAtencion( DateTime HoraApertura, DateTime HoraCierre, String^ diasAtencion);
	};
}
