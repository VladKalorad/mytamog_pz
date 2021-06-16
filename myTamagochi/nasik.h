#pragma once
#include "smert.h"
#include "Language.h"
#include "files.h"
#include "Background.h"
namespace myTamagochi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для nasik
	/// </summary>
	public ref class nasik : public System::Windows::Forms::Form
	{
	public:
		nasik(void)
		{
			InitializeComponent();
			pictureBox1->Image = imageList1->Images[0];
			if (language == 1)
			{
				this->button1->Text = L"Играть";
				this->button2->Text = L"Кормить";
				this->button3->Text = L"Мыть";
				this->button4->Text = L"Спать";
				this->label1->Text = L"Имя питомца";
				this->label2->Text = L"Настроение:";
				this->label3->Text = L"Сытость:";
				this->label4->Text = L"Чистота:";
				this->label5->Text = L"Бодрость:";
				this->button9->Text = L"Введите имя";
				this->настройкиToolStripMenuItem->Text = L"Настройки";
				this->языкToolStripMenuItem->Text = L"Язык";
				this->русскийToolStripMenuItem->Text = L"Русский";
				this->английскийToolStripMenuItem->Text = L"Английский";
				this->цветФонаToolStripMenuItem->Text = L"Цвет фона";
				this->белыйToolStripMenuItem->Text = L"Белый";
				this->желтыйToolStripMenuItem->Text = L"Желтый";
				this->красныйToolStripMenuItem->Text = L"Красный";
				this->фиолетовыйToolStripMenuItem->Text = L"Фиолетовый";
				this->выходToolStripMenuItem->Text = L"Выход";
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
				this->настройкиToolStripMenuItem->Text = L"Settings";
				this->языкToolStripMenuItem->Text = L"Languages";
				this->русскийToolStripMenuItem->Text = L"Russian";
				this->английскийToolStripMenuItem->Text = L"English";
				this->цветФонаToolStripMenuItem->Text = L"Background";
				this->белыйToolStripMenuItem->Text = L"White";
				this->желтыйToolStripMenuItem->Text = L"Yellow";
				this->красныйToolStripMenuItem->Text = L"Red";
				this->выходToolStripMenuItem->Text = L"Exit";
			}
			if (language == 3)
			{
				this->button1->Text = L"Гуляць";
				this->button2->Text = L"Кармiць";
				this->button3->Text = L"Мыць";
				this->button4->Text = L"Спаць";
				this->label1->Text = L"Iмя гадаванца";
				this->label2->Text = L"Настрой:";
				this->label3->Text = L"Сытасць:";
				this->label4->Text = L"Чысцiня:";
				this->label5->Text = L"Бадзёрасць:";
				this->button9->Text = L"Увядзiце iмя";
				this->настройкиToolStripMenuItem->Text = L"Налады";
				this->языкToolStripMenuItem->Text = L"Мова";
				this->русскийToolStripMenuItem->Text = L"Русский";
				this->английскийToolStripMenuItem->Text = L"Английский";
				this->цветФонаToolStripMenuItem->Text = L"Колер фону";
				this->белыйToolStripMenuItem->Text = L"Белы";
				this->желтыйToolStripMenuItem->Text = L"Жоўты";
				this->красныйToolStripMenuItem->Text = L"Чырвоны";
				this->фиолетовыйToolStripMenuItem->Text = L"Фиaлетавы";
				this->выходToolStripMenuItem->Text = L"Выхад";
			}
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~nasik()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
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
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветФонаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ желтыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фиолетовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(nasik::typeid));
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
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->желтыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фиолетовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(67, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 45);
			this->label6->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(345, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 30);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Бодрость:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(367, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 30);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Чистота:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(363, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 30);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Сытость:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(334, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 30);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Настроение:";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button8->Location = System::Drawing::Point(833, 311);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 43);
			this->button8->TabIndex = 47;
			this->button8->Text = L"\?";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &nasik::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button7->Location = System::Drawing::Point(833, 250);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 43);
			this->button7->TabIndex = 46;
			this->button7->Text = L"\?";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &nasik::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button6->Location = System::Drawing::Point(833, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 43);
			this->button6->TabIndex = 45;
			this->button6->Text = L"\?";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &nasik::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic));
			this->button5->Location = System::Drawing::Point(833, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 43);
			this->button5->TabIndex = 44;
			this->button5->Text = L"\?";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &nasik::button5_Click);
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(508, 311);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(304, 43);
			this->progressBar4->TabIndex = 43;
			this->progressBar4->Value = 100;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(508, 250);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(304, 43);
			this->progressBar3->TabIndex = 42;
			this->progressBar3->Value = 100;
			// 
			// progressBar2
			// 
			this->progressBar2->BackColor = System::Drawing::Color::Red;
			this->progressBar2->ForeColor = System::Drawing::Color::Red;
			this->progressBar2->Location = System::Drawing::Point(508, 190);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(304, 43);
			this->progressBar2->TabIndex = 41;
			this->progressBar2->Value = 100;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(508, 131);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(304, 43);
			this->progressBar1->TabIndex = 40;
			this->progressBar1->Value = 100;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(498, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 58);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Имя питомца";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(692, 389);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(186, 43);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Спать";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &nasik::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(481, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 43);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Мыть";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &nasik::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(275, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 43);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Кормить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &nasik::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(64, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 43);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &nasik::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(64, 131);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(257, 222);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"20.png");
			this->imageList1->Images->SetKeyName(1, L"21.png");
			this->imageList1->Images->SetKeyName(2, L"22.png");
			this->imageList1->Images->SetKeyName(3, L"23.png");
			this->imageList1->Images->SetKeyName(4, L"24.png");
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 7400;
			this->timer1->Tick += gcnew System::EventHandler(this, &nasik::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 10100;
			this->timer2->Tick += gcnew System::EventHandler(this, &nasik::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 5600;
			this->timer3->Tick += gcnew System::EventHandler(this, &nasik::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Enabled = true;
			this->timer4->Interval = 3000;
			this->timer4->Tick += gcnew System::EventHandler(this, &nasik::timer4_Tick);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"UniSansSemiBoldItalic", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(303, 28);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(186, 51);
			this->button9->TabIndex = 57;
			this->button9->Text = L"Введите имя";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &nasik::button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(64, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 49);
			this->textBox1->TabIndex = 56;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->настройкиToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(914, 28);
			this->menuStrip1->TabIndex = 58;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->языкToolStripMenuItem,
					this->цветФонаToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->русскийToolStripMenuItem,
					this->английскийToolStripMenuItem, this->белорусскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::русскийToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::английскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::белорусскийToolStripMenuItem_Click);
			// 
			// цветФонаToolStripMenuItem
			// 
			this->цветФонаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->белыйToolStripMenuItem,
					this->желтыйToolStripMenuItem, this->красныйToolStripMenuItem, this->фиолетовыйToolStripMenuItem
			});
			this->цветФонаToolStripMenuItem->Name = L"цветФонаToolStripMenuItem";
			this->цветФонаToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->цветФонаToolStripMenuItem->Text = L"Цвет фона";
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			this->белыйToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->белыйToolStripMenuItem->Text = L"Белый";
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::белыйToolStripMenuItem_Click);
			// 
			// желтыйToolStripMenuItem
			// 
			this->желтыйToolStripMenuItem->Name = L"желтыйToolStripMenuItem";
			this->желтыйToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->желтыйToolStripMenuItem->Text = L"Желтый";
			this->желтыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::желтыйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::красныйToolStripMenuItem_Click);
			// 
			// фиолетовыйToolStripMenuItem
			// 
			this->фиолетовыйToolStripMenuItem->Name = L"фиолетовыйToolStripMenuItem";
			this->фиолетовыйToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->фиолетовыйToolStripMenuItem->Text = L"Фиолетовый";
			this->фиолетовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::фиолетовыйToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &nasik::выходToolStripMenuItem_Click);
			// 
			// nasik
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(914, 488);
			this->Controls->Add(this->menuStrip1);
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
			this->Name = L"nasik";
			this->Text = L"nasik";
			this->Load += gcnew System::EventHandler(this, &nasik::nasik_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		files file;
		file.play_nas();
		pictureBox1->Image = imageList1->Images[3];
		if (progressBar1->Value < 100)
			progressBar1->Value++;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	files file;
	file.eat_nas();
	pictureBox1->Image = imageList1->Images[1];
	if (progressBar2->Value < 100)
		progressBar2->Value++;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	files file;
	file.wash_nas();
	pictureBox1->Image = imageList1->Images[2];
	if (progressBar3->Value < 100)
		progressBar3->Value++;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	files file;
	file.sleep_nas();
	pictureBox1->Image = imageList1->Images[4];
	if (progressBar4->Value < 100)
		progressBar4->Value++;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("Данная шкала показывает какой уровень настроения у вашего питомца, чтобы увеличить её, нажмите кнопку <<ИГРАТЬ>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows what level of mood your pet has, to increase it, press the button << PLAY >>");
	}
	if (language == 3)
	{
		MessageBox::Show("Дадзеная шкала паказвае які ўзровень настрою ў вашага гадаванца, каб павялічыць яе, націсніце кнопку << ГУЛЬНЯ >>");
	}
	else
	{
		MessageBox::Show("Данная шкала показывает какой уровень настроения у вашего питомца, чтобы увеличить её, нажмите кнопку <<ИГРАТЬ>>");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("Данная шкала показывает какой уровень сытости у вашего питомца, чтобы увеличить её, нажмите кнопку <<КОРМИТЬ>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows what level of satiety your pet has, to increase it, press the button << FEED >>");
	}
	if (language == 3)
	{
		MessageBox::Show("Дадзеная шкала паказвае які ўзровень сытасці ў вашага гадаванца, каб павялічыць яе, націсніце кнопку << Кормiць >>");
	}
	else
	{
		MessageBox::Show("Данная шкала показывает какой уровень сытости у вашего питомца, чтобы увеличить её, нажмите кнопку <<КОРМИТЬ>>");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("Данная шкала показывает, что ваш питомец испачкался и его нужно помыть, чтобы увеличить её, нажмите кнопку <<МЫТЬ>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows that your pet is dirty and needs to be washed, to increase it, press the button << WASH >> ");
	}
	if (language == 3)
	{
		MessageBox::Show("Дадзеная шкала паказвае, што ваш гадаванец выпацкаўся і яго трэба памыць, каб павялічыць яе, націсніце кнопку << мыць >>");
	}
	else
	{
		MessageBox::Show("Данная шкала показывает, что ваш питомец испачкался и его нужно помыть, чтобы увеличить её, нажмите кнопку <<МЫТЬ>>");
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (language == 1)
	{
		MessageBox::Show("Данная шкала показывает какой уровень сна у вашего питомца, чтобы увеличить её, нажмите кнопку <<СПАТЬ>>");
	}
	if (language == 2)
	{
		MessageBox::Show("This scale shows what level of sleep your pet has, to increase it, press the button << SLEEP >>");
	}
	if (language == 3)
	{
		MessageBox::Show("Дадзеная шкала паказвае які ўзровень сну ў вашага гадаванца, каб павялічыць яе, націсніце кнопку << спаць >>");
	}
	else
	{
		MessageBox::Show("Данная шкала показывает какой уровень сна у вашего питомца, чтобы увеличить её, нажмите кнопку <<СПАТЬ>>");
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if ((progressBar1->Value < 3) || (progressBar2->Value < 3) || (progressBar3->Value < 3) || (progressBar4->Value < 3))
	{
		smert^ die = gcnew smert();
		die->Show();
		this->Close();
	}
	progressBar1->Value--;
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (progressBar1->Value <= 100 || progressBar4->Value <= 100 || progressBar3->Value <= 100 || progressBar2->Value <= 100)
	{
		if (language == 1)
		{
			this->label6->Text = L"Превосходно";
		}
		if (language == 2)
		{
			this->label6->Text = L"Fine";
		}
		if (language == 3)
		{
			this->label6->Text = L"Цудоуна";
		}
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 70 || progressBar4->Value <= 70 || progressBar3->Value <= 70 || progressBar2->Value <= 70)
	{
		if (language == 1)
		{
			this->label6->Text = L"Отлично";
		}
		if (language == 2)
		{
			this->label6->Text = L"Excellent";
		}
		if (language == 3)
		{
			this->label6->Text = L"Выдатна";
		}
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 50 || progressBar4->Value <= 50 || progressBar3->Value <= 50 || progressBar2->Value <= 50)
	{
		if (language == 1)
		{
			this->label6->Text = L"Нормально";
		}
		if (language == 2)
		{
			this->label6->Text = L"Okey";
		}
		if (language == 3)
		{
			this->label6->Text = L"Нармальна";
		}
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 30 || progressBar4->Value <= 30 || progressBar3->Value <= 30 || progressBar2->Value <= 30)
	{
		if (language == 1)
		{
			this->label6->Text = L"Плохо";
		}
		if (language == 2)
		{
			this->label6->Text = L"Bad";
		}
		if (language == 3)
		{
			this->label6->Text = L"Дрэнна";
		}
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if (progressBar1->Value <= 10 || progressBar4->Value <= 10 || progressBar3->Value <= 10 || progressBar2->Value <= 10)
	{
		if (language == 1)
		{
			this->label6->Text = L"Мерзко";
		}
		if (language == 2)
		{
			this->label6->Text = L"Disgusting";
		}
		if (language == 3)
		{
			this->label6->Text = L"Гiдка";
		}
		this->label6->ForeColor = System::Drawing::Color::Black;
	}
	if ((progressBar1->Value < 3) || (progressBar2->Value < 3) || (progressBar3->Value < 3) || (progressBar4->Value < 3))
	{
		smert^ die = gcnew smert();
		die->Show();
		this->Close();
	}
	progressBar2->Value--;
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	if ((progressBar1->Value < 3) || (progressBar2->Value < 3) || (progressBar3->Value < 3) || (progressBar4->Value < 3))
	{
		smert^ die = gcnew smert();
		die->Show();
		this->Close();
	}
	progressBar3->Value--;
}
private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
	if ((progressBar1->Value < 3) || (progressBar2->Value < 3) || (progressBar3->Value < 3) || (progressBar4->Value < 3))
	{
		smert^ die = gcnew smert();
		die->Show();
		this->Close();
	}
	progressBar4->Value--;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = this->textBox1->Text;
	textBox1->Visible = false;
	button9->Visible = false;
}
private: System::Void nasik_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void белыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 0;
	this->BackColor = Color::White;
}
private: System::Void желтыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 1;
	this->BackColor = Color::Yellow;
}
private: System::Void красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 2;
	this->BackColor = Color::Red;
}
private: System::Void фиолетовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	background = 3;
	this->BackColor = Color::DarkViolet;
}
private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 1;
	{
		this->button1->Text = L"Играть";
		this->button2->Text = L"Кормить";
		this->button3->Text = L"Мыть";
		this->button4->Text = L"Спать";
		this->label1->Text = L"Имя питомца";
		this->label2->Text = L"Настроение:";
		this->label3->Text = L"Сытость:";
		this->label4->Text = L"Чистота:";
		this->label5->Text = L"Бодрость:";
		this->button9->Text = L"Введите имя";
		this->настройкиToolStripMenuItem->Text = L"Настройки";
		this->языкToolStripMenuItem->Text = L"Язык";
		this->русскийToolStripMenuItem->Text = L"Русский";
		this->английскийToolStripMenuItem->Text = L"Английский";
		this->цветФонаToolStripMenuItem->Text = L"Цвет фона";
		this->белыйToolStripMenuItem->Text = L"Белый";
		this->желтыйToolStripMenuItem->Text = L"Желтый";
		this->красныйToolStripMenuItem->Text = L"Красный";
		this->фиолетовыйToolStripMenuItem->Text = L"Фиолетовый";
		this->выходToolStripMenuItem->Text = L"Выход";
	}
}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
		this->настройкиToolStripMenuItem->Text = L"Settings";
		this->языкToolStripMenuItem->Text = L"Languages";
		this->русскийToolStripMenuItem->Text = L"Russian";
		this->английскийToolStripMenuItem->Text = L"English";
		this->цветФонаToolStripMenuItem->Text = L"Background";
		this->белыйToolStripMenuItem->Text = L"White";
		this->желтыйToolStripMenuItem->Text = L"Yellow";
		this->красныйToolStripMenuItem->Text = L"Red";
		this->выходToolStripMenuItem->Text = L"Exit";
	}
}
private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	language = 3;
	{
		this->button1->Text = L"Гуляць";
		this->button2->Text = L"Кармiць";
		this->button3->Text = L"Мыць";
		this->button4->Text = L"Спаць";
		this->label1->Text = L"Iмя гадаванца";
		this->label2->Text = L"Настрой:";
		this->label3->Text = L"Сытасць:";
		this->label4->Text = L"Чысцiня:";
		this->label5->Text = L"Бадзёрасць:";
		this->button9->Text = L"Увядзiце iмя";
		this->настройкиToolStripMenuItem->Text = L"Налады";
		this->языкToolStripMenuItem->Text = L"Мова";
		this->русскийToolStripMenuItem->Text = L"Русский";
		this->английскийToolStripMenuItem->Text = L"Английский";
		this->цветФонаToolStripMenuItem->Text = L"Колер фону";
		this->белыйToolStripMenuItem->Text = L"Белы";
		this->желтыйToolStripMenuItem->Text = L"Жоўты";
		this->красныйToolStripMenuItem->Text = L"Чырвоны";
		this->фиолетовыйToolStripMenuItem->Text = L"Фиaлетавы";
		this->выходToolStripMenuItem->Text = L"Выхад";
	}
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
