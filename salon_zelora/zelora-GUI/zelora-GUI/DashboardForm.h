#pragma once

#include "CustomerForm.h"
#include "AppointmentForm.h"
#include "ServiceForm.h"
#include "StaffForm.h"
#include "Database.h"

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class DashboardForm : public System::Windows::Forms::Form
	{
	public:
		DashboardForm(void)
		{
			InitializeComponent();
		}

	protected:

		~DashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ lblTitle;
		System::Windows::Forms::Button^ btnCustomers;
		System::Windows::Forms::Button^ btnAppointments;
		System::Windows::Forms::Button^ btnServices;
		System::Windows::Forms::Button^ btnStaff;
		System::Windows::Forms::Button^ btnLogout;

		System::Windows::Forms::PictureBox^ picHome;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnCustomers = (gcnew System::Windows::Forms::Button());
			this->btnAppointments = (gcnew System::Windows::Forms::Button());
			this->btnServices = (gcnew System::Windows::Forms::Button());
			this->btnStaff = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->picHome = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHome))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Algerian", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(303, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(545, 61);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Salon ZELORA";
			this->lblTitle->Click += gcnew System::EventHandler(this, &DashboardForm::lblTitle_Click);
			// 
			// btnCustomers
			// 
			this->btnCustomers->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCustomers->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnCustomers->Location = System::Drawing::Point(41, 90);
			this->btnCustomers->Name = L"btnCustomers";
			this->btnCustomers->Size = System::Drawing::Size(357, 44);
			this->btnCustomers->TabIndex = 1;
			this->btnCustomers->Text = L"Customer Management";
			this->btnCustomers->UseVisualStyleBackColor = true;
			this->btnCustomers->Click += gcnew System::EventHandler(this, &DashboardForm::btnCustomers_Click);
			// 
			// btnAppointments
			// 
			this->btnAppointments->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAppointments->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnAppointments->Location = System::Drawing::Point(491, 88);
			this->btnAppointments->Name = L"btnAppointments";
			this->btnAppointments->Size = System::Drawing::Size(357, 48);
			this->btnAppointments->TabIndex = 2;
			this->btnAppointments->Text = L"Appointment Management";
			this->btnAppointments->UseVisualStyleBackColor = true;
			this->btnAppointments->Click += gcnew System::EventHandler(this, &DashboardForm::btnAppointments_Click);
			// 
			// btnServices
			// 
			this->btnServices->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnServices->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnServices->Location = System::Drawing::Point(41, 155);
			this->btnServices->Name = L"btnServices";
			this->btnServices->Size = System::Drawing::Size(357, 49);
			this->btnServices->TabIndex = 3;
			this->btnServices->Text = L"Service Management";
			this->btnServices->UseVisualStyleBackColor = true;
			this->btnServices->Click += gcnew System::EventHandler(this, &DashboardForm::btnServices_Click);
			// 
			// btnStaff
			// 
			this->btnStaff->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStaff->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnStaff->Location = System::Drawing::Point(491, 157);
			this->btnStaff->Name = L"btnStaff";
			this->btnStaff->Size = System::Drawing::Size(357, 47);
			this->btnStaff->TabIndex = 4;
			this->btnStaff->Text = L"Staff Management";
			this->btnStaff->UseVisualStyleBackColor = true;
			this->btnStaff->Click += gcnew System::EventHandler(this, &DashboardForm::btnStaff_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12));
			this->btnLogout->ForeColor = System::Drawing::Color::DarkBlue;
			this->btnLogout->Location = System::Drawing::Point(359, 220);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(166, 44);
			this->btnLogout->TabIndex = 5;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &DashboardForm::btnLogout_Click);
			// 
			// picHome
			// 
			this->picHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picHome.Image")));
			this->picHome->Location = System::Drawing::Point(57, 272);
			this->picHome->Name = L"picHome";
			this->picHome->Size = System::Drawing::Size(771, 419);
			this->picHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picHome->TabIndex = 7;
			this->picHome->TabStop = false;
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->picHome);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->btnStaff);
			this->Controls->Add(this->btnServices);
			this->Controls->Add(this->btnAppointments);
			this->Controls->Add(this->btnCustomers);
			this->Controls->Add(this->lblTitle);
			this->Name = L"DashboardForm";
			this->Text = L"DashboardForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHome))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

	private:
		System::Void lblTitle_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
		}

	private:
		System::Void btnCustomers_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			CustomerForm^ customerForm =
				gcnew CustomerForm();

			customerForm->Show();
		}

	private:
		System::Void btnAppointments_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			AppointmentForm^ appointmentForm =
				gcnew AppointmentForm();

			appointmentForm->Show();
		}

	private:
		System::Void btnServices_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			ServiceForm^ serviceForm =
				gcnew ServiceForm();

			serviceForm->Show();
		}

	private:
		System::Void btnStaff_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			StaffForm^ staffForm =
				gcnew StaffForm();

			staffForm->Show();
		}

	private:
		System::Void btnLogout_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			this->Close();
		}

	private:
		System::Void btnTestDatabase_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			try
			{
				bool result = Database::TestConnection();

				if (result)
				{
					MessageBox::Show(
						"Database connection successful!",
						"ZELORA Database",
						MessageBoxButtons::OK,
						MessageBoxIcon::Information
					);
				}
				else
				{
					MessageBox::Show(
						"Database connection failed.",
						"ZELORA Database",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error
					);
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(
					"Database Error:\n" + ex->Message,
					"ZELORA Database",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
			}
		}
	};
}