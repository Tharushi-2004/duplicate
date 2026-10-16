#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BookAppointmentForm
	/// </summary>
	public ref class BookAppointmentForm : public System::Windows::Forms::Form
	{
	public:
		BookAppointmentForm(void)
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
		~BookAppointmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::Label^ lblService;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::ComboBox^ cmbService;
	private: System::Windows::Forms::DateTimePicker^ dtpAppointmentDate;
	private: System::Windows::Forms::Label^ lblTime;
	private: System::Windows::Forms::ComboBox^ cmbTime;
	private: System::Windows::Forms::Button^ btnBook;
	private: System::Windows::Forms::Label^ lblTitle;



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
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->lblService = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->cmbService = (gcnew System::Windows::Forms::ComboBox());
			this->dtpAppointmentDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->cmbTime = (gcnew System::Windows::Forms::ComboBox());
			this->btnBook = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblName->Location = System::Drawing::Point(34, 119);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(139, 30);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Your Name";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblPhone->Location = System::Drawing::Point(34, 198);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(83, 30);
			this->lblPhone->TabIndex = 1;
			this->lblPhone->Text = L"Phone";
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(312, 120);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(351, 30);
			this->txtName->TabIndex = 2;
			// 
			// txtPhone
			// 
			this->txtPhone->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(312, 199);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(351, 30);
			this->txtPhone->TabIndex = 3;
			// 
			// lblService
			// 
			this->lblService->AutoSize = true;
			this->lblService->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblService->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblService->Location = System::Drawing::Point(34, 278);
			this->lblService->Name = L"lblService";
			this->lblService->Size = System::Drawing::Size(164, 30);
			this->lblService->TabIndex = 4;
			this->lblService->Text = L"Select Service";
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblDate->Location = System::Drawing::Point(34, 355);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(221, 30);
			this->lblDate->TabIndex = 5;
			this->lblDate->Text = L"Appointment Date";
			// 
			// cmbService
			// 
			this->cmbService->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->cmbService->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbService->FormattingEnabled = true;
			this->cmbService->Location = System::Drawing::Point(312, 275);
			this->cmbService->Name = L"cmbService";
			this->cmbService->Size = System::Drawing::Size(351, 33);
			this->cmbService->TabIndex = 6;
			// 
			// dtpAppointmentDate
			// 
			this->dtpAppointmentDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpAppointmentDate->Location = System::Drawing::Point(312, 355);
			this->dtpAppointmentDate->Name = L"dtpAppointmentDate";
			this->dtpAppointmentDate->Size = System::Drawing::Size(351, 30);
			this->dtpAppointmentDate->TabIndex = 7;
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblTime->Location = System::Drawing::Point(34, 439);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(222, 30);
			this->lblTime->TabIndex = 8;
			this->lblTime->Text = L"Appointment Time";
			// 
			// cmbTime
			// 
			this->cmbTime->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->cmbTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbTime->FormattingEnabled = true;
			this->cmbTime->Location = System::Drawing::Point(312, 436);
			this->cmbTime->Name = L"cmbTime";
			this->cmbTime->Size = System::Drawing::Size(351, 33);
			this->cmbTime->TabIndex = 9;
			// 
			// btnBook
			// 
			this->btnBook->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnBook->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBook->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnBook->Location = System::Drawing::Point(138, 548);
			this->btnBook->Name = L"btnBook";
			this->btnBook->Size = System::Drawing::Size(352, 44);
			this->btnBook->TabIndex = 10;
			this->btnBook->Text = L"BOOK APPOINTMENT";
			this->btnBook->UseVisualStyleBackColor = false;
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(188, 26);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(572, 65);
			this->lblTitle->TabIndex = 11;
			this->lblTitle->Text = L"BOOK YOUR APPOINTMENT ";
			// 
			// BookAppointmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->btnBook);
			this->Controls->Add(this->cmbTime);
			this->Controls->Add(this->lblTime);
			this->Controls->Add(this->dtpAppointmentDate);
			this->Controls->Add(this->cmbService);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->lblService);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblName);
			this->Name = L"BookAppointmentForm";
			this->Text = L"SALON ZELORA - Book Appointment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
