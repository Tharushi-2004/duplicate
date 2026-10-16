#pragma once

#include "Database.h"
#include <msclr/marshal_cppstd.h>

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::Label^ lblCustomerID;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ lbEmail;
	protected:




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::DataGridView^ dgvCustomers;
	private: System::Windows::Forms::PictureBox^ picCustomer;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerForm::typeid));
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->lblCustomerID = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->dgvCustomers = (gcnew System::Windows::Forms::DataGridView());
			this->picCustomer = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCustomer))->BeginInit();
			this->SuspendLayout();
			// 
			// lbTitle
			// 
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Algerian", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::Navy;
			this->lbTitle->Location = System::Drawing::Point(115, 9);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(754, 66);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Customer Management  - ZELORA";
			// 
			// lblCustomerID
			// 
			this->lblCustomerID->AutoSize = true;
			this->lblCustomerID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCustomerID->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblCustomerID->Location = System::Drawing::Point(12, 92);
			this->lblCustomerID->Name = L"lblCustomerID";
			this->lblCustomerID->Size = System::Drawing::Size(131, 27);
			this->lblCustomerID->TabIndex = 1;
			this->lblCustomerID->Text = L"Customer ID";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblName->Location = System::Drawing::Point(15, 149);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(69, 27);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Name";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblPhone->Location = System::Drawing::Point(15, 208);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(72, 27);
			this->lblPhone->TabIndex = 3;
			this->lblPhone->Text = L"Phone";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->ForeColor = System::Drawing::Color::DarkBlue;
			this->lbEmail->Location = System::Drawing::Point(15, 258);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(63, 27);
			this->lbEmail->TabIndex = 4;
			this->lbEmail->Text = L"Email";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(164, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 33);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CustomerForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(164, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 33);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(164, 205);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(288, 33);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(164, 255);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(288, 33);
			this->textBox4->TabIndex = 8;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnAdd->Location = System::Drawing::Point(17, 330);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(90, 37);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CustomerForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnUpdate->Location = System::Drawing::Point(122, 330);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(98, 37);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnDelete->Location = System::Drawing::Point(240, 330);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(104, 37);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnClear->Location = System::Drawing::Point(359, 330);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(93, 37);
			this->btnClear->TabIndex = 12;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			// 
			// dgvCustomers
			// 
			this->dgvCustomers->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dgvCustomers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomers->Location = System::Drawing::Point(20, 390);
			this->dgvCustomers->Name = L"dgvCustomers";
			this->dgvCustomers->RowHeadersWidth = 51;
			this->dgvCustomers->RowTemplate->Height = 24;
			this->dgvCustomers->Size = System::Drawing::Size(928, 289);
			this->dgvCustomers->TabIndex = 13;
			// 
			// picCustomer
			// 
			this->picCustomer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picCustomer.Image")));
			this->picCustomer->Location = System::Drawing::Point(483, 92);
			this->picCustomer->Name = L"picCustomer";
			this->picCustomer->Size = System::Drawing::Size(465, 265);
			this->picCustomer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picCustomer->TabIndex = 14;
			this->picCustomer->TabStop = false;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->picCustomer);
			this->Controls->Add(this->dgvCustomers);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblCustomerID);
			this->Controls->Add(this->lbTitle);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
	  MessageBox::Show("Add button clicked!");
		try
		{
			MessageBox::Show("Step 1: Try block started!");
			String^ name = textBox2->Text;
			String^ phone = textBox3->Text;
			String^ email = textBox4->Text;

			MessageBox::Show("Step 2: Values read successfully!");

			if (name->Trim() == "" ||
				phone->Trim() == "" ||
				email->Trim() == "")
			{
				MessageBox::Show(
					"Please fill Name, Phone and Email.",
					"Validation",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning
				);
				return;
			}

			MessageBox::Show("Step 3: Validation passed!");

			sql::mysql::MySQL_Driver* driver =
				sql::mysql::get_mysql_driver_instance();

			MessageBox::Show("Step 4: MySQL driver obtained!");
			MessageBox::Show("Step 4A: Before connection test!");

			if (Database::TestConnection())
			{
				MessageBox::Show("Step 4B: Connection test passed!");
			}
			else
			{
				MessageBox::Show("Step 4C: Connection test failed!");
			}

			MessageBox::Show("Step 4D: After connection test!");

			std::unique_ptr<sql::Connection> connect(
				driver->connect(
					"tcp://127.0.0.1:3306",
					"root",
					"RGtdp2004*"
				)
			);

			MessageBox::Show("Step 5: MySQL connection created!");

			connect->setSchema("ZELORA");

			MessageBox::Show("Step 6: ZELORA database selected!");

			std::string nameStr = msclr::interop::marshal_as<std::string>(name);
			std::string phoneStr = msclr::interop::marshal_as<std::string>(phone);
			std::string emailStr = msclr::interop::marshal_as<std::string>(email);

			std::unique_ptr<sql::PreparedStatement> pstmt(
				connect->prepareStatement(
					"INSERT INTO customer "
					"(customer_name, phone, email, address) "
					"VALUES (?, ?, ?, ?)"
				)
			);

			pstmt->setString(1, nameStr);
			pstmt->setString(2, phoneStr);
			pstmt->setString(3, emailStr);
			pstmt->setString(4, "");

			pstmt->executeUpdate();

			MessageBox::Show(
				"Customer added successfully!",
				"Success",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information
			);

			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
			textBox4->Clear();
		}
		catch (const sql::SQLException& ex)
		{
			String^ errorMessage = gcnew String(ex.what());

			MessageBox::Show(
				errorMessage,
				"MySQL Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error
			);
		}
	}
         

};
}
