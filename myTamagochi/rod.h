#pragma once
#include"Language.h"
#include "Background.h"
namespace myTamagochi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� rod
	/// </summary>
	public ref class rod : public System::Windows::Forms::Form
	{
	public:
		rod(void)
		{
			InitializeComponent();
			this->textBox2->Visible = false;
			this->button10->Visible = false;
			if (language == 1)
			{
				this->button1->Text = L"������";
				this->button2->Text = L"�������";
				this->button3->Text = L"����";
				this->button4->Text = L"�����";
				this->label1->Text = L"��� �������";
				this->label2->Text = L"����������:";
				this->label3->Text = L"�������:";
				this->label4->Text = L"�������:";
				this->label5->Text = L"��������:";
				this->button9->Text = L"������� ���";
				this->button10->Text = L"��� �������";
				this->���������ToolStripMenuItem->Text = L"���������";
				this->����ToolStripMenuItem->Text = L"����";
				this->�������ToolStripMenuItem->Text = L"�������";
				this->����������ToolStripMenuItem->Text = L"����������";
				this->��������ToolStripMenuItem->Text = L"���� ����";
				this->�����ToolStripMenuItem->Text = L"�����";
				this->������ToolStripMenuItem->Text = L"������";
				this->�������ToolStripMenuItem->Text = L"�������";
				this->����������ToolStripMenuItem->Text = L"����������";
				this->�����ToolStripMenuItem->Text = L"�����";
			}
			if (language == 2)
			{
				this->button1->Text = L"Play";
				this->button2->Text = L"Feed";
				this->button3->Text = L"Wash";
				this->button4->Text = L"Sleep";
				this->label1->Text = L"Pet's name";
				this->label2->Text = L"Mood:";
				this->label3->Text = L"Satiety:";
				this->label4->Text = L"Purity:";
				this->label5->Text = L"Cheerfulness:";
				this->button9->Text = L"Enter your name";
				this->button10->Text = L"Pet genus";
				this->���������ToolStripMenuItem->Text = L"Settings";
				this->����ToolStripMenuItem->Text = L"Languages";
				this->�������ToolStripMenuItem->Text = L"Russian";
				this->����������ToolStripMenuItem->Text = L"English";
				this->��������ToolStripMenuItem->Text = L"Background";
				this->�����ToolStripMenuItem->Text = L"White";
				this->������ToolStripMenuItem->Text = L"Yellow";
				this->�������ToolStripMenuItem->Text = L"Red";
				this->�����ToolStripMenuItem->Text = L"Exit";

			}
			if (language == 3)
			{
				this->button1->Text = L"������";
				this->button2->Text = L"����i��";
				this->button3->Text = L"����";
				this->button4->Text = L"�����";
				this->label1->Text = L"I�� ���������";
				this->label2->Text = L"�������:";
				this->label3->Text = L"�������:";
				this->label4->Text = L"����i��:";
				this->label5->Text = L"���������:";
				this->button9->Text = L"�����i�� i��";
				this->button10->Text = L"��� ���������";
				this->���������ToolStripMenuItem->Text = L"������";
				this->����ToolStripMenuItem->Text = L"����";
				this->�������ToolStripMenuItem->Text = L"�������";
				this->����������ToolStripMenuItem->Text = L"����������";
				this->��������ToolStripMenuItem->Text = L"����� ����";
				this->�����ToolStripMenuItem->Text = L"����";
				this->������ToolStripMenuItem->Text = L"����";
				this->�������ToolStripMenuItem->Text = L"�������";
				this->����������ToolStripMenuItem->Text = L"��a������";
				this->�����ToolStripMenuItem->Text = L"�����";
			}
			else
			{
				this->button1->Text = L"������";
				this->button2->Text = L"�������";
				this->button3->Text = L"����";
				this->button4->Text = L"�����";
				this->label1->Text = L"��� �������";
				this->label2->Text = L"����������:";
				this->label3->Text = L"�������:";
				this->label4->Text = L"�������:";
				this->label5->Text = L"��������:";
				this->button9->Text = L"������� ���";
				this->button10->Text = L"��� �������";

			}
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~rod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button9;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label7;
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
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(rod::typeid));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(289, 43);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(186, 51);
			this->button9->TabIndex = 75;
			this->button9->Text = L"������� ���";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &rod::button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(50, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 49);
			this->textBox1->TabIndex = 74;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(53, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 45);
			this->label6->TabIndex = 73;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(331, 326);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 30);
			this->label5->TabIndex = 72;
			this->label5->Text = L"��������:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(353, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 30);
			this->label4->TabIndex = 71;
			this->label4->Text = L"�������:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(349, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 30);
			this->label3->TabIndex = 70;
			this->label3->Text = L"�������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(320, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 30);
			this->label2->TabIndex = 69;
			this->label2->Text = L"����������:";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button8->Location = System::Drawing::Point(819, 324);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 43);
			this->button8->TabIndex = 68;
			this->button8->Text = L"\?";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &rod::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button7->Location = System::Drawing::Point(819, 263);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 43);
			this->button7->TabIndex = 67;
			this->button7->Text = L"\?";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &rod::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button6->Location = System::Drawing::Point(819, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 43);
			this->button6->TabIndex = 66;
			this->button6->Text = L"\?";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &rod::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button5->Location = System::Drawing::Point(819, 144);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 43);
			this->button5->TabIndex = 65;
			this->button5->Text = L"\?";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &rod::button5_Click);
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(494, 324);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(304, 43);
			this->progressBar4->TabIndex = 64;
			this->progressBar4->Value = 100;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(494, 263);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(304, 43);
			this->progressBar3->TabIndex = 63;
			this->progressBar3->Value = 100;
			// 
			// progressBar2
			// 
			this->progressBar2->BackColor = System::Drawing::Color::Red;
			this->progressBar2->ForeColor = System::Drawing::Color::Red;
			this->progressBar2->Location = System::Drawing::Point(494, 203);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(304, 43);
			this->progressBar2->TabIndex = 62;
			this->progressBar2->Value = 100;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(494, 144);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(304, 43);
			this->progressBar1->TabIndex = 61;
			this->progressBar1->Value = 100;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(484, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 58);
			this->label1->TabIndex = 60;
			this->label1->Text = L"��� �������";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(678, 402);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 43);
			this->button4->TabIndex = 59;
			this->button4->Text = L"�����";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &rod::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(467, 402);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 43);
			this->button3->TabIndex = 58;
			this->button3->Text = L"����";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &rod::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(261, 402);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 43);
			this->button2->TabIndex = 57;
			this->button2->Text = L"�������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &rod::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(50, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 43);
			this->button1->TabIndex = 56;
			this->button1->Text = L"������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &rod::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox1->Location = System::Drawing::Point(50, 144);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(257, 222);
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &rod::pictureBox1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 7200;
			this->timer1->Tick += gcnew System::EventHandler(this, &rod::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 9100;
			this->timer2->Tick += gcnew System::EventHandler(this, &rod::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 6500;
			this->timer3->Tick += gcnew System::EventHandler(this, &rod::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Enabled = true;
			this->timer4->Interval = 5400;
			this->timer4->Tick += gcnew System::EventHandler(this, &rod::timer4_Tick);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(289, 43);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(186, 51);
			this->button10->TabIndex = 77;
			this->button10->Text = L"��� �������";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &rod::button10_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(50, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(186, 49);
			this->textBox2->TabIndex = 76;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(44, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 36);
			this->label7->TabIndex = 78;
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
			this->menuStrip1->Size = System::Drawing::Size(914, 28);
			this->menuStrip1->TabIndex = 79;
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
			this->����ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::�����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->��������ToolStripMenuItem->Text = L"���� ����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &rod::�����ToolStripMenuItem_Click);
			// 
			// rod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 488);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"rod";
			this->Text = L"rod";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (progressBar1->Value < 100)
		progressBar1->Value++;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (progressBar2->Value < 100)
		progressBar2->Value++;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (progressBar3->Value < 100)
		progressBar3->Value++;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (progressBar4->Value < 100)
		progressBar4->Value++;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = this->textBox1->Text;
	textBox1->Visible = false;
	button9->Visible = false;
	this->textBox2->Visible = true;
	this->button10->Visible = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("������ ����� ���������� ����� ������� ���������� � ������ �������, ����� ��������� �, ������� ������ <<������>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows what level of mood your pet has, to increase it, press the button << PLAY >>");
	}
	if (language == 3)
	{
		MessageBox::Show("�������� ����� �������� �� �������� ������� � ������ ���������, ��� ��������� ��, �������� ������ << ������ >>");
	}
	else
	{
		MessageBox::Show("������ ����� ���������� ����� ������� ���������� � ������ �������, ����� ��������� �, ������� ������ <<������>>");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("������ ����� ���������� ����� ������� ������� � ������ �������, ����� ��������� �, ������� ������ <<�������>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows what level of satiety your pet has, to increase it, press the button << FEED >>");
	}
	if (language == 3)
	{
		MessageBox::Show("�������� ����� �������� �� �������� ������� � ������ ���������, ��� ��������� ��, �������� ������ << ����i�� >>");
	}
	else
	{
		MessageBox::Show("������ ����� ���������� ����� ������� ������� � ������ �������, ����� ��������� �, ������� ������ <<�������>>");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("������ ����� ����������, ��� ��� ������� ���������� � ��� ����� ������, ����� ��������� �, ������� ������ <<����>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows that your pet is dirty and needs to be washed, to increase it, press the button << WASH >> ");
	}
	if (language == 3)
	{
		MessageBox::Show("�������� ����� ��������, ��� ��� ��������� ��������� � ��� ����� ������, ��� ��������� ��, �������� ������ << ���� >>");
	}
	else
	{
		MessageBox::Show("������ ����� ����������, ��� ��� ������� ���������� � ��� ����� ������, ����� ��������� �, ������� ������ <<����>>");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("������ ����� ���������� ����� ������� ��� � ������ �������, ����� ��������� �, ������� ������ <<�����>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows what level of sleep your pet has, to increase it, press the button << SLEEP >>");
	}
	if (language == 3)
	{
		MessageBox::Show("�������� ����� �������� �� �������� ��� � ������ ���������, ��� ��������� ��, �������� ������ << ����� >>");
	}
	else
	{
		MessageBox::Show("������ ����� ���������� ����� ������� ��� � ������ �������, ����� ��������� �, ������� ������ <<�����>>");
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value--;
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar2->Value--;
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar3->Value--;
}
private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar4->Value--;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label7->Text = this->textBox2->Text;
	this->textBox2->Visible = false;
	this->button10->Visible = false;
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
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 1;
	{
		this->button1->Text = L"������";
		this->button2->Text = L"�������";
		this->button3->Text = L"����";
		this->button4->Text = L"�����";
		this->label1->Text = L"��� �������";
		this->label2->Text = L"����������:";
		this->label3->Text = L"�������:";
		this->label4->Text = L"�������:";
		this->label5->Text = L"��������:";
		this->button9->Text = L"������� ���";
		this->���������ToolStripMenuItem->Text = L"���������";
		this->����ToolStripMenuItem->Text = L"����";
		this->�������ToolStripMenuItem->Text = L"�������";
		this->����������ToolStripMenuItem->Text = L"����������";
		this->��������ToolStripMenuItem->Text = L"���� ����";
		this->�����ToolStripMenuItem->Text = L"�����";
		this->������ToolStripMenuItem->Text = L"������";
		this->�������ToolStripMenuItem->Text = L"�������";
		this->����������ToolStripMenuItem->Text = L"����������";
		this->�����ToolStripMenuItem->Text = L"�����";
	}
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 2;
	{
		this->button1->Text = L"Play";
		this->button2->Text = L"Feed";
		this->button3->Text = L"Wash";
		this->button4->Text = L"Sleep";
		this->label1->Text = L"Pet's name";
		this->label2->Text = L"Mood:";
		this->label3->Text = L"Satiety:";
		this->label4->Text = L"Purity:";
		this->label5->Text = L"Cheerfulness:";
		this->button9->Text = L"Enter your name";
		this->���������ToolStripMenuItem->Text = L"Settings";
		this->����ToolStripMenuItem->Text = L"Languages";
		this->�������ToolStripMenuItem->Text = L"Russian";
		this->����������ToolStripMenuItem->Text = L"English";
		this->��������ToolStripMenuItem->Text = L"Background";
		this->�����ToolStripMenuItem->Text = L"White";
		this->������ToolStripMenuItem->Text = L"Yellow";
		this->�������ToolStripMenuItem->Text = L"Red";
		this->�����ToolStripMenuItem->Text = L"Exit";
	}
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 3;
	{
		this->button1->Text = L"������";
		this->button2->Text = L"����i��";
		this->button3->Text = L"����";
		this->button4->Text = L"�����";
		this->label1->Text = L"I�� ���������";
		this->label2->Text = L"�������:";
		this->label3->Text = L"�������:";
		this->label4->Text = L"����i��:";
		this->label5->Text = L"���������:";
		this->button9->Text = L"�����i�� i��";
		this->���������ToolStripMenuItem->Text = L"������";
		this->����ToolStripMenuItem->Text = L"����";
		this->�������ToolStripMenuItem->Text = L"�������";
		this->����������ToolStripMenuItem->Text = L"����������";
		this->��������ToolStripMenuItem->Text = L"����� ����";
		this->�����ToolStripMenuItem->Text = L"����";
		this->������ToolStripMenuItem->Text = L"����";
		this->�������ToolStripMenuItem->Text = L"�������";
		this->����������ToolStripMenuItem->Text = L"��a������";
		this->�����ToolStripMenuItem->Text = L"�����";
	}
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
