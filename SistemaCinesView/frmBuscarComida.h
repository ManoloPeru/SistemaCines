#pragma once
#include"frmComprarComida.h"

namespace SistemaCinesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaCinesModel; 
	using namespace SistemaCinesController; 
	using namespace System::Collections::Generic;
	//using namespace System::Data

	/// <summary>
	/// Resumen de frmBuscarComida
	/// </summary>
	public ref class frmBuscarComida : public System::Windows::Forms::Form
	{
	public:
		frmBuscarComida(void)
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
		~frmBuscarComida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column3;






















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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(450, 478);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 19);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmBuscarComida::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(318, 478);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 19);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Continuar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmBuscarComida::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column6, this->Column5, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 162);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(809, 270);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmBuscarComida::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(54, 36);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(603, 107);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Busqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(493, 46);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmBuscarComida::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"comida", L"bebida" });
			this->comboBox1->Location = System::Drawing::Point(317, 43);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(86, 46);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(225, 48);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tipo de Producto :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 48);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre :";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column6
			// 
			dataGridViewCellStyle1->Format = L"N2";
			dataGridViewCellStyle1->NullValue = L"0";
			this->Column6->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column6->HeaderText = L"Precio";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// Column5
			// 
			this->Column5->DataPropertyName = L"0";
			dataGridViewCellStyle2->Format = L"N0";
			dataGridViewCellStyle2->NullValue = L"0";
			this->Column5->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column5->HeaderText = L"Cantidad";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Seleccionar";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column3->Width = 125;
			// 
			// frmBuscarComida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 526);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmBuscarComida";
			this->Text = L"frmBuscarComida";
			this->Load += gcnew System::EventHandler(this, &frmBuscarComida::frmBuscarComida_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		List<Productos^>^ listaProductosSeleccionados = gcnew List<Productos^>();
		int codigoPedido = 0;
		int precioUnit = 0;
		String^ nombrePedido;
		for (int i = 0; i < 5; i++) {
			int cantidadSeleccionada = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[3]->Value->ToString());
			if (cantidadSeleccionada > 0) {
				codigoPedido ++;
				nombrePedido = this->dataGridView1->Rows[i]->Cells[1]->Value->ToString();
				precioUnit= Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[2]->Value->ToString());
				int codigoSelec = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[0]->Value->ToString());
				ProductosController^ objProductoController = gcnew ProductosController(); 
				Productos^ objProducto = objProductoController->buscarProductoxCodigo(codigoSelec);

				DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
				objDetallePedidoController->agregarPedido(codigoPedido, nombrePedido, cantidadSeleccionada,precioUnit);
			}
		}

		DetallePedidoController^ objPedidoController = gcnew DetallePedidoController();
		List<DetallePedido^>^ listaPedidos = objPedidoController->buscarAll();

		frmComprarComida^ ventanaCompraComida = gcnew frmComprarComida(listaPedidos);
		ventanaCompraComida->ShowDialog();


	/*	foreach(DataGridViewRow row in dataGridView1->Rows)
		{
			
			bool bChecked = Convert::ToBoolean(this->dataGridView1->Rows->Cells["Seleccionar"].Value);
			if (bChecked)
			{
				string color = row.Cells["COLOR"].Value.ToString();
				string talla = row.Cells["TALLA"].Value.ToString();
				string referencia = txtReferencia.Text;
				//status = ean.GenerarEan(color, talla, referencia);                                        
			}
		}

		//ProductosController^ objInsumoController = gcnew ProductosController();
		//Pedido^ objPedido = objInsumoController->BuscarInsumosxCodigo(codigoInsumoEditar);
		*/
		
		
		
	}
private: System::Void frmBuscarComida_Load(System::Object^ sender, System::EventArgs^ e) {
	DetallePedidoController^ objDetallePedidoController = gcnew DetallePedidoController();
	objDetallePedidoController->eliminarALL();
	ProductosController^ objProductosController = gcnew ProductosController();
	List<Productos^>^ listaProductos = objProductosController->buscarAll();
	mostrarGrilla(listaProductos);
	//eliminar toda la lista de pedido anterior

}
	   private: void mostrarGrilla(List<Productos^>^ listaProductos) {
		   this->dataGridView1->Rows->Clear();
		   for (int i = 0; i < listaProductos->Count; i++) {
			   Productos^ objProductos = listaProductos[i];
			   array<String^>^ fila = gcnew array<String^>(6);
			   fila[0] = Convert::ToString(objProductos->codigo);
			   fila[1] = Convert::ToString(objProductos->nombre);
			   fila[2] = Convert::ToString(objProductos->precio);
			   fila[3] = Convert::ToString(0);
			   this->dataGridView1->Rows->Add(fila);
		   }
	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreProducto = this->textBox1->Text;
	String^ tipoProducto = this->comboBox1->Text;
	ProductosController^ objProductosController = gcnew ProductosController();
	List<Productos^>^ listaProductos = objProductosController->buscarProducto(nombreProducto, tipoProducto);
	mostrarGrilla(listaProductos);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
