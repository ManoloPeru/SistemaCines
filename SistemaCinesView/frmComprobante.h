#pragma once

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
	/// Resumen de frmComprobante
	/// </summary>
	public ref class frmComprobante : public System::Windows::Forms::Form
	{
	public:
		frmComprobante(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmComprobante(String^ nombre, String^ numerodeSala, int cantButacas, String^ nombreCliente, String^ dniCliente, String^ modoPago)
		{
			InitializeComponent();
			this->nombre = nombre;
			this->numerodeSala = numerodeSala;
			this->cantButacas = cantButacas;
			this->nombreCliente = nombreCliente;
			this->dniCliente = dniCliente;
			this->modoPago = modoPago;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmComprobante(String^ nombre, int cantidad, String^ nombreCliente, String^ dniCliente, String^ modoPago, double preciototal)
		{
			InitializeComponent();
			this->nombre = nombre;
			this->cantidad = cantidad;
			this->nombreCliente = nombreCliente;
			this->dniCliente = dniCliente;
			this->modoPago = modoPago;
			this->preciototal = preciototal;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComprobante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label12;
	private: String^ nombre;
	private: String^ numerodeSala;
	private: int cantButacas;
	private: String^ nombreCliente;
	private: String^ dniCliente;
	private: String^ modoPago;
	private: int cantidad;
	private: double preciototal = 0;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Comprobante de Pago";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(234, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha y Hora de Emision: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cliente: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Doc. de Identidad:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Modo de Pago:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(33, 332);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(450, 111);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cant";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Descripcion";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Importe";
			this->Column3->Name = L"Column3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(244, 467);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Monto Sin IGV:";
			this->label6->Click += gcnew System::EventHandler(this, &frmComprobante::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(244, 501);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"IGV:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(244, 535);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 24);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Total a Pagar: ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(267, 184);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 29);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(267, 217);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 29);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(267, 252);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 29);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(267, 288);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(216, 29);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(386, 464);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(67, 29);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(386, 498);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(67, 29);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(386, 532);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(67, 29);
			this->textBox7->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(459, 467);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 24);
			this->label9->TabIndex = 16;
			this->label9->Text = L"S/.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(459, 501);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 24);
			this->label10->TabIndex = 17;
			this->label10->Text = L"S/.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(459, 535);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 24);
			this->label11->TabIndex = 18;
			this->label11->Text = L"S/.";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(221, 582);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 42);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Imprimir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmComprobante::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(176, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 24);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Cine PUCP ";
			// 
			// frmComprobante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 668);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmComprobante";
			this->Text = L"frmComprobante";
			this->Load += gcnew System::EventHandler(this, &frmComprobante::frmComprobante_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmComprobante_Load(System::Object^ sender, System::EventArgs^ e) {
		if (preciototal != 0) {
			String^ nombredeCliente = nombreCliente;
			String^ docIdentCliente = dniCliente;
			String^ mododePago = modoPago;
			this->textBox1->Text = Convert::ToString(DateTime::Now);
			this->textBox2->Text = nombredeCliente;
			this->textBox3->Text = docIdentCliente;
			this->textBox4->Text = mododePago;
			this->textBox5->Text = Convert::ToString(preciototal - preciototal * 0.15);
			this->textBox6->Text = Convert::ToString(preciototal * 0.15);
			this->textBox7->Text = Convert::ToString(preciototal);
			mostrarGrillaComida();
		}
		else {
			double montoTotal = cantButacas * 15;
			String^ nombredeCliente = nombreCliente;
			String^ docIdentCliente = dniCliente;
			String^ mododePago = modoPago;
			this->textBox1->Text = Convert::ToString(DateTime::Now);
			this->textBox2->Text = nombredeCliente;
			this->textBox3->Text = docIdentCliente;
			this->textBox4->Text = mododePago;
			this->textBox5->Text = Convert::ToString(montoTotal - montoTotal * 0.15);
			this->textBox6->Text = Convert::ToString(montoTotal * 0.15);
			this->textBox7->Text = Convert::ToString(montoTotal);
			mostrarGrillaPelicula();
		}
	}
	private: void mostrarGrillaComida() {
		this->dataGridView1->Rows->Clear(); /* Elimino toda la informacion del datagrid */
		array<String^>^ fila = gcnew array<String^>(3);
		fila[0] = Convert::ToString(cantidad);
		fila[1] = nombre;
		fila[2] = Convert::ToString(preciototal);
		this->dataGridView1->Rows->Add(fila);
	}
	private: void mostrarGrillaPelicula() {
		this->dataGridView1->Rows->Clear(); /* Elimino toda la informacion del datagrid */
		array<String^>^ fila = gcnew array<String^>(3);
		fila[0] = Convert::ToString(cantButacas);
		fila[1] = nombre + " Sala " + numerodeSala;
		fila[2] = Convert::ToString(cantButacas * 15);
		this->dataGridView1->Rows->Add(fila);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (preciototal != 0) {
			ComprobanteController^ objComprobanteController = gcnew ComprobanteController();
			objComprobanteController->guardarreporteComida(DateTime::Now, nombreCliente, dniCliente, modoPago, cantidad, nombre, preciototal);
			this->Close();
		}
		else {
			ComprobanteController^ objComprobanteController = gcnew ComprobanteController();
			objComprobanteController->guardarreportePelicula(DateTime::Now, nombreCliente, dniCliente, modoPago, cantButacas, nombre, cantButacas * 15);
			this->Close();
		}
	}
};
}
