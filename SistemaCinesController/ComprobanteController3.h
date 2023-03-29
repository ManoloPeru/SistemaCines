#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class ComprobanteController3 {
	public:
		ComprobanteController3();
		void AgregarPeliculaReporte(DateTime fechaHora, String^ nombre, String^ nTarjeta,int cantidad, String^ Descripcion, int Total);
		List<Comprobante^>^ buscarAll();
		void escribirArchivoPeliculas(List<Comprobante^>^ listaComprobante);
	};
}