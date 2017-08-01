#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("偉大音樂家"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   ui->label->setText("沃夫岡·阿瑪迪斯·莫札特\n"
                      "出生於奧地利薩爾斯堡，逝世於維也納，\n"
                      "是歐洲最偉大的古典主義音樂作曲家之一，\n"
                      "他也是一位共濟會成員。35歲便英年早逝的莫札特，\n"
                      "留下的重要作品總括當時所有的音樂類型。\n"
                      "在鋼琴和小提琴相關的創作，他無疑是一個天份極高的藝術家\n"
                      "譜出的協奏曲、奏鳴曲、交響曲、小夜曲等等，\n"
                      "成為後來古典音樂的主要形式。他同時也是歌劇的專家，\n"
                      "成就至今仍能順應時代的變遷而不朽。此外其作曲風格兼具旋律及藝術性，\n"
                      "活潑開朗而悅耳。其地位與巴赫、貝多芬平起平坐，\n"
                      "其作品亦讓人感受到音樂由巴洛克時期轉向古典主義時期的不同。\n");
   QPixmap mozart("C:/Users/Yo/Documents/hw2/mozart.jpg");
   ui->label_2->setPixmap(mozart.scaled(ui->label_2->width(),ui->label_2->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("安東尼奧·盧奇奧·韋瓦第\n"
                       "是一位出生於威尼斯的義大利神父和巴洛克音樂作曲家，\n"
                       "同時還是一名大師級小提琴演奏家。"
                       "韋瓦第被認為是最有名的巴洛克音樂作曲家之一，\n"
                       "在他那個時代聞名於整個歐洲。\n"
                       "他最主要的成就在於樂器協奏曲（特別是小提琴協奏曲）的創作，\n"
                       "還有聖歌和歌劇。其最著名的作品為《四季》。\n");
    QPixmap vivaldi("C:/Users/Yo/Documents/hw2/Vivaldi.jpg");
    ui->label_2->setPixmap(vivaldi.scaled(ui->label_2->width(),ui->label_2->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("弗雷德里克·弗朗索瓦·蕭邦\n"
                       "他是歷史上最具影響力和最受歡迎的鋼琴作曲家之一，\n"
                       "是歐洲19世紀浪漫主義音樂的代表人物。\n"
                       "蕭邦39歲時英年早逝，創作了大量鋼琴作品，\n"
                       "如4部敘事曲、十餘部波蘭舞曲包括《軍隊》、《英雄》，\n"
                       "26首鋼琴前奏曲包括《雨滴》，27首鋼琴練習曲包括《離別》、《革命》，\n"
                       "4部諧謔曲、4部即興曲、3部鋼琴奏鳴曲，至少22首多夜曲，59首馬祖卡，\n"
                       "兩首鋼琴協奏曲、 幻想曲、大提琴奏鳴曲和搖籃曲等\n"
                       "蕭邦一生的創作大多是鋼琴曲，被譽為「鋼琴詩人」。\n");
    QPixmap chopin("C:/Users/Yo/Documents/hw2/Chopin.jpg");
    ui->label_2->setPixmap(chopin.scaled(ui->label_2->width(),ui->label_2->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText("法蘭茲·約瑟夫·海頓\n"
                       "奧地利作曲家。是古典主義音樂的傑出代表。\n"
                       "被譽稱交響樂之父和弦樂四重奏之父\n"
                       "出身於一個貧窮的車匠家庭\n"
                       "27歲時受聘擔任匈牙利艾斯台爾哈奇親王的樂長，\n"
                       "任職達30年之久，他一生寫作了104首交響曲，\n"
                       "兩部神劇《創世記》和《四季》，\n"
                       "同時也寫作了大量的弦樂四重奏，鋼琴奏鳴曲。\n"
                       "海頓的音樂幽默、明快，含有宗教式的超脫，\n"
                       "他將奏鳴曲式從鋼琴發展到弦樂重奏上，他是器樂主調的創始人，\n"
                       "將傳統對位法的獨立聲部完全同化了，將主題發展自行展開。\n");
    QPixmap haydn("C:/Users/Yo/Documents/hw2/Haydn.jpg");
    ui->label_2->setPixmap(haydn.scaled(ui->label_2->width(),ui->label_2->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->label->setText("路德維希·范·貝多芬\n"
                       "是集古典主義大成的德國作曲家，也是鋼琴演奏家，\n"
                       "一生共創作了9首編號交響曲、35首鋼琴奏鳴曲（其中後32首帶有編號）\n"
                       "10部小提琴奏鳴曲、16首弦樂四重奏、1部歌劇及2部彌撒曲等等。\n"
                       "這些作品對音樂發展有著深遠影響，貝多芬因此被尊稱為「樂聖」。\n");
    QPixmap beethoven("C:/Users/Yo/Documents/hw2/Beethoven.jpg");
    ui->label_2->setPixmap(beethoven.scaled(ui->label_2->width(),ui->label_2->height(),Qt::KeepAspectRatio));
}
