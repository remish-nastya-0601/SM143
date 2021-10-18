#pragma once
#include <iostream>
using namespace std;
namespace SM143 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	class Function
	{
	protected:
		double a, b, c, A, B;
	public:
		virtual double evaluate(double x) = 0;
		virtual double max(double f, double d) = 0;
		virtual double min(double f, double d) = 0;
		void setParams(double a, double b, double c) {
			this->a = a;
			this->b = b;
			this->c = c;
			this->A = A;
			this->B = B;
		}
	};
	class parabola : public Function
	{
	public:
		double evaluate(double x)
		{
			return a * x * x + b * x + c;
		}
		double max(double f, double d)
		{
			double x, y, max, dx;
			dx = 0.0005;
			x = f;
			max = a * x * x + b * x + c;
			for (x = f + dx; x < d; x += dx)
			{
				y = a * x * x + b * x + c;
				if (y >= max) max = y;
			}
			return max;
		}
		double min(double f, double d)
		{
			double x, y, min, dx;
			dx = 0.0005;
			x = f;
			min = a * x * x + b * x + c;
			for (x = f + dx; x < d; x += dx)
			{
				y = a * x * x + b * x + c;
				if (y <= min) min = y;
			}
			return min;
		}
	};
	class hyperbola : public Function
	{
	public:
		double evaluate(double x)
		{
			return a / (x - b) + c;
		}
		double max(double f, double d)
		{
			double x, y, max, dx;
			dx = 0.0005;
			x = f;
			max = a / (x - b) + c;
			for (x = f + dx; x < d; x += dx)
			{
				y = a / (x - b) + c;
				if (y >= max) max = y;
			}
			return max;
		}
		double min(double f, double d)
		{
			double x, y, min, dx;
			dx = 0.0005;
			x = f;
			min = a / (x - b) + c;
			for (x = f + dx; x < d; x += dx)
			{
				y = a / (x - b) + c;
				if (y <= min) min = y;
			}
			return min;
		}
	};
	class exponenta : public Function
	{
	public:
		double evaluate(double x)
		{
			return  exp(x);
		}
		double max(double f, double d)
		{
			double x, y, max, dx;
			dx = 0.0005;
			x = f;
			max = exp(x);
			for (x = f + dx; x < d; x += dx)
			{
				y = exp(x);
				if (y >= max) max = y;
			}
			return max;
		}
		double min(double f, double d)
		{
			double x, y, min, dx;
			dx = 0.0005;
			x = f;
			min = exp(x);
			for (x = f + dx; x < d; x += dx)
			{
				y = exp(x);
				if (y <= min) min = y;
			}
			return min;
		}
	};

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

	private:
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(298, 220);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Экспонента";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 194);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 19);
			this->label12->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(7, 171);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(279, 19);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Минимальное значение на промежутке:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 152);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 19);
			this->label11->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 129);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(282, 19);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Максимальное значение на промежутке:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(170, 100);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(85, 26);
			this->textBox5->TabIndex = 7;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(32, 100);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(85, 26);
			this->textBox4->TabIndex = 6;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(149, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 19);
			this->label9->TabIndex = 5;
			this->label9->Text = L"В: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 102);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 19);
			this->label8->TabIndex = 4;
			this->label8->Text = L"А: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 19);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Задайте интервал: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 19);
			this->label4->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Входной аргумент: ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(317, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(298, 290);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Парабола";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(14, 250);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 19);
			this->label18->TabIndex = 20;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(10, 227);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(279, 19);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Минимальное значение на промежутке:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(14, 208);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 19);
			this->label20->TabIndex = 18;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(10, 185);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(282, 19);
			this->label21->TabIndex = 17;
			this->label21->Text = L"Максимальное значение на промежутке:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(173, 156);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(85, 26);
			this->textBox9->TabIndex = 16;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(35, 156);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(85, 26);
			this->textBox10->TabIndex = 15;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(152, 158);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(26, 19);
			this->label22->TabIndex = 14;
			this->label22->Text = L"В: ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(14, 158);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(27, 19);
			this->label23->TabIndex = 13;
			this->label23->Text = L"А: ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(14, 135);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(136, 19);
			this->label24->TabIndex = 12;
			this->label24->Text = L"Задайте интервал: ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(222, 72);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(55, 26);
			this->textBox8->TabIndex = 10;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(193, 75);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 19);
			this->label17->TabIndex = 9;
			this->label17->Text = L"c = ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(134, 72);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(53, 26);
			this->textBox7->TabIndex = 8;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 19);
			this->label5->TabIndex = 3;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(106, 75);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 19);
			this->label16->TabIndex = 7;
			this->label16->Text = L"b = ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(44, 72);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(53, 26);
			this->textBox6->TabIndex = 6;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 75);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 19);
			this->label15->TabIndex = 5;
			this->label15->Text = L"а = ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 45);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(134, 19);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Задайте значения: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(151, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(111, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Входной аргумент: ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->textBox14);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->textBox15);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(621, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(302, 290);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Гипербола";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(12, 250);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 19);
			this->label25->TabIndex = 36;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(8, 227);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(279, 19);
			this->label26->TabIndex = 35;
			this->label26->Text = L"Минимальное значение на промежутке:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(12, 208);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 19);
			this->label27->TabIndex = 34;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(8, 185);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(282, 19);
			this->label28->TabIndex = 33;
			this->label28->Text = L"Максимальное значение на промежутке:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(171, 156);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(85, 26);
			this->textBox11->TabIndex = 32;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(33, 156);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(85, 26);
			this->textBox12->TabIndex = 31;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(150, 158);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(26, 19);
			this->label29->TabIndex = 30;
			this->label29->Text = L"В: ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(12, 158);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(27, 19);
			this->label30->TabIndex = 29;
			this->label30->Text = L"А: ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(12, 135);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(136, 19);
			this->label31->TabIndex = 28;
			this->label31->Text = L"Задайте интервал: ";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(220, 72);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(55, 26);
			this->textBox13->TabIndex = 27;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox13_KeyPress);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(191, 75);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(33, 19);
			this->label32->TabIndex = 26;
			this->label32->Text = L"c = ";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(132, 72);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(53, 26);
			this->textBox14->TabIndex = 25;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox14_KeyPress);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(104, 75);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(34, 19);
			this->label33->TabIndex = 24;
			this->label33->Text = L"b = ";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(42, 72);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(53, 26);
			this->textBox15->TabIndex = 23;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox15_KeyPress);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(11, 75);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(33, 19);
			this->label34->TabIndex = 22;
			this->label34->Text = L"а = ";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(6, 45);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(134, 19);
			this->label35->TabIndex = 21;
			this->label35->Text = L"Задайте значения: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 19);
			this->label6->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(151, 23);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(111, 26);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Входной аргумент: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(278, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Рассчёт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 315);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SM14";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Function* f = nullptr;
		double a, b, c, A, B, v1, v2, v3;
		//Экспонента
		try {
			if (textBox1->Text != "" && textBox4->Text != "" && textBox4->Text != "")
			{

				f = new exponenta;
				v1 = System::Convert::ToDouble(textBox1->Text);
				A = System::Convert::ToDouble(textBox4->Text);
				B = System::Convert::ToDouble(textBox5->Text);

				label4->Text = "f(" + v1.ToString() + ")= " + f->evaluate(v1).ToString();
				label11->Text = f->max(A, B).ToString();
				label12->Text = f->min(A, B).ToString();
				delete f;
			}
		}
		catch (System::FormatException^) {
			MessageBox::Show("Невозможно для заданных значений");
		}

		//Парабола
		try {
			if (textBox2->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "")
			{
				f = new parabola;
				a = System::Convert::ToDouble(textBox6->Text);
				b = System::Convert::ToDouble(textBox7->Text);
				c = System::Convert::ToDouble(textBox8->Text);
				v2 = System::Convert::ToDouble(textBox2->Text);
				A = System::Convert::ToDouble(textBox10->Text);
				B = System::Convert::ToDouble(textBox9->Text);
				f->setParams(a, b, c);

				label5->Text = "f(" + v2.ToString() + ")= " + f->evaluate(v2).ToString();
				label20->Text = f->max(A, B).ToString();
				label18->Text = f->min(A, B).ToString();
				delete f;
			}
		}
		catch (System::FormatException^) {
			MessageBox::Show("Невозможно для заданных значений");
		}
		

		//Гипербола
		try
		{
			if (textBox3->Text != "" && textBox11->Text != "" && textBox12->Text != "" && textBox13->Text != "" && textBox14->Text != "" && textBox15->Text != "")
			{
				f = new hyperbola;
				a = System::Convert::ToDouble(textBox15->Text);
				b = System::Convert::ToDouble(textBox14->Text);
				c = System::Convert::ToDouble(textBox13->Text);
				v3 = System::Convert::ToDouble(textBox3->Text);
				A = System::Convert::ToDouble(textBox12->Text);
				B = System::Convert::ToDouble(textBox11->Text);
				f->setParams(a, b, c);
				label6->Text = "f(" + v3.ToString() + ")= " + f->evaluate(v3).ToString();
				label27->Text = f->max(A, B).ToString();
				label25->Text = f->min(A, B).ToString();
				delete f;
			}
		}
		catch (System::FormatException^) {
			MessageBox::Show("Невозможно для заданных значений");
		}
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label4->Text = ""; label11->Text = ""; 	label12->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox3->SelectionStart != 0 || textBox1->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox1->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label11->Text = ""; 	label12->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox4->SelectionStart != 0 || textBox4->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox4->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label11->Text = ""; 	label12->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox5->SelectionStart != 0 || textBox5->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox5->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = ""; label18->Text = ""; 	label20->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox2->SelectionStart != 0 || textBox2->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox2->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = ""; label18->Text = ""; 	label20->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox6->SelectionStart != 0 || textBox6->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox6->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = ""; label18->Text = ""; 	label20->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox7->SelectionStart != 0 || textBox7->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox7->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = ""; label18->Text = ""; 	label20->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox8->SelectionStart != 0 || textBox8->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox8->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = ""; label18->Text = ""; 	label20->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox10->SelectionStart != 0 || textBox10->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox10->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label5->Text = ""; label18->Text = ""; 	label20->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox9->SelectionStart != 0 || textBox9->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox9->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label6->Text = ""; label27->Text = ""; 	label25->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox3->SelectionStart != 0 || textBox3->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox3->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox15_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label6->Text = ""; label27->Text = ""; 	label25->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox15->SelectionStart != 0 || textBox15->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox15->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label6->Text = ""; label27->Text = ""; 	label25->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox14->SelectionStart != 0 || textBox14->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox14->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox13_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label6->Text = ""; label27->Text = ""; 	label25->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox13->SelectionStart != 0 || textBox13->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox13->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label6->Text = ""; label27->Text = ""; 	label25->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox12->SelectionStart != 0 || textBox12->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox12->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label6->Text = ""; label27->Text = ""; 	label25->Text = ""; label4->Text = "";
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar.ToString()->Equals("-")) {
		e->Handled = textBox11->SelectionStart != 0 || textBox11->Text->IndexOf("-") != -1;
		if (!e->Handled) return;
	}
	if (e->KeyChar == ',') {
		if (textBox11->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
};
}