#pragma once
#include "MyForm2.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Personal Information
	/// </summary>
	public ref class Personal Information : public System::Windows::Forms::Form
	{
	public:
		Personal Information(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Personal Information()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  na;

	private: System::Windows::Forms::TextBox^  tel;

	private: System::Windows::Forms::TextBox^  first;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  age;
	private: System::Windows::Forms::TextBox^  mail;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  lastname;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  id;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button5;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->age = (gcnew System::Windows::Forms::TextBox());
			this->mail = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->na = (gcnew System::Windows::Forms::TextBox());
			this->tel = (gcnew System::Windows::Forms::TextBox());
			this->first = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 50);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 119);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tel";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 174);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nationality";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->id);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->age);
			this->panel1->Controls->Add(this->mail);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->lastname);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->na);
			this->panel1->Controls->Add(this->tel);
			this->panel1->Controls->Add(this->first);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(16, 15);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(635, 492);
			this->panel1->TabIndex = 4;
			// 
			// id
			// 
			this->id->Location = System::Drawing::Point(100, 223);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(132, 22);
			this->id->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 25;
			this->label2->Text = L"ID";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(452, 392);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Personal Information::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(157, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Load";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Personal Information::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(260, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 22;
			this->button2->Text = L"save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Personal Information::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(317, 260);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(248, 94);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Gender";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Personal Information::groupBox2_Enter);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(50, 54);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(75, 21);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Famale";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(50, 16);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 21);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Male";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(14, 260);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(234, 94);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Status";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(24, 27);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 21);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Single";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(24, 54);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(77, 21);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Married";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// age
			// 
			this->age->Location = System::Drawing::Point(384, 109);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(122, 22);
			this->age->TabIndex = 15;
			// 
			// mail
			// 
			this->mail->Location = System::Drawing::Point(384, 179);
			this->mail->Name = L"mail";
			this->mail->Size = System::Drawing::Size(122, 22);
			this->mail->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(302, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"E-Mail";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(302, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Age";
			// 
			// lastname
			// 
			this->lastname->Location = System::Drawing::Point(384, 44);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(122, 22);
			this->lastname->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(302, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Last Name";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 449);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Personal Information::button1_Click);
			// 
			// na
			// 
			this->na->Location = System::Drawing::Point(100, 174);
			this->na->Margin = System::Windows::Forms::Padding(4);
			this->na->Name = L"na";
			this->na->Size = System::Drawing::Size(132, 22);
			this->na->TabIndex = 7;
			// 
			// tel
			// 
			this->tel->Location = System::Drawing::Point(100, 119);
			this->tel->Margin = System::Windows::Forms::Padding(4);
			this->tel->Name = L"tel";
			this->tel->Size = System::Drawing::Size(132, 22);
			this->tel->TabIndex = 6;
			// 
			// first
			// 
			this->first->Location = System::Drawing::Point(100, 47);
			this->first->Margin = System::Windows::Forms::Padding(4);
			this->first->Name = L"first";
			this->first->Size = System::Drawing::Size(132, 22);
			this->first->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->listBox2);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Location = System::Drawing::Point(658, 15);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(329, 492);
			this->panel2->TabIndex = 22;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(3, 253);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(326, 228);
			this->listBox2->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(326, 244);
			this->listBox1->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(351, 401);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 27;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Personal Information::button5_Click);
			// 
			// Personal Information
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1030, 541);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Personal Information";
			this->Text = L"Personal Information";
			this->Load += gcnew System::EventHandler(this, &Personal Information::Personal Information_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		MyForm2^ fr = gcnew MyForm2();
		fr->Show();
	}
private: System::Void Personal Information_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ name = first->Text;
	String ^ name2 = lastname->Text;
	String ^ id_ = id->Text;
	String ^ ag = age->Text;
	String ^ email = mail->Text;
	String ^ tl = tel->Text;
	String ^ n = na->Text;
	String ^ data2 = name + "  " + name2 + " " + ag + "  " + n+ "  " + email + "  " + tl ;
	String ^ data4= id_;
	listBox1->Items->Add(data2);
	listBox2->Items->Add(data4);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamWriter^ OpenFile = gcnew StreamWriter("personal data.txt");
	for (int i = 0; i < listBox1->Items->Count; i++)
	{
		OpenFile->WriteLine(listBox1->Items[i]);
	}
	OpenFile->Close();


}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ data3 = first->Text + "  " + lastname->Text + "  " + age->Text + "  " + mail->Text + "  " + tel->Text + "  " + na->Text;
		listBox1->Items[listBox1->SelectedIndex] = data3;
		String^ data5 = id->Text;
		listBox2->Items[listBox2->SelectedIndex] = data5;
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamWriter^ OpenFile = gcnew StreamWriter("id.txt");
	for (int i = 0; i < listBox2->Items->Count; i++)
	{
		OpenFile->WriteLine(listBox2->Items[i]);
	}
	OpenFile->Close();
}
};
}
