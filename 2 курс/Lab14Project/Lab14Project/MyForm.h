#pragma once
#include "iostream"

namespace Lab14Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Кол - во рядков:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(21, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Кол - во столцов:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Заполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 148);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(183, 150);
			this->dataGridView1->TabIndex = 5;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(255, 148);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(183, 150);
			this->dataGridView2->TabIndex = 6;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(491, 148);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(183, 150);
			this->dataGridView3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(222, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"+";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(454, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 388);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ randObj = gcnew Random(140);
		dataGridView1->Columns->Clear();
		dataGridView2->Columns->Clear();
		dataGridView3->Columns->Clear();
		int m = Convert::ToInt32(textBox1->Text);
		int n = Convert::ToInt32(textBox2->Text);
		dataGridView1->ColumnCount = m;
		dataGridView2->ColumnCount = m;
		dataGridView3->ColumnCount = m;

		int x, y;
		double** A = new double* [m];
		for (int i = 0; i < n; i++)
		{
			dataGridView1->Rows->Add(1);
			A[i] = new double[n];
			for (int j = 0; j < m; j++)
			{
				A[i][j] = randObj->Next(100);
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(A[i][j]);
				dataGridView1->Columns[j]->Width = 30;
			}
		}
		double** B = new double* [m];
		for (int i = 0; i < n; i++)
		{
			dataGridView2->Rows->Add(1);
			B[i] = new double[n];
			for (int j = 0; j < m; j++)
			{
				B[i][j] = randObj->Next(100);
				dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(B[i][j]);
				dataGridView2->Columns[j]->Width = 30;
			}
		}
		double** C = new double* [m];
		for (int i = 0; i < n; i++)
		{
			dataGridView3->Rows->Add(1);
			C[i] = new double[n];
			for (int j = 0; j < m; j++)
			{
				C[i][j] = A[i][j] + B[i][j];
				dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(C[i][j]);
				dataGridView3->Columns[j]->Width = 30;
			}
		}

	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (Char::IsControl(e->KeyChar))
	{
		if (e->KeyChar == (char)Keys::Enter) {
			textBox2->Focus();
		}
		return;
	}
	e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (Char::IsControl(e->KeyChar))
	{
		if (e->KeyChar == (char)Keys::Enter) {
			button1->Focus();
		}
		return;
	}
	e->Handled = true;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0)
		button1->Enabled = false;
	else
		button1->Enabled = true;


}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	if (textBox2->Text->Length == 0 || textBox1->Text->Length == 0)
		button1->Enabled = false;
	else
		button1->Enabled = true;
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	/*textBox2->ReadOnly = true;*/
}
};
}
