#include <iostream>
#include <thread>
#include <chrono>

#define MAX_STAGE 54

using namespace std;

const char *stage0 = "\t�����";
const char *stage1 = "\t����";
const char *stage2 = "\t��䥩��";
const char *stage3 = "\tOOO ��������";
const char *stage4 = "\t��᭮� � �����";
const char *stage5 = "\t�����窨";
const char *stage6 = "\t��� ���� � �����";
const char *stage7 = "\t���� �����⮭";
const char *stage8 = "\t��������";
const char *stage9 = "\t��� ���⨪� 9";

const char *stage10 = "������";
const char *stage11 = "����࡮��";
const char *stage12 = "��᪮ᬮ��";
const char *stage13 = "����";
const char *stage14 = "��� ������᪮�� ࠩ���";
const char *stage15 = "���";
const char *stage16 = "����";
const char *stage17 = "����-�����";
const char *stage18 = "������� ����� ������";
const char *stage19 = "��������� �������";

const char *stage20 = "������";
const char *stage21 = "������";
const char *stage22 = "WILDBERRIS";
const char *stage23 = "��� ��⮢��";
const char *stage24 = "�������";
const char *stage25 = "777";
const char *stage26 = "���";
const char *stage27 = "�������";
const char *stage28 = "����࠭ ��������";
const char *stage29 = "����⪠";

const char *stage30 = "��ଋ�";
const char *stage31 = "��� ��� ����";
const char *stage32 = "�����";
const char *stage33 = "��ਪ����᪠� ���⫠��";
const char *stage34 = "���⮫�";
const char *stage35 = "��� ����";
const char *stage36 = "���ଠ � ��ᥭ�";
const char *stage37 = "��� ��� � �������";
const char *stage38 = "������";
const char *stage39 = "�㫮筠�";

const char *stage40 = "����� �⠦";
const char *stage41 = "��� ���⥬� ���⨫�樨";
const char *stage42 = "������";
const char *stage43 = "�ࠫ�᪨� ���������";
const char *stage44 = "��� ����";
const char *stage45 = "����";
const char *stage46 = "�������";
const char *stage47 = "��訢 ���";
const char *stage48 = "1000 ����祩";
const char *stage49 = "���몮�";

const char *stage50 = "����࠭ ����";
const char *stage51 = "���㧥�";
const char *stage52 = "����஢�� ���頤��";
const char *stage53 = "��孨�᪨� �⠦";
const char *stage54 = "���ᥩ�";

void elevator(void){

    cout << "���� ��������� � ������-����� ��������, �.����ਭ���" << endl;
    cout << "��室 �� ��������� �१ 0 �⠦, �⠦�� 54" << endl;
    short stage = 1;
    short target_stage = stage;

    while(stage){

        cout << "�⠦ " << stage << ":\t";
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
                cout << "��࠭  <����ᮢ��> �⠦ - ���⠫ � ��";
            }
            else{
                cout << "� ������ 54 �⠦�, ������ ����";

            }
            break;
        }
        cout << endl;

        if(target_stage == stage){
            do{
                cout << "������ �⠦:";
                cin >> target_stage;
                if(target_stage > MAX_STAGE){
                    cout << "� ������ 54 �⠦�, ������ ����" << endl;
                }
                else {
                    break;
                }
            }while(target_stage > MAX_STAGE);

        }
        this_thread::sleep_for(std::chrono::nanoseconds(350000000));

        (stage < target_stage)?stage++:stage--;

        /* ���᪮� �१ 0, �⮡� �� �뫥��� */
        if(target_stage < 0){ (stage == 0)?(stage = -1): stage;}
        if(target_stage > 0){ (stage == 0)?(stage = 1): stage;}

        if(stage == 0){
            cout << stage0 << endl;
            cout << "���ᨡ� �� ���饭�� ������-����� ��������" << endl;
        }
    }
}
