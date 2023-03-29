#pragma once
#include "frmNuevaEmpresaAnuncio.h"
#include "frmEditarEmpresaAnuncio.h"
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
	/// Resumen de frmEmpresaAnuncio
	/// </summary>
	public ref class frmEmpresaAnuncio : public System::Windows::Forms::Form
	{
	public:
		frmEmpresaAnuncio(void)
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
		~frmEmpresaAnuncio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ruc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ razonsocial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ contacto;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ruc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->razonsocial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(131, 124);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 400);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Empresas Anunciantes";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmEmpresaAnuncio::groupBox1_Enter);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 263);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contacto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Razón Social";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RUC";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(174, 544);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEmpresaAnuncio::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(303, 544);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEmpresaAnuncio::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(174, 619);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEmpresaAnuncio::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(303, 619);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmEmpresaAnuncio::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ruc, this->razonsocial,
					this->contacto
			});
			this->dataGridView1->Location = System::Drawing::Point(576, 124);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(533, 433);
			this->dataGridView1->TabIndex = 4;
			// 
			// ruc
			// 
			this->ruc->HeaderText = L"RUC";
			this->ruc->MinimumWidth = 6;
			this->ruc->Name = L"ruc";
			this->ruc->Width = 125;
			// 
			// razonsocial
			// 
			this->razonsocial->HeaderText = L"Razón Social";
			this->razonsocial->MinimumWidth = 6;
			this->razonsocial->Name = L"razonsocial";
			this->razonsocial->Width = 125;
			// 
			// contacto
			// 
			this->contacto->HeaderText = L"Contacto";
			this->contacto->MinimumWidth = 6;
			this->contacto->Name = L"contacto";
			this->contacto->Width = 125;
			// 
			// frmEmpresaAnuncio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(1236, 700);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEmpresaAnuncio";
			this->Text = L"Registro de Empresas Anunciantes";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //BUSCAR
		String^ ruc = this->textBox1->Text;
		String^ contacto = this->textBox2->Text;
		String^ razonSocial = this->textBox3->Text;
		EmpresaAnuncioController2^ objEmpresaAnuncioController = gcnew EmpresaAnuncioController2();
		List<EmpresaAnuncio^>^ listaEmpresaAnuncio = objEmpresaAnuncioController->buscarEmpresaAnuncio(ruc, contacto, razonSocial);
		mostrarGrilla(listaEmpresaAnuncio);
	}
	private: void mostrarGrilla(List<EmpresaAnuncio^>^ listaEmpresaAnuncio) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaEmpresaAnuncio->Count; i++) {
			EmpresaAnuncio^ objEmpresaAnuncio = listaEmpresaAnuncio[i];
			array<String^>^ fila = gcnew array<String^>(7);
			fila[0] = Convert::ToString(objEmpresaAnuncio->ruc);
			fila[1] = Convert::ToString(objEmpresaAnuncio->contacto);
			fila[2] = objEmpresaAnuncio->razonSocial;
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //BORRAR
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ rucEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		EmpresaAnuncioController2^ objEmpresaAnuncioController = gcnew EmpresaAnuncioController2();
		objEmpresaAnuncioController->eliminarEmpresaAnuncio(rucEliminar);
		MessageBox::Show("Se ha eliminado correctamente el anuncio seleccionado");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//nuevo
	frmNuevaEmpresaAnuncio^ ventanaNuevaEmpresaAnuncio = gcnew frmNuevaEmpresaAnuncio();
	ventanaNuevaEmpresaAnuncio->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//editar
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ rucEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	EmpresaAnuncioController2^ objEmpresaAnuncioController = gcnew EmpresaAnuncioController2();
	EmpresaAnuncio^ objEmpresaAnuncio = objEmpresaAnuncioController->buscarEmpresaAnuncioxRuc(rucEditar);
	frmEditarEmpresaAnuncio^ ventanaEditarEmpresaAnuncio = gcnew frmEditarEmpresaAnuncio(objEmpresaAnuncio);
	ventanaEditarEmpresaAnuncio->ShowDialog();
}
};
}
