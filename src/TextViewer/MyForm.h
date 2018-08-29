#pragma once

namespace TextViewer {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(229, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(358, 349);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(11, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Path:";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(92, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(11, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Text Reader By Arseniio";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Default", L"ASCII", L"Unicode", L"UTF32", L"UTF8", 
				L"UTF7"});
			this->comboBox1->Location = System::Drawing::Point(11, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"Encoding";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(212, 40);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Path to file:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(212, 40);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Created: Date(UTC)\r\nLast modified: Date(UTC)\r\nLast call: Date(UTC)\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 373);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"TextReader";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*ASCII
		Unicode
		UTF32
		UTF8
		UTF7*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				// richTextBox1->Text = IO::File::ReadAllText(textBox1->Text);
		 if(comboBox1->Text == "Default" || comboBox1->Text == "Encoding" ){
			 richTextBox1->Text = IO::File::ReadAllText(textBox1->Text);
		 }
		 if(comboBox1->Text == "ASCII"){
			 richTextBox1->Text = IO::File::ReadAllText(textBox1->Text,System::Text::Encoding::ASCII);
		 }
		 if(comboBox1->Text == "Unicode"){
			 richTextBox1->Text = IO::File::ReadAllText(textBox1->Text,System::Text::Encoding::Unicode);
		 }
		 if(comboBox1->Text == "UTF32"){
			 richTextBox1->Text = IO::File::ReadAllText(textBox1->Text,System::Text::Encoding::UTF32);
		 }
		 if(comboBox1->Text == "UTF8"){
			 richTextBox1->Text = IO::File::ReadAllText(textBox1->Text,System::Text::Encoding::UTF8);
		 }
		 if(comboBox1->Text == "UTF7"){
			 richTextBox1->Text = IO::File::ReadAllText(textBox1->Text,System::Text::Encoding::UTF7);
		 }
		/* if(comboBox1->Text != "ASCII" || "Unicode" || "UTF32" || "UTF8" || "UTF7"){
			MessageBox::Show("Choose Encoding", "Warning");
		 } */
		 if(textBox1->Text == ""){
			MessageBox::Show("Choose Path to file", "Warning");
		 }
		 label3->Text = label3->Text + "\n" + System::IO::Path::GetFullPath(textBox1->Text);
		 label4->Text = 
			"Created:" + " " + System::IO::File::GetCreationTimeUtc(textBox1->Text) + "\n" +
			"Last modified:" + " " + System::IO::File::GetLastWriteTime(textBox1->Text) + "\n" +
			"Last call:" + " " + System::IO::File::GetLastAccessTime(textBox1->Text) + "\n";
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text = "";
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("https://github.com/Arseniio", "Creator's Git");
		 }
};
}
