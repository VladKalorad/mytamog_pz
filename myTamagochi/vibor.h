#pragma once
#include "regadm.h"
#include "mlekop.h"
#include "fish.h"
#include "nasik.h"
#include "bird.h"
#include "Background.h"
#include "Language.h"
#include "rod.h"
#include"admin.h"
namespace myTamagochi
	{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� vibor
	/// </summary>
	public ref class vibor : public System::Windows::Forms::Form
	{
	public:
		vibor(void)
		{
			InitializeComponent();
			if (language == 1)
			{
				this->button4->Text = L"���������";
				this->button3->Text = L"�����";
				this->button1->Text = L"����";
				this->button2->Text = L"�����";
				this->label1->Text = L"�������� ��� �������";
				this->Text = L"���������";
				this->button5->Text = L"�������� ���";

			}
			if (language == 2)
			{
				this->button4->Text = L"Insect";
				this->button3->Text = L"Kitty";
				this->button1->Text = L"Fish";
				this->button2->Text = L"Bird";
				this->label1->Text = L"Select the genus of your pet";
				this->Text = L"Tamagochi";
				this->button5->Text = L"Add new type";

			}
			if (language == 3)
			{
				this->button4->Text = L"�������";
				this->button3->Text = L"���i�";
				this->button1->Text = L"����";
				this->button2->Text = L"������";
				this->label1->Text = L"�������� ��� ���������";
				this->Text = L"�������i�";
				this->button5->Text = L"������ ������";

			}
			if (admin == 0)
			{
				this->button6->Visible = false;
			}
			if (admin == 1)
			{
				this->label1->Visible = false;
				this->button1->Visible = false;
				this->button2->Visible = false;
				this->button3->Visible = false;
				this->button4->Visible = false;
				this->button5->Visible = false;
				this->button6->Visible = true;
			}
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~vibor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::Button^ button6;








	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(391, 388);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(343, 62);
			this->button4->TabIndex = 27;
			this->button4->Text = L"���������";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &vibor::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(391, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(343, 62);
			this->button3->TabIndex = 26;
			this->button3->Text = L"�����";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &vibor::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(391, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(343, 62);
			this->button1->TabIndex = 25;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &vibor::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(391, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(343, 62);
			this->button2->TabIndex = 24;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &vibor::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(230, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(663, 72);
			this->label1->TabIndex = 23;
			this->label1->Text = L"�������� ��� �������";
			this->label1->Click += gcnew System::EventHandler(this, &vibor::label1_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(391, 472);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(343, 62);
			this->button5->TabIndex = 28;
			this->button5->Text = L"�������� ���";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &vibor::button5_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1049, 28);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->��������ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::�����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->��������ToolStripMenuItem->Text = L"���� ����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &vibor::�����ToolStripMenuItem_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"UniSansBold", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(242, 274);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(637, 62);
			this->button6->TabIndex = 30;
			this->button6->Text = L"���������������� ��������������";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &vibor::button6_Click);
			// 
			// vibor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkViolet;
			this->ClientSize = System::Drawing::Size(1049, 559);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"vibor";
			this->Text = L"���������";
			this->Load += gcnew System::EventHandler(this, &vibor::vibor_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		mlekop^ a = gcnew mlekop();
		a->Show();
		if (background == 0)
			a->BackColor = Color::White;
		if (background == 1)
			a->BackColor = Color::Yellow;
		if (background == 2)
			a->BackColor = Color::Red;
		if (background == 3)
			a->BackColor = Color::DarkViolet;
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vibor_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		bird^ bir = gcnew bird();
		bir->Show();
		if (background == 0)
			bir->BackColor = Color::White;
		if (background == 1)
			bir->BackColor = Color::Yellow;
		if (background == 2)
			bir->BackColor = Color::Red;
		if (background == 3)
			bir->BackColor = Color::DarkViolet;
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	fish^ fis = gcnew fish();
	fis->Show();
	if (background == 0)
		fis->BackColor = Color::White;
	if (background == 1)
		fis->BackColor = Color::Yellow;
	if (background == 2)
		fis->BackColor = Color::Red;
	if (background == 3)
		fis->BackColor = Color::DarkViolet;
	this->Close();
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		nasik^ nas = gcnew nasik();
		nas->Show();
		if (background == 0)
			nas->BackColor = Color::White;
		if (background == 1)
			nas->BackColor = Color::Yellow;
		if (background == 2)
			nas->BackColor = Color::Red;
		if (background == 3)
			nas->BackColor = Color::DarkViolet;
		this->Close();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	rod^ rodik = gcnew rod();
	rodik->Show();
	if (background == 0)
		rodik->BackColor = Color::White;
	if (background == 1)
		rodik->BackColor = Color::Yellow;
	if (background == 2)
		rodik->BackColor = Color::Red;
	if (background == 3)
		rodik->BackColor = Color::DarkViolet;
	this->Close();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	regadm^ n = gcnew regadm();
	n->Show();
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 1;
	{
		this->button4->Text = L"���������";
		this->button3->Text = L"�����";
		this->button1->Text = L"����";
		this->button2->Text = L"�����";
		this->label1->Text = L"�������� ��� �������";
		this->Text = L"���������";
		this->button5->Text = L"�������� ���";

	}
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 2;
	{
		this->button4->Text = L"Insect";
		this->button3->Text = L"Kitty";
		this->button1->Text = L"Fish";
		this->button2->Text = L"Bird";
		this->label1->Text = L"Select the genus of your pet";
		this->Text = L"Tamagochi";
		this->button5->Text = L"Add new type";

	}
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 3;
	{
		this->button4->Text = L"�������";
		this->button3->Text = L"���i�";
		this->button1->Text = L"����";
		this->button2->Text = L"������";
		this->label1->Text = L"�������� ��� ���������";
		this->Text = L"�������i�";
		this->button5->Text = L"������ ������";

	}
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 0;
	this->BackColor = Color::White;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 1;
	this->BackColor = Color::Yellow;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 2;
	this->BackColor = Color::Red;
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 3;
	this->BackColor = Color::DarkViolet;
}

};
}
