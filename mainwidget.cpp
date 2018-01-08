#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <ctime>
MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(showText()));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::showText()
{
    srand( time( 0 ) );
    int a = 1 + rand() % 20;



    switch (a)
     {
    case 1:
    {
    ui->label->setText("<font color=#10F200>Бесспорно</font>");
    break;
    }
    case 2:
    {
    ui->label->setText("<font color=#10F200>Предрешено</font>");
    break;
    }
    case 3:
    {
    ui->label->setText("<font color=#10F200>Никаких сомнений</font>");
    break;
    }
    case 4: // если count = 1
    {
    ui->label->setText("<font color=#10F200>Определенно да</font>");
    break;
    }
    case 5: // если count = 1
    {
    ui->label->setText("<font color=#10F200>Можешь быть уверен</font>");
    break;
    }
    case 6:
    {
    ui->label->setText("<font color=#1F2CF2>Мне кажется - Да</font>");
    break;
    }
    case 7:
    {
    ui->label->setText("<font color=#1F2CF2>Вероятнее всего</font>");
    break;
    }
    case 8:
    {
    ui->label->setText("<font color=#1F2CF2>Хорошие перспективы</font>");
    break;
    }
    case 9:
    {
    ui->label->setText("<font color=#1F2CF2>Знаки говорят - Да</font>");
    break;
    }
    case 10:
    {
    ui->label->setText("<font color=#1F2CF2>Да</font>");
    break;
    }
    case 11:
    {
    ui->label->setText("<font color=#F2F000>Пока не ясно</font>");
    break;
    }
    case 12:
    {
    ui->label->setText("<font color=#F2F000>Спроси позже</font>");
    break;
    }
    case 13:
    {
    ui->label->setText("<font color=#F2F000>Лучше не рассказывать</font>");
    break;
    }
    case 14:
    {
    ui->label->setText("<font color=#F2F000>Сейчас нельзя предсказать</font>");
    break;
    }
    case 15:
    {
    ui->label->setText("<font color=#F2F000>Сконцентрируйся...</font>");
    break;
    }
    case 16:
    {
    ui->label->setText("<font color=red>Даже не думай</font>");
    break;
    }
    case 17:
    {
    ui->label->setText("<font color=red>Мой ответ - НЕТ</font>");
    break;
    }
    case 18:
    {
    ui->label->setText("<font color=red>По моим данным - нет</font>");
    break;
    }
    case 19:
    {
    ui->label->setText("<font color=red>Перспективы не очень</font>");
    break;
    }
    case 20:
    {
    ui->label->setText("<font color=red>Весьма сомнительно</font>");
    break;
    }





 default:
        ui->label->setText("ОШИБКА");
        break;
        }
}
