#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "About.h"
#include "abouthelp.h"

struct route
{
	std::string star_point;
	std::string end_point;
	int nomber_route;
	int length_route;
};

std::vector<route> rt;



struct route1
{
	std::string star_point1;
	std::string end_point1;
	int nomber_route1;
	int length_route1;
};

std::vector<route1> rt1;

namespace Lab181Project {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: String^ Path;
	private: int index = 0;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ certificateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutTheProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ diagramToolStripMenuItem;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolStripMenuItem^ sortmarshToolStripMenuItem;
	private: System::Windows::Forms::Button^ button5;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diagramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortmarshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->certificateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutTheProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->operationToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(729, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->closeToolStripMenuItem, this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"Файл";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->openToolStripMenuItem->Text = L"Відкрити";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->closeToolStripMenuItem->Text = L"Закрити";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::closeToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->saveToolStripMenuItem->Text = L"Зберегти";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->exitToolStripMenuItem->Text = L"Вихід";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// operationToolStripMenuItem
			// 
			this->operationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->diagramToolStripMenuItem,
					this->sortmarshToolStripMenuItem
			});
			this->operationToolStripMenuItem->Name = L"operationToolStripMenuItem";
			this->operationToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->operationToolStripMenuItem->Text = L"Операции";
			// 
			// diagramToolStripMenuItem
			// 
			this->diagramToolStripMenuItem->Name = L"diagramToolStripMenuItem";
			this->diagramToolStripMenuItem->Size = System::Drawing::Size(224, 22);
			this->diagramToolStripMenuItem->Text = L"Відобразити діаграму";
			this->diagramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::diagramToolStripMenuItem_Click);
			// 
			// sortmarshToolStripMenuItem
			// 
			this->sortmarshToolStripMenuItem->Name = L"sortmarshToolStripMenuItem";
			this->sortmarshToolStripMenuItem->Size = System::Drawing::Size(224, 22);
			this->sortmarshToolStripMenuItem->Text = L"Розташувати № маршрутів";
			this->sortmarshToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sortmarshToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->certificateToolStripMenuItem,
					this->aboutTheProgramToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->helpToolStripMenuItem->Text = L"Допомога";
			// 
			// certificateToolStripMenuItem
			// 
			this->certificateToolStripMenuItem->Name = L"certificateToolStripMenuItem";
			this->certificateToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->certificateToolStripMenuItem->Text = L"Довідка";
			this->certificateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::certificateToolStripMenuItem_Click);
			// 
			// aboutTheProgramToolStripMenuItem
			// 
			this->aboutTheProgramToolStripMenuItem->Name = L"aboutTheProgramToolStripMenuItem";
			this->aboutTheProgramToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->aboutTheProgramToolStripMenuItem->Text = L"Про програму";
			this->aboutTheProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutTheProgramToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(210, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(210, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(210, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(210, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Початковий пункт маршруту:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Кінцевий  пункт маршруту:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Номер маршруту №:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Довжина маршруту:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(47, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 29);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Попередній";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(210, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 29);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Наступний";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(339, 27);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Номер маршруту";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Довжина маршруту";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(369, 202);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(16, 235);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(487, 196);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(378, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Пошук";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(367, 55);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(364, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Введіть значення:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(208, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 29);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Наступний";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(28, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(165, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Початковий пункт маршруту:";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(226, 124);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 21);
			this->textBox5->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(28, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Кінцевий  пункт маршруту:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(45, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 29);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Попередній";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(226, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 21);
			this->textBox6->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(28, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Номер маршруту №:";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(226, 18);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 21);
			this->textBox8->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(226, 53);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 21);
			this->textBox7->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(28, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 16);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Довжина маршруту:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 443);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ OF = gcnew OpenFileDialog;
		OF->ShowDialog();
		Path = OF->FileName;
		System::String^ manager = Path;
		std::string path = msclr::interop::marshal_as<std::string>(manager);

		std::ifstream f;
		f.open(path);

		char r[1];
		//int s = 0;
		route s1;
		while (!f.eof())
		{
			getline(f, s1.star_point);
			getline(f, s1.end_point);
			f >> s1.nomber_route;
			f >> s1.length_route;
			f.getline(r, 1, '\n');
			rt.push_back(s1);
		}
		f.close();
		button1->Enabled = true;
		button2->Enabled = true;
		Reload();



	}
	private: System::Void Reload()
	{
		String^ str1 = gcnew String(rt[index].star_point.c_str());
		textBox1->Text = str1;
		String^ str2 = gcnew String(rt[index].end_point.c_str());
		textBox2->Text = str2;
		textBox3->Text = rt[index].nomber_route.ToString();
		textBox4->Text = rt[index].length_route.ToString();
	}

	private: System::Void clear()
	{
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		chart1->Visible = false;
		groupBox1->Visible = false;
		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;
		textBox4->Enabled = false;
		button1->Enabled = false;
		button2->Enabled = false;
		rt.clear();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		button1->Enabled = false;
		button2->Enabled = false;

		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;
		textBox4->Enabled = false;

	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (index > 0)
	{
		//button1->Enabled = true;
		index--;
		Reload();
	}
	//else
		//button1->Enabled = false;
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (index < rt.size() - 1)
	{
		index++;
		Reload();
	}
}
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	clear();

}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ ON = gcnew SaveFileDialog;
	ON->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	ON->ShowDialog();
	Path = ON->FileName;
	System::String^ manager = Path;
	std::string path = msclr::interop::marshal_as<std::string>(manager);

	std::ofstream f1;
	f1.open(path/*, std::ios::app*/);

	int i = 0;
	char buf[1000];

	//route1 s11;
	//while (!f.eof())
	//{
	//	i++;
	//	//getline(f, s1.star_point);
	//	String^ star;
	//	star = Convert::ToString(textBox1->Text);
	//	//buf << star;
	//	f << star[i];
	//	getline(cin, star);
	//	//getline(f, s1.end_point);

	//	/*String^ end;
	//	end = Convert::ToString(textBox2->Text);*/

	//	//f >> s1.nomber_route;

	//	/*int num;
	//	num = Convert::ToInt64(textBox3->Text);*/

	//	//f >> s1.length_route;

	//	//int leng;
	//	//leng = Convert::ToInt64(textBox4->Text);

	//	//s1.star_point[index] = star[i];

	//	//f.getline(i, 1, '\n');
	//	rt.push_back(s1);
	//}
	if (!f1.is_open())
	{
		int probl = 10;
		probl = Convert::ToInt64(textBox3->Text);
	}
	else
	{
		String^ end;
		int end1;
		end1 = Convert::ToInt64(textBox1->Text);
		f1 << end1<<"\n";
	}
	f1.close();

}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void diagramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series[0]->Points->Clear();
	for (int i = 0; i < rt.size(); i++)
	{
		chart1->Series[0]->Points->AddXY(i + 1, rt[i].nomber_route);
		chart1->Series[1]->Points->AddXY(i + 1, rt[i].length_route);
	}
	chart1->Visible = true;
}

	private: System::Void Reload1()
	{
		String^ str11 = gcnew String(rt1[index].star_point1.c_str());
		textBox5->Text = str11;
		String^ str22 = gcnew String(rt1[index].end_point1.c_str());
		textBox6->Text = str22;
		textBox7->Text = rt1[index].nomber_route1.ToString();
		textBox8->Text = rt1[index].length_route1.ToString();
	}
private: System::Void sortmarshToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Visible = true;
	//Reload1();
}
private: System::Void aboutTheProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	About^ f1 = gcnew About;
	f1->Show();
}
private: System::Void certificateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	abouthelp^ f2 = gcnew abouthelp;
	f2->Show();
}
};
}
