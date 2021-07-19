#pragma once
#include <iostream>
#include <cmath>
#include <string>

namespace Lab12Project {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(67, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вычисление значение функции";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(436, 116);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(23, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите значение А";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Введите значение X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(23, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Введите значение Y =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(278, 227);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(278, 270);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(27, 406);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 46);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Расчет";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(298, 406);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 46);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(278, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 21);
			this->label5->TabIndex = 11;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 474);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double a;
	double x;
	double y;
	double b = 2.71828;
	if (x <= 0)
	{
		a = Convert::ToDouble(textBox1->Text);
		x = Convert::ToDouble(textBox2->Text);
		y = pow(sin(x * x * x), 2);
		label5->ForeColor = System::Drawing::SystemColors::ControlText;
		label5->Text = y.ToString("n");
	}
	if (0 < x <= a)
	{
		a = Convert::ToDouble(textBox1->Text);
		x = Convert::ToDouble(textBox2->Text);
		y = sqrt(pow(6 * x - (x * x) + 1, 5));
		label5->ForeColor = System::Drawing::SystemColors::ControlText;
		label5->Text = y.ToString("n");
	}
	if (x > a)
	{
		a = Convert::ToDouble(textBox1->Text);
		x = Convert::ToDouble(textBox2->Text);
		y = 2 * sin(pow(x - b, (-x)));
	}
	else
	{
		label5->ForeColor = Color::Red;
		label5->Text = "Не верно введено значение! ";
	}
}


private: System::Void textBox1_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))// цифра
		return;
	if ((e->KeyChar == '-'))// знак
		return;
	if (textBox1->Text->Length == 0)
	{
		label5->ForeColor = Color::Red;
		label5->Text = "Введите значение в поле А: ";
	}
	else
		label5->Text = " ";
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter) {// Нажата клавиша <Enter>.// Переместить фокус в поле textBox2
			textBox2->Focus();
		}
		return;
	}
	e->Handled = true;
}


private: System::Void textBox2_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))// цифра
		return;
	if ((e->KeyChar == '-'))// знак
		return;
	if(textBox2->Text->Length == 0)
	{
		label5->ForeColor = Color::Red;
		label5->Text = "Введите значение в поле Х: ";
	}
	else
		label5->Text = " ";
	if (Char::IsControl(e->KeyChar))
	{
		if (e->KeyChar == (char)Keys::Enter) {// Нажата клавиша <Enter>.// Переместить фокус в поле textBox3
			button2->Focus();
		}
		return;
	}// остальные символы запрещены
	e->Handled = true;
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0)
		button2->Enabled = false; 
	else 
		button2->Enabled = true;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text->Length == 0 || textBox1->Text->Length == 0)
		button2->Enabled = false;
	else
		button2->Enabled = true;
}
};
}
