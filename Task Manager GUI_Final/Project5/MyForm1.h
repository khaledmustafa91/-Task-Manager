#pragma once
#include "MyForm2.h"
#include <string>
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		Form ^ privous;

	public:
		MyForm1(Form^ f)
		{
			InitializeComponent();
			privous = f;
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:



	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::TextBox^  Task;







	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Label^  label7;








	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;



	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;











	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button8;




	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  description;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  search;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->Task = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(113, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Task Name";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SlateGray;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->search);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->description);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->id);
			this->panel1->Controls->Add(this->Task);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1293, 733);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(925, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 34);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Task\'s List";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(261, 636);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 47);
			this->button2->TabIndex = 22;
			this->button2->Text = L"save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(94, 412);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(196, 138);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Status";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox1_Enter);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton1->Location = System::Drawing::Point(12, 86);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(113, 33);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Finished";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton2->Location = System::Drawing::Point(12, 49);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(139, 33);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"UnFinished";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(496, 636);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(98, 47);
			this->button9->TabIndex = 43;
			this->button9->Text = L"Update";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click_1);
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->search->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->search->Location = System::Drawing::Point(412, 429);
			this->search->Multiline = true;
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(226, 30);
			this->search->TabIndex = 42;
			this->search->TextChanged += gcnew System::EventHandler(this, &MyForm1::search_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(478, 516);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 34);
			this->button7->TabIndex = 41;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click_1);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Location = System::Drawing::Point(780, 174);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(461, 376);
			this->listBox1->TabIndex = 31;
			this->listBox1->Click += gcnew System::EventHandler(this, &MyForm1::hidden);
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged_1);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(725, 636);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 47);
			this->button6->TabIndex = 40;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click_2);
			// 
			// description
			// 
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->description->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->description->Location = System::Drawing::Point(412, 181);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(226, 30);
			this->description->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(441, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 34);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Finished Date";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(1183, 636);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 47);
			this->button5->TabIndex = 32;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click_1);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarForeColor = System::Drawing::SystemColors::WindowFrame;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::ScrollBar;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::ActiveBorder;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::Info;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(412, 319);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(226, 37);
			this->dateTimePicker1->TabIndex = 37;
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(961, 636);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(98, 47);
			this->button8->TabIndex = 33;
			this->button8->Text = L"Back";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(39, 636);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 47);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(441, 130);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 34);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Discription";
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->id->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->id->Location = System::Drawing::Point(95, 319);
			this->id->Multiline = true;
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(195, 30);
			this->id->TabIndex = 6;
			// 
			// Task
			// 
			this->Task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Task->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Task->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Task->Location = System::Drawing::Point(95, 181);
			this->Task->Multiline = true;
			this->Task->Name = L"Task";
			this->Task->Size = System::Drawing::Size(196, 30);
			this->Task->TabIndex = 4;
			this->Task->TextChanged += gcnew System::EventHandler(this, &MyForm1::first_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(153, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 34);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(553, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(553, 348);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 32);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(340, 423);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 34);
			this->label5->TabIndex = 45;
			this->label5->Text = L"ID";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1293, 733);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm1";
			this->Text = L"Task Information";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void  ClearControls() {
			id->Text = "";
			Task->Text = "";
			description->Text = "";
			dateTimePicker1->Text = "";
			radioButton1->Checked = false;
			radioButton2->Checked = false;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		MyForm2^ fr = gcnew MyForm2(this);
		fr->Show();
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String ^ name = Task->Text;
		String ^ id_ = id->Text;
		String^single;
		String ^ des = description->Text;
		String ^ time1 = dateTimePicker1->Text;
		listBox1->Show();
		if (radioButton1->Checked == true) {
			single = "Finished";
		}
		else if(radioButton2->Checked == true){
			single = "UnFinished";
		}
		String ^ data2 = id_ + "\t" + name + "\t" + time1 +  "\t"  + des + "\t" + single;
		listBox1->Items->Add(data2);
		ClearControls();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamWriter^ OpenFile = gcnew StreamWriter("personal data.txt");
		for (int i = 0; i < listBox1->Items->Count; i++)
		{
			OpenFile->WriteLine(listBox1->Items[i]);
		}
		OpenFile->Close();
		ClearControls();

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ data3 = id->Text + "  ";
		listBox1->Items[listBox1->SelectedIndex] = data3;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Remove(listBox1->SelectedItem);
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Are You Sure You Want To Leave Task Manager ?", "Warning Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
	else
		Application::OpenForms;
	
}
private: System::Void first_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	privous->Show();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ data3 = id->Text + "  " + Task->Text + "  ";
	listBox1->Items[listBox1->SelectedIndex] = data3;

}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void hidden(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ s;
	if (radioButton1->Checked == true) {
		s = "Finished";
	}
	else if (radioButton2->Checked == true) {
		s = "UnFinished";
	}
	String ^ data3 = id->Text + "\t" + Task->Text + "\t" + dateTimePicker1->Text + "\t" + description->Text + "\t" + s;
	listBox1->Items[listBox1->SelectedIndex] = data3;

}
private: System::Void button6_Click_2(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Remove(listBox1->SelectedItem);
}
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ sr = gcnew StreamReader("personal data.txt");
	while (!sr->EndOfStream)
	{
		String ^row = sr->ReadLine();
		array<String^>^result;
		array<Char>^splitChars = { '\t' };
		result = row->Split(splitChars, StringSplitOptions::None);
		if (result[0]->ToLower() == search->Text->ToLower())
		{

			id->Text = result[0];
			Task->Text = result[1];
			dateTimePicker1->Text = result[2];
			description->Text = result[3];
			if (result[4] == "Finished") {
				radioButton1->Checked = true;
			}
			else {
				radioButton2->Checked = true;
			}

		}
	}
	sr->Close();
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void search_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
