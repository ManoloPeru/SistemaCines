#pragma once
#include "frmDetallesComprobantes.h"

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
	/// Resumen de frmCatalogoComidas
	/// </summary>
	public ref class frmCatalogoComidas : public System::Windows::Forms::Form
	{
	public:
		frmCatalogoComidas(void)
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
		~frmCatalogoComidas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: int cantidad;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;

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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(342, 339);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Comprar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmCatalogoComidas::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(128, 339);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Comprar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmCatalogoComidas::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(793, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Comprar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmCatalogoComidas::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(580, 174);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Comprar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmCatalogoComidas::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(342, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Comprar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmCatalogoComidas::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Comprar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmCatalogoComidas::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(331, 295);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 20;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(117, 295);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(781, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(570, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(331, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 133);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(198, 176);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(36, 20);
			this->textBox7->TabIndex = 27;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(423, 177);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(36, 20);
			this->textBox8->TabIndex = 28;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(661, 176);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(36, 20);
			this->textBox9->TabIndex = 29;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(874, 177);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(36, 20);
			this->textBox10->TabIndex = 30;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(209, 341);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(36, 20);
			this->textBox11->TabIndex = 31;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(423, 342);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(36, 20);
			this->textBox12->TabIndex = 32;
			// 
			// frmCatalogoComidas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1001, 536);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"frmCatalogoComidas";
			this->Text = L"frmCatalogoComidas";
			this->Load += gcnew System::EventHandler(this, &frmCatalogoComidas::frmCatalogoComidas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmCatalogoComidas_Load(System::Object^ sender, System::EventArgs^ e) {
		ProductosController^ objCatalogoComida = gcnew ProductosController();
		List<Productos^>^ listaProductos = objCatalogoComida->buscarAll();
		int num_comida = 6;
		if (listaProductos->Count < num_comida) {
			num_comida = listaProductos->Count;
		}
		for (int i = 0; i < num_comida; i++) {
			Productos^ objProductos = listaProductos[i];
			String^ comida = Convert::ToString(listaProductos[i]->nombre);
			if (this->textBox1->Text == "") {
				this->textBox1->Text = comida;
			}
			else {
				if (this->textBox2->Text == "") {
					this->textBox2->Text = comida;
				}
				else {
					if (this->textBox3->Text == "") {
						this->textBox3->Text = comida;
					}
					else {
						if (this->textBox4->Text == "") {
							this->textBox4->Text = comida;
						}
						else {
							if (this->textBox5->Text == "") {
								this->textBox5->Text = comida;
							}
							else {
								this->textBox6->Text = comida;
							}
						}
					}
				}
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductosController^ objCatalogoComida = gcnew ProductosController();
		List<Productos^>^ listaProductos = objCatalogoComida->buscarAll();
		cantidad = Convert::ToInt32(this->textBox7->Text);
		frmDetallesComprobantes^ ventanaComprarComida = gcnew frmDetallesComprobantes(listaProductos[0]->nombre, cantidad);
		ventanaComprarComida->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductosController^ objCatalogoComida = gcnew ProductosController();
		List<Productos^>^ listaProductos = objCatalogoComida->buscarAll();
		cantidad = Convert::ToInt32(this->textBox8->Text);
		frmDetallesComprobantes^ ventanaComprarComida = gcnew frmDetallesComprobantes(listaProductos[1]->nombre, cantidad);
		ventanaComprarComida->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductosController^ objCatalogoComida = gcnew ProductosController();
		List<Productos^>^ listaProductos = objCatalogoComida->buscarAll();
		cantidad = Convert::ToInt32(this->textBox9->Text);
		frmDetallesComprobantes^ ventanaComprarComida = gcnew frmDetallesComprobantes(listaProductos[2]->nombre, cantidad);
		ventanaComprarComida->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductosController^ objCatalogoComida = gcnew ProductosController();
		List<Productos^>^ listaProductos = objCatalogoComida->buscarAll();
		cantidad = Convert::ToInt32(this->textBox10->Text);
		frmDetallesComprobantes^ ventanaComprarComida = gcnew frmDetallesComprobantes(listaProductos[3]->nombre, cantidad);
		ventanaComprarComida->ShowDialog();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductosController^ objCatalogoComida = gcnew ProductosController();
		List<Productos^>^ listaProductos = objCatalogoComida->buscarAll();
		cantidad = Convert::ToInt32(this->textBox11->Text);
		frmDetallesComprobantes^ ventanaComprarComida = gcnew frmDetallesComprobantes(listaProductos[4]->nombre, cantidad);
		ventanaComprarComida->ShowDialog();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductosController^ objCatalogoComida = gcnew ProductosController();
		List<Productos^>^ listaProductos = objCatalogoComida->buscarAll();
		cantidad = Convert::ToInt32(this->textBox12->Text);
		frmDetallesComprobantes^ ventanaComprarComida = gcnew frmDetallesComprobantes(listaProductos[5]->nombre, cantidad);
		ventanaComprarComida->ShowDialog();
	}
};
}
