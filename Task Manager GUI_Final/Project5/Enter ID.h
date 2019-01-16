#pragma once
#include "Personal Information.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Enter ID
	/// </summary>
	public ref class Enter ID : public System::Windows::Forms::Form
	{
	public:
		Enter ID(void)
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
		~Enter ID()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(343, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Your ID";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"New";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Enter ID::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(453, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Old";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Enter ID::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(307, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 22);
			this->textBox1->TabIndex = 3;
			// 
			// Enter ID
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(836, 345);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Enter ID";
			this->Text = L"Enter ID";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Personal Information^ da = gcnew Personal Information();
		da->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamReader^ sr = gcnew StreamReader("id.txt");
		while (!sr->EndOfStream)
		{
			if (textBox1->Text == sr->ReadLine())
			{
				MyForm2 ^ ds = gcnew MyForm2();
				ds->ShowDialog();
			}
			else
			{
				MessageBox::Show("Your ID Is not found ");
			}

		}
		sr->Close();
	

		/*this->Hide();
		MyForm2^ ds = gcnew MyForm2();
		ds->Show();*/
	}
};
}
