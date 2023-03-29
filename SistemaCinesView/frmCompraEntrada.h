#pragma once
#include "frmButacasEntradas.h"


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
	/// Resumen de frmCompraEntrada
	/// </summary>
	public ref class frmCompraEntrada : public System::Windows::Forms::Form
	{
	public:
		frmCompraEntrada(void)
		{
			InitializeComponent();
			this->objPelicula = gcnew Pelicula();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmCompraEntrada(Pelicula^ objPelicula)
		{
			InitializeComponent();
			this->objPelicula = objPelicula;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmCompraEntrada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Button^ button2;


	private: Pelicula^ objPelicula;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: Salas^ objSala;
	private: int cantButacas;
	private: String^ hora;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Duración:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(77, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(254, 89);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(526, 134);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Sala";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Horario";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 200;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(254, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Seleccionar butaca";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmCompraEntrada::button2_Click);
			// 
			// frmCompraEntrada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 299);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmCompraEntrada";
			this->Text = L"frmCompraEntrada";
			this->Load += gcnew System::EventHandler(this, &frmCompraEntrada::frmCompraEntrada_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmCompraEntrada_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->objPelicula->nombre;
		this->textBox2->Text = this->objPelicula->duracion;
		ProyeccionesController^ objProyeccionController = gcnew ProyeccionesController();
		List<Proyeccion^>^ listaproyecciones = objProyeccionController->buscarProyeccionxNombre(this->objPelicula->nombre);
		mostrarGrilla(listaproyecciones);
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void mostrarGrilla(List<Proyeccion^>^ listaProyeccion) {
		this->dataGridView1->Rows->Clear(); /* Elimino toda la informacion del datagrid */
		for (int i = 0; i < listaProyeccion->Count; i++) {
			Proyeccion^ objProyeccion = listaProyeccion[i];
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = Convert::ToString(objProyeccion->codigo);
			fila[1] = Convert::ToString(objProyeccion->sala);
			fila[2] = Convert::ToString(objProyeccion->HoraFecha);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ numeroSala = this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString();
		SalasController^ objSalasController = gcnew SalasController();
		objSala = objSalasController->buscarSalaxCodigo(numeroSala);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ numeroSala = this->dataGridView1->Rows[filaSeleccionada]->Cells[1]->Value->ToString();
		hora = this->dataGridView1->Rows[filaSeleccionada]->Cells[2]->Value->ToString();
		SalasController^ objSalasController = gcnew SalasController();
		objSala = objSalasController->buscarSalaxCodigo(numeroSala);
		frmButacasEntradas^ ventanaButacaEntrada = gcnew frmButacasEntradas( objSala, objPelicula, hora);
		ventanaButacaEntrada->ShowDialog();
		
	}
};
}
