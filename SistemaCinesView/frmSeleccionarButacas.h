#pragma once
#include "frmCompraEntradaCliente.h"

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
	/// Resumen de frmSeleccionarButacas
	/// </summary>
	public ref class frmSeleccionarButacas : public System::Windows::Forms::Form
	{
	public:
		frmSeleccionarButacas(void)
		{
			InitializeComponent();
			auxA1 = 0;auxA2 = 0;auxA3 = 0;auxA4 = 0;auxA5 = 0;auxA6 = 0;auxA7 = 0; auxA8 = 0; auxA9 = 0; auxA10 = 0;
			contador = 0;
			this->objProyeccion = gcnew ProyeccionCliente();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmSeleccionarButacas(ProyeccionCliente^ objProyeccion)
		{
			InitializeComponent();
			this->objProyeccion = objProyeccion;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmSeleccionarButacas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: ProyeccionCliente^ objProyeccion;































	private: System::Windows::Forms::Button^ button56;









	private: System::Windows::Forms::Button^ button46;



	private: System::Windows::Forms::Button^ button47;




























	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
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
	private: int aux1;
	private: int aux2;
	private: int aux3;
	private: int aux4;
	private: int aux5;
	private: int aux6;
	private: int aux7;
	private: int aux8;
	private: int aux9;
	private: int aux10;
	private: int contador;


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(196, 471);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 33);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(76, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 33);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Continuar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->button56);
			this->panel1->Controls->Add(this->button46);
			this->panel1->Controls->Add(this->button47);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(39, 164);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 268);
			this->panel1->TabIndex = 30;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmSeleccionarButacas::panel1_Paint);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::Gainsboro;
			this->button56->Location = System::Drawing::Point(231, 194);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(53, 29);
			this->button56->TabIndex = 47;
			this->button56->Text = L"10";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button56_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::Gainsboro;
			this->button46->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button46->Location = System::Drawing::Point(80, 78);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(53, 29);
			this->button46->TabIndex = 37;
			this->button46->Text = L"1";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button46_Click);
			this->button46->MouseEnter += gcnew System::EventHandler(this, &frmSeleccionarButacas::button46_MouseEnter);
			this->button46->MouseLeave += gcnew System::EventHandler(this, &frmSeleccionarButacas::button46_MouseLeave);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::Gainsboro;
			this->button47->Location = System::Drawing::Point(157, 78);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(53, 29);
			this->button47->TabIndex = 36;
			this->button47->Text = L"2";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button47_Click);
			this->button47->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmSeleccionarButacas::button47_MouseClick);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gainsboro;
			this->button9->Location = System::Drawing::Point(11, 136);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(53, 29);
			this->button9->TabIndex = 7;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gainsboro;
			this->button8->Location = System::Drawing::Point(80, 136);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(53, 29);
			this->button8->TabIndex = 6;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gainsboro;
			this->button7->Location = System::Drawing::Point(157, 136);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(53, 29);
			this->button7->TabIndex = 5;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->Location = System::Drawing::Point(11, 194);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(53, 29);
			this->button6->TabIndex = 4;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->Location = System::Drawing::Point(231, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 29);
			this->button5->TabIndex = 3;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->Location = System::Drawing::Point(80, 194);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 29);
			this->button4->TabIndex = 2;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button4_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(22, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(245, 20);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"Pantalla";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &frmSeleccionarButacas::textBox5_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Location = System::Drawing::Point(157, 194);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 29);
			this->button3->TabIndex = 0;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmSeleccionarButacas::button3_Click_1);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(82, 110);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(127, 20);
			this->textBox4->TabIndex = 29;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(82, 84);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(127, 20);
			this->textBox3->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(82, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 20);
			this->textBox2->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(82, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Hora";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Sala";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Pelicula";
			// 
			// frmSeleccionarButacas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 565);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmSeleccionarButacas";
			this->Text = L"frmSeleccionarButacas";
			this->Load += gcnew System::EventHandler(this, &frmSeleccionarButacas::frmSeleccionarButacas_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoProyeccion= this->objProyeccion->codigo;
		//ButacasController^ objButacaController = gcnew ButacasController();
		//objButacaController-> ActualizarButacasxAux(codigoProyeccion,auxA1,auxA2,auxA3,auxA4,auxA5,auxA6,auxA7,auxA8,auxA9,auxA10,&cant);
		frmCompraEntradaCliente^ ventanaCompraEntrada = gcnew frmCompraEntradaCliente( objProyeccion ,contador, auxA1, auxA2, auxA3, auxA4, auxA5, auxA6, auxA7, auxA8, auxA9, auxA10);
		ventanaCompraEntrada->ShowDialog();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button46->BackColor == Color::Gainsboro) {
		this->button46->BackColor = Color::Aquamarine;
		auxA1 = 1;
		contador++;
	}
	else {
		this->button46->BackColor == Color::Gainsboro;
		auxA1 = 0;
		contador--;
	}
}
private: System::Void button46_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//this->button46->BackColor = Color::Green;
}
private: System::Void button46_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//this->button46->BackColor = SystemColors::Control;
}

private: System::Void frmSeleccionarButacas_Load(System::Object^ sender, System::EventArgs^ e) {
	int codigoProyeccion = this->objProyeccion->codigo;
	ButacasController3^ objButacaController = gcnew ButacasController3();
	ButacasCliente^ objButaca = objButacaController->BuscarButacasxCodigo(codigoProyeccion);
	if (objButaca->butaca1 == 1) {
		this->button46->BackColor = Color::Red;
		this->button46->Enabled = false;
	}
	if (objButaca->butaca2 == 1) {
		this->button47->BackColor = Color::Red;
		this->button47->Enabled = false;
	}
	if (objButaca->butaca3 == 1) {
		this->button9->BackColor = Color::Red;
		this->button9->Enabled = false;
	}
	if (objButaca->butaca4 == 1) {
		this->button8->BackColor = Color::Red;
		this->button8->Enabled = false;
	}
	if (objButaca->butaca5 == 1) {
		this->button7->BackColor = Color::Red;
		this->button7->Enabled = false;
	}
	if (objButaca->butaca6 == 1) {
		this->button5->BackColor = Color::Red;
		this->button5->Enabled = false;
	}
	if (objButaca->butaca7 == 1) {
		this->button6->BackColor = Color::Red;
		this->button6->Enabled = false;
	}
	if (objButaca->butaca8 == 1) {
		this->button4->BackColor = Color::Red;
		this->button4->Enabled = false;
	}
	if (objButaca->butaca9 == 1) {
		this->button3->BackColor = Color::Red;
		this->button3->Enabled = false;
	}
	if (objButaca->butaca10 == 1) {
		this->button56->BackColor = Color::Red;
		this->button56->Enabled = false;
	}
	this->textBox1->Text = objProyeccion->pelicula;
	this->textBox2->Text = Convert::ToString(objProyeccion->sala);
	this->textBox3->Text = objProyeccion->fecha;
	this->textBox4->Text = objProyeccion->hora;
	
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button47->BackColor == Color::Gainsboro) {
		this->button47->BackColor = Color::Aquamarine;
		auxA2 = 1;
		contador++;
	}
	else {
		this->button47->BackColor = Color::Gainsboro;
		auxA2 = 0;
		contador--;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button9->BackColor == Color::Gainsboro) {
		this->button9->BackColor = Color::Aquamarine;
		auxA3 = 1;
		contador++;
	}
	else {
		this->button9->BackColor = Color::Gainsboro;
		auxA3 = 0;
		contador--;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button8->BackColor == Color::Gainsboro) {
		this->button8->BackColor = Color::Aquamarine;
		auxA4 = 1;
		contador++;
	}
	else {
		this->button8->BackColor = Color::Gainsboro;
		auxA4 = 0;
		contador--;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button7->BackColor == Color::Gainsboro) {
		this->button7->BackColor = Color::Aquamarine;
		auxA5 = 1;
		contador++;
	}
	else {
		this->button7->BackColor = Color::Gainsboro;

		auxA5 = 0;
		contador--;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button5->BackColor == Color::Gainsboro) {
		this->button5->BackColor = Color::Aquamarine;
		auxA6 = 1;
		contador++;
	}
	else {
		this->button5->BackColor = Color::Gainsboro;

		auxA6 = 0;
		contador--;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button6->BackColor == Color::Gainsboro) {
		this->button6->BackColor = Color::Aquamarine;

		auxA7 = 1;
		contador++;
	}
	else {
		this->button6->BackColor = Color::Gainsboro;

		auxA7 = 0;
		contador--;
	}
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if (this->button4->BackColor == Color::Gainsboro) {
		this->button4->BackColor = Color::Aquamarine;

		auxA8 = 1;
		contador++;
	}
	else {
		this->button4->BackColor = Color::Gainsboro;

		auxA8 = 0;
		contador--;
	}
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if (this->button3->BackColor == Color::Gainsboro) {
		this->button3->BackColor = Color::Aquamarine;

		auxA9 = 1;
		contador++;
	}
	else {
		this->button3->BackColor = Color::Gainsboro;

		auxA9 = 0;
		contador--;
	}
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->button56->BackColor == Color::Gainsboro) {
		this->button56 ->BackColor = Color::Aquamarine;

		auxA10 = 1;
		contador++;
	}
	else {
		this->button56->BackColor = Color::Gainsboro;

		auxA10 = 0;
		contador--;
	}
}
private: System::Void button47_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
