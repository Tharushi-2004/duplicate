#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GalleryForm
	/// </summary>
	public ref class GalleryForm : public System::Windows::Forms::Form
	{
	public:
		GalleryForm(void)
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
		~GalleryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::PictureBox^ pic1;
	private: System::Windows::Forms::PictureBox^ pic2;

	private: System::Windows::Forms::PictureBox^ pic4;
	private: System::Windows::Forms::PictureBox^ pic5;
	private: System::Windows::Forms::PictureBox^ pic6;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GalleryForm::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			this->pic4 = (gcnew System::Windows::Forms::PictureBox());
			this->pic5 = (gcnew System::Windows::Forms::PictureBox());
			this->pic6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(326, 40);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(308, 52);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"OUR GALLERY";
			// 
			// pic1
			// 
			this->pic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.Image")));
			this->pic1->Location = System::Drawing::Point(299, 382);
			this->pic1->Name = L"pic1";
			this->pic1->Size = System::Drawing::Size(386, 292);
			this->pic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic1->TabIndex = 1;
			this->pic1->TabStop = false;
			// 
			// pic2
			// 
			this->pic2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.Image")));
			this->pic2->Location = System::Drawing::Point(508, 111);
			this->pic2->Name = L"pic2";
			this->pic2->Size = System::Drawing::Size(448, 235);
			this->pic2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic2->TabIndex = 2;
			this->pic2->TabStop = false;
			// 
			// pic4
			// 
			this->pic4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic4.Image")));
			this->pic4->Location = System::Drawing::Point(23, 382);
			this->pic4->Name = L"pic4";
			this->pic4->Size = System::Drawing::Size(261, 292);
			this->pic4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic4->TabIndex = 4;
			this->pic4->TabStop = false;
			// 
			// pic5
			// 
			this->pic5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic5.Image")));
			this->pic5->Location = System::Drawing::Point(32, 111);
			this->pic5->Name = L"pic5";
			this->pic5->Size = System::Drawing::Size(450, 235);
			this->pic5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic5->TabIndex = 5;
			this->pic5->TabStop = false;
			// 
			// pic6
			// 
			this->pic6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic6.Image")));
			this->pic6->Location = System::Drawing::Point(705, 382);
			this->pic6->Name = L"pic6";
			this->pic6->Size = System::Drawing::Size(251, 292);
			this->pic6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pic6->TabIndex = 6;
			this->pic6->TabStop = false;
			// 
			// GalleryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->pic6);
			this->Controls->Add(this->pic5);
			this->Controls->Add(this->pic4);
			this->Controls->Add(this->pic2);
			this->Controls->Add(this->pic1);
			this->Controls->Add(this->lblTitle);
			this->Name = L"GalleryForm";
			this->Text = L"SALON ZELORA - Gallery";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
