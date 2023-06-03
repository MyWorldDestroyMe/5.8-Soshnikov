#pragma once

namespace Evil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	value struct lettering {
		String^ type;
		String^ name;
		double price;
		double height;
		double breast;
		double hips;
	};

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
	private: System::Windows::Forms::ToolStripMenuItem^ заполнитьДанныеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ решениеЗадачиToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->заполнитьДанныеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->решениеЗадачиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->заполнитьДанныеToolStripMenuItem,
					this->решениеЗадачиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(420, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// заполнитьДанныеToolStripMenuItem
			// 
			this->заполнитьДанныеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->заполнитьДанныеToolStripMenuItem->Name = L"заполнитьДанныеToolStripMenuItem";
			this->заполнитьДанныеToolStripMenuItem->Size = System::Drawing::Size(217, 29);
			this->заполнитьДанныеToolStripMenuItem->Text = L"Заполнить данные";
			this->заполнитьДанныеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заполнитьДанныеToolStripMenuItem_Click);
			// 
			// решениеЗадачиToolStripMenuItem
			// 
			this->решениеЗадачиToolStripMenuItem->Enabled = false;
			this->решениеЗадачиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->решениеЗадачиToolStripMenuItem->Name = L"решениеЗадачиToolStripMenuItem";
			this->решениеЗадачиToolStripMenuItem->Size = System::Drawing::Size(193, 29);
			this->решениеЗадачиToolStripMenuItem->Text = L"Решение задачи";
			this->решениеЗадачиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::решениеЗадачиToolStripMenuItem_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SlateBlue;
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel2->Location = System::Drawing::Point(435, 47);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(400, 500);
			this->panel2->TabIndex = 22;
			this->panel2->Visible = false;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::DarkGray;
			this->label15->Location = System::Drawing::Point(99, 19);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(206, 28);
			this->label15->TabIndex = 23;
			this->label15->Text = L"<<Входные данные>>";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(73, 368);
			this->label6->Margin = System::Windows::Forms::Padding(5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(152, 25);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Объем груди:";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(143, 332);
			this->label5->Margin = System::Windows::Forms::Padding(5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 25);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Рост:";
			this->label5->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(207, 401);
			this->textBox7->Margin = System::Windows::Forms::Padding(5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(98, 30);
			this->textBox7->TabIndex = 17;
			this->textBox7->Visible = false;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Муж", L"Жен" });
			this->comboBox1->Location = System::Drawing::Point(207, 220);
			this->comboBox1->Margin = System::Windows::Forms::Padding(5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox1->Size = System::Drawing::Size(98, 33);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(207, 365);
			this->textBox6->Margin = System::Windows::Forms::Padding(5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(98, 30);
			this->textBox6->TabIndex = 16;
			this->textBox6->Visible = false;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(153, 222);
			this->label9->Margin = System::Windows::Forms::Padding(5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Тип:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(207, 329);
			this->textBox5->Margin = System::Windows::Forms::Padding(5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(98, 30);
			this->textBox5->TabIndex = 15;
			this->textBox5->Visible = false;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(260, 164);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 30);
			this->textBox2->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(207, 293);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(98, 30);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(213, 69);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 30);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(207, 257);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 30);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(69, 404);
			this->label8->Margin = System::Windows::Forms::Padding(5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Объем бедер:";
			this->label8->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::DarkGray;
			this->button1->Location = System::Drawing::Point(146, 102);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Выделить место";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(91, 167);
			this->label2->Margin = System::Windows::Forms::Padding(5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Внутренний номер:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(97, 72);
			this->label1->Margin = System::Windows::Forms::Padding(5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Количество:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(58, 260);
			this->label3->Margin = System::Windows::Forms::Padding(5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Наименование:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(140, 296);
			this->label4->Margin = System::Windows::Forms::Padding(5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Цена:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::DarkGray;
			this->button2->Location = System::Drawing::Point(140, 437);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 27);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Запомнить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SlateBlue;
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->listBox2);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(859, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 500);
			this->panel1->TabIndex = 23;
			this->panel1->Visible = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label14->ForeColor = System::Drawing::Color::DarkGray;
			this->label14->Location = System::Drawing::Point(99, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(206, 35);
			this->label14->TabIndex = 22;
			this->label14->Text = L"<<Выходные данные>>";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::DarkGray;
			this->button3->Location = System::Drawing::Point(136, 457);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 27);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Найти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(226, 404);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(94, 30);
			this->textBox10->TabIndex = 10;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(91, 383);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(53, 30);
			this->textBox9->TabIndex = 9;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 25;
			this->listBox2->Location = System::Drawing::Point(22, 268);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(348, 79);
			this->listBox2->TabIndex = 8;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(22, 134);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(348, 79);
			this->listBox1->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(242, 67);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(94, 30);
			this->textBox8->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(18, 365);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(352, 87);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Количество мужских курток, которые дороже _____ рублей и подходят мужчинам выше 1"
				L"80 см:";
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(18, 244);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(352, 21);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Стоимость женских плащей 46 размера:";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(65, 108);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(255, 23);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Стоимость женских плащей:";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(65, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Количество товара:";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Location = System::Drawing::Point(12, 47);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(400, 500);
			this->panel3->TabIndex = 24;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label16->ForeColor = System::Drawing::Color::DarkGray;
			this->label16->Location = System::Drawing::Point(101, 23);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(206, 28);
			this->label16->TabIndex = 24;
			this->label16->Text = L"<<Задание>>";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(42, 81);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(299, 337);
			this->label13->TabIndex = 0;
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 548);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximumSize = System::Drawing::Size(438, 595);
			this->MinimumSize = System::Drawing::Size(438, 595);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: array <lettering>^ mem;

	private: System::Void решениеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		заполнитьДанныеToolStripMenuItem->Enabled = true;
		решениеЗадачиToolStripMenuItem->Enabled = false;
		panel2->Visible = false;
		panel1->Visible = true;
		panel1->Location = System::Drawing::Point(12, 47);
		panel3->Visible = false;

		int n = Convert::ToInt32(textBox1->Text);
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		double woman = 0;
		double woman46 = 0;
		for (int i = 0; i < n; i++)
		{
			if (mem[i].type == "Жен")
			{
				String^ w = "[" + mem[i].name + "]: цена: " + Convert::ToString(mem[i].price);
				listBox1->Items->Add(w);
				woman += mem[i].price;
				if (mem[i].height >= 164 && mem[i].height <= 170 && mem[i].breast >= 91 && mem[i].breast <= 92 && mem[i].hips >= 99 && mem[i].hips <= 102)
				{
					listBox2->Items->Add(w);
					woman46 += mem[i].price;
				}
			}
		}
		if (woman != 0)
		{
			String^ w = "Общая стоимость: " + Convert::ToString(woman);
			listBox1->Items->Add(w);
		}
		else
		{
			listBox1->Items->Add("товара нет");
		}
		if (woman46 != 0)
		{
			String^ w46 = "Общая стоимость: " + Convert::ToString(woman46);
			listBox2->Items->Add(w46);
		}
		else
		{
			listBox2->Items->Add("товара нет");
		}
		textBox8->Text = textBox1->Text;
	}
	private: System::Void заполнитьДанныеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		заполнитьДанныеToolStripMenuItem->Enabled = false;
		решениеЗадачиToolStripMenuItem->Enabled = false;
		panel2->Visible = true;
		panel2->Location = System::Drawing::Point(12, 47);
		panel1->Visible = false;
		panel3->Visible = false;
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		textBox3->Enabled = false;
		textBox4->Enabled = false;
		textBox5->Enabled = false;
		textBox6->Enabled = false;
		textBox7->Enabled = false;
		comboBox1->SelectedIndex = -1;
		label5->Visible = false;
		label6->Visible = false;
		label8->Visible = false;
		textBox5->Visible = false;
		textBox6->Visible = false;
		textBox7->Visible = false;
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
		textBox10->Clear();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = System::Convert::ToInt32(textBox1->Text);
		mem = gcnew array <lettering>(n);
		textBox2->Text = "1";
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		textBox3->Focus();
		textBox1->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		lettering cal;
		cal.type = comboBox1->Text;
		cal.name = textBox3->Text;
		cal.price = Convert::ToDouble(textBox4->Text);
		if (comboBox1->Text == "Муж")
		{
			cal.height = Convert::ToDouble(textBox5->Text);
			cal.breast = Convert::ToDouble(textBox6->Text);
			cal.hips = 0;
		}
		if (comboBox1->Text == "Жен")
		{
			cal.height = Convert::ToDouble(textBox5->Text);
			cal.breast = Convert::ToDouble(textBox6->Text);
			cal.hips = Convert::ToDouble(textBox7->Text);
		}
		int i = Convert::ToInt32(textBox2->Text) - 1;
		mem[i] = cal;
		i++;
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox3->Focus();
		textBox2->Text = Convert::ToString(i + 1);
		if (Convert::ToInt32(textBox2->Text) == Convert::ToInt32(textBox1->Text) + 1)
		{
			panel2->Visible = false;
			решениеЗадачиToolStripMenuItem->Enabled = true;
			заполнитьДанныеToolStripMenuItem->Enabled = false;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = Convert::ToInt32(textBox1->Text);
		double pr = Convert::ToDouble(textBox9->Text);
		double man = 0;
		for (int i = 0; i < n; i++)
		{
			if (mem[i].type == "Муж" && mem[i].price > pr && mem[i].height > 180)
			{
				man++;
			}
		}
		textBox10->Text = Convert::ToString(man);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") button1->Enabled = false;
		else button1->Enabled = true;
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == -1 || textBox3->Text == "" || textBox4->Text == "" || comboBox1->Text == "Муж" && (textBox5->Text == "" || textBox6->Text == "") || comboBox1->Text == "Жен" && (textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "")) button2->Enabled = false;
		else button2->Enabled = true;
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox9->Text == "") button3->Enabled = false;
		else button3->Enabled = true;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text == "Муж")
		{
			label5->Visible = true;
			label6->Visible = true;
			textBox5->Clear();
			textBox6->Clear();
			textBox5->Visible = true;
			textBox6->Visible = true;
			label8->Visible = false;
			textBox7->Visible = false;
		}
		if (comboBox1->Text == "Жен")
		{
			label5->Visible = true;
			label6->Visible = true;
			label8->Visible = true;
			textBox5->Clear();
			textBox6->Clear();
			textBox7->Clear();
			textBox5->Visible = true;
			textBox6->Visible = true;
			textBox7->Visible = true;
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
		e->Handled = true;
		MessageBox::Show("Вы ввели недопустимый символ", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
		if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if ((textBox4->Text->IndexOf(',') != -1) || (textBox4->Text->Length == 0))
			{
				e->Handled = true;
				MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			return;
		}
		e->Handled = true;
		MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
		if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if ((textBox5->Text->IndexOf(',') != -1) || (textBox5->Text->Length == 0))
			{
				e->Handled = true;
				MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			return;
		}
		e->Handled = true;
		MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
		if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if ((textBox6->Text->IndexOf(',') != -1) || (textBox6->Text->Length == 0))
			{
				e->Handled = true;
				MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			return;
		}
		e->Handled = true;
		MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
		if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if ((textBox7->Text->IndexOf(',') != -1) || (textBox7->Text->Length == 0))
			{
				e->Handled = true;
				MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			return;
		}
		e->Handled = true;
		MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
		if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if ((textBox9->Text->IndexOf(',') != -1) || (textBox9->Text->Length == 0))
			{
				e->Handled = true;
				MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			return;
		}
		e->Handled = true;
		MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	};
}
