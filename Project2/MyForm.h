#pragma once
#include <cmath>
#include <fstream>

namespace Project2 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


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

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1142, 121);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(94, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"-4";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1142, 172);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(94, 26);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"8";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1003, 229);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(94, 26);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,5";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(931, 317);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(305, 89);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(969, 470);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 72);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(13, 14);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chart1->Name = L"chart1";
			series1->BorderColor = System::Drawing::Color::Green;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Green;
			series1->Legend = L"Legend1";
			series1->Name = L"Функция 1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Orange;
			series2->Legend = L"Legend1";
			series2->Name = L"Функция 2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(855, 583);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(926, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Левая граница";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(926, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Правая граница";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(926, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Шаг";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1271, 628);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Draw_Function";
			this->Load += gcnew System::EventHandler(this, &MyForm::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		ofstream outputFile("out.txt");

		double xn, xk, shag;
		float x, y;
		Series^ plot1 = chart1->Series[0];
		Series^ plot2 = chart1->Series[1];

		//Очистка компонента Chart1
		plot1->Points->Clear();
		plot2->Points->Clear();

		//Настройка толщины кривых
		chart1->Series[0]->BorderWidth = 2;
		chart1->Series[1]->BorderWidth = 2;
		
		//Работа с первой кривой
		//Проверка введенных в поля данных и их дальнейшее преобразование в тип double.
		if ((textBox1->Text != "") && (textBox2->Text != "")
			&& (textBox3->Text != ""))
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			shag = Convert::ToDouble(textBox3->Text);
			outputFile << "Значения x  ;" << "  " << "Значения y " << " для первой функции" << endl;
			//Проверка правильности ввода данных
			if ((xn >= xk) || (shag > (xk - xn)))
			{
				MessageBox::Show("Вы неверно заполнили границы!", "ОШИБКА при вводе данных!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else
			{
				x = xn;
				while (x <= xk)
				{
					if ((x >= 0) || (x < 0))
					{
						y = ((exp(-x))*((3.0 / 34)*cos(x) + (5.0 / 34)*sin(x)) + cos(x)*((((-7) / 130.0)*x) + ((409.0 / 8450)*x)) + sin(x)*(((9.0 / 130)*x) - ((119.0 / 4225)*x))); 

						plot1->Points->AddXY(x, y);
						outputFile << x << " ; " << y << endl;
					}
					x = x + shag;
					
				}
				outputFile << "\n" << endl;
			}
		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка    ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}


		//Работа со второй кривой
		if ((textBox1->Text != "") && (textBox2->Text != "")
			&& (textBox3->Text != ""))
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			shag = Convert::ToDouble(textBox3->Text);
			outputFile << "Значения x  ;" << "  " << "Значения y " << " для второй функции" << endl;
			//Проверка правильности ввода данных
			if ((xn >= xk) || (shag > (xk - xn)))
			{
				MessageBox::Show("Вы неверно заполнили границы!", "ОШИБКА при вводе данных!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else
			{
				x = xn;
				while (x <= xk)
				{
					if ((x >= 0) || (x < 0))
					{
						y = sin(x);

						plot2->Points->AddXY(x, y);
						outputFile << x << " ; " << y << endl;
					}
					x = x + shag;
				}
				outputFile.close();
			}
		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка    ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}