#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct school
{
	std::string name;
	std::string surname;
	std::string person;
	int weight;
	int year;
	int number_tel;
	int clas;
	int day;
	int monthh;
};

//school St[1000];
school Sr[1000];
//school* Sr = new school[10];
int number_clas;
//school number_clas [100];
std::vector<school> St;
//std::vector<school> Sr;
int index = 0;
int sch = 0;

namespace Lab13Project {

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Школьник";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Фамилия";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Пол";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(11, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Вес";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Дата рождения";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 222);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Номер телефона";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 253);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 19);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Класс";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(189, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 22);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(189, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(189, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(139, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(189, 156);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(189, 188);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(139, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(189, 221);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(139, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(189, 252);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(139, 22);
			this->textBox7->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(35, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 29);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Предыдущий";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(203, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 29);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Следующий";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 359);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(225, 18);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Введите номер класса учнеников:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(258, 357);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(70, 20);
			this->textBox8->TabIndex = 18;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(123, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 33);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Применить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 437);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8->Text->Length == 0)
			button3->Enabled = false;
		else
			button3->Enabled = true;

	}

	private: System::Void reload() {
		textBox1->Text = gcnew System::String(St[index].name.c_str());
		textBox2->Text = gcnew System::String(St[index].surname.c_str());
		textBox3->Text = gcnew System::String(St[index].person.c_str());
		textBox4->Text = St[index].weight.ToString();
		textBox5->Text = St[index].day.ToString() + "." + St[index].monthh + "." + St[index].year;
		textBox6->Text = St[index].number_tel.ToString();
		textBox7->Text = St[index].clas.ToString();
	}

	private: System::Void newload() {
		textBox1->Text = gcnew System::String(Sr[index].name.c_str());
		textBox2->Text = gcnew System::String(Sr[index].surname.c_str());
		textBox3->Text = gcnew System::String(Sr[index].person.c_str());
		textBox4->Text = Sr[index].weight.ToString();
		textBox5->Text = Sr[index].day.ToString() + "." + St[index].monthh + "." + St[index].year;
		textBox6->Text = Sr[index].number_tel.ToString();
		textBox7->Text = Sr[index].clas.ToString();
	}

	private: System::Void failoat() {
		int sch = 0;
		number_clas = Convert::ToInt32(textBox7->Text);
		for (int i = 0; i < 100; i++)
		{
			if (St[i].clas < number_clas&& St[i].clas)
			{
				Sr[sch].name = St[i].name;
				Sr[sch].surname = St[i].surname;
				Sr[sch].person = St[i].person;
				Sr[sch].weight = St[i].weight;
				Sr[sch].day = St[i].day;
				Sr[sch].number_tel = St[i].number_tel;
				Sr[sch].clas = St[i].clas;
				sch++;
			}
		}
		newload();
		index = 0;

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream f;
		f.open("d:\\schoolboy.txt");
		char r[1];
		school s1;
		while (!f.eof())
		{
			getline(f, s1.name);
			getline(f, s1.surname);
			getline(f, s1.person);
			f >> s1.weight;
			f >> s1.year;
			f >> s1.monthh;
			f >> s1.day;
			f >> s1.number_tel;
			f >> s1.clas;
			f.getline(r, 1, '\n');
			St.push_back(s1);
		}
		f.close();
		reload();

	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (index < St.size() - 1)
		{
			index++;
			reload();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (index > 0)
		{
			index--;
			reload();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*double zn;
		zn = Convert::ToDouble(textBox8->Text);*/
		newload();

	}

	private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
			return;
		if ((e->KeyChar == '-'))
			return;
		if (Char::IsControl(e->KeyChar)) {
			if (e->KeyChar == (char)Keys::Enter) {
				button3->Focus();
			}
			return;
		}

		e->Handled = true;
	}
	};
}
