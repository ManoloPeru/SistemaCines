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
	/// Resumen de frmEditarBeneficio
	/// </summary>
	public ref class frmEditarBeneficio : public System::Windows::Forms::Form
	{
	public:
		frmEditarBeneficio(void)
		{

			InitializeComponent();
			this->objBeneficio = gcnew Beneficios();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarBeneficio(Beneficios^ objBeneficio)
		{
			InitializeComponent();
			this->objBeneficio = objBeneficio;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarBeneficio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: Beneficios^ objBeneficio;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(104, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(57, 284);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(104, 156);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Fecha Fin :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Fecha Inicio :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(104, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Código";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Puntos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Descuentos";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Beneficio 1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 277);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 13);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Beneficio 2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 313);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 13);
			this->label10->TabIndex = 34;
			this->label10->Text = L"Beneficio 3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(104, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 35;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(104, 192);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 36;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(104, 234);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(146, 20);
			this->textBox6->TabIndex = 37;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(104, 274);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(146, 20);
			this->textBox7->TabIndex = 38;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(104, 310);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(146, 20);
			this->textBox8->TabIndex = 39;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(158, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 26);
			this->button1->TabIndex = 84;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarBeneficio::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(42, 359);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 26);
			this->button3->TabIndex = 83;
			this->button3->Text = L"Grabar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarBeneficio::button3_Click);
			// 
			// frmEditarBeneficio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Linen;
			this->ClientSize = System::Drawing::Size(269, 406);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Name = L"frmEditarBeneficio";
			this->Text = L"frmEditarBeneficio";
			this->Load += gcnew System::EventHandler(this, &frmEditarBeneficio::frmEditarBeneficio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void frmEditarBeneficio_Load(System::Object^ sender, System::EventArgs^ e) {
	
	this->textBox1->Text = Convert::ToString(this->objBeneficio->codigo);
	this->textBox2->Text = Convert::ToString(this->objBeneficio->puntos);
	this->textBox3->Text = this->objBeneficio->descuentos;
	this->textBox4->Text = this->objBeneficio->fechaInicio;
	this->textBox5->Text = this->objBeneficio->fechaFin;
	this->textBox6->Text = this->objBeneficio->beneficio1;
	this->textBox7->Text = this->objBeneficio->beneficio2;
	this->textBox8->Text = this->objBeneficio->beneficio3;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int puntos = Convert::ToInt32(this->textBox2->Text) ;
	String^ descuentos = this->textBox3->Text;
	String^ fechaInicio = this->textBox4->Text;
	String^ fechaFin = this->textBox5->Text;
	String^ ben1 = this->textBox6->Text;
	String^ ben2 = this->textBox7->Text;
	String^ ben3 = this->textBox8->Text;
	///actualizar los datos
	this->objBeneficio->puntos = puntos;
	this->objBeneficio->descuentos = descuentos;
	this->objBeneficio->fechaInicio = fechaInicio;
	this->objBeneficio->fechaFin = fechaFin;
	this->objBeneficio->beneficio1 = ben1;
	this->objBeneficio->beneficio2 = ben2;
	this->objBeneficio->beneficio3 = ben3;
	//llamar al controler
	BeneficiosController2^ objBeneficiosController = gcnew BeneficiosController2();
	objBeneficiosController->actualizarBeneficios(this->objBeneficio);
	MessageBox::Show("El proveedor fue actualizado con éxito ");
	this->Close();
}
};
}
