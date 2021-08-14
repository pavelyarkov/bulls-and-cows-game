#include "Game.h"
using namespace Kurs;

//������� ��������� ������� ������
		System::Void Game::GenTrueDigits()
		{
			srand((unsigned int)time(NULL));
			bool used[10];
			for (int i = 0; i < 10; i++) { used[i] = false; }
			for (int i = 0; i < 4; i++)
			{
				true_digits[i] = rand() % 10;
				while (used[true_digits[i]])		//���� ����������� ��� ������������� �����, �� ������� �����������
				{
					true_digits[i] = rand() % 10;
				}
				if (!used[true_digits[i]]) { used[true_digits[i]] = true; }
			}
		}

				 //��������� ������� UsedAnswer, ���������� ����� � ��� ��������� �����
				 //true - ��������� �����, false - ����������
		 System::Boolean Game::Search(int a) {
			for (int i = 0; i < n; i++)
			{
				if (a == mas[i]) { return true; }
			}
			return false;
		}

				 //�������, ��������������� ������������� ������ � ���� �� ������ ��������� ���
				 //true - ��������� �����, false - ����������
		 System::Boolean Game::UsedAnswer() {
			//���� ���������� ����� ������ �������� ������
			if (n == 0)
			{
				mas = new int[++n];
				mas[0] = System::Convert::ToInt32(TBoxGame->Text);
				return false;
			}
			else
			{
				if (Search(System::Convert::ToInt32(TBoxGame->Text))) { return true; }
				else
				{
					mas = (int*)realloc(mas, ++n * sizeof(int));
					mas[n - 1] = System::Convert::ToInt32(TBoxGame->Text);
					return false;
				}
			}
		}

				 //������� ������ ������
		System::Void Game::ReadAnswer()
		{
			TBoxCopy = TBoxGame->Text;			//����� ����� ��� ������ ����� �� �����, �.�. TBoxGame ����� ������
												//������ ������ � ������ digits � �������� ������ �� TBoxGame
			for (int i = 3; i >= 0; i--)
			{
				digits[i] = System::Convert::ToInt32(TBoxGame->Text->Remove(0, TBoxGame->TextLength - 1));
				TBoxGame->Text = TBoxGame->Text->Remove(TBoxGame->TextLength - 1, 1);
			}
			TBoxGame->Text = "****";
			bTryGame->Enabled = false;
			bDelGame->Enabled = false;

			//������������� ������
			for (int i = 0; i < 4; i++)
			{
				switch (digits[i])
				{
				case 0: bDigit0Game->Enabled = true; break;
				case 1: bDigit1Game->Enabled = true; break;
				case 2: bDigit2Game->Enabled = true; break;
				case 3: bDigit3Game->Enabled = true; break;
				case 4: bDigit4Game->Enabled = true; break;
				case 5: bDigit5Game->Enabled = true; break;
				case 6: bDigit6Game->Enabled = true; break;
				case 7: bDigit7Game->Enabled = true; break;
				case 8: bDigit8Game->Enabled = true; break;
				case 9: bDigit9Game->Enabled = true; break;
				default: break;
				}
			}
		}

				 //������� �������� ������
		System::Void Game::CheckAnswer()
		{

			//"����"
			for (int i = 0; i < 4; i++)
			{
				if (true_digits[i] == digits[i]) { bulls++; }
			}

			//"������"
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
					if ((digits[i] == true_digits[j]) && (true_digits[i] != digits[i])) { cows++; }
			}

		}

				 //����� ����������
		System::Void Game::ShowResult() {
			dgFieldGame->Rows->Add(++r, TBoxCopy, "�: " + bulls, "�: " + cows);
			dgFieldGame->FirstDisplayedScrollingRowIndex = r - 1;		//�������������� ��������� �� ����� ������
		}

	System::Void Game::Game_Load(System::Object^  sender, System::EventArgs^  e) {
		GenTrueDigits();
	}
System::Void Game::button_Click(System::Object^  sender, System::EventArgs^  e) {
	Button^ b = dynamic_cast <Button^> (sender);
	if (TBoxGame->Text == "****")
	{

		b->Enabled = false;
		TBoxGame->Text = b->Text;
		bDelGame->Enabled = true;
	}
	else
	{
		//���� ����� ������ ������ ������ ��������, �� ������� ����� � ������������� ������
		if (TBoxGame->TextLength < 4)
		{
			TBoxGame->Text = TBoxGame->Text + b->Text;
			b->Enabled = false;
			if (TBoxGame->TextLength == 4) { bTryGame->Enabled = true; }
		}
		else { return; }
	}
}
System::Void Game::bDelGame_Click(System::Object^  sender, System::EventArgs^  e) {
	if (TBoxGame->Text == "****") { return; }
	else
	{
		//���������� ���������� �������
		wchar_t ch;
		if (TBoxGame->TextLength == 1) { ch = System::Convert::ToChar(TBoxGame->Text); }
		else { ch = System::Convert::ToChar(TBoxGame->Text->Remove(0, TBoxGame->TextLength - 1)); }

		//��������
		TBoxGame->Text = TBoxGame->Text->Remove(TBoxGame->TextLength - 1, 1);
		bTryGame->Enabled = false;
		//������������� ������
		switch (ch)
		{
		case '0': bDigit0Game->Enabled = true; break;
		case '1': bDigit1Game->Enabled = true; break;
		case '2': bDigit2Game->Enabled = true; break;
		case '3': bDigit3Game->Enabled = true; break;
		case '4': bDigit4Game->Enabled = true; break;
		case '5': bDigit5Game->Enabled = true; break;
		case '6': bDigit6Game->Enabled = true; break;
		case '7': bDigit7Game->Enabled = true; break;
		case '8': bDigit8Game->Enabled = true; break;
		case '9': bDigit9Game->Enabled = true; break;
		default: break;
		}

		//������ ���� ����������� ����������, ������ "�������" �����������
		if (TBoxGame->TextLength == 0) { TBoxGame->Text = "****"; bDelGame->Enabled = false; }
	}
}
System::Void Game::bExitGame_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("�� �������, ��� ������ �����? ������� ���� �� ����� ���������.",
		"�����", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Close();
	}
	else { return; }
}
System::Void Game::bTryGame_Click(System::Object^  sender, System::EventArgs^  e) {
	if (UsedAnswer()) {
		if (MessageBox::Show("�� ��� ��������� ��� �����!",
			"����", MessageBoxButtons::OK, MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::OK) {
			for (int i = 1; i <= 4; i++) { bDelGame_Click(sender, e); }
			return;
		}
	}
	ReadAnswer();
	CheckAnswer();
	ShowResult();

	//��������� ����������
	if (bulls == 4)
	{
		if (MessageBox::Show("���! �� ������� �����!",
			"������!", MessageBoxButtons::OK, MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::OK) {
			Close();
		}
		else { return; }
	}
	else { bulls = 0; cows = 0; }
}
System::Void Game::dgFieldGame_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
	//������ ��������� ��������� �����
	if (MouseButtons != System::Windows::Forms::MouseButtons::None)
		dgFieldGame->CurrentCell->Selected = false;

	//�������� ��������� � ������ ������
	dgFieldGame->Rows[0]->Cells[0]->Selected = false;
}