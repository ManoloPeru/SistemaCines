#pragma once
#include "frmNuevoLugarAtencion.h"
#include "frmEditarLugarAtencion.h"
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
	/// Resumen de frmLugaresdeAtencion
	/// </summary>
	public ref class frmLugaresdeAtencion : public System::Windows::Forms::Form
	{
	public:
		frmLugaresdeAtencion(void)
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
		~frmLugaresdeAtencion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AforoPersonal;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AforoPersonal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(84, 80);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 421);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lugares de Atención";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(162, 251);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Aforo de Personal\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Nombre,
					this->AforoPersonal
			});
			this->dataGridView1->Location = System::Drawing::Point(533, 201);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(396, 300);
			this->dataGridView1->TabIndex = 1;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// AforoPersonal
			// 
			this->AforoPersonal->HeaderText = L"Aforo de Personal";
			this->AforoPersonal->MinimumWidth = 6;
			this->AforoPersonal->Name = L"AforoPersonal";
			this->AforoPersonal->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmLugaresdeAtencion::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(283, 540);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmLugaresdeAtencion::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(131, 603);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmLugaresdeAtencion::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(283, 603);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmLugaresdeAtencion::button4_Click);
			// 
			// frmLugaresdeAtencion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(1223, 688);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmLugaresdeAtencion";
			this->Text = L"Registro de Lugares de Atencion";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //BUSCAR
		String^ nombre = this->textBox1->Text;
		String^ numerodePersonal = this->textBox2->Text;
		LugaresdeAtencionController2^ objLugaresdeAtencionController = gcnew LugaresdeAtencionController2();
		List<LugaresdeAtencion^>^ listaLugaresdeAtencion = objLugaresdeAtencionController->buscarLugardeAtencion(nombre);
		mostrarGrilla(listaLugaresdeAtencion);
	}
	private: void mostrarGrilla(List<LugaresdeAtencion^>^ listaLugaresdeAtencion) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaLugaresdeAtencion->Count; i++) {
			LugaresdeAtencion^ objLugaresdeAtencion = listaLugaresdeAtencion[i];
			array<String^>^ fila = gcnew array<String^>(7);
			fila[0] = Convert::ToString(objLugaresdeAtencion->nombre);
			fila[1] = Convert::ToString(objLugaresdeAtencion->numerodePersonal);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //ELIMINAR
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ nombreEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		LugaresdeAtencionController2^ objLugaresdeAtencionController = gcnew LugaresdeAtencionController2();
		objLugaresdeAtencionController->eliminarLugardeAtencion(nombreEliminar);
		MessageBox::Show("Se ha eliminado correctamente el anuncio seleccionado");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoLugarAtencion^ ventanaNuevoLugarAtencion = gcnew frmNuevoLugarAtencion();
	ventanaNuevoLugarAtencion->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ nombreEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	LugaresdeAtencionController2^ objLugaresdeAtencionController = gcnew LugaresdeAtencionController2();
	LugaresdeAtencion^ objtLugardeAtencion = objLugaresdeAtencionController->buscarLugardeAtencionxNombre(nombreEditar);
	frmEditarLugarAtencion^ ventanaEditarLugarAtencion = gcnew frmEditarLugarAtencion(objtLugardeAtencion);
	ventanaEditarLugarAtencion->Show();
}
};
}
