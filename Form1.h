#pragma once // Забороняє повторне включення цього заголовочного файлу під час компіляції

// Початок оголошення простору імен LR_11_Vik
namespace LR_11_Vik {

    // Підключення основних просторів імен .NET
    using namespace System; // Простір імен для базових класів CLR
    using namespace System::ComponentModel; // Простір для роботи з компонентами форми
    using namespace System::Collections; // Простір імен для колекцій, таких як ArrayList
    using namespace System::Windows::Forms; // Простір для створення елементів управління Windows Forms
    using namespace System::Data; // Простір імен для роботи з базами даних
    using namespace System::Drawing; // Простір для роботи з графікою (кольори, розміри, координати)
    using namespace System::IO; // Простір імен для вводу/виводу, зокрема файлів

    // Оголошення класу форми Form1, який наслідує клас Form (стандартна форма Windows)
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public: // Публічна область доступу
        // Конструктор класу форми
        Form1(void) // Оголошення конструктора без параметрів
        {
            InitializeComponent(); // Виклик методу, що створює та налаштовує всі елементи форми
        }

    protected: // Захищена область доступу
        // Деструктор класу — звільняє ресурси, якщо вони ще не звільнені
        ~Form1() // Оголошення деструктора
        {
            if (components) // Перевірка, чи існує список компонентів
            {
                delete components; // Звільнення пам’яті для компонентів
            }
        }

    private: // Приватна область доступу — оголошення елементів інтерфейсу форми
        System::Windows::Forms::Label^ labelInput; // Мітка для тексту "Введіть тризначне число"
        System::Windows::Forms::TextBox^ textBoxInput; // Поле для вводу тризначного числа
        System::Windows::Forms::Button^ buttonCalculate; // Кнопка для обчислення суми та добутку
        System::Windows::Forms::Label^ labelResult; // Мітка для виводу результату
        System::Windows::Forms::Button^ buttonLoad; // Кнопка для зчитування числа з файлу
        System::Windows::Forms::Button^ buttonSave; // Кнопка для збереження результату у файл
        System::Windows::Forms::OpenFileDialog^ openFileDialog1; // Діалогове вікно для відкриття файлу
        System::Windows::Forms::SaveFileDialog^ saveFileDialog1; // Діалогове вікно для збереження файлу

        System::ComponentModel::IContainer^ components; // Контейнер для компонентів форми

#pragma region Windows Form Designer generated code // Початок області автоматично згенерованого коду дизайнером

        // Метод ініціалізації елементів форми
        void InitializeComponent(void) // Оголошення функції без параметрів
        {
            this->labelInput = (gcnew System::Windows::Forms::Label()); // Створення об'єкта мітки
            this->textBoxInput = (gcnew System::Windows::Forms::TextBox()); // Створення текстового поля
            this->buttonCalculate = (gcnew System::Windows::Forms::Button()); // Створення кнопки обчислення
            this->labelResult = (gcnew System::Windows::Forms::Label()); // Створення мітки результату
            this->buttonLoad = (gcnew System::Windows::Forms::Button()); // Створення кнопки зчитування
            this->buttonSave = (gcnew System::Windows::Forms::Button()); // Створення кнопки збереження
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog()); // Створення об'єкта діалогу відкриття
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog()); // Створення об'єкта діалогу збереження
            this->SuspendLayout(); // Тимчасово припиняє оновлення форми під час додавання елементів

            // Налаштування властивостей labelInput
            this->labelInput->AutoSize = true; // Автоматичне підлаштування розміру під текст
            this->labelInput->Location = System::Drawing::Point(30, 30); // Координати на формі
            this->labelInput->Name = L"labelInput"; // Ім’я елемента
            this->labelInput->Size = System::Drawing::Size(160, 13); // Розмір тексту
            this->labelInput->Text = L"Введіть тризначне число:"; // Текст мітки

            // Налаштування властивостей textBoxInput
            this->textBoxInput->Location = System::Drawing::Point(200, 27); // Координати поля
            this->textBoxInput->Name = L"textBoxInput"; // Ім’я поля
            this->textBoxInput->Size = System::Drawing::Size(100, 20); // Ширина та висота поля

            // Налаштування кнопки обчислення
            this->buttonCalculate->Location = System::Drawing::Point(30, 70); // Позиція кнопки
            this->buttonCalculate->Name = L"buttonCalculate"; // Назва кнопки
            this->buttonCalculate->Size = System::Drawing::Size(100, 30); // Розмір кнопки
            this->buttonCalculate->Text = L"Обчислити"; // Напис на кнопці
            this->buttonCalculate->Click += gcnew System::EventHandler(this, &Form1::buttonCalculate_Click); // Прив’язка обробника події натискання

            // Налаштування мітки результату
            this->labelResult->AutoSize = true; // Автоматичний розмір
            this->labelResult->Location = System::Drawing::Point(30, 120); // Позиція
            this->labelResult->Size = System::Drawing::Size(70, 13); // Розмір
            this->labelResult->Text = L"Результат:"; // Текст

            // Налаштування кнопки зчитування
            this->buttonLoad->Location = System::Drawing::Point(150, 70); // Позиція
            this->buttonLoad->Name = L"buttonLoad"; // Назва
            this->buttonLoad->Size = System::Drawing::Size(70, 30); // Розмір
            this->buttonLoad->Text = L"Зчитати"; // Напис
            this->buttonLoad->Click += gcnew System::EventHandler(this, &Form1::buttonLoad_Click); // Обробка події

            // Налаштування кнопки збереження
            this->buttonSave->Location = System::Drawing::Point(240, 70); // Позиція
            this->buttonSave->Name = L"buttonSave"; // Назва
            this->buttonSave->Size = System::Drawing::Size(70, 30); // Розмір
            this->buttonSave->Text = L"Зберегти"; // Текст
            this->buttonSave->Click += gcnew System::EventHandler(this, &Form1::buttonSave_Click); // Обробка події

            // Налаштування самої форми
            this->ClientSize = System::Drawing::Size(350, 180); // Розмір вікна
            this->Controls->Add(this->labelInput); // Додаємо мітку до форми
            this->Controls->Add(this->textBoxInput); // Додаємо текстове поле
            this->Controls->Add(this->buttonCalculate); // Додаємо кнопку обчислення
            this->Controls->Add(this->labelResult); // Додаємо мітку результату
            this->Controls->Add(this->buttonLoad); // Додаємо кнопку зчитування
            this->Controls->Add(this->buttonSave); // Додаємо кнопку збереження
            this->Name = L"Form1"; // Ім’я форми
            this->Text = L"Тризначне число"; // Назва вікна
            this->ResumeLayout(false); // Продовження оновлення макету
            this->PerformLayout(); // Оновлення макету з урахуванням нових елементів
        }
#pragma endregion // Кінець області згенерованого коду

        // Обробник події натискання кнопки обчислення
        private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
            int number; // Змінна для збереження числа

            // Перевірка, що користувач ввів коректне тризначне ціле число
            if (Int32::TryParse(textBoxInput->Text, number) && number >= 100 && number <= 999)
            {
                int a = number / 100; // Отримуємо сотні
                int b = (number / 10) % 10; // Отримуємо десятки
                int c = number % 10; // Отримуємо одиниці

                int sum = a + b + c; // Обчислюємо суму цифр
                int product = a * b * c; // Обчислюємо добуток цифр

                // Виводимо результат на форму
                labelResult->Text = "Результат: Сума = " + sum.ToString() + ", Добуток = " + product.ToString();
            }
            else // Якщо введено неправильне число
            {
                // Виводимо повідомлення про помилку
                MessageBox::Show("Будь ласка, введіть коректне тризначне число.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        // Обробник кнопки зчитування з файлу
        private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e) {
            // Відкриваємо діалог вибору файлу
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                try {
                    // Зчитуємо весь вміст файлу
                    String^ content = File::ReadAllText(openFileDialog1->FileName);
                    textBoxInput->Text = content->Trim(); // Вставляємо у поле вводу, обрізаючи пробіли
                }
                catch (Exception^ ex) {
                    // Якщо сталася помилка — показуємо повідомлення
                    MessageBox::Show("Помилка при зчитуванні файлу: " + ex->Message);
                }
            }
        }

        // Обробник кнопки збереження результату у файл
        private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
            // Відкриваємо діалог збереження
            if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                try {
                    // Записуємо в файл текст результату
                    File::WriteAllText(saveFileDialog1->FileName, labelResult->Text);
                }
                catch (Exception^ ex) {
                    // У разі помилки показуємо повідомлення
                    MessageBox::Show("Помилка при збереженні файлу: " + ex->Message);
                }
            }
        }

    };
} 
