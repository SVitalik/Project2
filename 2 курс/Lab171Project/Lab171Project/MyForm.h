#pragma once
#include <iostream>
#include <math.h>

namespace Lab171Project {

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
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;


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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(642, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(620, 137);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(91, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Кривая Леви";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(617, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введите кол - во итераций";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(642, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(662, 327);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 86);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(620, 160);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(118, 17);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Дерево Пифагора";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(620, 183);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(89, 17);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Кривая Коха";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(620, 206);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 17);
			this->radioButton4->TabIndex = 12;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"H - фрактал";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 474);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		const double Pi = 3.14159;
		double n = 8.0, m = 5.0;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		int n = Convert::ToInt16(textBox1->Text);
		if (radioButton1->Checked)
		{
			l->FillRectangle(Brushes::White, 0, 0, 800, 800);
			Levy(200, 350, 200, 200, n);
		}

		if (radioButton2->Checked)
		{
			l->FillRectangle(Brushes::White, 0, 0, 800, 800);
			Frak_Tree(300, 500, 200, Pi / 2);
		}

		if (radioButton3->Checked)
		{
			l->FillRectangle(Brushes::White, 0, 0, 800, 800);
			Frak_Koha(100, 300, 300,300, n);
		}

		if (radioButton4->Checked)
		{
			l->FillRectangle(Brushes::White, 0, 0, 800, 800);
			Frak_H(200, 200, 100, n);
		}
	}
	private:System::Void Levy(float x1, float x2, float y1, float y2, int n)
	{
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		float x3, y3;
		if (n == 0) l->DrawLine(Pens::Red, x1, y1, x2, y2);
		else {
			x3 = (x1 + x2) / 2 + (y2 - y1) / 2;
			y3 = (y1 + y2) / 2 - (x2 - x1) / 2;
			Levy(x1, x3, y1, y3, n - 1);
			Levy(x3, x2, y3, y2, n - 1);
		}
	}

	private:System::Void Frak_Tree(double x, double y, double L, double a)
	{
		int max = (Convert::ToInt16(textBox1->Text) / 2);
		if (L > max) {
			Graphics^ l = Graphics::FromHwnd(this->Handle);
			L *= 0.7;
			l->DrawLine(Pens::Green,x,y, (x + L * cos(a)), (int)(y - L * sin(a)));
			//l->DrawRectangle(Pens::Black, x, y, (x + L * cos(a)), (int)(y - L * sin(a)));
			x = x + L * cos(a);
			y = y - L * sin(a);
			Frak_Tree(x, y, L, a + Pi / n);
			Frak_Tree(x, y, L, a - Pi / m);
		}
	}

	/*private:System::Void Frak_Koha(float x1, float y1, float x2, float y2, int n)
	{
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		float x3, y3, x4, y4, x5, y5;
		float t, r;
		t = 0.5;
		r = -0.866;
		if (n == 0) l->DrawLine(Pens::Red, x1, y1, x2, y2);
		else {
			x3 = x1 + (x2 - x1) * 1 / 3;
			y3 = y1 + (y2 - y1) * 1 / 3;

			x4 = x1 + (x2 - x1) * 2 / 3;
			y4 = y1 + (y2 - y1) * 2 / 3;

			x5 = x3 + (x4 - x3) * cos(t) - sin(r) * (y4 - y3);
			y5 = y3 + (x4 - x3) * sin(r) + cos(t) * (y4 - y3);

			Frak_Koha(x1, y1, x1, y1, n - 1);
			Frak_Koha(x3, y3, x5, y5, n - 1);
			Frak_Koha(x5, y5, x4, y4, n - 1);
			Frak_Koha(x4, y4, x2, y2, n - 1);
		}
	}*/


	private:System::Void Frak_Koha(float xa, float ya, float xe, float ye, int n)
	{
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		float xb, yb, xd, yd, xc, yc;
		float t, r;
		t = 1;
		r = -2;
		if (n == 0) l->DrawLine(Pens::Red, xa, ya, xe, ye);
		else {
			xb = xa + (xe - xa) * 1 / 3;
			yb = ya + (ye - ya) * 1 / 3;

			xd = xa + (xe - xa) * 2 / 3;
			yd = ya + (ye - ya) * 2 / 3;

			xc = xb + (xd - xb) * cos(t) - sin(r) * (yd - yb);
			yc = yb + (xd - xb) * sin(r) + cos(t) * (yd - yb);

			Frak_Koha(xa, ya, xb, yb, n - 1);
			Frak_Koha(xb, yb, xc, yc, n - 1);
			Frak_Koha(xc, yc, xd, yd, n - 1);
			Frak_Koha(xd, yd, xe, ye, n - 1);
		}
	}

	private:System::Void Frak_H1(int x, int y, int raz)
	{
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		System::Drawing::Pen^ aPen;
		aPen = gcnew Pen(Color::Black, 1);
		l->DrawLine(aPen, x - raz, y - raz, x - raz, y + raz);
		l->DrawLine(aPen, x - raz, y, x + raz, y);
		l->DrawLine(aPen, x + raz, y - raz, x + raz, y + raz);
	}


	private:System::Void Frak_H(int x1, int y1, int razm_f, int minimum)
	{
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		int x11; int y11;
		int x01; int y01;
		int x00; int y00;
		int x10; int y10;
		x11 = x1 + razm_f;
		y11 = y1 + razm_f;
		x01 = x1 - razm_f;
		y01 = y1 + razm_f;
		x10 = x1 + razm_f;
		y10 = y1 - razm_f;
		x00 = x1 - razm_f;
		y00 = y1 - razm_f;

		Frak_H1(x1, y1, razm_f);
		razm_f = razm_f / 2;

		if (razm_f >= minimum)
		{
			Frak_H(x11, y11, razm_f, minimum);
			Frak_H(x01, y01, razm_f, minimum);
			Frak_H(x10, y10, razm_f, minimum);
			Frak_H(x00, y00, razm_f, minimum);
		}
	}



private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
