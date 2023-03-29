#pragma once
namespace SistemaCinesController {
	using namespace System; 
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class CinesController2 {
		public: 
			CinesController2();

			List<Cine^>^ buscarCinexIDyDepartamento (int codigo, String^ departamento);
			void eliminarCine(int codigo);
			List<Cine^>^ buscarAll();
			void escribirArchivo(List<Cine^>^ listaCines);
			void agregarCine(int codigo, String^ departamento, String^ provincia, String^ distrito, String^ direccion, String^ horaInicio, String^ horaFin);
			Cine^ buscarCinexCodigo(int codigo); 
			void actualizarCine(Cine^ objCine); 
	};


}