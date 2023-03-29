#pragma once
#include "frmAnuncio.h"
#include "frmBeneficios.h"
#include "frmButacas.h"
#include "frmcine.h"
#include "frmPersonal.h"
#include "frmPelicula.h"
#include "frmSalas.h"
#include "frmTipodeSocio.h"
#include "frmProductos.h"
#include "frmPromocion.h"
#include "frmProveedor.h"
#include "frmReclamos.h"
#include "frmClientes.h"
#include "frmResena.h"
#include "frmDistribuidor.h"
#include "frmEmpresaAnuncio.h"
#include "frmPropietario.h"
#include "frmNormasCine.h"
#include "frmLugaresdeAtencion.h"
#include "frmProveedor.h"
#include "frmListadePersonal.h"
#include "frmReportePersonal.h"

namespace SistemaCinesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesController;
	using namespace SistemaCinesModel;

	/// <summary>
	/// Summary for frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ cinesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ anunciosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registrarAnunciosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sociosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ iniciarSesionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ beneficiosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reclamosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ carteleraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ busquedaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salasToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ promocionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroDePeliculasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ propietarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lugaresDeAtenciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ normasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ peliculaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reseñasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ distribuidorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empresasAnunciosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ proveedorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listaDePersonalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDePersonalToolStripMenuItem;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroDePeliculasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cinesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carteleraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propietarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lugaresDeAtenciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->normasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sociosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciarSesionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beneficiosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->anunciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registrarAnunciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empresasAnunciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reclamosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->busquedaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->proveedorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->peliculaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reseñasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->distribuidorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listaDePersonalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDePersonalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->administradorToolStripMenuItem,
					this->cinesToolStripMenuItem, this->sociosToolStripMenuItem, this->anunciosToolStripMenuItem, this->reclamosToolStripMenuItem,
					this->productosToolStripMenuItem, this->promocionesToolStripMenuItem, this->clientesToolStripMenuItem, this->peliculaToolStripMenuItem,
					this->empleadosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(863, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->registroDePeliculasToolStripMenuItem });
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->administradorToolStripMenuItem->Text = L"Personal";
			this->administradorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::administradorToolStripMenuItem_Click);
			// 
			// registroDePeliculasToolStripMenuItem
			// 
			this->registroDePeliculasToolStripMenuItem->Name = L"registroDePeliculasToolStripMenuItem";
			this->registroDePeliculasToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->registroDePeliculasToolStripMenuItem->Text = L"Registro de Peliculas";
			this->registroDePeliculasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::registroDePeliculasToolStripMenuItem_Click);
			// 
			// cinesToolStripMenuItem
			// 
			this->cinesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->registroToolStripMenuItem,
					this->carteleraToolStripMenuItem, this->salasToolStripMenuItem, this->propietarioToolStripMenuItem, this->lugaresDeAtenciónToolStripMenuItem,
					this->normasToolStripMenuItem
			});
			this->cinesToolStripMenuItem->Name = L"cinesToolStripMenuItem";
			this->cinesToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->cinesToolStripMenuItem->Text = L"Cines";
			// 
			// registroToolStripMenuItem
			// 
			this->registroToolStripMenuItem->Name = L"registroToolStripMenuItem";
			this->registroToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->registroToolStripMenuItem->Text = L"Registro";
			this->registroToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::registroToolStripMenuItem_Click);
			// 
			// carteleraToolStripMenuItem
			// 
			this->carteleraToolStripMenuItem->Name = L"carteleraToolStripMenuItem";
			this->carteleraToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->carteleraToolStripMenuItem->Text = L"Cartelera";
			// 
			// salasToolStripMenuItem
			// 
			this->salasToolStripMenuItem->Name = L"salasToolStripMenuItem";
			this->salasToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->salasToolStripMenuItem->Text = L"Salas";
			this->salasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::salasToolStripMenuItem_Click);
			// 
			// propietarioToolStripMenuItem
			// 
			this->propietarioToolStripMenuItem->Name = L"propietarioToolStripMenuItem";
			this->propietarioToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->propietarioToolStripMenuItem->Text = L"Propietario";
			this->propietarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::propietarioToolStripMenuItem_Click);
			// 
			// lugaresDeAtenciónToolStripMenuItem
			// 
			this->lugaresDeAtenciónToolStripMenuItem->Name = L"lugaresDeAtenciónToolStripMenuItem";
			this->lugaresDeAtenciónToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->lugaresDeAtenciónToolStripMenuItem->Text = L"Lugares de Atención";
			this->lugaresDeAtenciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::lugaresDeAtenciónToolStripMenuItem_Click);
			// 
			// normasToolStripMenuItem
			// 
			this->normasToolStripMenuItem->Name = L"normasToolStripMenuItem";
			this->normasToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->normasToolStripMenuItem->Text = L"Normas";
			this->normasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::normasToolStripMenuItem_Click);
			// 
			// sociosToolStripMenuItem
			// 
			this->sociosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->iniciarSesionToolStripMenuItem,
					this->beneficiosToolStripMenuItem
			});
			this->sociosToolStripMenuItem->Name = L"sociosToolStripMenuItem";
			this->sociosToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->sociosToolStripMenuItem->Text = L"Socios";
			// 
			// iniciarSesionToolStripMenuItem
			// 
			this->iniciarSesionToolStripMenuItem->Name = L"iniciarSesionToolStripMenuItem";
			this->iniciarSesionToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->iniciarSesionToolStripMenuItem->Text = L"Registro de Socios";
			this->iniciarSesionToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::iniciarSesionToolStripMenuItem_Click);
			// 
			// beneficiosToolStripMenuItem
			// 
			this->beneficiosToolStripMenuItem->Name = L"beneficiosToolStripMenuItem";
			this->beneficiosToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->beneficiosToolStripMenuItem->Text = L"Beneficios";
			this->beneficiosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::beneficiosToolStripMenuItem_Click);
			// 
			// anunciosToolStripMenuItem
			// 
			this->anunciosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->registrarAnunciosToolStripMenuItem,
					this->empresasAnunciosToolStripMenuItem
			});
			this->anunciosToolStripMenuItem->Name = L"anunciosToolStripMenuItem";
			this->anunciosToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->anunciosToolStripMenuItem->Text = L"Anuncios";
			// 
			// registrarAnunciosToolStripMenuItem
			// 
			this->registrarAnunciosToolStripMenuItem->Name = L"registrarAnunciosToolStripMenuItem";
			this->registrarAnunciosToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->registrarAnunciosToolStripMenuItem->Text = L"Registrar Anuncios";
			this->registrarAnunciosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::registrarAnunciosToolStripMenuItem_Click);
			// 
			// empresasAnunciosToolStripMenuItem
			// 
			this->empresasAnunciosToolStripMenuItem->Name = L"empresasAnunciosToolStripMenuItem";
			this->empresasAnunciosToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->empresasAnunciosToolStripMenuItem->Text = L"Empresas Anuncios";
			this->empresasAnunciosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::empresasAnunciosToolStripMenuItem_Click);
			// 
			// reclamosToolStripMenuItem
			// 
			this->reclamosToolStripMenuItem->Name = L"reclamosToolStripMenuItem";
			this->reclamosToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->reclamosToolStripMenuItem->Text = L"Reclamos";
			this->reclamosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reclamosToolStripMenuItem_Click);
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->busquedaToolStripMenuItem,
					this->proveedorToolStripMenuItem
			});
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->productosToolStripMenuItem->Text = L"Productos";
			// 
			// busquedaToolStripMenuItem
			// 
			this->busquedaToolStripMenuItem->Name = L"busquedaToolStripMenuItem";
			this->busquedaToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->busquedaToolStripMenuItem->Text = L"Busqueda";
			this->busquedaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::busquedaToolStripMenuItem_Click);
			// 
			// proveedorToolStripMenuItem
			// 
			this->proveedorToolStripMenuItem->Name = L"proveedorToolStripMenuItem";
			this->proveedorToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->proveedorToolStripMenuItem->Text = L"Proveedor";
			this->proveedorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::proveedorToolStripMenuItem_Click);
			// 
			// promocionesToolStripMenuItem
			// 
			this->promocionesToolStripMenuItem->Name = L"promocionesToolStripMenuItem";
			this->promocionesToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->promocionesToolStripMenuItem->Text = L"Promociones";
			this->promocionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::promocionesToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::clientesToolStripMenuItem_Click);
			// 
			// peliculaToolStripMenuItem
			// 
			this->peliculaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reseñasToolStripMenuItem,
					this->distribuidorToolStripMenuItem
			});
			this->peliculaToolStripMenuItem->Name = L"peliculaToolStripMenuItem";
			this->peliculaToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->peliculaToolStripMenuItem->Text = L"Pelicula";
			// 
			// reseñasToolStripMenuItem
			// 
			this->reseñasToolStripMenuItem->Name = L"reseñasToolStripMenuItem";
			this->reseñasToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->reseñasToolStripMenuItem->Text = L"Reseñas";
			this->reseñasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reseñasToolStripMenuItem_Click);
			// 
			// distribuidorToolStripMenuItem
			// 
			this->distribuidorToolStripMenuItem->Name = L"distribuidorToolStripMenuItem";
			this->distribuidorToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->distribuidorToolStripMenuItem->Text = L"Distribuidor";
			this->distribuidorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::distribuidorToolStripMenuItem_Click);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->listaDePersonalToolStripMenuItem,
					this->reporteDePersonalToolStripMenuItem
			});
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			// 
			// listaDePersonalToolStripMenuItem
			// 
			this->listaDePersonalToolStripMenuItem->Name = L"listaDePersonalToolStripMenuItem";
			this->listaDePersonalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->listaDePersonalToolStripMenuItem->Text = L"Lista de Personal";
			this->listaDePersonalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::listaDePersonalToolStripMenuItem_Click);
			// 
			// reporteDePersonalToolStripMenuItem
			// 
			this->reporteDePersonalToolStripMenuItem->Name = L"reporteDePersonalToolStripMenuItem";
			this->reporteDePersonalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->reporteDePersonalToolStripMenuItem->Text = L"Reporte de Personal";
			this->reporteDePersonalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reporteDePersonalToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(863, 397);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPrincipal";
			this->Text = L"Sistema Cines PUCP";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void administradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPersonal^ ventanaPersonal = gcnew frmPersonal();
		ventanaPersonal->Show();
	}
	private: System::Void registroDePeliculasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPelicula^ ventanaPelicula = gcnew frmPelicula();
		ventanaPelicula->Show();
	}
	private: System::Void registroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmcine^ ventanaCine = gcnew frmcine();
		ventanaCine->Show();
	}
	private: System::Void salasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmSalas^ ventanaSalas = gcnew frmSalas();
		ventanaSalas->Show();
	}

	private: System::Void registrarAnunciosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAnuncio^ ventanaAnuncio = gcnew frmAnuncio();
		ventanaAnuncio->Show();
	}
	private: System::Void iniciarSesionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmTipodeSocio^ ventanaTipodeSocio = gcnew frmTipodeSocio();
		ventanaTipodeSocio->Show();
	}

	private: System::Void beneficiosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmBeneficios^ ventanBeneficios = gcnew frmBeneficios();
		ventanBeneficios->Show();
	}

	private: System::Void reclamosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReclamos^ ventanaReclamos = gcnew frmReclamos();
		ventanaReclamos->Show();
	}

	private: System::Void busquedaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmProductos^ ventanaProductos = gcnew frmProductos();
		ventanaProductos->Show();
	}

	private: System::Void promocionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPromocion^ ventanaPromociones = gcnew frmPromocion();
		ventanaPromociones->Show();
	}
	private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmClientes^ ventanaClientesRegistro = gcnew frmClientes();
		ventanaClientesRegistro->Show();
	}
	private: System::Void reseñasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmResena^ ventanaResenasregistro = gcnew frmResena();
		ventanaResenasregistro->Show();
	}
	private: System::Void distribuidorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmDistribuidor^ ventanaDistribuidor = gcnew frmDistribuidor();
		ventanaDistribuidor->Show();
	}
	private: System::Void empresasAnunciosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmEmpresaAnuncio^ venatanaEmpresasAnuncios = gcnew frmEmpresaAnuncio();
		venatanaEmpresasAnuncios->Show();
	}

	private: System::Void propietarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PropietarioController2^ objPropietarioController = gcnew PropietarioController2();
		Propietario^ objPropietario = objPropietarioController->buscarPropietario();
		frmPropietario^ ventanaPropietario = gcnew frmPropietario(objPropietario);
		ventanaPropietario->Show();
	}
	private: System::Void lugaresDeAtenciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmLugaresdeAtencion^ ventanaLugaresdeAtencion = gcnew frmLugaresdeAtencion();
		ventanaLugaresdeAtencion->Show();
	}
	private: System::Void normasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNormasCine^ ventanaNormasCine = gcnew frmNormasCine();
		ventanaNormasCine->Show();
	}
private: System::Void proveedorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmProveedor^ VentanaProveedor = gcnew frmProveedor();
	VentanaProveedor -> Show();
}
private: System::Void listaDePersonalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmListadePersonal^ VentanaListaPersonal = gcnew frmListadePersonal();
	VentanaListaPersonal->Show();
}
private: System::Void reporteDePersonalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {//reporte personal
	frmReportePersonal^ ventanaReportePersonal = gcnew frmReportePersonal();
	ventanaReportePersonal->Show();
}
};
}
