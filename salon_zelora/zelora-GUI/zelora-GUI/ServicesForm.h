#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ServicesForm
	/// </summary>
	public ref class ServicesForm : public System::Windows::Forms::Form
	{
	public:
		ServicesForm(void)
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
		~ServicesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Panel^ pnlHair;

	private: System::Windows::Forms::Panel^ pnlFacial;

	private: System::Windows::Forms::Panel^ pnlMakeup;

	private: System::Windows::Forms::Panel^ pnlNails;
	private: System::Windows::Forms::Button^ btnBookAppointment;
	private: System::Windows::Forms::Label^ lblHair;

	private: System::Windows::Forms::Label^ lblFacial;

	private: System::Windows::Forms::Label^ lblMakeup;
	private: System::Windows::Forms::Label^ lblNails;

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
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->pnlHair = (gcnew System::Windows::Forms::Panel());
			this->lblHair = (gcnew System::Windows::Forms::Label());
			this->pnlFacial = (gcnew System::Windows::Forms::Panel());
			this->lblFacial = (gcnew System::Windows::Forms::Label());
			this->pnlMakeup = (gcnew System::Windows::Forms::Panel());
			this->lblMakeup = (gcnew System::Windows::Forms::Label());
			this->pnlNails = (gcnew System::Windows::Forms::Panel());
			this->lblNails = (gcnew System::Windows::Forms::Label());
			this->btnBookAppointment = (gcnew System::Windows::Forms::Button());
			this->pnlHair->SuspendLayout();
			this->pnlFacial->SuspendLayout();
			this->pnlMakeup->SuspendLayout();
			this->pnlNails->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblTitle->Location = System::Drawing::Point(343, 37);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(383, 74);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"OUR SERVICES";
			// 
			// pnlHair
			// 
			this->pnlHair->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pnlHair->Controls->Add(this->lblHair);
			this->pnlHair->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlHair->ForeColor = System::Drawing::Color::Navy;
			this->pnlHair->Location = System::Drawing::Point(130, 145);
			this->pnlHair->Name = L"pnlHair";
			this->pnlHair->Size = System::Drawing::Size(341, 151);
			this->pnlHair->TabIndex = 1;
			// 
			// lblHair
			// 
			this->lblHair->AutoSize = true;
			this->lblHair->Location = System::Drawing::Point(19, 36);
			this->lblHair->Name = L"lblHair";
			this->lblHair->Size = System::Drawing::Size(230, 72);
			this->lblHair->TabIndex = 0;
			this->lblHair->Text = L"Hair Styling\r\nHair Cut & Styling";
			// 
			// pnlFacial
			// 
			this->pnlFacial->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pnlFacial->Controls->Add(this->lblFacial);
			this->pnlFacial->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlFacial->ForeColor = System::Drawing::Color::Navy;
			this->pnlFacial->Location = System::Drawing::Point(529, 145);
			this->pnlFacial->Name = L"pnlFacial";
			this->pnlFacial->Size = System::Drawing::Size(403, 151);
			this->pnlFacial->TabIndex = 2;
			// 
			// lblFacial
			// 
			this->lblFacial->AutoSize = true;
			this->lblFacial->Location = System::Drawing::Point(24, 36);
			this->lblFacial->Name = L"lblFacial";
			this->lblFacial->Size = System::Drawing::Size(366, 72);
			this->lblFacial->TabIndex = 0;
			this->lblFacial->Text = L"Facial\r\nRelaxing Facial Treatments";
			// 
			// pnlMakeup
			// 
			this->pnlMakeup->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pnlMakeup->Controls->Add(this->lblMakeup);
			this->pnlMakeup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlMakeup->ForeColor = System::Drawing::Color::Navy;
			this->pnlMakeup->Location = System::Drawing::Point(130, 326);
			this->pnlMakeup->Name = L"pnlMakeup";
			this->pnlMakeup->Size = System::Drawing::Size(341, 152);
			this->pnlMakeup->TabIndex = 3;
			// 
			// lblMakeup
			// 
			this->lblMakeup->AutoSize = true;
			this->lblMakeup->Location = System::Drawing::Point(19, 39);
			this->lblMakeup->Name = L"lblMakeup";
			this->lblMakeup->Size = System::Drawing::Size(293, 72);
			this->lblMakeup->TabIndex = 0;
			this->lblMakeup->Text = L"Makeup\r\nProfessional Makeup";
			// 
			// pnlNails
			// 
			this->pnlNails->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pnlNails->Controls->Add(this->lblNails);
			this->pnlNails->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlNails->ForeColor = System::Drawing::Color::Navy;
			this->pnlNails->Location = System::Drawing::Point(529, 326);
			this->pnlNails->Name = L"pnlNails";
			this->pnlNails->Size = System::Drawing::Size(403, 152);
			this->pnlNails->TabIndex = 4;
			// 
			// lblNails
			// 
			this->lblNails->AutoSize = true;
			this->lblNails->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNails->Location = System::Drawing::Point(24, 39);
			this->lblNails->Name = L"lblNails";
			this->lblNails->Size = System::Drawing::Size(271, 72);
			this->lblNails->TabIndex = 0;
			this->lblNails->Text = L"Nail Care\r\nManicure & Pedicure";
			this->lblNails->Click += gcnew System::EventHandler(this, &ServicesForm::lblNails_Click);
			// 
			// btnBookAppointment
			// 
			this->btnBookAppointment->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnBookAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnBookAppointment->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnBookAppointment->Location = System::Drawing::Point(323, 545);
			this->btnBookAppointment->Name = L"btnBookAppointment";
			this->btnBookAppointment->Size = System::Drawing::Size(403, 61);
			this->btnBookAppointment->TabIndex = 5;
			this->btnBookAppointment->Text = L"BOOK APPOINTMENT";
			this->btnBookAppointment->UseVisualStyleBackColor = false;
			// 
			// ServicesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->btnBookAppointment);
			this->Controls->Add(this->pnlNails);
			this->Controls->Add(this->pnlMakeup);
			this->Controls->Add(this->pnlFacial);
			this->Controls->Add(this->pnlHair);
			this->Controls->Add(this->lblTitle);
			this->Name = L"ServicesForm";
			this->Text = L"SALON ZELORA - Services";
			this->pnlHair->ResumeLayout(false);
			this->pnlHair->PerformLayout();
			this->pnlFacial->ResumeLayout(false);
			this->pnlFacial->PerformLayout();
			this->pnlMakeup->ResumeLayout(false);
			this->pnlMakeup->PerformLayout();
			this->pnlNails->ResumeLayout(false);
			this->pnlNails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lblNails_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
