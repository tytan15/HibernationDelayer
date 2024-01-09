#pragma once
#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
#include <locale>
namespace HibernationDelayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HibernationDelayer
	/// </summary>
	public ref class HibernationDelayer : public System::Windows::Forms::Form
	{
	public:
		HibernationDelayer(void)
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
		~HibernationDelayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txGodziny;
	protected:

	private: System::Windows::Forms::Label^ lblGodziny;

	private: System::Windows::Forms::Label^ lblMinuty;
	private: System::Windows::Forms::TextBox^ txMinuty;
	private: System::Windows::Forms::Button^ btnHibernacja;
	private: System::Windows::Forms::TextBox^ txSekundy;
	private: System::Windows::Forms::Label^ lblSekundy;


	private: System::Windows::Forms::Label^ lblPozostaly;
	private: System::Windows::Forms::Timer^ timer1;
		   static bool exitFlag = false;
	private: System::Windows::Forms::Button^ btnAnuluj;
	private: System::Windows::Forms::Button^ btnHiberTeraz;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ lblPozostalyVal;



	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ lblGozinaBlad;
	private: System::Windows::Forms::Label^ lblMinutyBlad;
	private: int pozostaly_czas = 0; //przechowywanie aktualnego czasu do hibernacji
	private: System::Windows::Forms::Button^ btnHamburger;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ polskiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;

	private: int pozostaly_czas_start = 0; //Zapamiêtanie czasu na jaki ustawiono zahibernowanie
	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HibernationDelayer::typeid));
			this->txGodziny = (gcnew System::Windows::Forms::TextBox());
			this->lblGodziny = (gcnew System::Windows::Forms::Label());
			this->lblMinuty = (gcnew System::Windows::Forms::Label());
			this->txMinuty = (gcnew System::Windows::Forms::TextBox());
			this->btnHibernacja = (gcnew System::Windows::Forms::Button());
			this->txSekundy = (gcnew System::Windows::Forms::TextBox());
			this->lblSekundy = (gcnew System::Windows::Forms::Label());
			this->lblPozostaly = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnAnuluj = (gcnew System::Windows::Forms::Button());
			this->btnHiberTeraz = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->lblPozostalyVal = (gcnew System::Windows::Forms::Label());
			this->lblGozinaBlad = (gcnew System::Windows::Forms::Label());
			this->lblMinutyBlad = (gcnew System::Windows::Forms::Label());
			this->btnHamburger = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->polskiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->contextMenuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txGodziny
			// 
			this->txGodziny->Location = System::Drawing::Point(5, 18);
			this->txGodziny->Name = L"txGodziny";
			this->txGodziny->Size = System::Drawing::Size(60, 20);
			this->txGodziny->TabIndex = 0;
			this->txGodziny->Text = L"0";
			this->txGodziny->Click += gcnew System::EventHandler(this, &HibernationDelayer::txGodziny_Click);
			this->txGodziny->TextChanged += gcnew System::EventHandler(this, &HibernationDelayer::txGodziny_TextChanged);
			// 
			// lblGodziny
			// 
			this->lblGodziny->AutoSize = true;
			this->lblGodziny->Location = System::Drawing::Point(5, 5);
			this->lblGodziny->Name = L"lblGodziny";
			this->lblGodziny->Size = System::Drawing::Size(45, 13);
			this->lblGodziny->TabIndex = 1;
			this->lblGodziny->Text = L"Godziny";
			this->lblGodziny->Click += gcnew System::EventHandler(this, &HibernationDelayer::label1_Click);
			// 
			// lblMinuty
			// 
			this->lblMinuty->AutoSize = true;
			this->lblMinuty->Location = System::Drawing::Point(170, 5);
			this->lblMinuty->Name = L"lblMinuty";
			this->lblMinuty->Size = System::Drawing::Size(38, 13);
			this->lblMinuty->TabIndex = 2;
			this->lblMinuty->Text = L"Minuty";
			this->lblMinuty->Click += gcnew System::EventHandler(this, &HibernationDelayer::label1_Click_1);
			// 
			// txMinuty
			// 
			this->txMinuty->Location = System::Drawing::Point(170, 18);
			this->txMinuty->Name = L"txMinuty";
			this->txMinuty->Size = System::Drawing::Size(60, 20);
			this->txMinuty->TabIndex = 3;
			this->txMinuty->Text = L"0";
			this->txMinuty->Click += gcnew System::EventHandler(this, &HibernationDelayer::txMinuty_Click);
			this->txMinuty->TextChanged += gcnew System::EventHandler(this, &HibernationDelayer::txMinuty_TextChanged);
			// 
			// btnHibernacja
			// 
			this->btnHibernacja->Location = System::Drawing::Point(18, 98);
			this->btnHibernacja->Name = L"btnHibernacja";
			this->btnHibernacja->Size = System::Drawing::Size(121, 23);
			this->btnHibernacja->TabIndex = 4;
			this->btnHibernacja->Text = L"Zaplanuj hibernacjê";
			this->btnHibernacja->UseVisualStyleBackColor = true;
			this->btnHibernacja->Click += gcnew System::EventHandler(this, &HibernationDelayer::btnHibernacja_Click);
			// 
			// txSekundy
			// 
			this->txSekundy->Location = System::Drawing::Point(74, 69);
			this->txSekundy->Name = L"txSekundy";
			this->txSekundy->ReadOnly = true;
			this->txSekundy->Size = System::Drawing::Size(100, 20);
			this->txSekundy->TabIndex = 5;
			// 
			// lblSekundy
			// 
			this->lblSekundy->AutoSize = true;
			this->lblSekundy->Location = System::Drawing::Point(77, 53);
			this->lblSekundy->Name = L"lblSekundy";
			this->lblSekundy->Size = System::Drawing::Size(97, 13);
			this->lblSekundy->TabIndex = 6;
			this->lblSekundy->Text = L"Obliczone sekundy";
			this->lblSekundy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPozostaly
			// 
			this->lblPozostaly->AutoSize = true;
			this->lblPozostaly->Location = System::Drawing::Point(5, 10);
			this->lblPozostaly->Name = L"lblPozostaly";
			this->lblPozostaly->Size = System::Drawing::Size(79, 13);
			this->lblPozostaly->TabIndex = 8;
			this->lblPozostaly->Text = L"Pozosta³y czas";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &HibernationDelayer::timer1_Tick);
			// 
			// btnAnuluj
			// 
			this->btnAnuluj->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAnuluj.Image")));
			this->btnAnuluj->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnAnuluj->Location = System::Drawing::Point(197, 94);
			this->btnAnuluj->Name = L"btnAnuluj";
			this->btnAnuluj->Size = System::Drawing::Size(75, 75);
			this->btnAnuluj->TabIndex = 9;
			this->btnAnuluj->Text = L"Zatrzymaj odliczanie";
			this->btnAnuluj->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnAnuluj->UseVisualStyleBackColor = true;
			this->btnAnuluj->Click += gcnew System::EventHandler(this, &HibernationDelayer::btnAnuluj_Click);
			// 
			// btnHiberTeraz
			// 
			this->btnHiberTeraz->BackColor = System::Drawing::Color::RosyBrown;
			this->btnHiberTeraz->Location = System::Drawing::Point(18, 127);
			this->btnHiberTeraz->Name = L"btnHiberTeraz";
			this->btnHiberTeraz->Size = System::Drawing::Size(121, 23);
			this->btnHiberTeraz->TabIndex = 10;
			this->btnHiberTeraz->Text = L"Hibernacja TERAZ";
			this->btnHiberTeraz->UseVisualStyleBackColor = false;
			this->btnHiberTeraz->Click += gcnew System::EventHandler(this, &HibernationDelayer::btnHiberTeraz_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->progressBar1->Location = System::Drawing::Point(4, 58);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(255, 10);
			this->progressBar1->TabIndex = 11;
			// 
			// lblPozostalyVal
			// 
			this->lblPozostalyVal->AutoSize = true;
			this->lblPozostalyVal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblPozostalyVal->Location = System::Drawing::Point(5, 30);
			this->lblPozostalyVal->Name = L"lblPozostalyVal";
			this->lblPozostalyVal->Size = System::Drawing::Size(111, 24);
			this->lblPozostalyVal->TabIndex = 12;
			this->lblPozostalyVal->Text = L"0h 0min 0s";
			// 
			// lblGozinaBlad
			// 
			this->lblGozinaBlad->AutoSize = true;
			this->lblGozinaBlad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblGozinaBlad->ForeColor = System::Drawing::Color::Red;
			this->lblGozinaBlad->Location = System::Drawing::Point(5, 40);
			this->lblGozinaBlad->Name = L"lblGozinaBlad";
			this->lblGozinaBlad->Size = System::Drawing::Size(41, 13);
			this->lblGozinaBlad->TabIndex = 13;
			this->lblGozinaBlad->Text = L"label1";
			this->lblGozinaBlad->Visible = false;
			// 
			// lblMinutyBlad
			// 
			this->lblMinutyBlad->AutoSize = true;
			this->lblMinutyBlad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblMinutyBlad->ForeColor = System::Drawing::Color::Red;
			this->lblMinutyBlad->Location = System::Drawing::Point(170, 40);
			this->lblMinutyBlad->Name = L"lblMinutyBlad";
			this->lblMinutyBlad->Size = System::Drawing::Size(41, 13);
			this->lblMinutyBlad->TabIndex = 14;
			this->lblMinutyBlad->Text = L"label1";
			this->lblMinutyBlad->Visible = false;
			// 
			// btnHamburger
			// 
			this->btnHamburger->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnHamburger->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnHamburger->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHamburger.Image")));
			this->btnHamburger->Location = System::Drawing::Point(250, 3);
			this->btnHamburger->Margin = System::Windows::Forms::Padding(0);
			this->btnHamburger->Name = L"btnHamburger";
			this->btnHamburger->Size = System::Drawing::Size(32, 32);
			this->btnHamburger->TabIndex = 15;
			this->btnHamburger->UseVisualStyleBackColor = false;
			this->btnHamburger->Click += gcnew System::EventHandler(this, &HibernationDelayer::button1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->polskiToolStripMenuItem,
					this->englishToolStripMenuItem, this->toolStripSeparator, this->infoToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(113, 76);
			// 
			// polskiToolStripMenuItem
			// 
			this->polskiToolStripMenuItem->Name = L"polskiToolStripMenuItem";
			this->polskiToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->polskiToolStripMenuItem->Text = L"Polski";
			this->polskiToolStripMenuItem->Click += gcnew System::EventHandler(this, &HibernationDelayer::polskiToolStripMenuItem_Click);
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->englishToolStripMenuItem->Text = L"English";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &HibernationDelayer::englishToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(109, 6);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->infoToolStripMenuItem->Text = L"info";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->lblPozostalyVal);
			this->groupBox1->Controls->Add(this->progressBar1);
			this->groupBox1->Controls->Add(this->lblPozostaly);
			this->groupBox1->Location = System::Drawing::Point(10, 175);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(264, 80);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->txSekundy);
			this->panel1->Controls->Add(this->lblSekundy);
			this->panel1->Controls->Add(this->lblMinutyBlad);
			this->panel1->Controls->Add(this->lblGozinaBlad);
			this->panel1->Controls->Add(this->btnHamburger);
			this->panel1->Controls->Add(this->txMinuty);
			this->panel1->Controls->Add(this->lblMinuty);
			this->panel1->Controls->Add(this->lblGodziny);
			this->panel1->Controls->Add(this->txGodziny);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(285, 92);
			this->panel1->TabIndex = 17;
			// 
			// HibernationDelayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnAnuluj);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnHiberTeraz);
			this->Controls->Add(this->btnHibernacja);
			this->MaximumSize = System::Drawing::Size(300, 300);
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"HibernationDelayer";
			this->Text = L"hibernacja";
			this->Load += gcnew System::EventHandler(this, &HibernationDelayer::hibernacja_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
		   /*Funkcja zaznaczaj¹ca ca³y tekst pola godziny po umieszczeniu kursora w tym polu*/
	private: System::Void txGodziny_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txGodziny->SelectAll();
	}
		   /*Funkcja zaznaczaj¹ca ca³y tekst pola minut po umieszczeniu kursora w tym polu*/
	private: System::Void txMinuty_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txMinuty->SelectAll();
	}
		   /*Funkcja realizuj¹ca operacje po zmianie wartoœci w polu godziny*/
	private: System::Void txGodziny_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int godziny; //Waroœæ godziny uzupe³niona w polu
		//weryfikacja wartoœci w polu godziny, czy jest liczb¹ ca³kowit¹.
		//W przeciwnym razie wyœwietlenie etykiety z komunikatem
		if (!int::TryParse(this->txGodziny->Text, godziny)) {
			this->lblGozinaBlad->Visible = true;
			this->txSekundy->Text = "";
			return;
		}
		else { //wprowadzono liczbê ca³koit¹ - wykaszenie og³oszenia o b³edzie
			this->lblGozinaBlad->Visible = false;
		}

		int minuty; //wartoœæ minut wprowadzona w polu
		//weryfikacja poprawnoœci wpisanych mitut, czy jest liczb¹ ca³kowit¹
		//W przeciwym razie eytkieta jko komunikat b³edu
		if (!int::TryParse(this->txMinuty->Text, minuty)) {
			this->lblMinutyBlad->Visible = true;
			this->txSekundy->Text = "";
			return;

		}
		else {//wprowadzono liczbê ca³koit¹ - wykaszenie og³oszenia o b³edzie
			this->lblMinutyBlad->Visible = false;
		}
		//Przeliczenie wprowadzonych wartoœci godzin i minut na sekundy
		int sekundy = minuty * 60 + godziny * 3600;
		//zapis wartoœci sekund do odpowiedniego pola
		this->txSekundy->Text = System::Convert::ToString(sekundy);
	}
		   /*Funkcja realizuj¹ca operacje po zmianie wartoœci w polu minuty*/
	private: System::Void txMinuty_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int minuty;
		//Weryfikacja poprawnoœci uzupe³nienia minut - czy liczba ca³kowita
		if (!int::TryParse(this->txMinuty->Text, minuty)) {
			this->lblMinutyBlad->Visible = true;
			this->txSekundy->Text = "";
			return;
		}
		else {
			this->lblMinutyBlad->Visible = false;
		}
		int godziny;
		//Weryfikacja poprawnoœci uzupe³nienia godzin - czy liczba ca³kowita
		if (!int::TryParse(this->txGodziny->Text, godziny)) {
			this->lblGozinaBlad->Visible = true;
			this->txSekundy->Text = "";
			return;
		}
		else {
			this->lblGozinaBlad->Visible = false;
		}
		//obliczenie sekund na podstawie podanych godzin i minut
		int sekundy = minuty * 60 + godziny * 3600;
		//Uzupe³nienia pola ze obliczonymi sekndami
		this->txSekundy->Text = System::Convert::ToString(sekundy);
	}
		   /*Funkca wykonywana po klikniêciu przycisku zaplanowania hibernacji*/
	private: System::Void btnHibernacja_Click(System::Object^ sender, System::EventArgs^ e) {
		int sekundy;
		//odczytanie sekund z pola, gdzie zapisane po obliczeniu z godzin i minut. Weryfikacja czy liczba ca³kowita
		if (!int::TryParse(this->txSekundy->Text, sekundy)) {
			return;
		}
		//zapamiêtanie czasu w sekundach do póŸniejszego u¿ycia
		pozostaly_czas = sekundy;
		pozostaly_czas_start = sekundy;
		//uruchomienie timera, odliczaj¹cego zadany czas
		this->timer1->Enabled = true;
		timer1->Start();
	}


		   /*funkcja konweruj¹ca wartoœæ czasu w sekundach na ci¹g tekstowu umieszczany w odpowiednim polu*/
	private: System::String^ Sekundy2string(int^ sekundy) {
		//Zmiana koloru czasu gdy mniej ni¿ minuta
		if (*sekundy < 60 && *sekundy != 0)
			this->lblPozostalyVal->ForeColor = Color::FromName("Red");
		else
			this->lblPozostalyVal->ResetForeColor();
		if (*sekundy == 0) {
			return "_h _min _s";
		}
		else {
			int godziny, minuty, sec;
			//wyznaczenie poszczególnych sk³adowych pozosta³ego czasu
			godziny = System::Convert::ToInt32(trunc(*sekundy / 3600));
			minuty = System::Convert::ToInt32(trunc((*sekundy - godziny * 3600) / 60));
			sec = System::Convert::ToInt32(trunc((*sekundy - godziny * 3600 - minuty * 60)));
			return System::Convert::ToString(godziny) + "h " + System::Convert::ToString(minuty) + "min " + System::Convert::ToString(sec) + "s";
		}

	}
		   /*funkcja wykonywana w ka¿dym kroku czasowym
		   obliczenie up³ywaj¹cego czasu
		   Wyœwietlenie pozosta³ego czasu w przyjaznej formie i paska postêpu
		   */
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//wyznaczenie czasu pozosta³ego do hibernacji pomniejszonego o interwa³ kroku czasowego
		pozostaly_czas = pozostaly_czas - this->timer1->Interval / 1000;
		//wyœwietlanie pozosta³ego czasu i paska postêpu
		this->lblPozostalyVal->Text = Sekundy2string(pozostaly_czas);
		this->progressBar1->Value = System::Convert::ToInt32(100 - trunc(100 * pozostaly_czas / pozostaly_czas_start));

		//wykonanie akcji gdy czas dobieg³ do koñca
		if (pozostaly_czas <= 0)
			akcja();
	}
		   /*funkcja wykonuj¹ca zatrzymanie timera, wykonuj¹ca hibernacjê i samozamkniêcie aplikacji*/
	private: System::Void akcja() {
		timer1->Stop();
		system("shutdown /h");
		Application::Exit();
	}
		   /*Funkcja wykonujaca przerwanie odliczania po naciœniêciu odpowiedniego przycisku*/
	private: System::Void btnAnuluj_Click(System::Object^ sender, System::EventArgs^ e) {
		//zatrzymanie timera
		timer1->Stop();
		this->timer1->Enabled = false;
		//wyserowanie czasu pozosta³ego do hibernacji
		pozostaly_czas = 0;
		this->lblPozostalyVal->Text = Sekundy2string(pozostaly_czas);
		this->progressBar1->Value = 0;
	}
		   /*Wykonanie hibernacji  natychmiastowej po aktywacji stosownego przycisku*/
	private: System::Void btnHiberTeraz_Click(System::Object^ sender, System::EventArgs^ e) {
		system("shutdown /h");
		Application::Exit();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		contextMenuStrip1->Show(btnHamburger, btnHamburger->Width - contextMenuStrip1->Width, 32);

	}
		   //ustawienie etykiet na jêzyk polski
	private: System::Void polskiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		etykietyPL();

	}
		   //ustawienie etykiet angielskich
	private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		etykietyEN();
	}
		   /*Funkcja ustawiaj¹ca nazwy etykiet w jêzyku polskim*/
	private: void etykietyPL() {
		this->lblGodziny->Text = "Godziny";
		this->lblGozinaBlad->Text = "B³êdna wartoœæ";
		this->lblMinuty->Text = "Minuty";
		this->lblMinutyBlad->Text = "B³êdna wartoœæ";
		this->lblPozostaly->Text = "Pozosta³y czas";
		this->lblSekundy->Text = "Obliczone sekundy";
		this->btnAnuluj->Text = "Zatrzymaj odliczanie";
		this->btnHibernacja->Text = "Zaplanuj hibernacjê";
		this->btnHiberTeraz->Text = "Hibernuj TERAZ";
	}
		   /*Funkcja ustawiaj¹ca nazwy etykiet w jêzyku angielskim*/
	private: void etykietyEN() {
		this->lblGodziny->Text = "Hours";
		this->lblGozinaBlad->Text = "Wrong value";
		this->lblMinuty->Text = "Minutes";
		this->lblMinutyBlad->Text = "Wrong value";
		this->lblPozostaly->Text = "Remaining time";
		this->lblSekundy->Text = "Counted seconds";
		this->btnAnuluj->Text = "Stop counting";
		this->btnHibernacja->Text = "Schedule hibernation";
		this->btnHiberTeraz->Text = "Hibernate NOW";
	}
		   //uruchamiane przy starcie aplikacji. Sprawdzay jest jêzyk systemu w celu automatycznego prze³aczenia jêzyka aplikacji
	private: System::Void hibernacja_Load(System::Object^ sender, System::EventArgs^ e) {
		//odczyt aktualnego jezyka systemu
		std::string jezyk = setlocale(LC_ALL, "");
		//sprawdzenie czy aktualny jêzyk to PL
		if (jezyk.compare("Polish_Poland.1250") == 0)
			etykietyPL();
		else
			etykietyEN();
		//ustawienie etykiety czasu do hibernacji
		this->lblPozostalyVal->Text = Sekundy2string(pozostaly_czas);



	}
	};
}
