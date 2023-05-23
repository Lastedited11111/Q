#pragma once
#include "Graph.h"
#include "help.h"
#include "kurs.h"
namespace Project12 {

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
		Graph* pG; //указатель на граф
		int N;//число вершин(вводится до графа)
		float Q;//ширина панеди 2 для рисования
		int Rezim;//режим 1-ввод,2-визуалтизация алгоритма
		struct para* PARA;//пара выделенных вершин в графе
		int Ends_R;

	public:


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;




		   int Step;//номер текущего шага алгоритма Дейкстры

	  //перевод числа в строку
		   string int_str(int d)
		   {
			   if (d == 0) return "0";
			   string s = "";
			   while (d > 0)
			   {
				   s = (char)('0' + d % 10) + s;
				   d = d / 10;

			   }
			   return s;
		   }
		   //строка в число
		   int str_int(string s)
		   {
			   int d = 0;
			   for (int i = 1; i <= s.size(); i++)
				   if ((s[i - 1] <= '9') && (s[i - 1] >= '0'))
					   d = d * 10 + s[i - 1] - '0';
			   return d;
		   }

		   //String^ в std string
		   string Str_str(String^ S)
		   {
			   S->Trim();
			   string s = "";
			   for (int i = 1; i <= S->Length; i++)
				   s = s + (char)S[i - 1];
			   return s;

		   }
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






	private: System::Windows::Forms::Panel^ panel2;
	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1268, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// panel2
			// 
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(395, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(430, 407);
			this->panel2->TabIndex = 2;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel2_MouseClick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(79, 135);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(278, 115);
			this->panel3->TabIndex = 3;
			this->panel3->Visible = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(80, 63);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Создать ребро";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(92, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 23);
			this->textBox2->TabIndex = 2;
			this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(24, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите вес ребра (от 0 до 1000)";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(861, 29);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(364, 176);
			this->panel4->TabIndex = 4;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(273, 128);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(78, 43);
			this->button9->TabIndex = 7;
			this->button9->Text = L"Убрать анимацию";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(130, 99);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 23);
			this->textBox4->TabIndex = 6;
			this->textBox4->Enter += gcnew System::EventHandler(this, &MyForm::textBox4_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(341, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Конечная вершина для поиска кратчайшего  пути";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(105, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 45);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Найти кратчайший путь";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(130, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 23);
			this->textBox3->TabIndex = 3;
			this->textBox3->Enter += gcnew System::EventHandler(this, &MyForm::textBox3_Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(345, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Начальная вершина для поиска кратчайшего пути";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(4, 4);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(395, 70);
			this->panel5->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(10, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 23);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(237, 40);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"END Graph";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(96, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"создать граф";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(344, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввведите количество вершин в графе ( от 1 до 10)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 332);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1122, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 17);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Кратчайший путь";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(1125, 248);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(131, 180);
			this->listBox2->TabIndex = 2;
			this->listBox2->Click += gcnew System::EventHandler(this, &MyForm::listBox2_Click);
			this->listBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox2_MouseClick);
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			this->listBox2->Enter += gcnew System::EventHandler(this, &MyForm::listBox2_Enter);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(834, 248);
			this->listBox1->MultiColumn = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(283, 180);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(836, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(281, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Все пути, не пересекающиеся по ребрам";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(117, 394);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 26);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Отобразить на граф";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(0, 117);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(389, 271);
			this->dataGridView2->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(389, 84);
			this->panel1->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(99, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(341, 25);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Пособие по использованию данной программы";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(438, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(213, 25);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Задание курсовой работы";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Control;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(647, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(229, 25);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Выход из программы";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 468);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Программа нахождения кратчайшего расстояния между двумя вершинами в графе";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		float L = panel2->Width;
		float H = panel2->Height;
		Q = H;
		if (L < Q) Q = L;//азмеры квадратной области для рисоывния
		Rezim = 1;//начинкаем с режима ввода
		PARA = new struct para();
		PARA->i = 0; PARA->j = 0;
		this->Ends_R = 0;
	}
	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->RowHeadersWidth =
			dataGridView2->RowHeadersWidth * 1.2;
		String^ S = textBox1->Text;
		std::string s = "";
		for (int i = 1; i <= S->Length; i++)
		{
			s = s + (char)S[i - 1];

			if ((S[i - 1] < '0') || (S[i - 1] > '9')) { textBox1->BackColor = System::Drawing::Color::Red; return; }

		}
		N = str_int(s);
		if ((N < 1) || (N > 20)) { textBox1->BackColor = System::Drawing::Color::Red; return; }
		//textBox1->Enabled = false;
		//button1->Enabled = false;
		vector<struct para>Rebs;
		pG = new Graph(N, Rebs, Q, 1);
		panel2->Visible = false;
		panel2->Visible = true;
		dataGridView2->ColumnCount = N;
		dataGridView2->RowCount = N;
		for (int i = 1; i <= N; i++)
		{
			string s = int_str(i);
			String^ S = gcnew String(s.c_str());
			dataGridView2->Columns[i - 1]->Width =
				(dataGridView2->Width - dataGridView2->RowHeadersWidth) / N;
			dataGridView2->Columns[i - 1]->Name = S->Substring(S->Length - 1, 1);
			dataGridView2->Rows[i - 1]->HeaderCell->Value = S;
		}

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if(i == j)
				{
					dataGridView2->Rows[i - 1]->Cells[j - 1]->Value = "0";
					dataGridView2->Rows[i - 1]->Cells[j - 1]->ReadOnly = true;
				}
				else
					dataGridView2->Rows[i - 1]->Cells[j - 1]->Value = "";
			}
		}
			

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int w; //вес одного ребра
		string s;
		s = Str_str(textBox2->Text);
		w = str_int(s);
		if ((w < 0) || (w > 1000)) { textBox2->BackColor = Color::Yellow; return; }
		para p;
		p = *PARA;
		pG->A[p.i - 1][p.j - 1] = w;
		pG->A[p.j - 1][p.i - 1] = w;
		panel3->Visible = false;
		panel2->Visible = false;
		panel2->Visible = true;
		Rezim = 1;
		Ends_R = 1;
		dataGridView2->Rows[p.i-1]->Cells[p.j-1]->Value=w;
		dataGridView2->Rows[p.j-1]->Cells[p.i-1]->Value=w;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		pG->Start = 0;
		Rezim = 3;
		panel2->Visible = false;
		panel2->Visible = true;
		string s;
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		for (int i = 1; i <= pG->Nv; i++)
			for (int j = 1; j <= pG->Nv; j++)
				pG->ACTS[i - 1][j - 1] = false;
		s = Str_str(textBox3->Text);
		int i = str_int(s);
		if ((i < 1) || (i > pG->Nv)) { textBox3->BackColor = Color::Yellow; return; }
		pG->Start = i;
		s = Str_str(textBox4->Text);
		i = str_int(s);
		if ((i < 1) || (i > pG->Nv) || (i == pG->Start)) { textBox4->BackColor = Color::Yellow; return; }
		pG->Fin = i;
		panel2->Visible = false;
		panel2->Visible = true;
		int Inf = pG->Nv * 10000;
		for (int i = 1; i <= pG->Nv; i++)
		{
			pG->d[i - 1] = Inf;
			pG->p[i - 1] = 0;
			pG->Closed[i - 1] = false;
		}
		pG->Act = pG->Start;
		pG->d[pG->Act - 1] = 0;
		pG->Closed[pG->Act - 1] = true;
		vector<vector<int>> Phs = pG->All_path(pG->Start, pG->Fin);
		pG->AllP = Phs;

		string res = "";
		int d_min = 1000000;
		
		int i1, i2;//Не пересекающиеся по рёбрам
		for (int i = 1; i <= Phs.size(); i++)
		{
			vector<int> pp = Phs[i - 1];
			string s = "";
			int d = 0;
			for (int j = 1; j <= pp.size(); j++)
			{
				int k = pp[j - 1]; if (j == 1) i1 = k;
				else {
					d = d + pG->A[i1 - 1][k - 1];
					i1 = k;


				}
				s = s + int_str(k);
				if (j < pp.size()) s = s + ",";


			}
			if (d <= d_min)
			{
				d_min = d;
				string s1 = int_str(d_min);
				res = s + " Вес (" + s1 + ")";
			}
			string s1 = int_str(d);
			s = s + " Вес (" + s1 + ")";
			String^ S = gcnew String(s.c_str());
			listBox1->Items->Add(S);

		}
		vector<int>Mp;
		pG->Deikstra(pG->Start);
		s = ""; int dd = 0;
		if (pG->p[pG->Fin - 1] > 0)
		{
			int ii = pG->Fin;
			while (ii > 0)
			{
				s = int_str(ii) + "," + s;
				Mp.insert(Mp.begin(), ii);
				int ii1 = pG->p[ii - 1];
				if (ii1 > 0) dd = dd + pG->A[ii1 - 1][ii - 1];
				ii = ii1;
			}
			pG->MinP = Mp;
			s = s.substr(0, s.size() - 1);
			s = s + " Вес (" + int_str(dd) + ")";
			String^ S = gcnew String(res.c_str());
			listBox2->Items->Add(S);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//panel3->Visible = false;
		//panel5->Visible = false;
		//panel4->Visible = true;
		////panel8->Visible = false;
		//panel4->Top = 0;
		pG->Start = 0;
		Rezim = 3;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		pG->Deikstra_step();
		panel2->Visible = false;
		panel2->Visible = true;
		Step++;
		if (pG->Act == 0)
		{
			string s = "Расст. и кратч. пути  по графу от вершины v=" +
				int_str(pG->Start);
			String^ S = gcnew String(s.c_str());
			label6->Text = S;
			label6->Visible = true;
			listBox1->Visible = true;
			listBox2->Visible = true;
			for (int i = 1; i <= pG->Nv; i++)
			{
				int di = pG->d[i - 1];
				string s = int_str(i) + ": " + int_str(di);
				String^ S = gcnew String(s.c_str());
				listBox1->Items->Add(S);
				s = int_str(i);
				int k = i;
				while (k != pG->Start)
				{
					k = pG->p[k - 1];
					s = int_str(k) + "-" + s;
				}
				s = int_str(i) + ": " + s;
				S = gcnew String(s.c_str());
				listBox2->Items->Add(S);

			}
		}
		else {
			string s = int_str(Step);
			s = "Шаг " + s;
			String^ S = gcnew String(s.c_str());
		}
		int Inf = pG->Nv * 10000;
		vector<vector<string>>D;


	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		vector<struct para> v;
		para p;
		String^ S;
		string ss = "";
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
			{

				if (dataGridView2->Rows[i - 1]->Cells[j - 1]->Value == nullptr)	
					S = "";
				else 
					S = dataGridView2->Rows[i - 1]->Cells[j - 1]->Value->ToString();
				S->Trim();
				if (S != "")
				{
					string s = Str_str(S);
					int d = str_int(s);
					p.i = i;
					p.j = j;
					p.w = d;
					v.push_back(p);
				}

				dataGridView2->Rows[j - 1]->Cells[i - 1]->Value = dataGridView2->Rows[i - 1]->Cells[j - 1]->Value;
			}

		delete(pG);
		pG = new Graph(N, v, Q, 1);
		panel2->Visible = false;
		panel2->Visible = true;

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		kurs^ ab = gcnew kurs();
		ab->ShowDialog();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}




	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = panel2->CreateGraphics();
		Pen^ p = gcnew Pen(Color::Black);
		Pen^ p1 = gcnew Pen(Color::Black);
		float r = Q / 2 * 0.8 * 0.12;
		int Inf = pG->Nv * 10000;
		System::Drawing::Font^ drawFont =
			gcnew System::Drawing::Font("Arial", 10);
		SolidBrush^ Yb = gcnew SolidBrush(Color::Yellow);
		SolidBrush^ Wb = gcnew SolidBrush(Color::White);
		SolidBrush^ sb = gcnew SolidBrush(Color::Black);
		SolidBrush^ sbb = gcnew SolidBrush(Color::Beige);
		SolidBrush^ sgr = gcnew SolidBrush(Color::LightGreen);
		if (Rezim > 1) p->Width = 2;
		for (int i = 1; i <= N; i++)//Изображение графа
		{
			float xi = pG->Xv[i - 1];
			float yi = pG->Yv[i - 1];
			if (Rezim == 1)//ввод графа
			{//Rezim=1
				if (pG->Color[i - 1] > 0) p->Color = Color::Red;
				else p->Color = Color::Black;
			}

			g->DrawEllipse(p, xi - r, yi - r, 2 * r, 2 * r);
			if (Rezim > 1)
			{

				if (i == pG->Start)
				{
					p->Color = Color::Red;
					float r1 = 1.2 * r;
					g->DrawEllipse(p, xi - r1, yi - r1, 2 * r1, 2 * r1);
					p->Color = Color::Black;

				}
				if (i == pG->Fin)
				{
					p->Color = Color::Blue;
					float r1 = 1.2 * r;
					g->DrawEllipse(p, xi - r1, yi - r1, 2 * r1, 2 * r1);

				}
			}
			p->Color = Color::Black;
			string s = int_str(i);
			String^ S = gcnew String(s.c_str());
			g->DrawString(S, drawFont, sb, xi - r / 2, yi - r / 2);
		}

		for (int i = 1; i <= pG->Nv; i++)
		{//3
			for (int j = 1; j <= pG->Smeg[i - 1].size(); j++)
			{//2
				int i1 = i;
				int i2 = pG->Smeg[i - 1][j - 1];
				float xi1 = pG->Xv[i1 - 1];
				float yi1 = pG->Yv[i1 - 1];
				float xi2 = pG->Xv[i2 - 1];
				float yi2 = pG->Yv[i2 - 1];
				float dx = xi2 - xi1; float dy = yi2 - yi1;
				float dd = sqrt(dx * dx + dy * dy); dx = dx / dd; dy = dy / dd;
				float xi11, xi22, yi11, yi22, xi12, yi12;
				xi22 = xi2 - r * dx; yi22 = yi2 - r * dy;
				xi11 = xi1 + r * dx; yi11 = yi1 + r * dy;
				if (pG->Mrx[i1 - 1][i2 - 1] < 0)
				{
					pG->Mrx[i1 - 1][i2 - 1] = (xi11 + xi22) / 2 + r;
					pG->Mry[i1 - 1][i2 - 1] = (yi11 + yi22) / 2 + r;

				}
				if (Rezim > 1)
				{
					if (pG->ACTS[i1 - 1][i2 - 1] == true)
					{
						p->Color = Color::Red;
						g->DrawLine(p, xi11, yi11, xi22, yi22);
						p->Color = Color::Black;

					}
					else
						g->DrawLine(p, xi11, yi11, xi22, yi22);

				}
				else

					g->DrawLine(p, xi11, yi11, xi22, yi22);
				float xs = (xi11 + xi22) / 2;
				float ys = (yi11 + yi22) / 2;
				if (pG->Mrx[i1 - 1][i2 - 1] >= 0)
				{
					Pen^ p1 = gcnew Pen(Color::Black);
					g->FillRectangle(sgr, pG->Mrx[i1 - 1][i2 - 1], pG->Mry[i1 - 1][i2 - 1], r * 2, r);
					string s = int_str(pG->A[i1 - 1][i2 - 1]);
					String^ S = gcnew String(s.c_str());
					g->DrawString(S, drawFont, sb, pG->Mrx[i1 - 1][i2 - 1], pG->Mry[i1 - 1][i2 - 1]);
					float xs1 = pG->Mrx[i1 - 1][i2 - 1]; float ys1 = pG->Mry[i1 - 1][i2 - 1];
					float xs2 = pG->Mrx[i1 - 1][i2 - 1]; float ys2 = pG->Mry[i1 - 1][i2 - 1] + r;
					float xs3 = pG->Mrx[i1 - 1][i2 - 1] + r * 3; float ys3 = pG->Mry[i1 - 1][i2 - 1];
					float xs4 = pG->Mrx[i1 - 1][i2 - 1] + 3 * r; float ys4 = pG->Mry[i1 - 1][i2 - 1] + r;
					float xs0 = xs1; float ys0 = ys1;
					float d0 = sqrt((xs - xs1) * (xs - xs1) + (ys - ys1) * (ys - ys1));
					float d2 = sqrt((xs - xs2) * (xs - xs2) + (ys - ys2) * (ys - ys2));
					if (d2 < d0) { d0 = d2; xs0 = xs2; ys0 = ys2; }
					float d3 = sqrt((xs - xs3) * (xs - xs3) + (ys - ys3) * (ys - ys3));
					if (d3 < d0) { d0 = d3; xs0 = xs3; ys0 = ys3; }
					float d4 = sqrt((xs - xs4) * (xs - xs4) + (ys - ys4) * (ys - ys4));
					if (d4 < d0) { d0 = d4; xs0 = xs4; ys0 = ys4; }
					g->DrawLine(p1, xs, ys, xs0, ys0);
				}
			}//2
		}//3


	}
	private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{//000
		if (Rezim > 1) return;
		float x0 = e->X; float y0 = e->Y;
		int i;
		for (i = 1; i <= pG->Nv; i++)
		{//3
			if (pow(pG->Xv[i - 1] - x0, 2) + pow(pG->Yv[i - 1] - y0, 2) <= pG->Rv * pG->Rv)
			{//2
				if (Ends_R == 1) { PARA->i = 0; PARA->j = 0; }
				if (pG->Color[i - 1] == 0)
				{//1
					pG->Color[i - 1] = 1;
					if (PARA->i == 0) { PARA->i = i; Ends_R = 0; }
					else (PARA->j = i);
					if (PARA->j > 0)

					{//4  //Выделено две вершины
						struct para p = *PARA;
						if (pG->A[p.i - 1][p.j - 1] == -1)
						{
							pG->add_reb(p);
							//dataGridView1->Rows[p.i-1]->Cells[p.j-1]->Value="1";
							//dataGridView1->Rows[p.j-1]->Cells[p.i-1]->Value="1";
							//Rezim = 2;
							panel3->Visible = true;
							textBox2->Text = "";
						}
						else
						{
							pG->remove_reb(p);
							PARA->i = 0;
							PARA->j = 0;
							Ends_R = 1;
							pG->Mrx[p.i - 1][p.j - 1] = -1;
							pG->Mry[p.i - 1][p.j - 1] = -1;
							//	dataGridView1->Rows[p.i-1]->Cells[p.j-1]->Value="0";
							//dataGridView1->Rows[p.j-1]->Cells[p.i-1]->Value="0";
						}
						pG->Color[p.i - 1] = 0;
						pG->Color[p.j - 1] = 0;
						panel2->Visible = false;//перерисовкв
						panel2->Visible = true;
						break;
					}//4
					else
					{//5
						panel2->Visible = false;
						panel2->Visible = true;
						break;
					}//5
				}//1
				else//Вершина раскрашена
				{
					pG->Color[i - 1] = 0;
					PARA->i = 0;
					Ends_R = 1;
					panel2->Visible = false;
					panel2->Visible = true;
					break;
				}
			}//2

		}//3
		if (i > pG->Nv)//щелчок вне вершин перемещение вершины на 
			// новое место
		{
			int ii;
			Ends_R = 1; if (PARA->j == 0) PARA->i = 0;
			for (int i = 1; i <= pG->Nv; i++)
				if (pG->Color[i - 1] == 1)
				{
					pG->Xv[i - 1] = x0;
					pG->Yv[i - 1] = y0;
					panel2->Visible = false;
					panel2->Visible = true;
					pG->Color[i - 1] = 0;
					break;
				}
			for (int i = 1; i <= pG->Nv; i++)
				for (int j = 1; j <= pG->Nv; j++)
				{
					pG->Mrx[i - 1][j - 1] = -1;
					pG->Mry[i - 1][j - 1] = -1;


				}
		}
		if (i > pG->Nv)//нет выделенных вершин
		{//77

			para p = *PARA;
			if (p.i != 0)
			{
				pG->Mrx[p.i - 1][p.j - 1] = x0;
				pG->Mry[p.i - 1][p.j - 1] = y0;
				panel2->Visible = false;
				panel2->Visible = true;


			}


		}//77
	}//000
	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox1->BackColor = Color::White;
	}
	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox2->BackColor = Color::White;
	}
	private: System::Void вводЧерезМатрицуГрафаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//последовательныйВводРеберToolStripMenuItem->Enabled = false;
		//panel1->Visible = true;
		//panel3->Visible = false;
		//panel4->Visible = false;
		//panel4->Visible = false;
		////panel5->Visible=false;
		//panel7->Visible = false;
		//panel8->Visible = true;
		//panel8->Top = panel5->Top + panel5->Height;
		//panel8->Height = panel1->Height - panel8->Top;
		//button6->Top = 0;
		//button6->Left = panel8->Width - button6->Width;
		//dataGridView2->Top = button6->Top + button6->Height;
		//dataGridView2->Height = panel8->Height - dataGridView2->Top;

	}
	
	private: System::Void последовательныйВводРеберToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = true;




	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int i = listBox1->SelectedIndex + 1;
		vector<int>h = pG->AllP[i - 1];
		for (int i = 1; i <= pG->Nv; i++)
			for (int j = 1; j <= pG->Nv; j++)
				pG->ACTS[i - 1][j - 1] = false;
		for (int i = 1; i <= h.size() - 1; i++)
		{
			int i1 = h[i - 1];
			int i2 = h[i];
			pG->ACTS[i1 - 1][i2 - 1] = true;
			pG->ACTS[i2 - 1][i1 - 1] = true;


		}
		panel2->Visible = false;//перерисоуа панели 2 с графом
		panel2->Visible = true;
		;



	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int i = listBox2->SelectedIndex + 1;
		vector<int>h = pG->MinP;
		for (int i = 1; i <= pG->Nv; i++)
			for (int j = 1; j <= pG->Nv; j++)
				pG->ACTS[i - 1][j - 1] = false;
		for (int i = 1; i <= h.size() - 1; i++)
		{
			int i1 = h[i - 1];
			int i2 = h[i];
			pG->ACTS[i1 - 1][i2 - 1] = true;
			pG->ACTS[i2 - 1][i1 - 1] = true;

		}
		panel2->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void listBox2_Enter(System::Object^ sender, System::EventArgs^ e) {




	}
	private: System::Void listBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	}
	private: System::Void listBox2_Click(System::Object^ sender, System::EventArgs^ e) {

		vector<int>h = pG->MinP;
		for (int i = 1; i <= pG->Nv; i++)
			for (int j = 1; j <= pG->Nv; j++)
				pG->ACTS[i - 1][j - 1] = false;
		for (int i = 1; i <= h.size() - 1; i++)
		{
			int i1 = h[i - 1];
			int i2 = h[i];
			pG->ACTS[i1 - 1][i2 - 1] = true;
			pG->ACTS[i2 - 1][i1 - 1] = true;

		}
		listBox2->ClearSelected();
		panel2->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox3->BackColor = Color::White;

	}
	private: System::Void textBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox4->BackColor = Color::White;

	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		help^ ab = gcnew help();
		ab->ShowDialog();
	}

	
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Rezim = 1;
		panel2->Visible = false;
		panel2->Visible = true;
	}
};
}
