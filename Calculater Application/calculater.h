#pragma once

namespace CalculaterApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calculater
	/// </summary>
	public ref class calculater : public System::Windows::Forms::Form
	{
	public:
		calculater(void)
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
		~calculater()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ TxtDisplay;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ Num7;
	private: System::Windows::Forms::Button^ Num8;
	private: System::Windows::Forms::Button^ Num9;



	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ Num4;
	private: System::Windows::Forms::Button^ Num5;
	private: System::Windows::Forms::Button^ Num6;



	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ Num3;
	private: System::Windows::Forms::Button^ Num2;
	private: System::Windows::Forms::Button^ Num1;



	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ BTNDeci;
	private: System::Windows::Forms::Button^ EqualTo;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TxtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Num7 = (gcnew System::Windows::Forms::Button());
			this->Num8 = (gcnew System::Windows::Forms::Button());
			this->Num9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->Num4 = (gcnew System::Windows::Forms::Button());
			this->Num5 = (gcnew System::Windows::Forms::Button());
			this->Num6 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->Num3 = (gcnew System::Windows::Forms::Button());
			this->Num2 = (gcnew System::Windows::Forms::Button());
			this->Num1 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->BTNDeci = (gcnew System::Windows::Forms::Button());
			this->EqualTo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			//
			// button1
			//
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->Location = System::Drawing::Point(12, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &calculater::button1_Click);
			//
			// TxtDisplay
			//
			this->TxtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtDisplay->Location = System::Drawing::Point(12, 12);
			this->TxtDisplay->Multiline = true;
			this->TxtDisplay->Name = L"TxtDisplay";
			this->TxtDisplay->Size = System::Drawing::Size(323, 91);
			this->TxtDisplay->TabIndex = 1;
			this->TxtDisplay->Text = L"0";
			this->TxtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			//
			// button2
			//
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(93, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 0;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calculater::ClrBTN);
			//
			// button3
			//
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(174, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 0;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calculater::ClrEntryBTN);
			//
			// button4
			//
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(255, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 0;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &calculater::ArthOperators);
			//
			// Num7
			//
			this->Num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num7->Location = System::Drawing::Point(12, 195);
			this->Num7->Name = L"Num7";
			this->Num7->Size = System::Drawing::Size(80, 80);
			this->Num7->TabIndex = 0;
			this->Num7->Text = L"7";
			this->Num7->UseVisualStyleBackColor = true;
			this->Num7->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// Num8
			//
			this->Num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num8->Location = System::Drawing::Point(93, 195);
			this->Num8->Name = L"Num8";
			this->Num8->Size = System::Drawing::Size(80, 80);
			this->Num8->TabIndex = 0;
			this->Num8->Text = L"8";
			this->Num8->UseVisualStyleBackColor = true;
			this->Num8->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// Num9
			//
			this->Num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num9->Location = System::Drawing::Point(174, 195);
			this->Num9->Name = L"Num9";
			this->Num9->Size = System::Drawing::Size(80, 80);
			this->Num9->TabIndex = 0;
			this->Num9->Text = L"9";
			this->Num9->UseVisualStyleBackColor = true;
			this->Num9->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// button8
			//
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(255, 195);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 0;
			this->button8->Text = L"*";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &calculater::ArthOperators);
			//
			// Num4
			//
			this->Num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num4->Location = System::Drawing::Point(12, 281);
			this->Num4->Name = L"Num4";
			this->Num4->Size = System::Drawing::Size(80, 80);
			this->Num4->TabIndex = 0;
			this->Num4->Text = L"4";
			this->Num4->UseVisualStyleBackColor = true;
			this->Num4->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// Num5
			//
			this->Num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num5->Location = System::Drawing::Point(93, 281);
			this->Num5->Name = L"Num5";
			this->Num5->Size = System::Drawing::Size(80, 80);
			this->Num5->TabIndex = 0;
			this->Num5->Text = L"5";
			this->Num5->UseVisualStyleBackColor = true;
			this->Num5->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// Num6
			//
			this->Num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num6->Location = System::Drawing::Point(174, 281);
			this->Num6->Name = L"Num6";
			this->Num6->Size = System::Drawing::Size(80, 80);
			this->Num6->TabIndex = 0;
			this->Num6->Text = L"6";
			this->Num6->UseVisualStyleBackColor = true;
			this->Num6->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// button12
			//
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(255, 281);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 0;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &calculater::ArthOperators);
			//
			// Num3
			//
			this->Num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num3->Location = System::Drawing::Point(12, 367);
			this->Num3->Name = L"Num3";
			this->Num3->Size = System::Drawing::Size(80, 80);
			this->Num3->TabIndex = 0;
			this->Num3->Text = L"3";
			this->Num3->UseVisualStyleBackColor = true;
			this->Num3->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// Num2
			//
			this->Num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num2->Location = System::Drawing::Point(93, 367);
			this->Num2->Name = L"Num2";
			this->Num2->Size = System::Drawing::Size(80, 80);
			this->Num2->TabIndex = 0;
			this->Num2->Text = L"2";
			this->Num2->UseVisualStyleBackColor = true;
			this->Num2->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// Num1
			//
			this->Num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Num1->Location = System::Drawing::Point(174, 367);
			this->Num1->Name = L"Num1";
			this->Num1->Size = System::Drawing::Size(80, 80);
			this->Num1->TabIndex = 0;
			this->Num1->Text = L"1";
			this->Num1->UseVisualStyleBackColor = true;
			this->Num1->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// button16
			//
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(255, 367);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 80);
			this->button16->TabIndex = 0;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &calculater::ArthOperators);
			//
			// button17
			//
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(12, 453);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 80);
			this->button17->TabIndex = 0;
			this->button17->Text = L"±";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &calculater::PlusMinBTN);
			//
			// button18
			//
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(93, 453);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 80);
			this->button18->TabIndex = 0;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &calculater::EnterNumber);
			//
			// BTNDeci
			//
			this->BTNDeci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNDeci->Location = System::Drawing::Point(174, 453);
			this->BTNDeci->Name = L"BTNDeci";
			this->BTNDeci->Size = System::Drawing::Size(80, 80);
			this->BTNDeci->TabIndex = 0;
			this->BTNDeci->Text = L".";
			this->BTNDeci->UseVisualStyleBackColor = true;
			this->BTNDeci->Click += gcnew System::EventHandler(this, &calculater::Deci);
			//
			// EqualTo
			//
			this->EqualTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualTo->Location = System::Drawing::Point(255, 453);
			this->EqualTo->Name = L"EqualTo";
			this->EqualTo->Size = System::Drawing::Size(80, 80);
			this->EqualTo->TabIndex = 0;
			this->EqualTo->Text = L"=";
			this->EqualTo->UseVisualStyleBackColor = true;
			this->EqualTo->Click += gcnew System::EventHandler(this, &calculater::BTNEqual);
			//
			// calculater
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 536);
			this->Controls->Add(this->TxtDisplay);
			this->Controls->Add(this->EqualTo);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->BTNDeci);
			this->Controls->Add(this->Num1);
			this->Controls->Add(this->Num6);
			this->Controls->Add(this->Num9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->Num2);
			this->Controls->Add(this->Num5);
			this->Controls->Add(this->Num8);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Num3);
			this->Controls->Add(this->Num4);
			this->Controls->Add(this->Num7);
			this->Controls->Add(this->button1);
			this->Name = L"calculater";
			this->Text = L"calculater";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double FirstDigit, SecondDigit, Result;
		String^ opertaor;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (TxtDisplay->Text ->Length > 0)
		{
			TxtDisplay->Text = TxtDisplay->Text->Remove(TxtDisplay->Text->Length - 1, 1);
		}
		if (TxtDisplay->Text=="")
		{
			TxtDisplay->Text = "0";
		}
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e)
{
	Button^ Numbers = safe_cast<Button^>(sender);
	if (TxtDisplay->Text == "0")
	{
		TxtDisplay->Text = Numbers->Text;
	}
	else
	{
		TxtDisplay->Text = TxtDisplay->Text + Numbers->Text;
	}
}
private: System::Void ArthOperators(System::Object^ sender, System::EventArgs^ e)
{
	Button^ NumberOperator = safe_cast<Button^>(sender);
	FirstDigit = Double::Parse(TxtDisplay->Text);
	TxtDisplay->Text = "";
	opertaor = NumberOperator->Text;
}
private: System::Void Deci(System::Object^ sender, System::EventArgs^ e)
{
	if (!TxtDisplay->Text->Contains("."))
	{
		TxtDisplay->Text = TxtDisplay->Text + ".";
}
}
private: System::Void BTNEqual(System::Object^ sender, System::EventArgs^ e)
{
	SecondDigit = Double::Parse(TxtDisplay->Text);

	if (opertaor == "+")
	{
		Result = FirstDigit + SecondDigit;
		TxtDisplay->Text = System::Convert::ToString(Result);
	}

	else if (opertaor == "-")
	{
		Result = FirstDigit - SecondDigit;
			TxtDisplay->Text = System::Convert::ToString(Result);
	}
	else if (opertaor == "*")
	{
		Result = FirstDigit * SecondDigit;
		TxtDisplay->Text = System::Convert::ToString(Result);
	}
	else if (opertaor == "/")
	{
		Result = FirstDigit / SecondDigit;
		TxtDisplay->Text = System::Convert::ToString(Result);
	}

}
private: System::Void ClrBTN(System::Object^ sender, System::EventArgs^ e)
{
	TxtDisplay->Text = "0";
}
private: System::Void ClrEntryBTN(System::Object^ sender, System::EventArgs^ e)
{
	TxtDisplay->Text = "0";
}
private: System::Void PlusMinBTN(System::Object^ sender, System::EventArgs^ e)
{
	if (TxtDisplay->Text->Contains("-"))
	{
		TxtDisplay->Text = TxtDisplay->Text->Remove(0, 1);
	}
	else
	{
		TxtDisplay->Text = "-" + TxtDisplay->Text;
	}
}
};
}
