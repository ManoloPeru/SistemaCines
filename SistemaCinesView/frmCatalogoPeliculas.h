#pragma once
#include "frmCompraEntrada.h"

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
	/// Resumen de frmCatalogoPeliculas
	/// </summary>
	public ref class frmCatalogoPeliculas : public System::Windows::Forms::Form
	{
	public:
		frmCatalogoPeliculas(void)
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
		~frmCatalogoPeliculas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(118, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(332, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(571, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(782, 130);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(118, 292);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(332, 292);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Comprar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmCatalogoPeliculas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(343, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Comprar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmCatalogoPeliculas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(581, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Comprar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmCatalogoPeliculas::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(794, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Comprar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmCatalogoPeliculas::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(129, 336);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Comprar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmCatalogoPeliculas::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(343, 336);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Comprar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmCatalogoPeliculas::button6_Click);
			// 
			// frmCatalogoPeliculas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 607);
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
			this->Name = L"frmCatalogoPeliculas";
			this->Text = L"frmCatalogoPeliculas";
			this->Load += gcnew System::EventHandler(this, &frmCatalogoPeliculas::frmCatalogoPeliculas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmCatalogoPeliculas_Load(System::Object^ sender, System::EventArgs^ e) {
		CatalogoPeliculaController^ objCatalogoP = gcnew CatalogoPeliculaController();
		List<Cartelera^>^ listaPeliculas = objCatalogoP->buscarAll();
		int num_peli = 6;
		if (listaPeliculas->Count < num_peli) {
			num_peli = listaPeliculas->Count;
		}
		for (int i = 0; i < num_peli; i++) {
			Cartelera^ objCartelera = listaPeliculas[i];
			String^ pelicula = Convert::ToString(listaPeliculas[i]->listadePeliculas->nombre);
			if (this->textBox1->Text=="") {
				this->textBox1->Text = pelicula;
			}
			else {
				if (this->textBox2->Text == "") {
					this->textBox2->Text = pelicula;
				}
				else {
					if (this->textBox3->Text == "") {
						this->textBox3->Text = pelicula;
					}
					else {
						if (this->textBox4->Text == "") {
							this->textBox4->Text = pelicula;
						}
						else {
							if (this->textBox5->Text == "") {
								this->textBox5->Text = pelicula;
							}
							else {
								this->textBox6->Text = pelicula;
							}
						}
					}
				}
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogoPeliculaController^ objCatalogoP = gcnew CatalogoPeliculaController();
		List<Cartelera^>^ listaPeliculas = objCatalogoP->buscarAll();
		frmCompraEntrada^ ventanaCompraEntrada = gcnew frmCompraEntrada(listaPeliculas[0]->listadePeliculas);
		ventanaCompraEntrada->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogoPeliculaController^ objCatalogoP = gcnew CatalogoPeliculaController();
		List<Cartelera^>^ listaPeliculas = objCatalogoP->buscarAll();
		frmCompraEntrada^ ventanaCompraEntrada = gcnew frmCompraEntrada(listaPeliculas[1]->listadePeliculas);
		ventanaCompraEntrada->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogoPeliculaController^ objCatalogoP = gcnew CatalogoPeliculaController();
		List<Cartelera^>^ listaPeliculas = objCatalogoP->buscarAll();
		frmCompraEntrada^ ventanaCompraEntrada = gcnew frmCompraEntrada(listaPeliculas[2]->listadePeliculas);
		ventanaCompraEntrada->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogoPeliculaController^ objCatalogoP = gcnew CatalogoPeliculaController();
		List<Cartelera^>^ listaPeliculas = objCatalogoP->buscarAll();
		frmCompraEntrada^ ventanaCompraEntrada = gcnew frmCompraEntrada(listaPeliculas[3]->listadePeliculas);
		ventanaCompraEntrada->ShowDialog();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogoPeliculaController^ objCatalogoP = gcnew CatalogoPeliculaController();
		List<Cartelera^>^ listaPeliculas = objCatalogoP->buscarAll();
		frmCompraEntrada^ ventanaCompraEntrada = gcnew frmCompraEntrada(listaPeliculas[4]->listadePeliculas);
		ventanaCompraEntrada->ShowDialog();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogoPeliculaController^ objCatalogoP = gcnew CatalogoPeliculaController();
		List<Cartelera^>^ listaPeliculas = objCatalogoP->buscarAll();
		frmCompraEntrada^ ventanaCompraEntrada = gcnew frmCompraEntrada(listaPeliculas[5]->listadePeliculas);
		ventanaCompraEntrada->ShowDialog();
	}
};
}
