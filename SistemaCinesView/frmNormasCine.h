#pragma once

#include "frmNuevaNormaCine.h"
#include "frmEditarNormaCine.h"

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
	/// Resumen de frmNormasCine
	/// </summary>
	public ref class frmNormasCine : public System::Windows::Forms::Form
	{
	public:
		frmNormasCine(void)
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
		~frmNormasCine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ resolucion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ planAccion;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->resolucion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->planAccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->resolucion,
					this->Column1, this->descripcion, this->planAccion
			});
			this->dataGridView1->Location = System::Drawing::Point(440, 222);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(757, 331);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmNormasCine::dataGridView1_CellContentClick);
			// 
			// resolucion
			// 
			this->resolucion->HeaderText = L"Resolución Normativa";
			this->resolucion->MinimumWidth = 6;
			this->resolucion->Name = L"resolucion";
			this->resolucion->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Tipo de Norma";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// descripcion
			// 
			this->descripcion->HeaderText = L"Descripción";
			this->descripcion->MinimumWidth = 6;
			this->descripcion->Name = L"descripcion";
			this->descripcion->Width = 125;
			// 
			// planAccion
			// 
			this->planAccion->HeaderText = L"Plan de Acción";
			this->planAccion->MinimumWidth = 100;
			this->planAccion->Name = L"planAccion";
			this->planAccion->Width = 400;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Location = System::Drawing::Point(37, 89);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(349, 439);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Normas";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNormasCine::groupBox1_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 20);
			this->textBox1->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(140, 130);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(185, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 26);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Resolución\r\nNormativa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Tipo de Norma";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Plan de Accion";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Descripcion";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(140, 183);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(185, 108);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(140, 317);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(185, 106);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(109, 546);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNormasCine::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 546);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNormasCine::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(109, 607);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmNormasCine::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(257, 607);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmNormasCine::button4_Click);
			// 
			// frmNormasCine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(1241, 693);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmNormasCine";
			this->Text = L"Normas de Cine";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {	//BUSCAR
		String^ tipoNorma = this->comboBox1->Text;
		NormasCineController2^ objNormasCineController = gcnew NormasCineController2();
		List<NormasCine^>^ listaNormasCine = objNormasCineController->buscarNormaCine(tipoNorma);
		mostrarGrilla(listaNormasCine);
	}
	private: void mostrarGrilla(List<NormasCine^>^ listaNormasCine) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaNormasCine->Count; i++) {
			NormasCine^ objNormasCine = listaNormasCine[i];
			array<String^>^ fila = gcnew array<String^>(4);
			fila[0] = Convert::ToString(objNormasCine->resolucionNormativa);
			fila[1] = Convert::ToString(objNormasCine->tipoNorma);
			fila[2] = Convert::ToString(objNormasCine->descripcion);
			fila[3] = Convert::ToString(objNormasCine->plandeAccion);
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //ELIMINAR
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ resolucionNormativa = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		NormasCineController2^ objNormasCineController = gcnew NormasCineController2();
		objNormasCineController->eliminarNormaCine(resolucionNormativa);
		MessageBox::Show("Se ha eliminado correctamente la norma seleccionada");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaNormaCine^ ventanaNuevaNormaCine = gcnew frmNuevaNormaCine();
	ventanaNuevaNormaCine->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ resolucion = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	NormasCineController2^ objNormasCineController = gcnew NormasCineController2();
	NormasCine^ objNormasCine = objNormasCineController->buscarNormaCinexResolucion(resolucion);
	frmEditarNormaCine^ ventanaEditar = gcnew frmEditarNormaCine(objNormasCine);
	ventanaEditar->ShowDialog();
}
};
}
