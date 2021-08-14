#pragma once

namespace bklib {

	/// <summary>
	/// —водка дл€ Rules
	/// </summary>
	public ref class Rules : public System::Windows::Forms::Form
	{
	public:
		Rules(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Rules()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bOKRules;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Rules::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bOKRules = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 211);
			this->label1->TabIndex = 0;
			//this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// bOKRules
			// 
			this->bOKRules->Location = System::Drawing::Point(120, 250);
			this->bOKRules->Name = L"bOKRules";
			this->bOKRules->Size = System::Drawing::Size(78, 27);
			this->bOKRules->TabIndex = 1;
			this->bOKRules->Text = L"OK";
			this->bOKRules->UseVisualStyleBackColor = true;
			this->bOKRules->Click += gcnew System::EventHandler(this, &Rules::bOKRules_Click);
			// 
			// Rules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 289);
			this->Controls->Add(this->bOKRules);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Rules";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ак играть";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bOKRules_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};
}
