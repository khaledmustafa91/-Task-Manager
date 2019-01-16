#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	
	private:
		Form ^ privous1;

	public:
		MyForm2(Form^ f1)
		{
			InitializeComponent();
			privous1 = f1;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




















	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  days;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ComboBox^  roomid;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  room;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ListBox^  hotel_info;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel2;














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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->days = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->roomid = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->room = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->hotel_info = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(549, 733);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel1_Paint);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button6->Location = System::Drawing::Point(50, 637);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 49);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->groupBox1->Location = System::Drawing::Point(378, 117);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(142, 113);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Meals";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->checkBox1->Location = System::Drawing::Point(21, 22);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(104, 30);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Breakfast";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->checkBox2->Location = System::Drawing::Point(21, 46);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(71, 30);
			this->checkBox2->TabIndex = 20;
			this->checkBox2->Text = L"lunch";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(21, 67);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(83, 30);
			this->checkBox3->TabIndex = 21;
			this->checkBox3->Text = L"Dinner";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(470, 353);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 23);
			this->label12->TabIndex = 18;
			this->label12->Text = L"25 $";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(395, 353);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 23);
			this->label11->TabIndex = 17;
			this->label11->Text = L"meal";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(461, 328);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 23);
			this->label10->TabIndex = 16;
			this->label10->Text = L"100 $";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(391, 321);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 23);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Double";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(464, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 23);
			this->label8->TabIndex = 14;
			this->label8->Text = L"50 $";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(396, 294);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 23);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Single";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->days);
			this->groupBox3->Controls->Add(this->dateTimePicker2);
			this->groupBox3->Controls->Add(this->dateTimePicker1);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(22, 77);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(320, 202);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Details";
			// 
			// days
			// 
			this->days->Location = System::Drawing::Point(111, 56);
			this->days->Margin = System::Windows::Forms::Padding(2);
			this->days->Name = L"days";
			this->days->Size = System::Drawing::Size(181, 34);
			this->days->TabIndex = 5;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(111, 154);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(181, 34);
			this->dateTimePicker2->TabIndex = 4;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MyForm2::dateTimePicker2_ValueChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(111, 109);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(181, 34);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label3->Location = System::Drawing::Point(41, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"To :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label2->Location = System::Drawing::Point(32, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"From :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label1->Location = System::Drawing::Point(23, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Days :";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->roomid);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->room);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->groupBox4->Location = System::Drawing::Point(59, 325);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(293, 226);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Rooms";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm2::groupBox4_Enter);
			// 
			// roomid
			// 
			this->roomid->FormattingEnabled = true;
			this->roomid->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20"
			});
			this->roomid->Location = System::Drawing::Point(98, 129);
			this->roomid->Margin = System::Windows::Forms::Padding(2);
			this->roomid->Name = L"roomid";
			this->roomid->Size = System::Drawing::Size(157, 34);
			this->roomid->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(4, 129);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 26);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Room ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(17, 36);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 26);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Room";
			// 
			// room
			// 
			this->room->FormattingEnabled = true;
			this->room->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Single", L"Double" });
			this->room->Location = System::Drawing::Point(98, 36);
			this->room->Margin = System::Windows::Forms::Padding(2);
			this->room->Name = L"room";
			this->room->Size = System::Drawing::Size(157, 34);
			this->room->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button1->Location = System::Drawing::Point(176, 637);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button2->Location = System::Drawing::Point(410, 640);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 49);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button3->Location = System::Drawing::Point(729, 643);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 43);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Checkout";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(712, 214);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 28);
			this->textBox1->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(601, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 28);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Cornsilk;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(683, 292);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(236, 56);
			this->listBox1->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label13->Location = System::Drawing::Point(596, 292);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(81, 26);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Payment";
			// 
			// hotel_info
			// 
			this->hotel_info->BackColor = System::Drawing::Color::Cornsilk;
			this->hotel_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hotel_info->FormattingEnabled = true;
			this->hotel_info->Location = System::Drawing::Point(0, 0);
			this->hotel_info->Name = L"hotel_info";
			this->hotel_info->Size = System::Drawing::Size(685, 100);
			this->hotel_info->TabIndex = 15;
			this->hotel_info->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::hotel_info_SelectedIndexChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->button5->Location = System::Drawing::Point(1064, 643);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 46);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->hotel_info);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(549, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(685, 100);
			this->panel2->TabIndex = 17;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1234, 733);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->DoubleBuffered = true;
			this->Name = L"MyForm2";
			this->Text = L"Rooms Data";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	hotel_info->Show();
	String ^ day = days->Text;
	String ^ ro = room->Text;
	String ^ id = roomid->Text;
	
	String ^ time1 = dateTimePicker1->Text;
	String ^ time2 = dateTimePicker2->Text;
	String ^ data = id + "\t" + ro + "\t" + day + "\t" + "\t" + time1 + "\t" + time2;
	hotel_info->Items->Add(data);
	roomid->Items->Remove(roomid->SelectedItem);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamWriter^ OpenFile = gcnew StreamWriter("personal.txt");
	for (int i = 0; i < hotel_info->Items->Count; i++)
	{
		OpenFile->WriteLine(hotel_info->Items[i]);
	}
	OpenFile->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	double x;
	double day = Convert::ToDouble(days -> Text);
	if (checkBox1->Checked == true && checkBox3->Checked == false && checkBox3->Checked == false || checkBox1->Checked == false && checkBox3->Checked == true && checkBox3->Checked == false || checkBox1->Checked == false && checkBox3->Checked == false && checkBox3->Checked == true) {
		if (room->SelectedItem == "Single") {
			
			x = (day *50) + (1*25*day);
			listBox1->Items->Add(x);
		}
		if (room->SelectedItem == "Double")
		{
			
			x = (day * 100) + (1 * 25 * day);
			listBox1->Items->Add(x);
			
		}
		}
	else if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == false || checkBox1->Checked == true && checkBox3->Checked == true && checkBox2->Checked == false || checkBox2->Checked == true && checkBox3->Checked == true && checkBox1->Checked == false) {
		if (room->SelectedItem == "Single") {
			
			x = (day * 50) + (2 * 25 * day);
			listBox1->Items->Add(x);
		}
		if (room->SelectedItem == "Double")
		{
	
			x = (day * 100) + (2 * 25 * day);
			listBox1->Items->Add(x);

		}
	}
	else if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == true) {
		if (room->SelectedItem == "Single") {
			
			x = (day * 50) + (3 * 25 * day);
			listBox1->Items->Add(x);
		}
		if (room->SelectedItem == "Double")
		{
			
			x = (day * 100) + (3 * 25 * day);
			listBox1->Items->Add(x);

		}

	}
	else {
		if (room->SelectedItem == "Single") {
			
			x = (day * 50);
			listBox1->Items->Add(x);
		}
		if (room->SelectedItem == "Double")
		{
			x = day * 100;
			listBox1->Items->Add(x);

		}
	}
	
	hotel_info->Items->Remove(hotel_info->SelectedItem);

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	StreamReader^ sr = gcnew StreamReader("personal.txt");
	while (!sr->EndOfStream)
	{
		String ^row = sr->ReadLine();
		array<String^>^result;
		array<Char>^splitChars = { '\t' };
		result = row->Split(splitChars, StringSplitOptions::None);
		if (result[0]->ToLower() == textBox1->Text->ToLower())
		{

			roomid->Items->Add(result[0]);
			roomid->Text=result[0];
			room->SelectedItem = result[1];
			days->Text = result[2];
			//meals->SelectedItem = result[3];
		}
		
	}
	sr->Close();

}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	privous1->Show();
}
private: System::Void hotel_info_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
