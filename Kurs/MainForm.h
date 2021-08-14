#pragma once
using namespace bklib;
namespace Kurs {
	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bMainGame;
	private: System::Windows::Forms::Button^  bMainRules;
	private: System::Windows::Forms::Button^  bMainAbout;
	private: System::Windows::Forms::Label^  label1Main;
	private: System::Windows::Forms::Label^  label2Main;
	private: System::Windows::Forms::Button^  bMainExit;
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bMainGame = (gcnew System::Windows::Forms::Button());
			this->bMainRules = (gcnew System::Windows::Forms::Button());
			this->bMainAbout = (gcnew System::Windows::Forms::Button());
			this->label1Main = (gcnew System::Windows::Forms::Label());
			this->label2Main = (gcnew System::Windows::Forms::Label());
			this->bMainExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bMainGame
			// 
			this->bMainGame->Location = System::Drawing::Point(95, 53);
			this->bMainGame->Name = L"bMainGame";
			this->bMainGame->Size = System::Drawing::Size(95, 27);
			this->bMainGame->TabIndex = 0;
			this->bMainGame->Text = L"����� ����";
			this->bMainGame->UseVisualStyleBackColor = true;
			this->bMainGame->Click += gcnew System::EventHandler(this, &MainForm::bMainGame_Click);
			// 
			// bMainRules
			// 
			this->bMainRules->Location = System::Drawing::Point(95, 109);
			this->bMainRules->Name = L"bMainRules";
			this->bMainRules->Size = System::Drawing::Size(95, 27);
			this->bMainRules->TabIndex = 1;
			this->bMainRules->Text = L"��� ������";
			this->bMainRules->UseVisualStyleBackColor = true;
			this->bMainRules->Click += gcnew System::EventHandler(this, &MainForm::bMainRules_Click);
			// 
			// bMainAbout
			// 
			this->bMainAbout->Location = System::Drawing::Point(95, 165);
			this->bMainAbout->Name = L"bMainAbout";
			this->bMainAbout->Size = System::Drawing::Size(95, 27);
			this->bMainAbout->TabIndex = 2;
			this->bMainAbout->Text = L"� ���������";
			this->bMainAbout->UseVisualStyleBackColor = true;
			this->bMainAbout->Click += gcnew System::EventHandler(this, &MainForm::bMainAbout_Click);
			// 
			// label1Main
			// 
			this->label1Main->AutoSize = true;
			this->label1Main->Location = System::Drawing::Point(13, 13);
			this->label1Main->Name = L"label1Main";
			this->label1Main->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1Main->Size = System::Drawing::Size(122, 13);
			this->label1Main->TabIndex = 3;
			this->label1Main->Text = L"���� \"���� � ������\"";
			// 
			// label2Main
			// 
			this->label2Main->AutoSize = true;
			this->label2Main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2Main->Location = System::Drawing::Point(13, 26);
			this->label2Main->Name = L"label2Main";
			this->label2Main->Size = System::Drawing::Size(45, 16);
			this->label2Main->TabIndex = 4;
			this->label2Main->Text = L"����";
			// 
			// bMainExit
			// 
			this->bMainExit->Location = System::Drawing::Point(95, 222);
			this->bMainExit->Name = L"bMainExit";
			this->bMainExit->Size = System::Drawing::Size(95, 27);
			this->bMainExit->TabIndex = 5;
			this->bMainExit->Text = L"�����";
			this->bMainExit->UseVisualStyleBackColor = true;
			this->bMainExit->Click += gcnew System::EventHandler(this, &MainForm::bMainExit_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->bMainExit);
			this->Controls->Add(this->label2Main);
			this->Controls->Add(this->label1Main);
			this->Controls->Add(this->bMainAbout);
			this->Controls->Add(this->bMainRules);
			this->Controls->Add(this->bMainGame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� � ������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bMainGame_Click(System::Object^  sender, System::EventArgs^  e) {
		Game ^form_game = gcnew Game();
		form_game->ShowDialog();
	}
private: System::Void bMainRules_Click(System::Object^  sender, System::EventArgs^  e) {
	Rules ^form_rules = gcnew Rules();
	form_rules->ShowDialog();
}
private: System::Void bMainAbout_Click(System::Object^  sender, System::EventArgs^  e) {
	About ^form_about = gcnew About();
	form_about->ShowDialog();
}
private: System::Void bMainExit_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
