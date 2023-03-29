#pragma once
#include"frmInterfazPelicula.h"
#include"frmBuscarComida.h"

namespace SistemaCinesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmInterfazCliente
	/// </summary>
	public ref class frmInterfazCliente : public System::Windows::Forms::Form
	{
	public:
		frmInterfazCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInterfazCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ películasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cinesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ promocionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dulceríaToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->películasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cinesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dulceríaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->películasToolStripMenuItem,
					this->cinesToolStripMenuItem, this->promocionesToolStripMenuItem, this->dulceríaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(814, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// películasToolStripMenuItem
			// 
			this->películasToolStripMenuItem->Name = L"películasToolStripMenuItem";
			this->películasToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->películasToolStripMenuItem->Text = L"Películas";
			this->películasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmInterfazCliente::películasToolStripMenuItem_Click);
			// 
			// cinesToolStripMenuItem
			// 
			this->cinesToolStripMenuItem->Name = L"cinesToolStripMenuItem";
			this->cinesToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->cinesToolStripMenuItem->Text = L"Cines";
			// 
			// promocionesToolStripMenuItem
			// 
			this->promocionesToolStripMenuItem->Name = L"promocionesToolStripMenuItem";
			this->promocionesToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->promocionesToolStripMenuItem->Text = L"Promociones";
			// 
			// dulceríaToolStripMenuItem
			// 
			this->dulceríaToolStripMenuItem->Name = L"dulceríaToolStripMenuItem";
			this->dulceríaToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->dulceríaToolStripMenuItem->Text = L"Dulcería";
			this->dulceríaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmInterfazCliente::dulceríaToolStripMenuItem_Click);
			// 
			// frmInterfazCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(814, 505);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmInterfazCliente";
			this->Text = L"frmInterfazCliente";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void películasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmInterfazPelicula^ ventanaVerPelicula = gcnew frmInterfazPelicula();
		ventanaVerPelicula->ShowDialog();
	}
private: System::Void dulceríaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmBuscarComida^ ventanaBC = gcnew frmBuscarComida(); 
	ventanaBC->ShowDialog();
}
};
}
