#pragma once

namespace SistemaCinesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaCinesController;
	using namespace SistemaCinesModel;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmMetodosPago
	/// </summary>
	public ref class frmMetodosPago : public System::Windows::Forms::Form
	{
	public:
		frmMetodosPago(void)
		{
			InitializeComponent();
			this->objProyeccion = gcnew ProyeccionCliente();
			this->objDetallePedido = gcnew DetallePedido();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMetodosPago(ProyeccionCliente^ objProyeccion, int contador, int auxA1, int  auxA2, int auxA3, int auxA4, int auxA5, int auxA6, int auxA7, int auxA8, int auxA9, int auxA10)
		{
			InitializeComponent();
			this->objProyeccion = objProyeccion;
			this->contador = contador;
			this->auxA1 = auxA1;
			this->auxA2 = auxA2;
			this->auxA3 = auxA3;
			this->auxA4 = auxA4;
			this->auxA5 = auxA5;
			this->auxA6 = auxA6;
			this->auxA7 = auxA7;
			this->auxA8 = auxA8;
			this->auxA9 = auxA9;
			this->auxA10 = auxA10;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMetodosPago(int comida, List<DetallePedido^>^ listaPedidos, int TotalComida)
		{
			InitializeComponent();
			this->comida = comida;
			this->listaPedidos = listaPedidos;
			this->TotalComida = TotalComida;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMetodosPago()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label9;

	private: ProyeccionCliente^ objProyeccion;
	private: DetallePedido^ objDetallePedido;
	private: List<DetallePedido^>^ listaPedidos;
	private: int contador;
	private: int auxA1;
	private: int auxA2;
	private: int auxA3;
	private: int auxA4;
	private: int auxA5;
	private: int auxA6;
	private: int auxA7;
	private: int auxA8;
	private: int auxA9;
	private: int auxA10;
	private: int comida;
	private: int TotalComida;
	private: System::Windows::Forms::TextBox^ textBox5;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L" Realizar Pago";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre Completo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correo Electrónico";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(136, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Mes";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Crédito", L"Débito" });
			this->comboBox1->Location = System::Drawing::Point(349, 240);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"2018", L"2019", L"2020", L"2021", L"2022", L"2023",
					L"2024", L"2025", L"2026", L"2027"
			});
			this->comboBox2->Location = System::Drawing::Point(199, 302);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(349, 302);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(111, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &frmMetodosPago::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(196, 286);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Fecha de Vencimiento";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(346, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"CVV";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 31);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Pagar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMetodosPago::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Numero de tarjeta";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(32, 241);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(291, 20);
			this->textBox4->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(338, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Tipo de Tarjeta";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox3->Location = System::Drawing::Point(28, 302);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(134, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Tarjeta de Crédito o Débito";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(341, 45);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(165, 20);
			this->textBox5->TabIndex = 22;
			// 
			// frmMetodosPago
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(531, 412);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmMetodosPago";
			this->Text = L"frmMetodosPago";
			this->Load += gcnew System::EventHandler(this, &frmMetodosPago::frmMetodosPago_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmMetodosPago_Load(System::Object^ sender, System::EventArgs^ e) {
		//this->textBox5->Text = Convert::ToString(DateTime::Now);
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comida == 0) {
		int codigoProyeccion = this->objProyeccion->codigo;
		ButacasController3^ objButacaController = gcnew ButacasController3();
		objButacaController->ActualizarButacasxAux(codigoProyeccion, auxA1, auxA2, auxA3, auxA4, auxA5, auxA6, auxA7, auxA8, auxA9, auxA10);
		MessageBox::Show("Su compra ha sido realizado exitosamente, se le enviara a su correo la boleta");
		String^ nombre = this->textBox1->Text;
		String^ nTarjeta = this->textBox4->Text;
		int cantidad = contador;
		String^ Descripcion = objProyeccion->pelicula;
		int Total = cantidad * 15;
		ComprobanteController3^ objComprobante = gcnew ComprobanteController3();
		objComprobante->AgregarPeliculaReporte(DateTime::Now, nombre, nTarjeta, cantidad, Descripcion, Total);

		this->Close();
	}
	else {
		String^ Tarjeta = "Tarjeta";
		
		MessageBox::Show("Su compra ha sido realizado exitosamente, se le enviara a su correo la boleta");
		String^ nombre = this->textBox1->Text;
		String^ nTarjeta = this->textBox4->Text;
		int cantidad = listaPedidos->Count;
		String^ descripcion = "";
		for (int i = 0; i < listaPedidos->Count; i++) {
			DetallePedido^ objDetallePedido = listaPedidos[i];
			if (listaPedidos->Count == 1) {
				descripcion = objDetallePedido->productos ;
			}
			descripcion = objDetallePedido->productos + "," + descripcion;
		}

		int Total = TotalComida;
		ComprobanteController^ objComprobante = gcnew ComprobanteController();
		objComprobante->guardarreporteComida(DateTime::Now, nombre, nTarjeta, Tarjeta,cantidad, descripcion, Total);

		this->Close();
	}
	
	

	/*
	frmCompraEntrada^ ventanaCompraEntrada = gcnew frmCompraEntrada();
	ventanaCompraEntrada->Close();
	frmSeleccionarButacas^ ventanaSeleccionButacas = gcnew frmSeleccionarButacas();
	ventanaSeleccionButacas->Close();
	frmCompraProyeccion^ ventanaCompraP = gcnew frmCompraProyeccion();
	ventanaCompraP->Close();
	*/
}
};
}
