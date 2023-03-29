#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class ComprobanteController {
	public:
		ComprobanteController();
		//funciones
		List<Comprobante^>^ buscarAllPeliculas();
		List<Comprobante^>^ buscarAllComidas();
		void escribirArchivoPeliculas(List<Comprobante^>^ listaComprobante);
		void escribirArchivoComidas(List<Comprobante^>^ listaComprobante);
		void guardarreporteComida(DateTime fechaHora, String^ nombreCliente, String^ docIdent, String^ modoPago, int cant, String^ descripcion, double importeTotal);
		void guardarreportePelicula(DateTime fechaHora, String^ nombreCliente, String^ docIdent, String^ modoPago, int cant, String^ descripcion, double importeTotal);
	};
}