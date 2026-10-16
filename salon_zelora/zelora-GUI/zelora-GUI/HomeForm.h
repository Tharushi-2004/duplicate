#pragma once
#include "ServicesForm.h"
#include "GalleryForm.h"
#include "AboutForm.h"
#include "ContactForm.h"
#include "BookAppointmentForm.h"

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeForm
	/// </summary>
	public ref class HomeForm : public System::Windows::Forms::Form
	{
	public:
		HomeForm(void)
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
		~HomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblWelcome;
	protected:
	private: System::Windows::Forms::Label^ lblDescription;
	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::Button^ btnServices;
	private: System::Windows::Forms::Button^ btnGallery;
	private: System::Windows::Forms::Button^ btnAbout;
	private: System::Windows::Forms::Button^ btnContact;
	private: System::Windows::Forms::Button^ btnBookAppointment;
	private: System::Windows::Forms::Label^ lblLogo;






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
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->btnServices = (gcnew System::Windows::Forms::Button());
			this->btnGallery = (gcnew System::Windows::Forms::Button());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->btnContact = (gcnew System::Windows::Forms::Button());
			this->btnBookAppointment = (gcnew System::Windows::Forms::Button());
			this->lblLogo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::Navy;
			this->lblWelcome->Location = System::Drawing::Point(161, 186);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(630, 140);
			this->lblWelcome->TabIndex = 0;
			this->lblWelcome->Text = L"Welcome to \r\n            Salon ZELORA";
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescription->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblDescription->Location = System::Drawing::Point(163, 340);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(416, 43);
			this->lblDescription->TabIndex = 1;
			this->lblDescription->Text = L"Your Beauty, Our Passion";
			// 
			// btnHome
			// 
			this->btnHome->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHome->ForeColor = System::Drawing::Color::MediumBlue;
			this->btnHome->Location = System::Drawing::Point(167, 23);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(140, 40);
			this->btnHome->TabIndex = 2;
			this->btnHome->Text = L"Home";
			this->btnHome->UseVisualStyleBackColor = false;
			// 
			// btnServices
			// 
			this->btnServices->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnServices->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnServices->ForeColor = System::Drawing::Color::MediumBlue;
			this->btnServices->Location = System::Drawing::Point(323, 24);
			this->btnServices->Name = L"btnServices";
			this->btnServices->Size = System::Drawing::Size(143, 39);
			this->btnServices->TabIndex = 3;
			this->btnServices->Text = L"Service";
			this->btnServices->UseVisualStyleBackColor = false;
			this->btnServices->Click += gcnew System::EventHandler(this, &HomeForm::btnServices_Click);
			// 
			// btnGallery
			// 
			this->btnGallery->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnGallery->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGallery->ForeColor = System::Drawing::Color::MediumBlue;
			this->btnGallery->Location = System::Drawing::Point(484, 24);
			this->btnGallery->Name = L"btnGallery";
			this->btnGallery->Size = System::Drawing::Size(127, 38);
			this->btnGallery->TabIndex = 4;
			this->btnGallery->Text = L"Gallery";
			this->btnGallery->UseVisualStyleBackColor = false;
			this->btnGallery->Click += gcnew System::EventHandler(this, &HomeForm::btnGallery_Click);
			// 
			// btnAbout
			// 
			this->btnAbout->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbout->ForeColor = System::Drawing::Color::MediumBlue;
			this->btnAbout->Location = System::Drawing::Point(631, 24);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(141, 39);
			this->btnAbout->TabIndex = 5;
			this->btnAbout->Text = L"About Us";
			this->btnAbout->UseVisualStyleBackColor = false;
			this->btnAbout->Click += gcnew System::EventHandler(this, &HomeForm::btnAbout_Click);
			// 
			// btnContact
			// 
			this->btnContact->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnContact->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContact->ForeColor = System::Drawing::Color::MediumBlue;
			this->btnContact->Location = System::Drawing::Point(791, 24);
			this->btnContact->Name = L"btnContact";
			this->btnContact->Size = System::Drawing::Size(156, 39);
			this->btnContact->TabIndex = 6;
			this->btnContact->Text = L"Contact Us";
			this->btnContact->UseVisualStyleBackColor = false;
			this->btnContact->Click += gcnew System::EventHandler(this, &HomeForm::button5_Click);
			// 
			// btnBookAppointment
			// 
			this->btnBookAppointment->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnBookAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBookAppointment->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnBookAppointment->Location = System::Drawing::Point(540, 504);
			this->btnBookAppointment->Name = L"btnBookAppointment";
			this->btnBookAppointment->Size = System::Drawing::Size(320, 56);
			this->btnBookAppointment->TabIndex = 7;
			this->btnBookAppointment->Text = L"Book Appointment";
			this->btnBookAppointment->UseVisualStyleBackColor = false;
			this->btnBookAppointment->Click += gcnew System::EventHandler(this, &HomeForm::btnBookAppointment_Click);
			// 
			// lblLogo
			// 
			this->lblLogo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogo->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblLogo->Location = System::Drawing::Point(12, 32);
			this->lblLogo->Name = L"lblLogo";
			this->lblLogo->Size = System::Drawing::Size(116, 39);
			this->lblLogo->TabIndex = 8;
			this->lblLogo->Text = L"ZELORA";
			this->lblLogo->Click += gcnew System::EventHandler(this, &HomeForm::lblLogo_Click);
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->lblLogo);
			this->Controls->Add(this->btnBookAppointment);
			this->Controls->Add(this->btnContact);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnGallery);
			this->Controls->Add(this->btnServices);
			this->Controls->Add(this->btnHome);
			this->Controls->Add(this->lblDescription);
			this->Controls->Add(this->lblWelcome);
			this->Name = L"HomeForm";
			this->Text = L"SALON ZELORA - Home";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		ContactForm^ contactForm = gcnew ContactForm();
		contactForm->Show();
	}
private: System::Void lblLogo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnServices_Click(System::Object^ sender, System::EventArgs^ e) {
	ServicesForm^ servicesForm = gcnew ServicesForm();
	servicesForm->Show();
}
private: System::Void btnGallery_Click(System::Object^ sender, System::EventArgs^ e) {
	GalleryForm^ galleryForm = gcnew GalleryForm();
	galleryForm->Show();
}
private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutForm^ aboutForm = gcnew AboutForm();
	aboutForm->Show();
}
private: System::Void btnBookAppointment_Click(System::Object^ sender, System::EventArgs^ e) {
	BookAppointmentForm^ bookForm = gcnew BookAppointmentForm();
	bookForm->Show();
}
};
}
