#pragma once


namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ServiceForm
	/// </summary>
	public ref class ServiceForm : public System::Windows::Forms::Form
	{
	public:
		ServiceForm(void)
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
		~ServiceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnClear;
	protected:

	protected:



	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblServiceID;
	private: System::Windows::Forms::Label^ lblServiceName;
	private: System::Windows::Forms::Label^ lblPrice;
	private: System::Windows::Forms::Label^ lblDuration;
	private: System::Windows::Forms::TextBox^ txtServiceID;
	private: System::Windows::Forms::TextBox^ txtServiceName;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtDuration;
	private: System::Windows::Forms::DataGridView^ dgvServices;
	private: System::Windows::Forms::PictureBox^ pictureBox1;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ServiceForm::typeid));
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblServiceID = (gcnew System::Windows::Forms::Label());
			this->lblServiceName = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->lblDuration = (gcnew System::Windows::Forms::Label());
			this->txtServiceID = (gcnew System::Windows::Forms::TextBox());
			this->txtServiceName = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtDuration = (gcnew System::Windows::Forms::TextBox());
			this->dgvServices = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServices))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnAdd->Location = System::Drawing::Point(32, 341);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(88, 43);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnUpdate->Location = System::Drawing::Point(156, 344);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(103, 39);
			this->btnUpdate->TabIndex = 1;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnDelete->Location = System::Drawing::Point(296, 344);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(97, 39);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnClear->Location = System::Drawing::Point(437, 343);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(85, 41);
			this->btnClear->TabIndex = 3;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Algerian", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(149, 20);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(642, 48);
			this->lblTitle->TabIndex = 4;
			this->lblTitle->Text = L"Service Management - ZELORA";
			// 
			// lblServiceID
			// 
			this->lblServiceID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblServiceID->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblServiceID->Location = System::Drawing::Point(26, 101);
			this->lblServiceID->Name = L"lblServiceID";
			this->lblServiceID->Size = System::Drawing::Size(133, 32);
			this->lblServiceID->TabIndex = 5;
			this->lblServiceID->Text = L"Service ID";
			// 
			// lblServiceName
			// 
			this->lblServiceName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblServiceName->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblServiceName->Location = System::Drawing::Point(26, 145);
			this->lblServiceName->Name = L"lblServiceName";
			this->lblServiceName->Size = System::Drawing::Size(165, 36);
			this->lblServiceName->TabIndex = 6;
			this->lblServiceName->Text = L"Service Name";
			// 
			// lblPrice
			// 
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrice->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblPrice->Location = System::Drawing::Point(27, 194);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(93, 35);
			this->lblPrice->TabIndex = 7;
			this->lblPrice->Text = L"Price";
			this->lblPrice->Click += gcnew System::EventHandler(this, &ServiceForm::lblPrice_Click);
			// 
			// lblDuration
			// 
			this->lblDuration->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDuration->ForeColor = System::Drawing::Color::DarkBlue;
			this->lblDuration->Location = System::Drawing::Point(26, 241);
			this->lblDuration->Name = L"lblDuration";
			this->lblDuration->Size = System::Drawing::Size(131, 38);
			this->lblDuration->TabIndex = 8;
			this->lblDuration->Text = L"Duration";
			this->lblDuration->Click += gcnew System::EventHandler(this, &ServiceForm::lblDuration_Click);
			// 
			// txtServiceID
			// 
			this->txtServiceID->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtServiceID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtServiceID->Location = System::Drawing::Point(235, 100);
			this->txtServiceID->Name = L"txtServiceID";
			this->txtServiceID->Size = System::Drawing::Size(287, 33);
			this->txtServiceID->TabIndex = 9;
			this->txtServiceID->TextChanged += gcnew System::EventHandler(this, &ServiceForm::txtServiceID_TextChanged);
			// 
			// txtServiceName
			// 
			this->txtServiceName->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtServiceName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtServiceName->Location = System::Drawing::Point(235, 148);
			this->txtServiceName->Name = L"txtServiceName";
			this->txtServiceName->Size = System::Drawing::Size(287, 33);
			this->txtServiceName->TabIndex = 10;
			// 
			// txtPrice
			// 
			this->txtPrice->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrice->Location = System::Drawing::Point(235, 194);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(287, 33);
			this->txtPrice->TabIndex = 11;
			// 
			// txtDuration
			// 
			this->txtDuration->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtDuration->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDuration->Location = System::Drawing::Point(235, 246);
			this->txtDuration->Name = L"txtDuration";
			this->txtDuration->Size = System::Drawing::Size(287, 33);
			this->txtDuration->TabIndex = 12;
			// 
			// dgvServices
			// 
			this->dgvServices->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dgvServices->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvServices->Location = System::Drawing::Point(32, 435);
			this->dgvServices->Name = L"dgvServices";
			this->dgvServices->RowHeadersWidth = 51;
			this->dgvServices->RowTemplate->Height = 24;
			this->dgvServices->Size = System::Drawing::Size(895, 256);
			this->dgvServices->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(554, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(373, 307);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// ServiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dgvServices);
			this->Controls->Add(this->txtDuration);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtServiceName);
			this->Controls->Add(this->txtServiceID);
			this->Controls->Add(this->lblDuration);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lblServiceName);
			this->Controls->Add(this->lblServiceID);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Name = L"ServiceForm";
			this->Load += gcnew System::EventHandler(this, &ServiceForm::ServiceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServices))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lblPrice_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lblDuration_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ServiceForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtServiceID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
