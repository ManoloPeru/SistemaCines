#pragma once
#include "frmNuevoPersonal.h"
#include "frmEditarPersonal.h"

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
	/// Resumen de frmListadePersonal
	/// </summary>
	public ref class frmListadePersonal : public System::Windows::Forms::Form
	{
	public:
		frmListadePersonal(void)
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
		~frmListadePersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:







	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contrasena;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TipoPersona;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contrasena = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TipoPersona = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column6, this->Contrasena, this->TipoPersona
			});
			this->dataGridView1->Location = System::Drawing::Point(103, 193);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(846, 157);
			this->dataGridView1->TabIndex = 27;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Paterno";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Correo";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Contrasena
			// 
			this->Contrasena->HeaderText = L"Contraseña";
			this->Contrasena->Name = L"Contrasena";
			// 
			// TipoPersona
			// 
			this->TipoPersona->HeaderText = L"Tipo de Persona";
			this->TipoPersona->Name = L"TipoPersona";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(620, 379);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 26);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmListadePersonal::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(510, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 26);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmListadePersonal::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(400, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 26);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmListadePersonal::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(103, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(910, 94);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(763, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 26);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmListadePersonal::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(467, 39);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(212, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(136, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(212, 20);
			this->textBox3->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(381, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Apellido";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Nombre :";
			// 
			// frmListadePersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1116, 478);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmListadePersonal";
			this->Text = L"frmListadePersonal";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//buscar
		String^ nombrePersonal = this->textBox3->Text;
		String^ apellidoPersonal = this->textBox4->Text;
		PersonalController^ objPersonalController = gcnew PersonalController();
		List<Personal^>^ listaPersonal = objPersonalController->BuscarPersonalxnombre_apellido(nombrePersonal, apellidoPersonal);
		mostrarGrilla(listaPersonal);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//nuevo
		frmNuevoPersonal^ VentanaNuevo = gcnew frmNuevoPersonal();
		VentanaNuevo->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//editar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigo = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		PersonalController^ objPersonalController = gcnew PersonalController();
		Personal^ objPersonal = objPersonalController->buscarPersonalxCodigo(codigo);
		frmEditarPersonal^ VentanaEditar = gcnew frmEditarPersonal(objPersonal);
		VentanaEditar->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//eliminar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigo = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		PersonalController^ objPersonalController = gcnew PersonalController();
		objPersonalController->eliminarPersonal(codigo);
		MessageBox::Show("Se ha eliminado correctamente.");
	}
	private: void mostrarGrilla(List<Personal^>^ listaPersonal) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaPersonal->Count; i++) {
			Personal^ objPersonal = listaPersonal[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = Convert::ToString(objPersonal->codigo);
			fila[1] = Convert::ToString(objPersonal->nombre);
			fila[2] = Convert::ToString(objPersonal->apellido);
			fila[3] = Convert::ToString(objPersonal->correo);
			fila[4] = Convert::ToString(objPersonal->contraseña);
			fila[5] = Convert::ToString(objPersonal->tipodePersona);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	};
}
