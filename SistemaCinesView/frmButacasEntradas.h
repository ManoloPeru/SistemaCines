#pragma once
#include "frmDetallesComprobantes.h"

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
	/// Resumen de frmButacasEntradas
	/// </summary>
	public ref class frmButacasEntradas : public System::Windows::Forms::Form
	{
	public:
		frmButacasEntradas(void)
		{
			InitializeComponent();
			this->objPelicula = gcnew Pelicula();
			this->objSala = gcnew Salas();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmButacasEntradas(Salas^ objSala, Pelicula^ objPelicula, String^ hora)
		{
			InitializeComponent();
			this->objPelicula = objPelicula;
			this->objSala = objSala;
			this->hora = hora;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmButacasEntradas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Salas^ objSala;
	private: Pelicula^ objPelicula;
	private: String^ hora;
	private: int cantButacas;
	private: Butacas^ ButacasSeleccionadasAntes;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(119, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Horario: ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(373, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Eliminar Seleccion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmButacasEntradas::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 15;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column2,
					this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(241, 116);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(382, 161);
			this->dataGridView1->TabIndex = 14;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Butaca ";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Disponibilidad";
			this->Column3->Name = L"Column3";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(514, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Comprar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmButacasEntradas::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->Location = System::Drawing::Point(258, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Seleccionar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmButacasEntradas::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Numero de Sala:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre Pelicula:";
			// 
			// frmButacasEntradas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 374);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmButacasEntradas";
			this->Text = L"frmButacasEntradas";
			this->Load += gcnew System::EventHandler(this, &frmButacasEntradas::frmButacasEntradas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmButacasEntradas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->objPelicula->nombre;
		this->textBox2->Text = this->objSala->numerodeSala;
		this->textBox3->Text = Convert::ToString(hora);
		ButacasController^ objButacasController = gcnew ButacasController();
		ButacasSeleccionadasAntes = objButacasController->buscarxSalaxHorario(Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
		Butacas^ objButaca = objButacasController->buscarxSalaxHorario(Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
		mostrarGrilla(objButaca);
	}
	private: void mostrarGrilla(Butacas^ objButaca) {
		this->dataGridView1->Rows->Clear(); /* Elimino toda la informacion del datagrid */
		array<String^>^ fila = gcnew array<String^>(2);
		fila[0] = Convert::ToString(1);
		if (objButaca->butaca1 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(2);
		if (objButaca->butaca2 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(3);
		if (objButaca->butaca3 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(4);
		if (objButaca->butaca4 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(5);
		if (objButaca->butaca5 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(6);
		if (objButaca->butaca6 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(7);
		if (objButaca->butaca7 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(8);
		if (objButaca->butaca8 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(9);
		if (objButaca->butaca9 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
		fila[0] = Convert::ToString(10);
		if (objButaca->butaca10 == 1) {
			fila[1] = "Ocupado";
		}
		else {
			fila[1] = "Disponible";
		}
		this->dataGridView1->Rows->Add(fila);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int numerobutaca = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		ButacasController^ objButacasController = gcnew ButacasController();
		objButacasController->actualizarButacas(numerobutaca, Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
		Butacas^ objButaca = objButacasController->buscarxSalaxHorario(Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
		cantButacas++;
		mostrarGrilla(objButaca);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int numerobutaca = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		ButacasController^ objButacasController = gcnew ButacasController();
		objButacasController->actualizarperoButacaxCodigo(numerobutaca, Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
		Butacas^ objButaca = objButacasController->buscarxSalaxHorario(Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
		cantButacas--;
		mostrarGrilla(objButaca);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int cancelar=0;
		frmDetallesComprobantes^ ventanaDetallesComprobantes = gcnew frmDetallesComprobantes(objSala, objPelicula, hora, cantButacas,&cancelar);
		ventanaDetallesComprobantes->ShowDialog();
		if (cancelar==1) {
			ButacasController^ objButacasController = gcnew ButacasController();
			objButacasController->compararButaca(ButacasSeleccionadasAntes, Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
			Butacas^ objButaca = objButacasController->buscarxSalaxHorario(Convert::ToInt32(objSala->numerodeSala), Convert::ToDateTime(hora));
			mostrarGrilla(objButaca);
			cantButacas = 0;
		}
		else {
			this->Close();
		}
		
	}
};
}
