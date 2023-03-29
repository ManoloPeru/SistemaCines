#pragma once
#include "frmEditarDistribuidor.h"
#include "frmNuevoDistribuidor.h"

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
	/// Resumen de frmDistribuidor
	/// </summary>
	public ref class frmDistribuidor : public System::Windows::Forms::Form
	{
	public:
		frmDistribuidor(void)
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
		~frmDistribuidor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ruc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ razonsocial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ contacto;

	protected:























	protected:

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(104, 95);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 373);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Distribuidores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contacto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Razón Social";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"RUC";
			this->label1->Click += gcnew System::EventHandler(this, &frmDistribuidor::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(157, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 510);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDistribuidor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(335, 510);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmDistribuidor::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(335, 573);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmDistribuidor::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(187, 573);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Editar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmDistribuidor::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ruc, this->razonsocial,
					this->contacto
			});
			this->dataGridView1->Location = System::Drawing::Point(555, 183);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(550, 350);
			this->dataGridView1->TabIndex = 5;
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
			this->razonsocial->HeaderText = L"Contacto";
			this->razonsocial->MinimumWidth = 6;
			this->razonsocial->Name = L"razonsocial";
			this->razonsocial->Width = 125;
			// 
			// contacto
			// 
			this->contacto->HeaderText = L"Razon Social";
			this->contacto->MinimumWidth = 6;
			this->contacto->Name = L"contacto";
			this->contacto->Width = 125;
			// 
			// frmDistribuidor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(1259, 694);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmDistribuidor";
			this->Text = L"Registro de Distribuidores";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//nuevo
		frmNuevoDistribuidor^ ventanaNuevoDistribuidor = gcnew frmNuevoDistribuidor();
		ventanaNuevoDistribuidor->ShowDialog();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //BUSCAR
		String^ ruc = this->textBox1->Text;
		String^ contacto = this->textBox2->Text;
		String^ razonSocial = this->textBox3->Text;
		DistribuidorController2^ objDistribuidorController = gcnew DistribuidorController2();
		List<Distribuidor^>^ listaDistribuidor = objDistribuidorController->buscarDistribuidor(ruc,contacto,razonSocial);
		mostrarGrilla(listaDistribuidor);
	}
	private: void mostrarGrilla(List<Distribuidor^>^ listaDistribuidores) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaDistribuidores->Count; i++) {
			Distribuidor^ objDistribuidor = listaDistribuidores[i];
			array<String^>^ fila = gcnew array<String^>(7);
			fila[0] = Convert::ToString(objDistribuidor->ruc);
			fila[1] = Convert::ToString(objDistribuidor->contacto);
			fila[2] = objDistribuidor->razonSocial;
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //ELIMINAR
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ rucEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		DistribuidorController2^ objDistribuidorController = gcnew DistribuidorController2();
		objDistribuidorController->eliminarDistribuidor(rucEliminar);
		MessageBox::Show("Se ha eliminado correctamente el anuncio seleccionado");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //editar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ ruc = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		DistribuidorController2^ objDistribuidorController = gcnew DistribuidorController2();
		Distribuidor^ objDistribuidor = objDistribuidorController->buscarDistribuidorxRuc(ruc);
		frmEditarDistribuidor^ ventanaEditar = gcnew frmEditarDistribuidor(objDistribuidor);
		ventanaEditar->ShowDialog();
	}
};
}
