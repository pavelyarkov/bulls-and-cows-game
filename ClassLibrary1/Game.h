#pragma once
#include "Stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace System::Windows::Forms;
namespace bklib {
	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
		int *true_digits;		//Решение
		int *digits;			//Ответ игрока
		int bulls;
		int cows;
		int r;
		int n;					//Переменная для проверки ответа на уникальности, а также компонента размерности массива mas
		int *mas;				//Массив для проверки ответа на уникальность
		System::String ^ TBoxCopy;
		System::Windows::Forms::TextBox^  TBoxGame;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
		System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
		System::Windows::Forms::Button^  bExitGame;
	public:
		Game(void);

	private:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Game()
			;
	private: System::Windows::Forms::DataGridView^  dgFieldGame;
			 System::Windows::Forms::Button^  bDigit1Game;
			 System::Windows::Forms::Button^  bDigit2Game;
			 System::Windows::Forms::Button^  bDigit3Game;
			 System::Windows::Forms::Button^  bDigit4Game;
			 System::Windows::Forms::Button^  bDigit5Game;
			 System::Windows::Forms::Button^  bDigit6Game;
			 System::Windows::Forms::Button^  bDigit7Game;
			 System::Windows::Forms::Button^  bDigit8Game;
			 System::Windows::Forms::Button^  bDigit9Game;
			 System::Windows::Forms::Button^  bTryGame;
			 System::Windows::Forms::Button^  bDigit0Game;
			 System::Windows::Forms::Button^  bDelGame;

			 /// <summary>
			 /// Обязательная переменная конструктора.
			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Требуемый метод для поддержки конструктора — не изменяйте 
			 /// содержимое этого метода с помощью редактора кода.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 this->dgFieldGame = (gcnew System::Windows::Forms::DataGridView());
				 this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->bDigit1Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit2Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit3Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit4Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit5Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit6Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit7Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit8Game = (gcnew System::Windows::Forms::Button());
				 this->bDigit9Game = (gcnew System::Windows::Forms::Button());
				 this->bTryGame = (gcnew System::Windows::Forms::Button());
				 this->bDigit0Game = (gcnew System::Windows::Forms::Button());
				 this->bDelGame = (gcnew System::Windows::Forms::Button());
				 this->TBoxGame = (gcnew System::Windows::Forms::TextBox());
				 this->bExitGame = (gcnew System::Windows::Forms::Button());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgFieldGame))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // dgFieldGame
				 // 
				 this->dgFieldGame->AllowUserToAddRows = false;
				 this->dgFieldGame->AllowUserToResizeColumns = false;
				 this->dgFieldGame->AllowUserToResizeRows = false;
				 this->dgFieldGame->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->dgFieldGame->ColumnHeadersVisible = false;
				 this->dgFieldGame->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
					 this->Column1,
						 this->Column2, this->Column3, this->Column4
				 });
				 dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
				 dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
				 dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
				 dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
				 dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
				 dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				 dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
				 this->dgFieldGame->DefaultCellStyle = dataGridViewCellStyle1;
				 this->dgFieldGame->Location = System::Drawing::Point(37, 12);
				 this->dgFieldGame->MultiSelect = false;
				 this->dgFieldGame->Name = L"dgFieldGame";
				 this->dgFieldGame->ReadOnly = true;
				 this->dgFieldGame->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
				 this->dgFieldGame->RowHeadersVisible = false;
				 this->dgFieldGame->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
				 this->dgFieldGame->ShowCellToolTips = false;
				 this->dgFieldGame->ShowEditingIcon = false;
				 this->dgFieldGame->Size = System::Drawing::Size(600, 335);
				 this->dgFieldGame->TabIndex = 0;
				 this->dgFieldGame->TabStop = false;
				 this->dgFieldGame->SelectionChanged += gcnew System::EventHandler(this, &Game::dgFieldGame_SelectionChanged);
				 // 
				 // Column1
				 // 
				 this->Column1->HeaderText = L"";
				 this->Column1->Name = L"Column1";
				 this->Column1->ReadOnly = true;
				 this->Column1->Width = 50;
				 // 
				 // Column2
				 // 
				 this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->Column2->HeaderText = L"";
				 this->Column2->Name = L"Column2";
				 this->Column2->ReadOnly = true;
				 // 
				 // Column3
				 // 
				 this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->Column3->HeaderText = L"";
				 this->Column3->Name = L"Column3";
				 this->Column3->ReadOnly = true;
				 // 
				 // Column4
				 // 
				 this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->Column4->HeaderText = L"";
				 this->Column4->Name = L"Column4";
				 this->Column4->ReadOnly = true;
				 // 
				 // bDigit1Game
				 // 
				 this->bDigit1Game->Location = System::Drawing::Point(177, 412);
				 this->bDigit1Game->Name = L"bDigit1Game";
				 this->bDigit1Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit1Game->TabIndex = 2;
				 this->bDigit1Game->TabStop = false;
				 this->bDigit1Game->Text = L"1";
				 this->bDigit1Game->UseVisualStyleBackColor = true;
				 this->bDigit1Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit2Game
				 // 
				 this->bDigit2Game->Location = System::Drawing::Point(286, 412);
				 this->bDigit2Game->Name = L"bDigit2Game";
				 this->bDigit2Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit2Game->TabIndex = 4;
				 this->bDigit2Game->TabStop = false;
				 this->bDigit2Game->Text = L"2";
				 this->bDigit2Game->UseVisualStyleBackColor = true;
				 this->bDigit2Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit3Game
				 // 
				 this->bDigit3Game->Location = System::Drawing::Point(395, 412);
				 this->bDigit3Game->Name = L"bDigit3Game";
				 this->bDigit3Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit3Game->TabIndex = 6;
				 this->bDigit3Game->TabStop = false;
				 this->bDigit3Game->Text = L"3";
				 this->bDigit3Game->UseVisualStyleBackColor = true;
				 this->bDigit3Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit4Game
				 // 
				 this->bDigit4Game->Location = System::Drawing::Point(177, 456);
				 this->bDigit4Game->Name = L"bDigit4Game";
				 this->bDigit4Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit4Game->TabIndex = 8;
				 this->bDigit4Game->TabStop = false;
				 this->bDigit4Game->Text = L"4";
				 this->bDigit4Game->UseVisualStyleBackColor = true;
				 this->bDigit4Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit5Game
				 // 
				 this->bDigit5Game->Location = System::Drawing::Point(286, 456);
				 this->bDigit5Game->Name = L"bDigit5Game";
				 this->bDigit5Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit5Game->TabIndex = 10;
				 this->bDigit5Game->TabStop = false;
				 this->bDigit5Game->Text = L"5";
				 this->bDigit5Game->UseVisualStyleBackColor = true;
				 this->bDigit5Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit6Game
				 // 
				 this->bDigit6Game->Location = System::Drawing::Point(395, 456);
				 this->bDigit6Game->Name = L"bDigit6Game";
				 this->bDigit6Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit6Game->TabIndex = 12;
				 this->bDigit6Game->TabStop = false;
				 this->bDigit6Game->Text = L"6";
				 this->bDigit6Game->UseVisualStyleBackColor = true;
				 this->bDigit6Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit7Game
				 // 
				 this->bDigit7Game->Location = System::Drawing::Point(177, 502);
				 this->bDigit7Game->Name = L"bDigit7Game";
				 this->bDigit7Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit7Game->TabIndex = 14;
				 this->bDigit7Game->TabStop = false;
				 this->bDigit7Game->Text = L"7";
				 this->bDigit7Game->UseVisualStyleBackColor = true;
				 this->bDigit7Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit8Game
				 // 
				 this->bDigit8Game->Location = System::Drawing::Point(286, 502);
				 this->bDigit8Game->Name = L"bDigit8Game";
				 this->bDigit8Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit8Game->TabIndex = 16;
				 this->bDigit8Game->TabStop = false;
				 this->bDigit8Game->Text = L"8";
				 this->bDigit8Game->UseVisualStyleBackColor = true;
				 this->bDigit8Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDigit9Game
				 // 
				 this->bDigit9Game->Location = System::Drawing::Point(395, 502);
				 this->bDigit9Game->Name = L"bDigit9Game";
				 this->bDigit9Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit9Game->TabIndex = 18;
				 this->bDigit9Game->TabStop = false;
				 this->bDigit9Game->Text = L"9";
				 this->bDigit9Game->UseVisualStyleBackColor = true;
				 this->bDigit9Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bTryGame
				 // 
				 this->bTryGame->Enabled = false;
				 this->bTryGame->Location = System::Drawing::Point(177, 548);
				 this->bTryGame->Name = L"bTryGame";
				 this->bTryGame->Size = System::Drawing::Size(75, 23);
				 this->bTryGame->TabIndex = 20;
				 this->bTryGame->TabStop = false;
				 this->bTryGame->Text = L"Угадать";
				 this->bTryGame->UseVisualStyleBackColor = true;
				 this->bTryGame->Click += gcnew System::EventHandler(this, &Game::bTryGame_Click);
				 // 
				 // bDigit0Game
				 // 
				 this->bDigit0Game->Location = System::Drawing::Point(286, 548);
				 this->bDigit0Game->Name = L"bDigit0Game";
				 this->bDigit0Game->Size = System::Drawing::Size(75, 23);
				 this->bDigit0Game->TabIndex = 22;
				 this->bDigit0Game->TabStop = false;
				 this->bDigit0Game->Text = L"0";
				 this->bDigit0Game->UseVisualStyleBackColor = true;
				 this->bDigit0Game->Click += gcnew System::EventHandler(this, &Game::button_Click);
				 // 
				 // bDelGame
				 // 
				 this->bDelGame->Enabled = false;
				 this->bDelGame->Location = System::Drawing::Point(395, 548);
				 this->bDelGame->Name = L"bDelGame";
				 this->bDelGame->Size = System::Drawing::Size(75, 23);
				 this->bDelGame->TabIndex = 24;
				 this->bDelGame->TabStop = false;
				 this->bDelGame->Text = L"Удалить";
				 this->bDelGame->UseVisualStyleBackColor = true;
				 this->bDelGame->Click += gcnew System::EventHandler(this, &Game::bDelGame_Click);
				 // 
				 // TBoxGame
				 // 
				 this->TBoxGame->BackColor = System::Drawing::Color::White;
				 this->TBoxGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->TBoxGame->Location = System::Drawing::Point(274, 366);
				 this->TBoxGame->MaxLength = 4;
				 this->TBoxGame->Name = L"TBoxGame";
				 this->TBoxGame->ReadOnly = true;
				 this->TBoxGame->Size = System::Drawing::Size(100, 29);
				 this->TBoxGame->TabIndex = 28;
				 this->TBoxGame->TabStop = false;
				 this->TBoxGame->Text = L"****";
				 this->TBoxGame->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				 // 
				 // bExitGame
				 // 
				 this->bExitGame->Location = System::Drawing::Point(37, 520);
				 this->bExitGame->Name = L"bExitGame";
				 this->bExitGame->Size = System::Drawing::Size(53, 53);
				 this->bExitGame->TabIndex = 29;
				 this->bExitGame->TabStop = false;
				 this->bExitGame->Text = L"Выход в меню";
				 this->bExitGame->UseVisualStyleBackColor = true;
				 this->bExitGame->Click += gcnew System::EventHandler(this, &Game::bExitGame_Click);
				 // 
				 // Game
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(663, 602);
				 this->Controls->Add(this->bExitGame);
				 this->Controls->Add(this->TBoxGame);
				 this->Controls->Add(this->bDelGame);
				 this->Controls->Add(this->bDigit0Game);
				 this->Controls->Add(this->bTryGame);
				 this->Controls->Add(this->bDigit9Game);
				 this->Controls->Add(this->bDigit8Game);
				 this->Controls->Add(this->bDigit7Game);
				 this->Controls->Add(this->bDigit6Game);
				 this->Controls->Add(this->bDigit5Game);
				 this->Controls->Add(this->bDigit4Game);
				 this->Controls->Add(this->bDigit3Game);
				 this->Controls->Add(this->bDigit2Game);
				 this->Controls->Add(this->bDigit1Game);
				 this->Controls->Add(this->dgFieldGame);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->Name = L"Game";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Игра";
				 this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgFieldGame))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

			 //Функция генерации решения задачи
			 System::Void GenTrueDigits();

			 //Компонент функции UsedAnswer, сравнивает число с уже введёнными ранее
			 //true - повторное число, false - уникальное
			 System::Boolean Search(int a);

			 //Функция, предотвращающая использование одного и того же ответа несколько раз
			 //true - повторное число, false - уникальное
			 System::Boolean UsedAnswer();

			 //Функция чтения ответа
			 System::Void ReadAnswer();

			 //Вывод результата
			 System::Void ShowResult();
			 System::Void Game::CheckAnswer();
			 System::Void Game_Load(System::Object^  sender, System::EventArgs^  e);
			 System::Void button_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void bDelGame_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void bExitGame_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void bTryGame_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void dgFieldGame_SelectionChanged(System::Object^  sender, System::EventArgs^  e);

	};
}
