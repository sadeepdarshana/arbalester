#include <QApplication>
#include <QDebug>
#include <QtWidgets/QPushButton>
#include <QtCore/QFile>
#include <QtWidgets/QGraphicsDropShadowEffect>
#include <QtWidgets/QHBoxLayout>
#include "./ui/mainwindow.cpp"

using namespace std;
using namespace Ui;

const QString THEMES[] = {":qdarkstyle/style.qss"};
const int CURRENT_THEME_INDEX = 0;
const  QColor SHADOW_COLOR = QColor(11,11,11);


//sets the theme of the application
void setStylesheet(QMainWindow *ui){

    QFile stylesheet_file(THEMES[CURRENT_THEME_INDEX]);
    stylesheet_file.open(QIODevice::ReadOnly);
    if(!stylesheet_file.exists())qDebug("no file");
    QString stylesheet = QLatin1String(stylesheet_file.readAll());
    ui->setStyleSheet(stylesheet);

}

void addShadow(QWidget *target) {
    target->window()->setAttribute(Qt::WA_TranslucentBackground);
    //target->window()->layout()->setMargin(50);
    QGraphicsDropShadowEffect* ef = new QGraphicsDropShadowEffect;
    ef->setBlurRadius(10);
    ef->setColor(SHADOW_COLOR);
    ef->setOffset(1);
    target->setGraphicsEffect(ef);
}


int main(int argc, char **argv){


    QApplication a(argc, argv);

    QMainWindow*ui = new QMainWindow();
    auto designer_ui = new MainWindow();
    designer_ui->setupUi(ui);
    ui->showMaximized();

    setStylesheet(ui);


    addShadow(designer_ui->tbox);
    addShadow(designer_ui->tframe);
    addShadow(designer_ui->properties);

    designer_ui->verticalLayout_3->setMargin(0);
    designer_ui->verticalLayout_3->setSpacing(0);
    designer_ui->verticalLayout_3->setContentsMargins(0, 0, 0, 0);
    designer_ui->centralwidget->setContentsMargins(0, 0, 0, 0);
    designer_ui->tbox->setContentsMargins(0,0,0,0);
    designer_ui->tbox->setContentsMargins(0,0,0,0);
    ui->setContentsMargins(0,0,0,0);
    designer_ui->statusbar->hide();

    designer_ui->centralwidget->layout()->setContentsMargins(0,0,0,0);


    QHBoxLayout *layout = new QHBoxLayout;
    //layout->addWidget(designer_ui->frome);
    //designer_ui->centralwidget->setLayout(layout);

    //designer_ui->frome->setFrameShadow(QFrame::Shadow::Raised);


    designer_ui->arbGroupTool->setIcon(QIcon::fromTheme(":/tools/icons/arbs.png"));
    designer_ui->conesGroupTool->setIcon(QIcon::fromTheme(":/tools/icons/cones.png"));
    designer_ui->ellipsoidGroupTool->setIcon(QIcon::fromTheme(":/tools/icons/sphere.png"));
    designer_ui->torusGroupTool->setIcon(QIcon::fromTheme(":/tools/icons/torus.png"));
    designer_ui->metaballsTool->setIcon(QIcon::fromTheme(":/tools/icons/metaballs.png"));


    return a.exec();


}
