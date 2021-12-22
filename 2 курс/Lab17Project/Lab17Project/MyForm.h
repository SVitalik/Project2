#pragma once
#include <math.h>
#include <cmath>

int r, n = 5;
const int m = 16385; double knx[m], kny[m];

namespace Lab17Project {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(652, 365);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 86);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(632, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(607, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите кол - во итераций";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(610, 175);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(91, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Кривая Леви";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(632, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(766, 483);
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
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		/*int x, y;
		int w, h;

		x = 80;
		y = 80;
		w = 60; 
		h = 28;

		Graphics^ g = Graphics::FromHwnd(this->Handle);
		g->DrawEllipse(Pens::Red, 50, 50, 100, 100); 
		g->DrawEllipse(gcnew Pen(Color::BlueViolet, 5), 250, 250, 200, 200); 
		g->FillRectangle(Brushes::Black, 100, 100, 1, 1); 
		g->FillRectangle(Brushes::Tomato, 110, 110, 1, 1);*/

	}
	/*private: void drawF(int x, int y, int len, double angel, PaintEventArgs^ e)
	{
		Graphics^ g = Graphics::FromHwnd(this->Handle);
		double PI = 3.14;
		double x1, y1;
		x1 = x + len * sin(angel * PI * 2 / 360.0);
		y1 = x + len * cos(angel * PI * 2 / 360.0);
		e->Graphics->DrawPolygon(Pens::Black, x,);
	}*/


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		int n = Convert::ToInt16(textBox1->Text);
		if (radioButton1->Checked)
		{
			l->FillRectangle(Brushes::White, 0, 0, 800, 800);
			Levy(300, 350, 200, 200, n);
		}
	}

	private:System::Void Levy(float x1, float x2, float y1, float y2, int n)
	{
		Graphics^ l = Graphics::FromHwnd(this->Handle);
		float x3, y3;
		if (n == 0) l->DrawLine(Pens::Black, x1, y1, x2, y2);
		else {
			x3 = (x1 + x2) / 2 + (y2 - y1) / 2;
			x3 = (y1 + y2) / 2 - (x2 - x1) / 2;
			Levy(x1, x3, y1, y3, n - 1);
			Levy(x3, x2, y3, y2, n - 1);
		}
	}
};
}
