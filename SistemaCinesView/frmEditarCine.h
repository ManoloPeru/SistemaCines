#pragma once

namespace SistemaCinesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaCinesModel; 
	using namespace SistemaCinesController; 

	/// <summary>
	/// Resumen de frmEditarCine
	/// </summary>
	public ref class frmEditarCine : public System::Windows::Forms::Form
	{
	public:
		frmEditarCine(void)
		{
			InitializeComponent();
			this->objCine = gcnew Cine(); 
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		frmEditarCine(Cine^objCine)
		{
			InitializeComponent();
			this->objCine = objCine; 
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmEditarCine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private:Cine^ objCine; 
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkRed;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkGreen;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->button1->Location = System::Drawing::Point(230, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 38);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarCine::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LavenderBlush;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DarkGreen;
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button2->Location = System::Drawing::Point(106, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 39);
			this->button2->TabIndex = 43;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarCine::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(51, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(347, 344);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Cine";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(200, 165);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(25, 162);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 23);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Distrito: ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(200, 118);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 29;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(25, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 23);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Provicia: ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(200, 291);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 23);
			this->textBox4->TabIndex = 27;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(200, 263);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 23);
			this->textBox3->TabIndex = 26;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Lima", L"Ica", L"Arequipa" });
			this->comboBox1->Location = System::Drawing::Point(200, 88);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(200, 211);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 23);
			this->textBox2->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(200, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 23);
			this->textBox1->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(25, 286);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(169, 23);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Hora de Cierre: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 23);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Direcci�n: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(25, 263);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 23);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Hora Apertura: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(162, 23);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Departamento: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 23);
			this->label3->TabIndex = 16;
			this->label3->Text = L"ID_Cine:";
			// 
			// frmEditarCine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 517);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarCine";
			this->Text = L"frmEditarCine";
			this->Load += gcnew System::EventHandler(this, &frmEditarCine::frmEditarCine_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ departamento = this->comboBox1->Text;
		String^ provincia = this->comboBox2->Text;
		String^ distrito = this->comboBox3->Text;
		String^ direcci�n = this->textBox2->Text ;
		String^ horaInicio = this->textBox3->Text ;
		String^ horaFin = this->textBox4->Text;
		//Actualizaremos los datos 
		this->objCine->departamento = departamento; 
		this->objCine->provincia = provincia; 
		this->objCine->distrito = distrito; 
		this->objCine->direcci�n = direcci�n; 
		this->objCine->horaInicio = horaInicio; 
		this->objCine->horaFin = horaFin; 

		CinesController2^ objCinesController = gcnew CinesController2(); 
		objCinesController->actualizarCine(objCine); 
		MessageBox::Show("Se ha editado el cine de forma exitosa");
		this->Close();
	}
private: System::Void frmEditarCine_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = Convert::ToString(this->objCine->codigo);
	this->comboBox1->Text = this->objCine->departamento;
	this->comboBox2->Text = this->objCine->provincia;
	this->comboBox3->Text = this->objCine->distrito;
	this->textBox2->Text = this->objCine->direcci�n;
	this->textBox3->Text = this->objCine->horaInicio;
	this->textBox4->Text = this->objCine->horaFin;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); 
}
};
}
