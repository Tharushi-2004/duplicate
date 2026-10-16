#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AppointmentForm
	/// </summary>
	public ref class AppointmentForm : public System::Windows::Forms::Form
	{
	public:
		AppointmentForm(void)
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
		~AppointmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	protected:

	private: System::Windows::Forms::Label^ lblAppointmentID;
	private: System::Windows::Forms::Label^ lblCustomerID;
	private: System::Windows::Forms::Label^ lblServiceID;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Label^ lblTime;
	private: System::Windows::Forms::TextBox^ txtAppointmentID;
	private: System::Windows::Forms::TextBox^ txtCustomerID;
	private: System::Windows::Forms::TextBox^ txtServiceID;
	private: System::Windows::Forms::DateTimePicker^ dtpDate;
	private: System::Windows::Forms::TextBox^ txtTime;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::DataGridView^ dgvAppointments;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DateTimePicker^ dtpTime;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AppointmentForm::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblAppointmentID = (gcnew System::Windows::Forms::Label());
			this->lblCustomerID = (gcnew System::Windows::Forms::Label());
			this->lblServiceID = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->txtAppointmentID = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerID = (gcnew System::Windows::Forms::TextBox());
			this->txtServiceID = (gcnew System::Windows::Forms::TextBox());
			this->dtpDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtTime = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->dgvAppointments = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dtpTime = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAppointments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Algerian", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(112, 25);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(718, 41);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Appointment Management - ZELORA";
			// 
			// lblAppointmentID
			// 
			this->lblAppointmentID->AutoSize = true;
			this->lblAppointmentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAppointmentID->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblAppointmentID->Location = System::Drawing::Point(14, 88);
			this->lblAppointmentID->Name = L"lblAppointmentID";
			this->lblAppointmentID->Size = System::Drawing::Size(165, 27);
			this->lblAppointmentID->TabIndex = 1;
			this->lblAppointmentID->Text = L"Appointment ID";
			// 
			// lblCustomerID
			// 
			this->lblCustomerID->AutoSize = true;
			this->lblCustomerID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCustomerID->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblCustomerID->Location = System::Drawing::Point(14, 132);
			this->lblCustomerID->Name = L"lblCustomerID";
			this->lblCustomerID->Size = System::Drawing::Size(131, 27);
			this->lblCustomerID->TabIndex = 2;
			this->lblCustomerID->Text = L"Customer ID";
			// 
			// lblServiceID
			// 
			this->lblServiceID->AutoSize = true;
			this->lblServiceID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblServiceID->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblServiceID->Location = System::Drawing::Point(14, 186);
			this->lblServiceID->Name = L"lblServiceID";
			this->lblServiceID->Size = System::Drawing::Size(107, 27);
			this->lblServiceID->TabIndex = 3;
			this->lblServiceID->Text = L"Service ID";
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblDate->Location = System::Drawing::Point(14, 235);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(56, 27);
			this->lblDate->TabIndex = 4;
			this->lblDate->Text = L"Date";
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblTime->Location = System::Drawing::Point(14, 284);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(58, 27);
			this->lblTime->TabIndex = 5;
			this->lblTime->Text = L"Time";
			// 
			// txtAppointmentID
			// 
			this->txtAppointmentID->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtAppointmentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAppointmentID->Location = System::Drawing::Point(210, 88);
			this->txtAppointmentID->Name = L"txtAppointmentID";
			this->txtAppointmentID->Size = System::Drawing::Size(317, 33);
			this->txtAppointmentID->TabIndex = 6;
			// 
			// txtCustomerID
			// 
			this->txtCustomerID->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtCustomerID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCustomerID->Location = System::Drawing::Point(210, 137);
			this->txtCustomerID->Name = L"txtCustomerID";
			this->txtCustomerID->Size = System::Drawing::Size(317, 33);
			this->txtCustomerID->TabIndex = 7;
			// 
			// txtServiceID
			// 
			this->txtServiceID->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtServiceID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtServiceID->Location = System::Drawing::Point(210, 183);
			this->txtServiceID->Name = L"txtServiceID";
			this->txtServiceID->Size = System::Drawing::Size(317, 33);
			this->txtServiceID->TabIndex = 8;
			// 
			// dtpDate
			// 
			this->dtpDate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDate->CalendarMonthBackground = System::Drawing::SystemColors::InactiveCaption;
			this->dtpDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDate->Location = System::Drawing::Point(210, 235);
			this->dtpDate->Name = L"dtpDate";
			this->dtpDate->Size = System::Drawing::Size(317, 28);
			this->dtpDate->TabIndex = 9;
			// 
			// txtTime
			// 
			this->txtTime->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtTime->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTime->Location = System::Drawing::Point(253, 528);
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(317, 33);
			this->txtTime->TabIndex = 10;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnAdd->Location = System::Drawing::Point(13, 348);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(108, 38);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnUpdate->Location = System::Drawing::Point(146, 348);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(108, 38);
			this->btnUpdate->TabIndex = 12;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &AppointmentForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnDelete->Location = System::Drawing::Point(275, 348);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(111, 38);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnClear->Location = System::Drawing::Point(408, 348);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(119, 37);
			this->btnClear->TabIndex = 14;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			// 
			// dgvAppointments
			// 
			this->dgvAppointments->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dgvAppointments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAppointments->Location = System::Drawing::Point(19, 419);
			this->dgvAppointments->Name = L"dgvAppointments";
			this->dgvAppointments->RowHeadersWidth = 51;
			this->dgvAppointments->RowTemplate->Height = 24;
			this->dgvAppointments->Size = System::Drawing::Size(929, 272);
			this->dgvAppointments->TabIndex = 15;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(560, 88);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(388, 314);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// dtpTime
			// 
			this->dtpTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpTime->Location = System::Drawing::Point(210, 284);
			this->dtpTime->Name = L"dtpTime";
			this->dtpTime->ShowUpDown = true;
			this->dtpTime->Size = System::Drawing::Size(317, 28);
			this->dtpTime->TabIndex = 17;
			// 
			// AppointmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->dtpTime);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dgvAppointments);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtTime);
			this->Controls->Add(this->dtpDate);
			this->Controls->Add(this->txtServiceID);
			this->Controls->Add(this->txtCustomerID);
			this->Controls->Add(this->txtAppointmentID);
			this->Controls->Add(this->lblTime);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->lblServiceID);
			this->Controls->Add(this->lblCustomerID);
			this->Controls->Add(this->lblAppointmentID);
			this->Controls->Add(this->lblTitle);
			this->Name = L"AppointmentForm";
			this->Text = L"AppointmentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAppointments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
