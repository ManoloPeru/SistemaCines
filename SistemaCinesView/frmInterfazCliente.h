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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ pel�culasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cinesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ promocionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dulcer�aToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pel�culasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cinesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promocionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dulcer�aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->pel�culasToolStripMenuItem,
					this->cinesToolStripMenuItem, this->promocionesToolStripMenuItem, this->dulcer�aToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(814, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pel�culasToolStripMenuItem
			// 
			this->pel�culasToolStripMenuItem->Name = L"pel�culasToolStripMenuItem";
			this->pel�culasToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->pel�culasToolStripMenuItem->Text = L"Pel�culas";
			this->pel�culasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmInterfazCliente::pel�culasToolStripMenuItem_Click);
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
			// dulcer�aToolStripMenuItem
			// 
			this->dulcer�aToolStripMenuItem->Name = L"dulcer�aToolStripMenuItem";
			this->dulcer�aToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->dulcer�aToolStripMenuItem->Text = L"Dulcer�a";
			this->dulcer�aToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmInterfazCliente::dulcer�aToolStripMenuItem_Click);
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
	private: System::Void pel�culasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmInterfazPelicula^ ventanaVerPelicula = gcnew frmInterfazPelicula();
		ventanaVerPelicula->ShowDialog();
	}
private: System::Void dulcer�aToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmBuscarComida^ ventanaBC = gcnew frmBuscarComida(); 
	ventanaBC->ShowDialog();
}
};
}
