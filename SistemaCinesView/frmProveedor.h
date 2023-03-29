#pragma once
#include"frmNuevoProveedor.h"
#include"frmEditarProveedor.h"

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
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmProveedor
	/// </summary>
	public ref class frmProveedor : public System::Windows::Forms::Form
	{
	public:
		frmProveedor(void)
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
		~frmProveedor()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private:

	public:


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Razón Social :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(381, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"RUC";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(30, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(735, 94);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(640, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 26);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmProveedor::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(442, 39);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(145, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(136, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(212, 20);
			this->textBox3->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(252, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 26);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmProveedor::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(362, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 26);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmProveedor::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(472, 329);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 26);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmProveedor::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(65, 150);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(647, 144);
			this->dataGridView1->TabIndex = 17;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Razón Social";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"RUC";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Producto";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Teléfono";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Correo";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// frmProveedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(808, 406);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmProveedor";
			this->Text = L"frmProveedor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoProveedor^ VentanaNuevoProveedor = gcnew frmNuevoProveedor();
	VentanaNuevoProveedor->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoProveedorEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	ProveedorController2^ objProveedorController = gcnew ProveedorController2();
	Proveedor^ objProveedor= objProveedorController->BuscarProveedorxCodigo(codigoProveedorEditar);
	frmEditarProveedor^ VentanaEditarProveedor = gcnew frmEditarProveedor(objProveedor);
	VentanaEditarProveedor->ShowDialog();
	//
}
//private: System::Void frmProveedor_Load(System::Object^ sender, System::EventArgs^ e) {
//}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ RazonSocial = this->textBox3->Text;
	String^ RUC = this->textBox4->Text;
	ProveedorController2^ objProveedorController = gcnew ProveedorController2();
	List<Proveedor^>^ listaProveedor = objProveedorController ->BuscarProveedorxRazonSocial_RUC(RazonSocial, RUC);
	mostrarGrilla(listaProveedor);
}
	  private: void mostrarGrilla(List<Proveedor^>^ listaProveedor) {
		  this->dataGridView1->Rows->Clear();
		  /*Elimino toda la informacion del datagrid*/
		  for (int i = 0; i < listaProveedor->Count; i++) {
			  Proveedor^ objProveedor = listaProveedor[i];
			  array<String^>^ fila = gcnew array<String^>(6);

			  fila[0] = Convert::ToString(objProveedor->codigo);
			  fila[1] = objProveedor->RazonSocial;
			  fila[2] = objProveedor->RUC;
			  fila[3] = objProveedor->producto;
			  fila[4] = objProveedor->telefono;
			  fila[5] = objProveedor->correo;

			  this->dataGridView1->Rows->Add(fila);
		  }
	  }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoProveedorEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	ProveedorController2^ objProveedorController = gcnew ProveedorController2();
	objProveedorController->eliminarProveedor(codigoProveedorEliminar);
	MessageBox::Show("Se ha eliminado correctamente la insumo seleccionado");
}
};
}
