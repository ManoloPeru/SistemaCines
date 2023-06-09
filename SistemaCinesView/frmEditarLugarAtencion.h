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

	/// <summary>
	/// Resumen de frmEditarLugarAtencion
	/// </summary>
	public ref class frmEditarLugarAtencion : public System::Windows::Forms::Form
	{
	public:
		frmEditarLugarAtencion(void)
		{
			InitializeComponent();
			this->objtLugardeAtencion = gcnew LugaresdeAtencion();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		frmEditarLugarAtencion(LugaresdeAtencion^ objtLugardeAtencion) {
			InitializeComponent();
			this->objtLugardeAtencion = objtLugardeAtencion;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmEditarLugarAtencion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: LugaresdeAtencion^ objtLugardeAtencion;//crear atributo ventana

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(282, 475);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarLugarAtencion::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 475);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarLugarAtencion::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(83, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 421);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lugares de Atenci�n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(162, 251);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Aforo de Personal\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// frmEditarLugarAtencion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 513);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarLugarAtencion";
			this->Text = L"frmEditarLugarAtencion";
			this->Load += gcnew System::EventHandler(this, &frmEditarLugarAtencion::frmEditarLugarAtencion_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void frmEditarLugarAtencion_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->objtLugardeAtencion->nombre;
		this->textBox2->Text = Convert::ToString(this->objtLugardeAtencion->numerodePersonal);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		int numerodePersonal = Convert::ToInt32(this->textBox2->Text);
		this->objtLugardeAtencion->nombre = nombre;
		this->objtLugardeAtencion->numerodePersonal = numerodePersonal;
		LugaresdeAtencionController2^ objtLugardeAtencion = gcnew LugaresdeAtencionController2();
		objtLugardeAtencion->actualizarLugardeAtencion(this->objtLugardeAtencion);
		MessageBox::Show("Exito.");
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}