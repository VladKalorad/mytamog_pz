#pragma once
#include <fstream>
#include"vibor.h"
#include "files.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include "Language.h"
namespace myTamagochi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для reg
	/// </summary>
	public ref class reg : public System::Windows::Forms::Form
	{
	public:
		reg(void)
		{
			InitializeComponent();
			if (language == 1)
			{
				this->label4->Text = L"Повторите\nпароль:";
				this->button1->Text = L"Регистрация";
				this->label3->Text = L"Пароль:";
				this->label2->Text = L"Логин:";
				this->label1->Text = L"Регистрация";
				this->Text = L"Тамагочик";

			}
			if (language == 2)
			{
				this->label4->Text = L"Repeat\npassword:";
				this->button1->Text = L"Registration:";
				this->label3->Text = L"Password:";
				this->label2->Text = L"User:";
				this->label1->Text = L"Registration";
				this->Text = L"Tamagochi";

			}
			if (language == 3)
			{
				this->label4->Text = L"Паўтарыце\nпароль:";
				this->button1->Text = L"Рэгiстрацыя";
				this->label3->Text = L"Лагiн:";
				this->label2->Text = L"Лагiн:";
				this->label1->Text = L"Рэгiстрацыя";
				this->Text = L"Тамагочык";

			}
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~reg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(149, 369);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 96);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Повторите\nпароль:";
			this->label4->Click += gcnew System::EventHandler(this, &reg::label4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(402, 378);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(377, 75);
			this->textBox3->TabIndex = 24;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &reg::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansBold", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(402, 478);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(377, 54);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Регистрация";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &reg::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(187, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 58);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Пароль:";
			this->label3->Click += gcnew System::EventHandler(this, &reg::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(196, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 58);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Логин:";
			this->label2->Click += gcnew System::EventHandler(this, &reg::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(402, 275);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(377, 75);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &reg::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(402, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(377, 75);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &reg::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(396, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 72);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Регистрация";
			this->label1->Click += gcnew System::EventHandler(this, &reg::label1_Click);
			// 
			// reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1027, 612);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"reg";
			this->Text = L"Тамагочик";
			this->Load += gcnew System::EventHandler(this, &reg::reg_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		


	
#pragma endregion
		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void reg_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		files file;
		if (textBox2->Text == textBox3->Text && textBox2->Text != "" && textBox3->Text != "") {
			msclr::interop::marshal_context context;
			std::string login = context.marshal_as<std::string>(textBox1->Text);
			std::string password = context.marshal_as<std::string>(textBox3->Text);
			file.write(login, password);
			this->Hide();

		}
		else {
			MessageBox::Show("Error");
		}
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
