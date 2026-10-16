#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
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
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblAbout;
	private: System::Windows::Forms::Label^ lblMissionText;
	private: System::Windows::Forms::Label^ lblMission;
	private: System::Windows::Forms::Label^ lblWhyChoose;
	private: System::Windows::Forms::Label^ lblWhyChooseText;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblAbout = (gcnew System::Windows::Forms::Label());
			this->lblMissionText = (gcnew System::Windows::Forms::Label());
			this->lblMission = (gcnew System::Windows::Forms::Label());
			this->lblWhyChoose = (gcnew System::Windows::Forms::Label());
			this->lblWhyChooseText = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Navy;
			this->lblTitle->Location = System::Drawing::Point(190, 20);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(497, 52);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"ABOUT SALON ZELORA";
			// 
			// lblAbout
			// 
			this->lblAbout->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAbout->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblAbout->Location = System::Drawing::Point(70, 100);
			this->lblAbout->Name = L"lblAbout";
			this->lblAbout->Size = System::Drawing::Size(798, 301);
			this->lblAbout->TabIndex = 1;
			this->lblAbout->Text = resources->GetString(L"lblAbout.Text");
			// 
			// lblMissionText
			// 
			this->lblMissionText->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMissionText->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblMissionText->Location = System::Drawing::Point(12, 447);
			this->lblMissionText->Name = L"lblMissionText";
			this->lblMissionText->Size = System::Drawing::Size(910, 39);
			this->lblMissionText->TabIndex = 2;
			this->lblMissionText->Text = L"To provide high-quality beauty services with care, professionalism and creativity"
				L".";
			// 
			// lblMission
			// 
			this->lblMission->AutoSize = true;
			this->lblMission->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMission->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblMission->Location = System::Drawing::Point(325, 401);
			this->lblMission->Name = L"lblMission";
			this->lblMission->Size = System::Drawing::Size(182, 40);
			this->lblMission->TabIndex = 3;
			this->lblMission->Text = L"OUR MISSION";
			// 
			// lblWhyChoose
			// 
			this->lblWhyChoose->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWhyChoose->ForeColor = System::Drawing::Color::MidnightBlue;
			this->lblWhyChoose->Location = System::Drawing::Point(280, 486);
			this->lblWhyChoose->Name = L"lblWhyChoose";
			this->lblWhyChoose->Size = System::Drawing::Size(265, 36);
			this->lblWhyChoose->TabIndex = 4;
			this->lblWhyChoose->Text = L"WHY CHOOSE US\?";
			// 
			// lblWhyChooseText
			// 
			this->lblWhyChooseText->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWhyChooseText->ForeColor = System::Drawing::Color::SteelBlue;
			this->lblWhyChooseText->Location = System::Drawing::Point(193, 537);
			this->lblWhyChooseText->Name = L"lblWhyChooseText";
			this->lblWhyChooseText->Size = System::Drawing::Size(467, 146);
			this->lblWhyChooseText->TabIndex = 5;
			this->lblWhyChooseText->Text = L"✓ Professional service\r\n✓ Friendly environment\r\n✓ Quality beauty care\r\n✓ Customer"
				L" satisfaction";
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->lblWhyChooseText);
			this->Controls->Add(this->lblWhyChoose);
			this->Controls->Add(this->lblMission);
			this->Controls->Add(this->lblMissionText);
			this->Controls->Add(this->lblAbout);
			this->Controls->Add(this->lblTitle);
			this->Name = L"AboutForm";
			this->Text = L"SALON ZELORA - About Us";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
