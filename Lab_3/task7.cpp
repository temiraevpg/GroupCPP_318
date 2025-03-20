#include <iostream>
#include <thread>
#include <chrono>

#define MAX_STAGE 54

using namespace std;

const char *stage0 = "\tВЫХОД";
const char *stage1 = "\tХолл";
const char *stage2 = "\tКофейня";
const char *stage3 = "\tOOO Магнолия";
const char *stage4 = "\tКрасное и Белое";
const char *stage5 = "\tНоготочки";
const char *stage6 = "\tООО Рога и Копыта";
const char *stage7 = "\tОфисный планктон";
const char *stage8 = "\tГаламарт";
const char *stage9 = "\tООО Балтика 9";

const char *stage10 = "Магнит";
const char *stage11 = "Гипербола";
const char *stage12 = "Роскосмосс";
const char *stage13 = "УГМК";
const char *stage14 = "МВД Чкаловского района";
const char *stage15 = "РЖД";
const char *stage16 = "УОМЗ";
const char *stage17 = "КОПИ-ЦЕНТР";
const char *stage18 = "Клиника Доктора Попова";
const char *stage19 = "Самагонные аппараты";

const char *stage20 = "СИНАРА";
const char *stage21 = "ЯНДЕКС";
const char *stage22 = "WILDBERRIS";
const char *stage23 = "ООО Оптовик";
const char *stage24 = "АВТОВАЗ";
const char *stage25 = "777";
const char *stage26 = "ТНТ";
const char *stage27 = "КУПИДОН";
const char *stage28 = "Ресторан Демидовъ";
const char *stage29 = "Монетка";

const char *stage30 = "ФармЛэнд";
const char *stage31 = "ООО Дядя Ваня";
const char *stage32 = "Цветы";
const char *stage33 = "Парикмахерская Светлана";
const char *stage34 = "Бристоль";
const char *stage35 = "ООО НЭВЗ";
const char *stage36 = "Шаурма у Арсена";
const char *stage37 = "ООО КОТ в САПОГАХ";
const char *stage38 = "Инвитро";
const char *stage39 = "Булочная";

const char *stage40 = "Жилой этаж";
const char *stage41 = "ОАО Системы вентиляции";
const char *stage42 = "РОСТЕХ";
const char *stage43 = "Уральские авиалинии";
const char *stage44 = "ООО СМАК";
const char *stage45 = "УЗГА";
const char *stage46 = "Копейка";
const char *stage47 = "Пошив штор";
const char *stage48 = "1000 мелочей";
const char *stage49 = "Шашлыков";

const char *stage50 = "Ресторан высота";
const char *stage51 = "Санузел";
const char *stage52 = "Смотровая площадка";
const char *stage53 = "Технический этаж";
const char *stage54 = "Бассейн";

void elevator(void){

    cout << "Добро пожаловть в Бизнес-Центр ВЫСОЦКИЙ, г.Екатеринбург" << endl;
    cout << "Выход из ВЫСОЦКОГО через 0 этаж, этажей 54" << endl;
    short stage = 1;
    short target_stage = stage;

    while(stage){

        cout << "Этаж " << stage << ":\t";
        switch (stage) {
        case 1: cout << stage1; break;
        case 2: cout << stage2; break;
        case 3: cout << stage3; break;
        case 4: cout << stage4; break;
        case 5: cout << stage5; break;
        case 6: cout << stage6; break;
        case 7: cout << stage7; break;
        case 8: cout << stage8; break;
        case 9: cout << stage9; break;
        case 10: cout << stage10; break;
        case 11: cout << stage11; break;
        case 12: cout << stage12; break;
        case 13: cout << stage13; break;
        case 14: cout << stage14; break;
        case 15: cout << stage15; break;
        case 16: cout << stage16; break;
        case 17: cout << stage17; break;
        case 18: cout << stage18; break;
        case 19: cout << stage19; break;
        case 20: cout << stage20; break;
        case 21: cout << stage21; break;
        case 22: cout << stage22; break;
        case 23: cout << stage23; break;
        case 24: cout << stage24; break;
        case 25: cout << stage25; break;
        case 26: cout << stage26; break;
        case 27: cout << stage27; break;
        case 28: cout << stage28; break;
        case 29: cout << stage29; break;
        case 30: cout << stage30; break;
        case 31: cout << stage31; break;
        case 32: cout << stage32; break;
        case 33: cout << stage33; break;
        case 34: cout << stage34; break;
        case 35: cout << stage35; break;
        case 36: cout << stage36; break;
        case 37: cout << stage37; break;
        case 38: cout << stage38; break;
        case 39: cout << stage39; break;
        case 40: cout << stage40; break;
        case 41: cout << stage41; break;
        case 42: cout << stage42; break;
        case 43: cout << stage43; break;
        case 44: cout << stage44; break;
        case 45: cout << stage45; break;
        case 46: cout << stage46; break;
        case 47: cout << stage47; break;
        case 48: cout << stage48; break;
        case 49: cout << stage49; break;
        case 50: cout << stage50; break;
        case 51: cout << stage51; break;
        case 52: cout << stage52; break;
        case 53: cout << stage53; break;
        case 54: cout << stage54; break;

        default:
            if(stage < 0){
                cout << "Выбран  <минусовой> этаж - портал в АД";
            }
            else{
                cout << "В здании 54 этажа, повторите ввод";

            }
            break;
        }
        cout << endl;

        if(target_stage == stage){
            do{
                cout << "Введите этаж:";
                cin >> target_stage;
                if(target_stage > MAX_STAGE){
                    cout << "В здании 54 этажа, повторите ввод" << endl;
                }
                else {
                    break;
                }
            }while(target_stage > MAX_STAGE);

        }
        this_thread::sleep_for(std::chrono::nanoseconds(350000000));

        (stage < target_stage)?stage++:stage--;

        /* перескок через 0, чтобы не вылететь */
        if(target_stage < 0){ (stage == 0)?(stage = -1): stage;}
        if(target_stage > 0){ (stage == 0)?(stage = 1): stage;}

        if(stage == 0){
            cout << stage0 << endl;
            cout << "Спасибо за посещение Бизнес-Центра ВЫСОЦКИЙ" << endl;
        }
    }
}
