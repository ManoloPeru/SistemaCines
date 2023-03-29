#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class BeneficiosController2 {
		public:
			BeneficiosController2();
			//lista-metodo 
			List<Beneficios^>^ BuscarBeneficiosxCodigo(int codigo);
			void eliminarBeneficios(int codigo);
			List<Beneficios^>^ buscarAll();
			void escribirArchivo(List<Beneficios^>^ listaBeneficios);
			void agregarBeneficio(int codigo, int puntos, String^ descuentos, String^ fechaInicio, String^ fechaFin, String^ beneficio1, String^ beneficio2, String^ beneficio3);
			Beneficios^ BuscarBeneficiosxCodigos(int codigo);
			void actualizarBeneficios(Beneficios^ objBeneficio);
	};

}