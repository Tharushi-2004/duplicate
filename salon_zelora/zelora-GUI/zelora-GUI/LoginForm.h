#pragma once

#include "DashboardForm.h"

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
		}

	protected:
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ lblTitle;
		System::Windows::Forms::Label^ lblUsername;
		System::Windows::Forms::Label^ lblPassword;
		System::Windows::Forms::TextBox^ txtUsername;
		System::Windows::Forms::TextBox^ txtPassword;
		System::Windows::Forms::Button^ btnLogin;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Button^ btnHome;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources =
				(gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));

			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnHome = (gcnew System::Windows::Forms::Button());

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>
				(this->pictureBox1))->BeginInit();

			this->SuspendLayout();

			// 
			// lblTitle
			// 
			this->lblTitle->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle->Font = (gcnew System::Drawing::Font(
				L"Algerian",
				22.2F,
				System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(126, 29);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(328, 92);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"SALON ZELORA";

			// 
			// lblUsername
			// 
			this->lblUsername->Font = (gcnew System::Drawing::Font(
				L"Microsoft YaHei UI",
				12,
				System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->lblUsername->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblUsername->Location = System::Drawing::Point(7, 150);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(132, 35);
			this->lblUsername->TabIndex = 1;
			this->lblUsername->Text = L"Username";

			// 
			// lblPassword
			// 
			this->lblPassword->Font = (gcnew System::Drawing::Font(
				L"Microsoft YaHei UI",
				12,
				System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->lblPassword->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblPassword->Location = System::Drawing::Point(7, 251);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(136, 36);
			this->lblPassword->TabIndex = 2;
			this->lblPassword->Text = L"Password";

			// 
			// txtUsername
			// 
			this->txtUsername->BackColor =
				System::Drawing::SystemColors::InactiveCaption;

			this->txtUsername->Font = (gcnew System::Drawing::Font(
				L"Microsoft YaHei UI",
				12,
				System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->txtUsername->Location = System::Drawing::Point(51, 188);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(387, 33);
			this->txtUsername->TabIndex = 3;

			// 
			// txtPassword
			// 
			this->txtPassword->BackColor =
				System::Drawing::SystemColors::InactiveCaption;

			this->txtPassword->Font = (gcnew System::Drawing::Font(
				L"Microsoft YaHei UI",
				12,
				System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->txtPassword->Location = System::Drawing::Point(51, 290);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(387, 33);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->UseSystemPasswordChar = true;

			// 
			// btnLogin
			// 
			this->btnLogin->BackColor =
				System::Drawing::SystemColors::ActiveCaption;

			this->btnLogin->Font = (gcnew System::Drawing::Font(
				L"Microsoft YaHei UI",
				12,
				System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->btnLogin->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnLogin->Location = System::Drawing::Point(275, 358);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(163, 44);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"LOGIN";
			this->btnLogin->UseVisualStyleBackColor = false;

			this->btnLogin->Click +=
				gcnew System::EventHandler(
					this,
					&LoginForm::btnLogin_Click
				);

			// 
			// pictureBox1
			// 
			this->pictureBox1->Image =
				(cli::safe_cast<System::Drawing::Image^>(
					resources->GetObject(L"pictureBox1.Image")));

			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(91, 89);
			this->pictureBox1->SizeMode =
				System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;

			// 
			// btnHome
			// 
			this->btnHome->BackColor =
				System::Drawing::SystemColors::ActiveCaption;

			this->btnHome->Font = (gcnew System::Drawing::Font(
				L"Microsoft YaHei UI",
				12,
				System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->btnHome->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnHome->Location = System::Drawing::Point(275, 424);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(163, 48);
			this->btnHome->TabIndex = 7;
			this->btnHome->Text = L"Go to Home";
			this->btnHome->UseVisualStyleBackColor = false;

			this->btnHome->Click +=
				gcnew System::EventHandler(
					this,
					&LoginForm::btnHome_Click
				);

			// 
			// LoginForm
			// 
			this->AutoScaleDimensions =
				System::Drawing::SizeF(8, 16);

			this->AutoScaleMode =
				System::Windows::Forms::AutoScaleMode::Font;

			this->BackColor = System::Drawing::Color::Azure;

			this->ClientSize =
				System::Drawing::Size(982, 703);

			this->Controls->Add(this->btnHome);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->lblTitle);

			this->Name = L"LoginForm";
			this->Text = L"Salon ZELORA - Login";

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>
				(this->pictureBox1))->EndInit();

			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion

	private:
		System::Void btnLogin_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			String^ username = txtUsername->Text;
			String^ password = txtPassword->Text;

			if (username == "admin" && password == "1234")
			{
				MessageBox::Show(
					"Login Successful!",
					"ZELORA",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information
				);

				DashboardForm^ dashboard =
					gcnew DashboardForm();

				dashboard->Show();

				this->Hide();
			}
			else
			{
				MessageBox::Show(
					"Invalid username or password.",
					"Login Failed",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
			}
		}

	private:
		System::Void btnHome_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			this->Close();
		}
	};
}