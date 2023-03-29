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
	/// Resumen de frmReportePersonal
	/// </summary>
	public ref class frmReportePersonal : public System::Windows::Forms::Form
	{
	public:
		frmReportePersonal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmReportePersonal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contrasena;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TipoPersonal;










	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contrasena = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TipoPersonal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(70, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reporte de Personal";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Codigo,
					this->Nombre, this->Apellido, this->Correo, this->Contrasena, this->TipoPersonal
			});
			this->dataGridView1->Location = System::Drawing::Point(75, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(649, 273);
			this->dataGridView1->TabIndex = 1;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Codigo";
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->Name = L"Apellido";
			this->Apellido->ReadOnly = true;
			// 
			// Correo
			// 
			this->Correo->HeaderText = L"Correo";
			this->Correo->Name = L"Correo";
			this->Correo->ReadOnly = true;
			// 
			// Contrasena
			// 
			this->Contrasena->HeaderText = L"Contrasena";
			this->Contrasena->Name = L"Contrasena";
			this->Contrasena->Visible = false;
			// 
			// TipoPersonal
			// 
			this->TipoPersonal->HeaderText = L"Tipo de Personal";
			this->TipoPersonal->Name = L"TipoPersonal";
			this->TipoPersonal->ReadOnly = true;
			// 
			// frmReportePersonal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 470);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"frmReportePersonal";
			this->Text = L"frmReportePersonal";
			this->Load += gcnew System::EventHandler(this, &frmReportePersonal::frmReportePersonal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmReportePersonal_Load(System::Object^ sender, System::EventArgs^ e) {//cuando carga
		PersonalController^ objPersonalController = gcnew PersonalController();
		List<Personal^>^ listaReporte = objPersonalController->buscarAll();
		mostrarGrilla(listaReporte);
	}
	private: void mostrarGrilla(List<Personal^>^ listaPersonal) {
		this->dataGridView1->Rows->Clear(); /* Elimino toda la informacion del datagrid */
		for (int i = 0; i < listaPersonal->Count; i++) {
			Personal^ objPersonal = listaPersonal[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = Convert::ToString(objPersonal->codigo);
			fila[1] = Convert::ToString(objPersonal->nombre);
			fila[2] = Convert::ToString(objPersonal->apellido);
			fila[3] = Convert::ToString(objPersonal->correo);
			fila[4] = Convert::ToString(objPersonal->contraseña);
			fila[5] = Convert::ToString(objPersonal->tipodePersona);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	};
}