#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ContactForm
	/// </summary>
	public ref class ContactForm : public System::Windows::Forms::Form
	{
	public:
		ContactForm(void)
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
		~ContactForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblAddress;
	private: System::Windows::Forms::Label^ lblAddressValue;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ lblPhoneValue;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblEmailValue;
	private: System::Windows::Forms::Label^ lblMessage;
	private: System::Windows::Forms::TextBox^ txtMessage;
	private: System::Windows::Forms::Button^ btnSend;





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
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblAddressValue = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblPhoneValue = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblEmailValue = (gcnew System::Windows::Forms::Label());
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(314, 27);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(269, 50);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"CONTACT US";
			// 
			// lblAddress
			// 
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddress->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblAddress->Location = System::Drawing::Point(71, 135);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(121, 33);
			this->lblAddress->TabIndex = 1;
			this->lblAddress->Text = L"Address";
			// 
			// lblAddressValue
			// 
			this->lblAddressValue->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddressValue->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblAddressValue->Location = System::Drawing::Point(258, 135);
			this->lblAddressValue->Name = L"lblAddressValue";
			this->lblAddressValue->Size = System::Drawing::Size(276, 33);
			this->lblAddressValue->TabIndex = 2;
			this->lblAddressValue->Text = L"Mihinthale,Sri Lanka";
			// 
			// lblPhone
			// 
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblPhone->Location = System::Drawing::Point(71, 190);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(101, 39);
			this->lblPhone->TabIndex = 3;
			this->lblPhone->Text = L"Phone";
			// 
			// lblPhoneValue
			// 
			this->lblPhoneValue->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhoneValue->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblPhoneValue->Location = System::Drawing::Point(258, 191);
			this->lblPhoneValue->Name = L"lblPhoneValue";
			this->lblPhoneValue->Size = System::Drawing::Size(213, 38);
			this->lblPhoneValue->TabIndex = 4;
			this->lblPhoneValue->Text = L"042 11 222 333";
			// 
			// lblEmail
			// 
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblEmail->Location = System::Drawing::Point(71, 244);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(101, 39);
			this->lblEmail->TabIndex = 5;
			this->lblEmail->Text = L"Email";
			// 
			// lblEmailValue
			// 
			this->lblEmailValue->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmailValue->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblEmailValue->Location = System::Drawing::Point(258, 244);
			this->lblEmailValue->Name = L"lblEmailValue";
			this->lblEmailValue->Size = System::Drawing::Size(258, 39);
			this->lblEmailValue->TabIndex = 6;
			this->lblEmailValue->Text = L"info@salonzelora.com";
			// 
			// lblMessage
			// 
			this->lblMessage->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMessage->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblMessage->Location = System::Drawing::Point(72, 338);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(341, 38);
			this->lblMessage->TabIndex = 7;
			this->lblMessage->Text = L"Send Us a Message";
			// 
			// txtMessage
			// 
			this->txtMessage->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtMessage->Location = System::Drawing::Point(109, 379);
			this->txtMessage->Multiline = true;
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->Size = System::Drawing::Size(726, 201);
			this->txtMessage->TabIndex = 8;
			// 
			// btnSend
			// 
			this->btnSend->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnSend->Location = System::Drawing::Point(554, 630);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(272, 42);
			this->btnSend->TabIndex = 9;
			this->btnSend->Text = L"SEND MESSAGE";
			this->btnSend->UseVisualStyleBackColor = false;
			// 
			// ContactForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->txtMessage);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->lblEmailValue);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblPhoneValue);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblAddressValue);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->lblTitle);
			this->Name = L"ContactForm";
			this->Text = L"SALON ZELORA - Contact Us";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
