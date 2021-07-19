#pragma once
#include <iostream>
#include <fstream>
#include <ctime>

namespace Lab161Project {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label1;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(149, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 27);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Виконати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(322, 153);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 20);
			this->textBox4->TabIndex = 24;
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm::textBox4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(21, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(278, 15);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Вкажіть розмір масиву (не мен. 60 елементів):";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(322, 104);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 20);
			this->textBox3->TabIndex = 22;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(322, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 20);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(208, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Час сортування:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(208, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Час сортування:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(208, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Час сортування:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(322, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 20);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(27, 105);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(150, 17);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Сортування бульбашкою";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Click += gcnew System::EventHandler(this, &MyForm::radioButton3_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(27, 82);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(142, 17);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Сортування вставками";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Click += gcnew System::EventHandler(this, &MyForm::radioButton2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(27, 59);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 17);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Quicksort";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Click += gcnew System::EventHandler(this, &MyForm::radioButton1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 15);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Оберіть тип сортування:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 244);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		std::ofstream f("D:\\FilleProgrm\\output.txt");
		for (int i = 0; i < 1000000; i++)
			f << 1 + rand() % 100 << " ";
		f.close();

	}
	private: Void quickSort(int* arr, int start, int end) {
		int i, j, pivot, tmp;
		if (start < end)
		{
			pivot = start;
			i = start;
			j = end;
			while (i < j)
			{
				while (arr[i] <= arr[pivot] && i < end)
					i++;
				while (arr[j] > arr[pivot])
					j--;
				if (i < j)
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
			tmp = arr[pivot];
			arr[pivot] = arr[j];
			arr[j] = tmp;
			quickSort(arr, start, j - 1);
			quickSort(arr, j + 1, end);
		}
	}

	private:Void insertionSort(int* arr, int n) {
		int counter = 0;
		for (int i = 1; i < n; i++)
		{
			for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
			{
				counter++;
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	private:Void bubbleSort(int* arr, int n) {
		for (int i = n - 1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					std::swap(arr[j], arr[j + 1]);
				}
			}
		}

	}

private: System::Void radioButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked)
	{
		clock_t s = clock();
		int n;
		n = Convert::ToInt32(textBox4->Text);
		int* a;
		a = new int[n];
		std::ofstream f1;
		std::ifstream f;
		f1.open("D:\\FilleProgrm\\quicksort.txt");
		f.open("D:\\FilleProgrm\\output.txt");
		for (int i = 0; i < n; i++)
		{
			f >> a[i];
			f1 << a[i] << " ";
		}
		f.close();
		f1 << std::endl;
		quickSort(a, 0, n - 1);
		for (int i = 0; i < n; i++)
		{
			f1 << a[i] << " ";
		}
		f1.close();
		delete[] a;
		clock_t e = clock();
		double secun = (double)(e - s) / CLOCKS_PER_SEC;
		textBox1->Text = Convert::ToString(secun) + "s";
	}
}
private: System::Void radioButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked)
	{
		clock_t s = clock();
		int n = Convert::ToInt32(textBox4->Text);
		int* a;
		a = new int[n];
		std::ofstream f2;
		std::ifstream f;
		f2.open("D:\\FilleProgrm\\insertionSort.txt");
		f.open("D:\\FilleProgrm\\output.txt");
		for (int i = 0; i < n; i++)
		{
			f >> a[i];
			f2 << a[i] << " ";
		}
		f.close();
		f2 << std::endl;
		insertionSort(a, n - 1);
		for (int i = 0; i < n; i++)
		{
			f2 << a[i] << " ";
		}
		f2.close();
		delete[] a;
		clock_t e = clock();
		double secun = (double)(e - s) / CLOCKS_PER_SEC;
		textBox2->Text = Convert::ToString(secun) + "s";
	}

}
private: System::Void radioButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton3->Checked)
	{
		clock_t s = clock();
		int n = Convert::ToInt32(textBox4->Text);
		int* a;
		a = new int[n];
		std::ofstream f3;
		std::ifstream f;
		f3.open("D:\\FilleProgrm\\bubbleSort.txt");
		f.open("D:\\FilleProgrm\\output.txt");
		for (int i = 0; i < n; i++)
		{
			f >> a[i];
			f3 << a[i] << " ";
		}
		f.close();
		f3 << std::endl;
		bubbleSort(a, n - 1);
		for (int i = 0; i < n; i++)
		{
			f3 << a[i] << " ";
		}
		f3.close();
		delete[] a;
		clock_t e = clock();
		double secun = (double)(e - s) / CLOCKS_PER_SEC;
		textBox3->Text = Convert::ToString(secun) + "s";
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	/*textBox1->Enabled = false;
	textBox2->Enabled = false;
	textBox3->Enabled = false;*/

	if (textBox4->Text->Length == 0)
	{
		//button1->Enabled = false;
		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;
	}
	else
		button1->Enabled = true;
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Focus();
	if (textBox4->Text->Length == 0)
	{
		//button1->Enabled = false;
		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;
	}
	else
		button1->Enabled = true;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	/*if (textBox1->Text != "")
	{
		textBox1->Enabled = false;
	}*/
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	/*if (textBox2->Text != "")
	{
		textBox2->Enabled = false;
	}*/
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	/*if (textBox3->Text != "")
	{
		textBox3->Enabled = false;
	}*/
}
};
}
