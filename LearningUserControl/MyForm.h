#pragma once
#include <iostream>

using namespace std;

namespace LearningUserControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnlMain;
	private: System::Windows::Forms::Label^ lbSitemap;
	private: System::Windows::Forms::Label^ lbInfo;
	private: System::Windows::Forms::Label^ lbDashboard;
	private: System::Windows::Forms::Label^ lbQnA;
	private: System::Windows::Forms::Label^ lbProducts;
	private: System::Windows::Forms::Label^ lbInstroduce;
	private: System::Windows::Forms::Label^ lbHome;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->lbSitemap = (gcnew System::Windows::Forms::Label());
			this->lbInfo = (gcnew System::Windows::Forms::Label());
			this->lbDashboard = (gcnew System::Windows::Forms::Label());
			this->lbQnA = (gcnew System::Windows::Forms::Label());
			this->lbProducts = (gcnew System::Windows::Forms::Label());
			this->lbInstroduce = (gcnew System::Windows::Forms::Label());
			this->lbHome = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->pnlMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 620);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->button7, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->button6, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 200)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(200, 620);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Gulim", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(3, 557);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(194, 60);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Sitemap";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Gulim", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(3, 498);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(194, 53);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Info";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Gulim", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(3, 439);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 53);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Dashboard";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Gulim", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(3, 380);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(194, 53);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Q && A ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Gulim", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(3, 321);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Products";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gulim", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(3, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 53);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Instroduce";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(194, 194);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gulim", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(3, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1040, 59);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gulim", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->ForeColor = System::Drawing::Color::BlueViolet;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1040, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"this is a example  , I\'m test panel form!!!!!!!!!!!!!!!!!!!.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlMain
			// 
			this->pnlMain->BackColor = System::Drawing::Color::SeaShell;
			this->pnlMain->Controls->Add(this->lbSitemap);
			this->pnlMain->Controls->Add(this->lbInfo);
			this->pnlMain->Controls->Add(this->lbDashboard);
			this->pnlMain->Controls->Add(this->lbQnA);
			this->pnlMain->Controls->Add(this->lbProducts);
			this->pnlMain->Controls->Add(this->lbInstroduce);
			this->pnlMain->Controls->Add(this->lbHome);
			this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Location = System::Drawing::Point(200, 59);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(1040, 561);
			this->pnlMain->TabIndex = 2;
			// 
			// lbSitemap
			// 
			this->lbSitemap->Font = (gcnew System::Drawing::Font(L"Gulim", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbSitemap->Location = System::Drawing::Point(72, 369);
			this->lbSitemap->Name = L"lbSitemap";
			this->lbSitemap->Size = System::Drawing::Size(267, 64);
			this->lbSitemap->TabIndex = 6;
			this->lbSitemap->Text = L"SiteMap";
			// 
			// lbInfo
			// 
			this->lbInfo->Font = (gcnew System::Drawing::Font(L"Gulim", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbInfo->Location = System::Drawing::Point(72, 369);
			this->lbInfo->Name = L"lbInfo";
			this->lbInfo->Size = System::Drawing::Size(345, 64);
			this->lbInfo->TabIndex = 5;
			this->lbInfo->Text = L"Infomation";
			// 
			// lbDashboard
			// 
			this->lbDashboard->Font = (gcnew System::Drawing::Font(L"Gulim", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbDashboard->Location = System::Drawing::Point(495, 108);
			this->lbDashboard->Name = L"lbDashboard";
			this->lbDashboard->Size = System::Drawing::Size(355, 64);
			this->lbDashboard->TabIndex = 4;
			this->lbDashboard->Text = L"Dashboard";
			// 
			// lbQnA
			// 
			this->lbQnA->Font = (gcnew System::Drawing::Font(L"Gulim", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbQnA->Location = System::Drawing::Point(519, 369);
			this->lbQnA->Name = L"lbQnA";
			this->lbQnA->Size = System::Drawing::Size(205, 64);
			this->lbQnA->TabIndex = 3;
			this->lbQnA->Text = L"Q && A";
			// 
			// lbProducts
			// 
			this->lbProducts->Font = (gcnew System::Drawing::Font(L"Gulim", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbProducts->Location = System::Drawing::Point(78, 187);
			this->lbProducts->Name = L"lbProducts";
			this->lbProducts->Size = System::Drawing::Size(296, 64);
			this->lbProducts->TabIndex = 2;
			this->lbProducts->Text = L"Products";
			// 
			// lbInstroduce
			// 
			this->lbInstroduce->Font = (gcnew System::Drawing::Font(L"Gulim", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbInstroduce->Location = System::Drawing::Point(483, 241);
			this->lbInstroduce->Name = L"lbInstroduce";
			this->lbInstroduce->Size = System::Drawing::Size(345, 64);
			this->lbInstroduce->TabIndex = 1;
			this->lbInstroduce->Text = L"Instroduce";
			// 
			// lbHome
			// 
			this->lbHome->Font = (gcnew System::Drawing::Font(L"Gulim", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lbHome->Location = System::Drawing::Point(178, 108);
			this->lbHome->Name = L"lbHome";
			this->lbHome->Size = System::Drawing::Size(205, 64);
			this->lbHome->TabIndex = 0;
			this->lbHome->Text = L"Home";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 620);
			this->Controls->Add(this->pnlMain);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"유저 컨트롤 메인 폼";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->pnlMain->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->button1->PerformClick();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		lbHome->Dock = DockStyle::Fill;
		lbHome->Visible = true;
		lbDashboard->Visible = false;
		lbInfo->Visible = false;
		lbInstroduce->Visible = false;
		lbProducts->Visible = false;
		lbQnA->Visible = false;
		lbSitemap->Visible = false;

		cout << "click Home" << endl;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	lbInstroduce->Dock = DockStyle::Fill;
	lbHome->Visible = false;
	lbDashboard->Visible = false;
	lbInfo->Visible = false;
	lbInstroduce->Visible = true;
	lbProducts->Visible = false;
	lbQnA->Visible = false;
	lbSitemap->Visible = false;

	cout << "click Instroduce" << endl;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	lbProducts->Dock = DockStyle::Fill;
	lbHome->Visible = false;
	lbDashboard->Visible = false;
	lbInfo->Visible = false;
	lbInstroduce->Visible = false;
	lbProducts->Visible = true;
	lbQnA->Visible = false;
	lbSitemap->Visible = false;

	cout << "click Products" << endl;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	lbQnA->Dock = DockStyle::Fill;
	lbHome->Visible = false;
	lbDashboard->Visible = false;
	lbInfo->Visible = false;
	lbInstroduce->Visible = false;
	lbProducts->Visible = false;
	lbQnA->Visible = true;
	lbSitemap->Visible = false;

	cout << "click Question and Answer" << endl;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {


	lbDashboard->Dock = DockStyle::Fill;
	lbHome->Visible = false;
	lbDashboard->Visible = true;
	lbInfo->Visible = false;
	lbInstroduce->Visible = false;
	lbProducts->Visible = false;
	lbQnA->Visible = false;
	lbSitemap->Visible = false;

	cout << "click Dash Board" << endl;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {


	lbInfo->Dock = DockStyle::Fill;
	lbHome->Visible = false;
	lbDashboard->Visible = false;
	lbInfo->Visible = true;
	lbInstroduce->Visible = false;
	lbProducts->Visible = false;
	lbQnA->Visible = false;
	lbSitemap->Visible = false;

	cout << "click Infomation" << endl;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	lbSitemap->Dock = DockStyle::Fill;
	lbHome->Visible = false;
	lbDashboard->Visible = false;
	lbInfo->Visible = false;
	lbInstroduce->Visible = false;
	lbProducts->Visible = false;
	lbQnA->Visible = false;
	lbSitemap->Visible = true;

	cout << "click Site Map" << endl;
}
};
}
