#pragma once
#include "frmCatalogoPeliculas.h"
#include "frmCatalogoComidas.h"
#include "frmReporteVentasComidas.h"
#include "frmReporteVentasPeliculas.h"

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
	/// Summary for frmPersonal
	/// </summary>
	public ref class frmPersonal : public System::Windows::Forms::Form
	{
	public:
		frmPersonal(void)
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
		~frmPersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ catalogoPeliculasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ catalogoComidasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteVentasPeliculasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteVentasComidasToolStripMenuItem;



	protected:







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
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->catalogoPeliculasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->catalogoComidasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteVentasPeliculasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteVentasComidasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->catalogoPeliculasToolStripMenuItem,
					this->catalogoComidasToolStripMenuItem, this->reporteVentasPeliculasToolStripMenuItem, this->reporteVentasComidasToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1264, 24);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// catalogoPeliculasToolStripMenuItem
			// 
			this->catalogoPeliculasToolStripMenuItem->Name = L"catalogoPeliculasToolStripMenuItem";
			this->catalogoPeliculasToolStripMenuItem->Size = System::Drawing::Size(116, 20);
			this->catalogoPeliculasToolStripMenuItem->Text = L"Catalogo Peliculas";
			this->catalogoPeliculasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPersonal::catalogoPeliculasToolStripMenuItem_Click);
			// 
			// catalogoComidasToolStripMenuItem
			// 
			this->catalogoComidasToolStripMenuItem->Name = L"catalogoComidasToolStripMenuItem";
			this->catalogoComidasToolStripMenuItem->Size = System::Drawing::Size(117, 20);
			this->catalogoComidasToolStripMenuItem->Text = L"Catalogo Comidas";
			this->catalogoComidasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPersonal::catalogoComidasToolStripMenuItem_Click);
			// 
			// reporteVentasPeliculasToolStripMenuItem
			// 
			this->reporteVentasPeliculasToolStripMenuItem->Name = L"reporteVentasPeliculasToolStripMenuItem";
			this->reporteVentasPeliculasToolStripMenuItem->Size = System::Drawing::Size(146, 20);
			this->reporteVentasPeliculasToolStripMenuItem->Text = L"Reporte Ventas Peliculas";
			this->reporteVentasPeliculasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPersonal::reporteVentasPeliculasToolStripMenuItem_Click);
			// 
			// reporteVentasComidasToolStripMenuItem
			// 
			this->reporteVentasComidasToolStripMenuItem->Name = L"reporteVentasComidasToolStripMenuItem";
			this->reporteVentasComidasToolStripMenuItem->Size = System::Drawing::Size(147, 20);
			this->reporteVentasComidasToolStripMenuItem->Text = L"Reporte Ventas Comidas";
			this->reporteVentasComidasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPersonal::reporteVentasComidasToolStripMenuItem_Click);
			// 
			// frmPersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->menuStrip2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmPersonal";
			this->Text = L"frmPersonal";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void catalogoPeliculasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCatalogoPeliculas^ ventanaCatalogoPeliculas = gcnew frmCatalogoPeliculas();
		ventanaCatalogoPeliculas->Show();
	}
	private: System::Void catalogoComidasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCatalogoComidas^ ventanaCatalogoComidas = gcnew frmCatalogoComidas();
		ventanaCatalogoComidas->Show();
	}
	private: System::Void reporteVentasPeliculasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteVentasPeliculas^ ventanaReportePeliculas = gcnew frmReporteVentasPeliculas();
		ventanaReportePeliculas->Show();
	}
	private: System::Void reporteVentasComidasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteVentasComidas^ ventanaReporteComidas = gcnew frmReporteVentasComidas();
		ventanaReporteComidas->Show();
	}
};
}
