#pragma once
#include <vector>
#include "TMatrix.h"
#include <Windows.h>

namespace Matrix {

	TMatrix<int> Amatr;
	TMatrix<int> Bmatr;

}

namespace matrixonforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
//#ifdef _DEBUG 
//
//#define ALLOCCONSOLE()\
//{\
//    AllocConsole();\
//    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);\
//}
//
//#define FREECONSOLE()\
//{\
//    fclose(stdout);\
//    FreeConsole();\
//}
//#else
//
//#define ALLOCCONSOLE()
//#define FREECONSOLE()
//
//#endif
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//ALLOCCONSOLE();
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}

			//FREECONSOLE();
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::TextBox^ textBox1;



#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   /// 
		   /// 
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

		   cli::array<System::Windows::Forms::DataGridViewTextBoxColumn^>^ AColumns = nullptr;
		   cli::array<System::Windows::Forms::DataGridViewRow^>^ ARows = nullptr;
		   cli::array<System::Windows::Forms::DataGridViewTextBoxColumn^>^ BColumns = nullptr;
		   cli::array<System::Windows::Forms::DataGridViewRow^>^ BRows = nullptr;

		   cli::array<System::Windows::Forms::DataGridViewTextBoxColumn^>^ ResultColumns = nullptr;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ AUmn;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ BUmn;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label6;


		   cli::array<System::Windows::Forms::DataGridViewRow^>^ ResultRows = nullptr;

		   void InitializeComponent(void)
		   {
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			   this->Result = (gcnew System::Windows::Forms::Label());
			   this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->AUmn = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->BUmn = (gcnew System::Windows::Forms::TextBox());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->AllowUserToDeleteRows = false;
			   this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			   this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(48, 12);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->Size = System::Drawing::Size(255, 221);
			   this->dataGridView1->TabIndex = 0;
			   this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(686, 83);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(194, 45);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Укажите размер матрицы";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(686, 57);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(194, 20);
			   this->textBox1->TabIndex = 2;
			   this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			   // 
			   // dataGridView2
			   // 
			   this->dataGridView2->AllowUserToAddRows = false;
			   this->dataGridView2->AllowUserToDeleteRows = false;
			   this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			   this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			   this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView2->Location = System::Drawing::Point(155, 278);
			   this->dataGridView2->Name = L"dataGridView2";
			   this->dataGridView2->ReadOnly = true;
			   this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			   this->dataGridView2->Size = System::Drawing::Size(368, 221);
			   this->dataGridView2->TabIndex = 3;
			   // 
			   // Result
			   // 
			   this->Result->AutoSize = true;
			   this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->Result->Location = System::Drawing::Point(18, 370);
			   this->Result->Name = L"Result";
			   this->Result->Size = System::Drawing::Size(131, 25);
			   this->Result->TabIndex = 4;
			   this->Result->Text = L"Результат:";
			   // 
			   // dataGridView3
			   // 
			   this->dataGridView3->AllowUserToAddRows = false;
			   this->dataGridView3->AllowUserToDeleteRows = false;
			   this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			   this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			   this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView3->Location = System::Drawing::Point(386, 12);
			   this->dataGridView3->Name = L"dataGridView3";
			   this->dataGridView3->Size = System::Drawing::Size(255, 221);
			   this->dataGridView3->TabIndex = 5;
			   this->dataGridView3->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellEndEdit);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(7, 27);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(27, 26);
			   this->label1->TabIndex = 6;
			   this->label1->Text = L"A";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(353, 27);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(27, 26);
			   this->label2->TabIndex = 7;
			   this->label2->Text = L"B";
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				   static_cast<System::Byte>(204)));
			   this->button2->Location = System::Drawing::Point(705, 152);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(50, 45);
			   this->button2->TabIndex = 8;
			   this->button2->Text = L"+";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				   static_cast<System::Byte>(204)));
			   this->button3->Location = System::Drawing::Point(761, 152);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(50, 45);
			   this->button3->TabIndex = 9;
			   this->button3->Text = L"-";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				   static_cast<System::Byte>(204)));
			   this->button4->Location = System::Drawing::Point(817, 152);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(50, 45);
			   this->button4->TabIndex = 10;
			   this->button4->Text = L"*";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->Location = System::Drawing::Point(680, 217);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(212, 26);
			   this->label3->TabIndex = 12;
			   this->label3->Text = L"Умножить на число";
			   // 
			   // AUmn
			   // 
			   this->AUmn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->AUmn->Location = System::Drawing::Point(705, 246);
			   this->AUmn->Name = L"AUmn";
			   this->AUmn->Size = System::Drawing::Size(147, 26);
			   this->AUmn->TabIndex = 13;
			   this->AUmn->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->Location = System::Drawing::Point(672, 246);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(27, 26);
			   this->label4->TabIndex = 14;
			   this->label4->Text = L"A";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->Location = System::Drawing::Point(672, 278);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(27, 26);
			   this->label5->TabIndex = 16;
			   this->label5->Text = L"B";
			   // 
			   // BUmn
			   // 
			   this->BUmn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->BUmn->Location = System::Drawing::Point(705, 278);
			   this->BUmn->Name = L"BUmn";
			   this->BUmn->Size = System::Drawing::Size(147, 26);
			   this->BUmn->TabIndex = 15;
			   this->BUmn->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			   // 
			   // button6
			   // 
			   this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				   static_cast<System::Byte>(204)));
			   this->button6->Location = System::Drawing::Point(858, 246);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(39, 26);
			   this->button6->TabIndex = 17;
			   this->button6->Text = L"OK";
			   this->button6->UseVisualStyleBackColor = false;
			   this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			   // 
			   // button7
			   // 
			   this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				   static_cast<System::Byte>(204)));
			   this->button7->Location = System::Drawing::Point(858, 280);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(39, 26);
			   this->button7->TabIndex = 18;
			   this->button7->Text = L"OK";
			   this->button7->UseVisualStyleBackColor = false;
			   this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label6->Location = System::Drawing::Point(701, 31);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(152, 20);
			   this->label6->TabIndex = 19;
			   this->label6->Text = L"Введите данные";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->ClientSize = System::Drawing::Size(905, 511);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->BUmn);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->AUmn);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->dataGridView3);
			   this->Controls->Add(this->Result);
			   this->Controls->Add(this->dataGridView2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->dataGridView1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int size = Convert::ToInt32(this->textBox1->Text);

		this->AColumns = gcnew array< System::Windows::Forms::DataGridViewTextBoxColumn^>(size);
		this->ARows = gcnew array< System::Windows::Forms::DataGridViewRow^>(size);

		this->BColumns = gcnew array< System::Windows::Forms::DataGridViewTextBoxColumn^>(size);
		this->BRows = gcnew array< System::Windows::Forms::DataGridViewRow^>(size);

		this->ResultColumns = gcnew array< System::Windows::Forms::DataGridViewTextBoxColumn^>(size);
		this->ResultRows = gcnew array< System::Windows::Forms::DataGridViewRow^>(size);

		Matrix::Amatr = TMatrix<int>(size);
		Matrix::Bmatr = TMatrix<int>(size);

		for (int i = 0; i < size; i++) {
			System::Windows::Forms::DataGridViewTextBoxColumn^ AColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			System::Windows::Forms::DataGridViewRow^ ARow = (gcnew System::Windows::Forms::DataGridViewRow());

			System::Windows::Forms::DataGridViewTextBoxColumn^ BColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			System::Windows::Forms::DataGridViewRow^ BRow = (gcnew System::Windows::Forms::DataGridViewRow());

			System::Windows::Forms::DataGridViewTextBoxColumn^ ResultColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			System::Windows::Forms::DataGridViewRow^ ResultRow = (gcnew System::Windows::Forms::DataGridViewRow());

			this->ResultColumns[i] = ResultColumn;
			this->ResultRows[i] = ResultRow;

			this->AColumns[i] = AColumn;
			this->ARows[i] = ARow;

			this->AColumns[i]->HeaderText = Convert::ToString(i);
			this->AColumns[i]->Name = Convert::ToString(i);

			this->BColumns[i] = BColumn;
			this->BRows[i] = BRow;

			this->BColumns[i]->HeaderText = Convert::ToString(i);
			this->BColumns[i]->Name = Convert::ToString(i);

			this->AColumns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->BColumns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;

		}

		this->dataGridView1->Columns->Clear();
		this->dataGridView1->Rows->Clear();
		this->dataGridView1->Columns->AddRange(this->AColumns);
		this->dataGridView1->Rows->AddRange(this->ARows);

		this->dataGridView3->Columns->Clear();
		this->dataGridView3->Rows->Clear();
		this->dataGridView3->Columns->AddRange(this->BColumns);
		this->dataGridView3->Rows->AddRange(this->BRows);

		this->dataGridView2->Columns->Clear();
		this->dataGridView2->Rows->Clear();
		this->dataGridView2->Columns->AddRange(this->ResultColumns);
		this->dataGridView2->Rows->AddRange(this->ResultRows);

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i > j) {
					this->dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
					this->dataGridView3->Rows[i]->Cells[j]->ReadOnly = true;
				}
			}
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 127 || e->KeyChar == 8) {
			e->Handled = false;
		}
		else {
			e->Handled = true;
		}
	}

	//private: System::Void dataGridView1_CellEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//	if (this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value) {
	//		//Matrix::Amatr[e->ColumnIndex][e->RowIndex] = Convert::ToInt32(this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
	//	}
	//}

	//private: System::Void dataGridView3_CellEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//	if (this->dataGridView3->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value) {
	//		//Matrix::Bmatr[e->RowIndex][e->ColumnIndex] = Convert::ToInt32(this->dataGridView3->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
	//	}
	//}

	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= '0' && e->KeyChar <= '9') {
			e->Handled = false;
		}
		else {
			e->Handled = true;
		}
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= '0' && e->KeyChar <= '9') {
			e->Handled = false;
		}
		else {
			e->Handled = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix::Amatr.GetSizematr() == 0)
			return;

		if (Matrix::Bmatr.GetSizematr() == 0)
			return;

		if (Matrix::Amatr.GetSizematr() != Matrix::Bmatr.GetSizematr())
			return;

		int size = Matrix::Amatr.GetSizematr();

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				this->dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString((Matrix::Amatr + Matrix::Bmatr)[i][j]);
			}
		}
	}

	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int size = Matrix::Amatr.GetSizematr();
		if (this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value)
			Matrix::Amatr[e->RowIndex][e->ColumnIndex] = Convert::ToInt32(this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);

	}
	private: System::Void dataGridView3_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int size = Matrix::Bmatr.GetSizematr();
		if (this->dataGridView3->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value)
			Matrix::Bmatr[e->RowIndex][e->ColumnIndex] = Convert::ToInt32(this->dataGridView3->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix::Amatr.GetSizematr() == 0)
			return;

		if (Matrix::Bmatr.GetSizematr() == 0)
			return;

		if (Matrix::Amatr.GetSizematr() != Matrix::Bmatr.GetSizematr())
			return;

		int size = Matrix::Amatr.GetSizematr();

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				this->dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString((Matrix::Amatr - Matrix::Bmatr)[i][j]);
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix::Amatr.GetSizematr() == 0)
			return;

		if (Matrix::Bmatr.GetSizematr() == 0)
			return;

		if (Matrix::Amatr.GetSizematr() != Matrix::Bmatr.GetSizematr())
			return;

		int size = Matrix::Amatr.GetSizematr();

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				this->dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString((Matrix::Amatr * Matrix::Bmatr)[i][j]);
			}
		}
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix::Amatr.GetSizematr() == 0)
			return;

		int size = Matrix::Amatr.GetSizematr();

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				this->dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString((Matrix::Amatr * Convert::ToInt32(this->AUmn->Text))[i][j]);
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Matrix::Bmatr.GetSizematr() == 0)
			return;

		int size = Matrix::Bmatr.GetSizematr();

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				this->dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString((Matrix::Bmatr * Convert::ToInt32(this->BUmn->Text))[i][j]);
			}
		}
	}
	


};
}
