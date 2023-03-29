#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class ButacasController {
	public:
		ButacasController();
		//lista-metodo 
	//	List<Beneficios^>^ BuscarBeneficiosxCodigo(int codigo);
	//	void eliminarBeneficios(int codigo);
		List<Butacas^>^ buscarAll();
		Butacas^ buscarxSalaxHorario(int Sala, DateTime Horario);
		void escribirArchivo(List<Butacas^>^ listaButacas);
	
		void actualizarButacas(int butaca, int Sala, DateTime Horario);
		void actualizarperoButacaxCodigo(int butaca, int Sala, DateTime Horario);
		void compararButaca(Butacas^ objButacaAntes, int Sala, DateTime Horario);
	};

}