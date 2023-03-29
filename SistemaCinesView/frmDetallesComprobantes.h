#pragma once
#include "frmComprobante.h"

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
	/// Resumen de frmDetallesComprobantes
	/// </summary>
	public ref class frmDetallesComprobantes : public System::Windows::Forms::Form
	{
	public:
		frmDetallesComprobantes(void)
		{
			InitializeComponent();
			this->objPelicula = gcnew Pelicula();
			this->objSala = gcnew Salas();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDetallesComprobantes(Salas^ objSala, Pelicula^ objPelicula, String^ hora, int cantButacas, int *cancelar)
		{
			InitializeComponent();
			this->objPelicula = objPelicula;
			this->objSala = objSala;
			this->hora = hora;
			this->cantButacas = cantButacas;
			this->cancelar = cancelar;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmDetallesComprobantes(String^ nombreComida, int cantidadCompra)
		{
			InitializeComponent();
			this->nombreComida = nombreComida;
			this->cantidadCompra = cantidadCompra;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmDetallesComprobantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox2;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: Salas^ objSala;
	private: Pelicula^ objPelicula;
	private: String^ hora;
	private: int cantButacas;
	private: int *cancelar;
	private: String^ nombreComida;
	private: int cantidadCompra;
	private: double precioTotal;

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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pelicula", L"Comida" });
			this->comboBox2->Location = System::Drawing::Point(159, 139);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 43;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Efectivo", L"Yape", L"Tarjeta VISA" });
			this->comboBox1->Location = System::Drawing::Point(159, 322);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 42;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(159, 227);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 41;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(159, 200);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(175, 20);
			this->textBox8->TabIndex = 40;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(41, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 13);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Detalle articulo:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(41, 203);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Horario:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 322);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Modo de Pago:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(159, 290);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 36;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(159, 258);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 35;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(159, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 34;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(159, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 33;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(159, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 32;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 293);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Monto a pagar:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(41, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Cantidad de articulo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Nombre articulo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Compra de:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 27;
			this->label3->Text = L"DNI del Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Nombre del Cliente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Detalle del Comprobante";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(230, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmDetallesComprobantes::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Comprar e Imprimir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmDetallesComprobantes::button1_Click);
			// 
			// frmDetallesComprobantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(399, 422);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmDetallesComprobantes";
			this->Text = L"frmDetallesComprobantes";
			this->Load += gcnew System::EventHandler(this, &frmDetallesComprobantes::frmDetallesComprobantes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmDetallesComprobantes_Load(System::Object^ sender, System::EventArgs^ e) {
		if (objPelicula != nullptr) {
			this->textBox4->Text = this->objPelicula->nombre;
			this->textBox8->Text = hora;
			this->textBox9->Text = "Sala" + this->objSala->numerodeSala;
			this->textBox5->Text = Convert::ToString(cantButacas);
			this->textBox6->Text = Convert::ToString(cantButacas * 15) + " Soles";
		}
		else {
			this->textBox4->Text = nombreComida;
			this->textBox5->Text = Convert::ToString(cantidadCompra);
			if (nombreComida == "papas Chicas") {
				this->textBox6->Text = Convert::ToString(cantidadCompra * 10) + " Soles";
				precioTotal = cantidadCompra * 10;
			}
			if (nombreComida == "papas Grandes") {
				this->textBox6->Text = Convert::ToString(cantidadCompra * 15) + " Soles";
				precioTotal = cantidadCompra * 15;
			}
			if (nombreComida == "hamburguesa pequeña") {
				this->textBox6->Text = Convert::ToString(cantidadCompra * 15) + " Soles";
				precioTotal = cantidadCompra * 15;
			}
			if (nombreComida == "hamburguesa grande") {
				this->textBox6->Text = Convert::ToString(cantidadCompra * 25) + " Soles";
				precioTotal = cantidadCompra * 25;
			}
			if (nombreComida == "gaseosa mediana") {
				this->textBox6->Text = Convert::ToString(cantidadCompra * 10) + " Soles";
				precioTotal = cantidadCompra * 10;
			}
			if (nombreComida == "gaseosa grande") {
				this->textBox6->Text = Convert::ToString(cantidadCompra * 15) + " Soles";
				precioTotal = cantidadCompra * 15;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		*cancelar = 1;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreCliente = this->textBox1->Text;
		String^ dniCliente = this->textBox2->Text;
		String^ modoPago = this->comboBox1->Text;
		if (this->comboBox2->Text=="Pelicula") {
			frmComprobante^ ventanaComprobante = gcnew frmComprobante(this->objPelicula->nombre, this->objSala->numerodeSala, cantButacas, nombreCliente, dniCliente, modoPago);
			ventanaComprobante->ShowDialog();
			this->Close();
		}
		else {
			frmComprobante^ ventanaComprobante = gcnew frmComprobante(nombreComida, cantidadCompra, nombreCliente, dniCliente, modoPago, precioTotal);
			ventanaComprobante->ShowDialog();
			this->Close();
		}
		
	}
};
}
