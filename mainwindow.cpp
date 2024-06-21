#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_2->setHidden(true);
    ui->comboBox->setHidden(true);
    ui->comboBox_2->setHidden(true);
    ui->pushButton_4->setHidden(true);
    ui->listWidget->setHidden(true);
    ui->label_3->setHidden(true);
    ui->label_4->setHidden(true);
    ui->label_5->setHidden(true);
    ui->label_6->setHidden(true);
    ui->label_7->setHidden(true);
    ui->pushButton_5->setHidden(true);
    ui->pushButton_6->setHidden(true);
    ui->pushButton_7->setHidden(true);
    ui->calendarWidget->setHidden(true);
    ui->label_8->setHidden(true);
    ui->label_9->setHidden(true);
    ui->pushButton_8->setHidden(true);
    ui->listWidget_2->setHidden(true);
    ui->listWidget_3->setHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->setHidden(true);
    ui->label_3->setHidden(true);
    ui->label_4->setHidden(true);
    ui->label_5->setHidden(true);
    ui->label_6->setHidden(true);
    ui->label_7->setHidden(true);
    ui->pushButton_5->setHidden(true);
    ui->pushButton_6->setHidden(true);
    ui->pushButton_7->setHidden(true);
    ui->label_2->setHidden(false);
    ui->comboBox->setHidden(false);
    ui->comboBox_2->setHidden(true);
    ui->pushButton_4->setText("Dodaj do koszyka");
    ui->pushButton_4->setHidden(false);
    ui->calendarWidget->setHidden(true);
    ui->label_8->setHidden(true);
    ui->label_9->setHidden(true);
    ui->pushButton_8->setHidden(true);
    ui->listWidget_2->setHidden(true);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->listWidget->setHidden(false);
    int operacja=ui->comboBox->currentIndex();
    if (operacja>=1 && operacja<=9)
    {
        QString tekst=ui->comboBox->currentText();
        ui->listWidget->addItem(tekst);
        ui->comboBox->setCurrentIndex(0);
        suma=suma+cena;
        ui->label_4->setHidden(false);
        ui->label_4->setText("Suma: "+QString::number(suma)+" zł");
    }
    ui->label_3->setHidden(false);
    ui->pushButton_5->setHidden(false);
    ui->pushButton_6->setHidden(false);
}


void MainWindow::on_comboBox_activated(int index)
{
    switch(index)
    {
    case 0:
    {
        ui->label_6->setHidden(true);
        ui->label_5->setHidden(true);
        ui->label_7->setHidden(true);
        break;
    }
    case 1:
    {
        k1=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k1);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/duma-i-uprzedzenie.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Duma i uprzedzenie” to powieść napisana przez Jane Austen, opowiadająca historię miłości i przeznaczenia w XIX-wiecznej Anglii. Główna bohaterka, Elizabeth Bennet, staje w obliczu przesądów, uprzedzeń i trudności społecznych, gdy spotyka pewnego i zamożnego mężczyznę o imieniu Mr. Darcy. Książka porusza tematy klasy społecznej, wartości rodzinnych, wzajemnego zrozumienia i ewolucji charakteru, ukazując subtelne relacje między postaciami i ich dążenie do znalezienia prawdziwej miłości. To arcydzieło literatury angielskiej zdobyło rozległą popularność i uważane jest za jedno z najważniejszych dzieł literackich wszech czasów.");
        ui->label_7->setHidden(false);
        cena=39.99;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 2:
    {
        k2=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k2);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/1984.png");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Rok 1984” to dystopijna powieść George'a Orwella opublikowana w 1949 roku. Akcja toczy się w totalitarnym państwie Oceania, gdzie wszechobecna kontrola, propaganda i nadzór rządzą codziennym życiem obywateli. Główny bohater, Winston Smith, próbuje zachować swoją tożsamość i wolność w społeczeństwie pozbawionym prywatności i prawdy. Powieść dotyka tematów takich jak manipulacja informacją, nadzór państwowy, indywidualizm i walka z systemem. „Rok 1984” jest uważany za jedno z najważniejszych literackich dzieł XX wieku, które wciąż porusza pytania o władzę, wolność i kondycję ludzkiego ducha.");
        ui->label_7->setHidden(false);
        cena=42.59;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 3:
    {
        k3=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k3);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/ksiaze.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Mały Książę” to francuska powieść napisana przez Antoine'a de Saint-Exupéry'ego i opublikowana w 1943 roku. Historia opowiada o podróży małego chłopca z innej planety, który spotyka różne dziwaczne postacie, w tym pilota rozbitego samolotu, lis i różę. Poprzez te spotkania, autor porusza tematy takie jak miłość, przyjaźń, samotność, odpowiedzialność i wartość prostoty. „Mały Książę” jest przemyślaną i filozoficzną opowieścią, która dotyka uniwersalnych tematów ludzkiego życia i zyskała status klasycznej literatury dziecięcej na całym świecie.");
        ui->label_7->setHidden(false);
        cena=34.99;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 4:
    {
        k4=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k4);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/alicja.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Alicja w Krainie Czarów” to klasyczna powieść dla dzieci napisana przez Lewisa Carrolla. Historia rozpoczyna się, gdy Alicja przypadkowo spada w króliczą norkę i trafia do fantastycznego świata pełnego dziwnych postaci i nonsensownych sytuacji. Podczas swojej podróży, Alicja spotyka m.in. Cheshire Cat, Białego Królika, Szalonego Kapelusznika i Królową Kier. Powieść bawi się zasadami logiki i rozrywa konwencje, podkreślając absurdalność i nietypowość. „Alicja w Krainie Czarów” to ponadczasowa opowieść o dziecięcej wyobraźni, odkrywaniu nowych światów i przekraczaniu granic rzeczywistości.");
        ui->label_7->setHidden(false);
        cena=9.50;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 5:
    {
        k5=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k5);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/wichrowewzgorza.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Wichrowe Wzgórza” to powieść Emily Brontë, opublikowana w 1847 roku. Historia koncentruje się na burzliwym romansie między Catherine Earnshaw i Heathcliffem, który rozwija się na tle wzgórz Yorkshire. Powieść ukazuje skomplikowane relacje, obsesję, nienawiść i tęsknotę, przedstawiając psychologiczne i emocjonalne konflikty bohaterów. „Wichrowe Wzgórza” porusza tematy jak miłość, przemoc, uprzedzenia społeczne i dziedziczenie. Jest to wyraziste dzieło literatury angielskiej, które zapewnia głębokie spojrzenie na ludzkie natury i emocje.");
        ui->label_7->setHidden(false);
        cena=24.39;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 6:
    {
        k6=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k6);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/portret.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Portret Doriana Graya” to powieść Oscara Wilde'a opublikowana w 1890 roku. Opowiada historię młodego mężczyzny, Doriana Graya, który sprzedaje swoją duszę, aby zachować wieczną młodość i piękno, podczas gdy jego portret starzeje się i odkrywa jego moralne zepsucie. Powieść dotyka tematów jak moralność, powierzchowność, sztuka i dekadencja. Wilde używa swojego wspaniałego stylu i inteligentnego humoru, aby ukazać kontrast między wewnętrzną degeneracją Doriana a jego zewnętrznym pięknem. „Portret Doriana Graya” jest uważany za jedno z najważniejszych dzieł literackich XIX wieku, które kwestionuje normy społeczne i prowokuje refleksję nad naturą człowieka.");
        ui->label_7->setHidden(false);
        cena=38.99;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 7:
    {
        k7=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k7);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/ogrod.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Tajemniczy Ogród” to powieść dla dzieci autorstwa Frances Hodgson Burnett, opublikowana w 1911 roku. Historia skupia się na małej dziewczynce o imieniu Mary Lennox, która po utracie rodziców zostaje wysłana do Anglii, gdzie odkrywa zapomniany ogród na terenie swojego nowego domu. Razem z dwójką przyjaciół – chłopcem imieniem Dickon i chłopcem o imieniu Colin, Mary odnajduje piękno natury, przywraca życie ogrodowi i przezwycięża swoje własne emocjonalne zranienia. Powieść dotyka tematów jak odrodzenie, uzdrowienie, przyjaźń i siła natury, a także inspiruje do odkrywania magii w codziennym życiu. „Tajemniczy Ogród” to niezwykła opowieść o transformacji, znalezieniu radości i odkrywaniu potencjału, który kryje się w nas samych.");
        ui->label_7->setHidden(false);
        cena=12.00;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 8:
    {
        k8=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k8);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/grona-gniewu.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Grona gniewu” to powieść Johna Steinbecka, opublikowana w 1939 roku. Akcja osadzona jest w czasach Wielkiego Kryzysu i skupia się na losach rodziny Joadów, której dom zostaje zniszczony przez skutki ekonomicznej i ekologicznej katastrofy. Podczas podróży przez Amerykę, Joadowie stają w obliczu biedy, niesprawiedliwości społecznej i wyzwań migrantów. Powieść porusza tematy takie jak solidarność, walka o godność i trudności związane z zachowaniem ludzkiej godności w trudnych warunkach. „Grona gniewu” jest ważnym dziełem literatury amerykańskiej, które ukazuje walkę i nadzieję w obliczu niesprzyjających okoliczności.");
        ui->label_7->setHidden(false);
        cena=25.75;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    case 9:
    {
        k9=ui->comboBox->currentText();
        ui->listWidget_3->addItem(k9);
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/buszujacy-w-zbozu.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Buszujący w zbożu” to powieść J.D. Salingera, opublikowana w 1951 roku. Historia skupia się na postaci Holdena Caulfielda, siedemnastolatka, który opisuje swoje doświadczenia i myśli podczas kilku dni spędzonych w Nowym Jorku. Powieść porusza tematy dorastania, alienacji, dezorientacji i niezgodności z normami społecznymi. Holden staje wobec trudności adaptacji do wymagań dorosłego świata i utraty niewinności, co prowadzi go do uczucia izolacji i frustracji. „Buszujący w zbożu” jest uważany za jedno z najważniejszych dzieł literatury amerykańskiej, które wyraża niezrozumienie i bunt młodego pokolenia wobec hipokryzji i pustki dorosłego świata.");
        ui->label_7->setHidden(false);
        cena=17.89;
        ui->label_7->setText("Cena: "+QString::number(cena)+" zł");
        break;
    }
    default:
            break;
        }
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->listWidget->clear();
    suma=0;
    ui->label_4->setText("Suma: 0 zł");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->listWidget->setHidden(true);
    ui->label_3->setHidden(true);
    ui->label_4->setHidden(true);
    ui->label_5->setHidden(true);
    ui->label_6->setHidden(true);
    ui->label_7->setHidden(true);
    ui->pushButton_4->setHidden(true);
    ui->pushButton_5->setHidden(true);
    ui->pushButton_6->setHidden(true);
    ui->label_2->setHidden(false);
    ui->comboBox->setHidden(true);
    ui->comboBox_2->setHidden(false);
    ui->pushButton_7->setText("Wypożycz");
    ui->pushButton_7->setHidden(false);
    ui->calendarWidget->setHidden(true);
    ui->label_8->setHidden(true);
    ui->label_9->setHidden(true);
    ui->pushButton_8->setHidden(true);
    ui->listWidget_2->setHidden(true);
    ui->comboBox_2->setCurrentIndex(0);
}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
    {
            ui->label_6->setHidden(true);
            ui->label_5->setHidden(true);
            ui->label_7->setHidden(true);
            break;
    }
    case 1:
    {
            k10=ui->comboBox_2->currentText();
            ui->listWidget_3->addItem(k10);
            ui->label_6->setHidden(false);
            QPixmap pixmap(":/okladki/zbrodnia.jpg");
            ui->label_6->setPixmap(pixmap);
            ui->label_6->show();
            ui->label_5->setHidden(false);
            ui->label_5->setText("„Zbrodnia i kara” to powieść autorstwa Fiodora Dostojewskiego, opowiadająca historię Rodiona Raskolnikowa, młodego studenta, który popełnia brutalne morderstwo. Raskolnikow jest pogrążony w moralnym konflikcie i cierpieniu, a jego zbrodnia i konsekwencje mają głęboki wpływ na jego psychikę. Powieść porusza tematy moralności, winy, kary i szukania odkupienia, ukazując złożoność ludzkiej natury i psychologię przestępstwa.");
            break;
    }
    case 2:
    {
            ui->label_6->setHidden(false);
            QPixmap pixmap(":/okladki/duma-i-uprzedzenie.jpg");
            ui->label_6->setPixmap(pixmap);
            ui->label_6->show();
            ui->label_5->setHidden(false);
            ui->label_5->setText("„Duma i uprzedzenie” to powieść napisana przez Jane Austen, opowiadająca historię miłości i przeznaczenia w XIX-wiecznej Anglii. Główna bohaterka, Elizabeth Bennet, staje w obliczu przesądów, uprzedzeń i trudności społecznych, gdy spotyka pewnego i zamożnego mężczyznę o imieniu Mr. Darcy. Książka porusza tematy klasy społecznej, wartości rodzinnych, wzajemnego zrozumienia i ewolucji charakteru, ukazując subtelne relacje między postaciami i ich dążenie do znalezienia prawdziwej miłości. To arcydzieło literatury angielskiej zdobyło rozległą popularność i uważane jest za jedno z najważniejszych dzieł literackich wszech czasów.");
            break;
    }
    case 3:
    {
            k11=ui->comboBox_2->currentText();
            ui->listWidget_3->addItem(k11);
            ui->label_6->setHidden(false);
            QPixmap pixmap(":/okladki/tadeusz.jpg");
            ui->label_6->setPixmap(pixmap);
            ui->label_6->show();
            ui->label_5->setHidden(false);
            ui->label_5->setText("„Pan Tadeusz” to epicki poemat autorstwa Adama Mickiewicza, uważany za jedno z najważniejszych dzieł polskiej literatury. Opowiada historię miłosnych perypetii i dramatów narodowych bohaterów w XIX-wiecznej Polsce. Głównym wątkiem jest romans pomiędzy Tadeuszem, młodym szlachcicem, a Zosią, córką Horeszków. Utwór przedstawia konflikt między polską i litewską szlachtą oraz ukazuje wartości szlacheckiego honoru, miłości do ojczyzny i walki o niepodległość. Jest pełen malowniczych opisów przyrody, obyczajów szlacheckich i refleksji filozoficznych.");
            break;
    }
    case 4:
    {
            ui->label_6->setHidden(false);
            QPixmap pixmap(":/okladki/alicja.jpg");
            ui->label_6->setPixmap(pixmap);
            ui->label_6->show();
            ui->label_5->setHidden(false);
            ui->label_5->setText("„Alicja w Krainie Czarów” to klasyczna powieść dla dzieci napisana przez Lewisa Carrolla. Historia rozpoczyna się, gdy Alicja przypadkowo spada w króliczą norkę i trafia do fantastycznego świata pełnego dziwnych postaci i nonsensownych sytuacji. Podczas swojej podróży, Alicja spotyka m.in. Cheshire Cat, Białego Królika, Szalonego Kapelusznika i Królową Kier. Powieść bawi się zasadami logiki i rozrywa konwencje, podkreślając absurdalność i nietypowość. „Alicja w Krainie Czarów” to ponadczasowa opowieść o dziecięcej wyobraźni, odkrywaniu nowych światów i przekraczaniu granic rzeczywistości.");
            break;
    }
    case 5:
    {
            k12=ui->comboBox_2->currentText();
            ui->listWidget_3->addItem(k12);
            ui->label_6->setHidden(false);
            QPixmap pixmap(":/okladki/karenina.jpg");
            ui->label_6->setPixmap(pixmap);
            ui->label_6->show();
            ui->label_5->setHidden(false);
            ui->label_5->setText("„Anna Karenina” to powieść napisana przez Lwa Tołstoja, uznawana za jedno z najważniejszych dzieł literatury światowej. Opowiada historię tytułowej bohaterki, pięknej i utalentowanej kobiety, która zrywa z nieszczęśliwym małżeństwem, zakochując się w młodym oficerze. Powieść porusza tematy miłości, moralności, społeczeństwa i konfliktów osobistych. To studium ludzkiej natury i psychologii, ukazujące trudności życia w społeczeństwie wyższych sfer Rosji w XIX wieku. „Anna Karenina” jest też analizą społecznych norm i konsekwencji łamania ich, a także refleksją nad miłością i jej wpływem na jednostki.");
            break;
    }
    case 6:
    {
            k13=ui->comboBox_2->currentText();
            ui->listWidget_3->addItem(k13);
            ui->label_6->setHidden(false);
            QPixmap pixmap(":/okladki/rozwazna.jpg");
            ui->label_6->setPixmap(pixmap);
            ui->label_6->show();
            ui->label_5->setHidden(false);
            ui->label_5->setText("„Rozważna i romantyczna” to powieść Jane Austen opowiadająca historię dwóch sióstr, Elinor i Marianne Dashwood, które mają różne podejścia do miłości i życia. Elinor jest rozważną i powściągliwą osobą, która kieruje się rozsądkiem, podczas gdy Marianne jest romantyczną i emocjonalną istotą, dając się ponieść uczuciom. Powieść bada kontrast między racjonalnością a emocjonalnością w kontekście poszukiwania miłości i szczęścia. To obrazuje różne podejścia do relacji międzyludzkich i konsekwencje decyzji opartych na rozsądku lub emocjach. „Rozważna i romantyczna” to historia o miłości, samodoskonaleniu i znalezieniu równowagi między rozumem a sercem.");
            break;
    }
    case 7:
    {
            k14=ui->comboBox_2->currentText();
            ui->listWidget_3->addItem(k14);
            ui->label_6->setHidden(false);
            QPixmap pixmap(":/okladki/harry.jpg");
            ui->label_6->setPixmap(pixmap);
            ui->label_6->show();
            ui->label_5->setHidden(false);
            ui->label_5->setText("„Harry Potter i Kamień Filozoficzny” to pierwsza książka z serii napisanej przez J.K. Rowling. Opowiada o przygodach młodego chłopca imieniem Harry Potter, który odkrywa, że jest czarodziejem i zostaje przyjęty do Szkoły Magii i Czarodziejstwa Hogwart. Razem z przyjaciółmi Ronem i Hermioną, Harry walczy z siłami ciemności i odkrywa tajemnice związane z Kamieniem Filozoficznym, który obdarza nieskończoną moc przemiany metali w złoto oraz udzielający nieśmiertelności. To historia pełna magii, przyjaźni, przygód i odkrywania własnego losu, która zaczyna niezwykłą podróż Harry'ego w świecie czarodziejów.");
            break;
    }
    default:
            break;
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->calendarWidget->setHidden(false);
    ui->label_8->setText("Wypożyczyłeś książkę na 14 dni. Każdy dzień przetrzymania książki to 0,50 zł kary.");
    ui->label_8->setHidden(false);
    ui->pushButton_8->setHidden(false);
    ui->calendarWidget->setEnabled(true);
    QString tekst=ui->comboBox_2->currentText();
    ui->listWidget_2->addItem(tekst);
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->label_9->clear();
    ui->calendarWidget->setEnabled(false);
    int index=ui->comboBox_2->currentIndex();
    ui->listWidget_2->takeItem(index);
}


void MainWindow::on_calendarWidget_selectionChanged()
{
    QDate operacja=ui->calendarWidget->selectedDate();
    QDate obecnaData = QDate::currentDate();
    int dni = obecnaData.daysTo(operacja);
    if (dni>14)
    {
        kara=dni*0.5-7;
    }
    else
    {
        kara=0;
    }
    ui->label_9->setHidden(false);
    ui->label_9->setText("Naliczona kara: "+QString::number(kara)+" zł");
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->label_2->setHidden(true);
    ui->comboBox->setHidden(true);
    ui->comboBox_2->setHidden(true);
    ui->pushButton_4->setHidden(true);
    ui->listWidget->setHidden(true);
    ui->label_3->setHidden(true);
    ui->label_4->setHidden(true);
    ui->label_5->setHidden(true);
    ui->label_6->setHidden(true);
    ui->label_7->setHidden(true);
    ui->pushButton_5->setHidden(true);
    ui->pushButton_6->setHidden(true);
    ui->pushButton_7->setHidden(true);
    ui->calendarWidget->setHidden(true);
    ui->label_8->setHidden(true);
    ui->label_9->setHidden(true);
    ui->pushButton_8->setHidden(true);
    ui->listWidget_2->setHidden(false);
}


void MainWindow::on_pushButton_6_clicked()
{
    for (int i=0; i<ui->listWidget->count(); i++)
    {
        QListWidgetItem *item = ui->listWidget->item(i);
        ui->listWidget_2->addItem(item->clone());
    }
}



void MainWindow::on_listWidget_2_itemClicked()
{
    if (ui->listWidget_2->currentItem()->text()==k1)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/duma-i-uprzedzenie.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Duma i uprzedzenie” to powieść napisana przez Jane Austen, opowiadająca historię miłości i przeznaczenia w XIX-wiecznej Anglii. Główna bohaterka, Elizabeth Bennet, staje w obliczu przesądów, uprzedzeń i trudności społecznych, gdy spotyka pewnego i zamożnego mężczyznę o imieniu Mr. Darcy. Książka porusza tematy klasy społecznej, wartości rodzinnych, wzajemnego zrozumienia i ewolucji charakteru, ukazując subtelne relacje między postaciami i ich dążenie do znalezienia prawdziwej miłości. To arcydzieło literatury angielskiej zdobyło rozległą popularność i uważane jest za jedno z najważniejszych dzieł literackich wszech czasów.");
    }
    if (ui->listWidget_2->currentItem()->text()==k2)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/1984.png");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Rok 1984” to dystopijna powieść George'a Orwella opublikowana w 1949 roku. Akcja toczy się w totalitarnym państwie Oceania, gdzie wszechobecna kontrola, propaganda i nadzór rządzą codziennym życiem obywateli. Główny bohater, Winston Smith, próbuje zachować swoją tożsamość i wolność w społeczeństwie pozbawionym prywatności i prawdy. Powieść dotyka tematów takich jak manipulacja informacją, nadzór państwowy, indywidualizm i walka z systemem. „Rok 1984” jest uważany za jedno z najważniejszych literackich dzieł XX wieku, które wciąż porusza pytania o władzę, wolność i kondycję ludzkiego ducha.");
    }
    if (ui->listWidget_2->currentItem()->text()==k3)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/ksiaze.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Mały Książę” to francuska powieść napisana przez Antoine'a de Saint-Exupéry'ego i opublikowana w 1943 roku. Historia opowiada o podróży małego chłopca z innej planety, który spotyka różne dziwaczne postacie, w tym pilota rozbitego samolotu, lis i różę. Poprzez te spotkania, autor porusza tematy takie jak miłość, przyjaźń, samotność, odpowiedzialność i wartość prostoty. „Mały Książę” jest przemyślaną i filozoficzną opowieścią, która dotyka uniwersalnych tematów ludzkiego życia i zyskała status klasycznej literatury dziecięcej na całym świecie.");
    }
    if (ui->listWidget_2->currentItem()->text()==k4)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/alicja.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Alicja w Krainie Czarów” to klasyczna powieść dla dzieci napisana przez Lewisa Carrolla. Historia rozpoczyna się, gdy Alicja przypadkowo spada w króliczą norkę i trafia do fantastycznego świata pełnego dziwnych postaci i nonsensownych sytuacji. Podczas swojej podróży, Alicja spotyka m.in. Cheshire Cat, Białego Królika, Szalonego Kapelusznika i Królową Kier. Powieść bawi się zasadami logiki i rozrywa konwencje, podkreślając absurdalność i nietypowość. „Alicja w Krainie Czarów” to ponadczasowa opowieść o dziecięcej wyobraźni, odkrywaniu nowych światów i przekraczaniu granic rzeczywistości.");
    }
    if (ui->listWidget_2->currentItem()->text()==k5)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/wichrowewzgorza.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Wichrowe Wzgórza” to powieść Emily Brontë, opublikowana w 1847 roku. Historia koncentruje się na burzliwym romansie między Catherine Earnshaw i Heathcliffem, który rozwija się na tle wzgórz Yorkshire. Powieść ukazuje skomplikowane relacje, obsesję, nienawiść i tęsknotę, przedstawiając psychologiczne i emocjonalne konflikty bohaterów. „Wichrowe Wzgórza” porusza tematy jak miłość, przemoc, uprzedzenia społeczne i dziedziczenie. Jest to wyraziste dzieło literatury angielskiej, które zapewnia głębokie spojrzenie na ludzkie natury i emocje.");
    }
    if (ui->listWidget_2->currentItem()->text()==k6)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/portret.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Portret Doriana Graya” to powieść Oscara Wilde'a opublikowana w 1890 roku. Opowiada historię młodego mężczyzny, Doriana Graya, który sprzedaje swoją duszę, aby zachować wieczną młodość i piękno, podczas gdy jego portret starzeje się i odkrywa jego moralne zepsucie. Powieść dotyka tematów jak moralność, powierzchowność, sztuka i dekadencja. Wilde używa swojego wspaniałego stylu i inteligentnego humoru, aby ukazać kontrast między wewnętrzną degeneracją Doriana a jego zewnętrznym pięknem. „Portret Doriana Graya” jest uważany za jedno z najważniejszych dzieł literackich XIX wieku, które kwestionuje normy społeczne i prowokuje refleksję nad naturą człowieka.");
    }
    if (ui->listWidget_2->currentItem()->text()==k7)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/ogrod.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Tajemniczy Ogród” to powieść dla dzieci autorstwa Frances Hodgson Burnett, opublikowana w 1911 roku. Historia skupia się na małej dziewczynce o imieniu Mary Lennox, która po utracie rodziców zostaje wysłana do Anglii, gdzie odkrywa zapomniany ogród na terenie swojego nowego domu. Razem z dwójką przyjaciół – chłopcem imieniem Dickon i chłopcem o imieniu Colin, Mary odnajduje piękno natury, przywraca życie ogrodowi i przezwycięża swoje własne emocjonalne zranienia. Powieść dotyka tematów jak odrodzenie, uzdrowienie, przyjaźń i siła natury, a także inspiruje do odkrywania magii w codziennym życiu. „Tajemniczy Ogród” to niezwykła opowieść o transformacji, znalezieniu radości i odkrywaniu potencjału, który kryje się w nas samych.");
    }
    if (ui->listWidget_2->currentItem()->text()==k8)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/grona-gniewu.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Grona gniewu” to powieść Johna Steinbecka, opublikowana w 1939 roku. Akcja osadzona jest w czasach Wielkiego Kryzysu i skupia się na losach rodziny Joadów, której dom zostaje zniszczony przez skutki ekonomicznej i ekologicznej katastrofy. Podczas podróży przez Amerykę, Joadowie stają w obliczu biedy, niesprawiedliwości społecznej i wyzwań migrantów. Powieść porusza tematy takie jak solidarność, walka o godność i trudności związane z zachowaniem ludzkiej godności w trudnych warunkach. „Grona gniewu” jest ważnym dziełem literatury amerykańskiej, które ukazuje walkę i nadzieję w obliczu niesprzyjających okoliczności.");
    }
    if (ui->listWidget_2->currentItem()->text()==k9)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/buszujacy-w-zbozu.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Buszujący w zbożu” to powieść J.D. Salingera, opublikowana w 1951 roku. Historia skupia się na postaci Holdena Caulfielda, siedemnastolatka, który opisuje swoje doświadczenia i myśli podczas kilku dni spędzonych w Nowym Jorku. Powieść porusza tematy dorastania, alienacji, dezorientacji i niezgodności z normami społecznymi. Holden staje wobec trudności adaptacji do wymagań dorosłego świata i utraty niewinności, co prowadzi go do uczucia izolacji i frustracji. „Buszujący w zbożu” jest uważany za jedno z najważniejszych dzieł literatury amerykańskiej, które wyraża niezrozumienie i bunt młodego pokolenia wobec hipokryzji i pustki dorosłego świata.");
    }
    if (ui->listWidget_2->currentItem()->text()==k10)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/zbrodnia.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Zbrodnia i kara” to powieść autorstwa Fiodora Dostojewskiego, opowiadająca historię Rodiona Raskolnikowa, młodego studenta, który popełnia brutalne morderstwo. Raskolnikow jest pogrążony w moralnym konflikcie i cierpieniu, a jego zbrodnia i konsekwencje mają głęboki wpływ na jego psychikę. Powieść porusza tematy moralności, winy, kary i szukania odkupienia, ukazując złożoność ludzkiej natury i psychologię przestępstwa.");
    }
    if (ui->listWidget_2->currentItem()->text()==k11)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/tadeusz.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Pan Tadeusz” to epicki poemat autorstwa Adama Mickiewicza, uważany za jedno z najważniejszych dzieł polskiej literatury. Opowiada historię miłosnych perypetii i dramatów narodowych bohaterów w XIX-wiecznej Polsce. Głównym wątkiem jest romans pomiędzy Tadeuszem, młodym szlachcicem, a Zosią, córką Horeszków. Utwór przedstawia konflikt między polską i litewską szlachtą oraz ukazuje wartości szlacheckiego honoru, miłości do ojczyzny i walki o niepodległość. Jest pełen malowniczych opisów przyrody, obyczajów szlacheckich i refleksji filozoficznych.");
    }
    if (ui->listWidget_2->currentItem()->text()==k12)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/karenina.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Anna Karenina” to powieść napisana przez Lwa Tołstoja, uznawana za jedno z najważniejszych dzieł literatury światowej. Opowiada historię tytułowej bohaterki, pięknej i utalentowanej kobiety, która zrywa z nieszczęśliwym małżeństwem, zakochując się w młodym oficerze. Powieść porusza tematy miłości, moralności, społeczeństwa i konfliktów osobistych. To studium ludzkiej natury i psychologii, ukazujące trudności życia w społeczeństwie wyższych sfer Rosji w XIX wieku. „Anna Karenina” jest też analizą społecznych norm i konsekwencji łamania ich, a także refleksją nad miłością i jej wpływem na jednostki.");
    }
    if (ui->listWidget_2->currentItem()->text()==k13)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/rozwazna.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Rozważna i romantyczna” to powieść Jane Austen opowiadająca historię dwóch sióstr, Elinor i Marianne Dashwood, które mają różne podejścia do miłości i życia. Elinor jest rozważną i powściągliwą osobą, która kieruje się rozsądkiem, podczas gdy Marianne jest romantyczną i emocjonalną istotą, dając się ponieść uczuciom. Powieść bada kontrast między racjonalnością a emocjonalnością w kontekście poszukiwania miłości i szczęścia. To obrazuje różne podejścia do relacji międzyludzkich i konsekwencje decyzji opartych na rozsądku lub emocjach. „Rozważna i romantyczna” to historia o miłości, samodoskonaleniu i znalezieniu równowagi między rozumem a sercem.");
    }
    if (ui->listWidget_2->currentItem()->text()==k14)
    {
        ui->label_6->setHidden(false);
        QPixmap pixmap(":/okladki/harry.jpg");
        ui->label_6->setPixmap(pixmap);
        ui->label_6->show();
        ui->label_5->setHidden(false);
        ui->label_5->setText("„Harry Potter i Kamień Filozoficzny” to pierwsza książka z serii napisanej przez J.K. Rowling. Opowiada o przygodach młodego chłopca imieniem Harry Potter, który odkrywa, że jest czarodziejem i zostaje przyjęty do Szkoły Magii i Czarodziejstwa Hogwart. Razem z przyjaciółmi Ronem i Hermioną, Harry walczy z siłami ciemności i odkrywa tajemnice związane z Kamieniem Filozoficznym, który obdarza nieskończoną moc przemiany metali w złoto oraz udzielający nieśmiertelności. To historia pełna magii, przyjaźni, przygód i odkrywania własnego losu, która zaczyna niezwykłą podróż Harry'ego w świecie czarodziejów.");
    }
}

