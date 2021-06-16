#pragma once
#include "Language.h"
namespace myTamagochi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для smert
	/// </summary>
	public ref class smert : public System::Windows::Forms::Form
	{
	public:
		smert(void)
		{
			InitializeComponent();
			if (language == 1)
			{
				this->label1->Text = L"ВЫ ПРОИГРАЛИ";
				this->button2->Text = L"ВЫХОД";
			}
			if (language == 2)
			{
				this->label1->Text = L"YOU LOSE";
				this->button2->Text = L"EXIT";
			}
			if (language == 3)
			{
				this->label1->Text = L"ВЫ ПРАЙГРАЛI";
				this->button2->Text = L"ВЫХАД";
			}
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~smert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Xtreem 2 Personal Use", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(211, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(707, 117);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ВЫ ПРОИГРАЛИ";
			this->label1->Click += gcnew System::EventHandler(this, &smert::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(231, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(673, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ВЫХОД";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &smert::button2_Click);
			// 
			// smert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1088, 495);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Name = L"smert";
			this->Text = L"smert";
			this->Load += gcnew System::EventHandler(this, &smert::smert_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы действительно хотите выйти?", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void smert_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
