#pragma once

namespace SistemaCinesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing;
	using namespace SistemaCinesController;
	using namespace SistemaCinesModel;

	/// <summary>
	/// Resumen de frmEditarCliente
	/// </summary>
	public ref class frmEditarCliente : public System::Windows::Forms::Form
	{
	public:
		frmEditarCliente(void)
		{
			InitializeComponent();
			this->objCliente = gcnew Cliente();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarCliente(Cliente^ objCliente)
		{
			InitializeComponent();
			this->objCliente = objCliente;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: Cliente^ objCliente;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 26);
			this->button1->TabIndex = 82;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarCliente::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(57, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 26);
			this->button3->TabIndex = 81;
			this->button3->Text = L"Grabar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarCliente::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(35, 257);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Celular :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 79;
			this->label6->Text = L"Correo :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 78;
			this->label5->Text = L"N° Documento";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"DNI", L"CARNET DE EXTRANJERIA", L"PASAPORTE" });
			this->comboBox1->Location = System::Drawing::Point(154, 153);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 77;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 13);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Tipo de Documento :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Apellido Materno :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Apelido Paterno :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 73;
			this->label1->Text = L"Nombres  :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(154, 221);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 72;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(154, 188);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 71;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(154, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 70;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(154, 94);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 69;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(154, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 68;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(154, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 67;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(154, 250);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(97, 20);
			this->textBox7->TabIndex = 83;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 84;
			this->label8->Text = L"Código";
			// 
			// frmEditarCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Linen;
			this->ClientSize = System::Drawing::Size(310, 348);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"frmEditarCliente";
			this->Text = L"frmEditarCliente";
			this->Load += gcnew System::EventHandler(this, &frmEditarCliente::frmEditarCliente_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void frmEditarCliente_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = Convert::ToString(this->objCliente->codigo);
	this->textBox2->Text = this->objCliente->nombre;
	this->textBox3->Text = this->objCliente->apellidoPaterno;
	this->textBox4->Text = this->objCliente->apellidoMaterno;
	this->comboBox1->Text = this->objCliente->tipoDocumento;
	this->textBox5->Text = this->objCliente->nroDocumento;
	this->textBox6->Text = this->objCliente->correo;
	this->textBox7->Text = this->objCliente->celular;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombres = this->textBox2->Text;
	String^ apaterno = this->textBox3->Text;
	String^ amaterno = this->textBox4->Text;
	String^ tipodoc = this->comboBox1->Text;
	String^ ndoc = this->textBox5->Text;
	String^ correo = this->textBox6->Text;
	String^ celular = this->textBox7->Text;
	///actualizar los datos
	this->objCliente->nombre = nombres;
	this->objCliente->apellidoPaterno = apaterno;
	this->objCliente->apellidoMaterno = amaterno;
	this->objCliente->tipoDocumento = tipodoc;
	this->objCliente->nroDocumento = ndoc;
	this->objCliente->correo = correo;
	this->objCliente->celular = celular;

	//llamar al controler
	ClienteController2^ objClienteController = gcnew ClienteController2();
	objClienteController->actualizarCliente(this->objCliente);
	MessageBox::Show("El Cliente fue actualizado con éxito ");
	this->Close();
}
};
}
