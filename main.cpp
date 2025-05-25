#include "Form1.h" 
// Підключення заголовочного файлу з описом форми Form1

using namespace System;
using namespace System::Windows::Forms;
// Підключення просторів імен .NET Framework для роботи з формами Windows Forms

[STAThreadAttribute]
// Атрибут, який вказує, що головний потік буде працювати в однопоточному режимі (Single-Threaded Apartment),
// що необхідно для коректної роботи Windows Forms

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    // Вмикає візуальні стилі для додатку (сучасний вигляд елементів керування)

    Application::SetCompatibleTextRenderingDefault(false);
    // Встановлює режим рендерингу тексту. false означає використання стандартного GDI+ для нових форм

    // Створення об'єкта головної форми додатку
    LR_11_Vik::Form1 form;

    // Запуск циклу обробки повідомлень та відображення форми
    Application::Run(%form);

    return 0; // Завершення програми
}
