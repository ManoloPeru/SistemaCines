#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class CatalogoPeliculaController {
	public:
		CatalogoPeliculaController();
		List<Cartelera^>^ buscarAll();
	};

}