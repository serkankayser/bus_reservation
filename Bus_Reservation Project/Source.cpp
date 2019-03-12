#include <windows.h>
#include <string>
#include <cstdlib>

using namespace std;
int a = 0;
HMENU hmenu; // declaram un obiect de tip HMENU

void IncarcaPoza();
void AddMenus(HWND); // functie prototip
void AddControls(HWND hwnd); // functie prototip adaugare controale



HBITMAP hPozaLogo1, hPozaLogo2, hButtonColour, hButtonColour2, hButtonColour3, hButtonColour4, hButtonColour5, hButtonColour6,
hButtonColour7, hButtonColour8, hButtonColour9, hButtonColour10, hButtonColour11, hButtonColour12, hButtonColour13, hButtonColour14,
hButtonColour15, hButtonColour16, hButtonColour17, hButtonColour18, hButtonColour19, hButtonColour20, hButtonColour21, hButtonColour22,
hButtonColour23, hButtonColour24, hButtonColour25, hButtonColour26, hButtonColour27, hButtonColour28, hButtonColour29, hButtonColour30,
hButtonColour31, hButtonColour32, hButtonColour33, hRosu, hAlbastru;

HWND button1, button2, button3, button4, button5, button6, button7, button8, button9, button10, button11, button12, button13,
	 button14, button15, button16, button17, button18, button19, button20, button21, button22, button23, button24, button25, button26,
	 button27, button28, button29, button30, button31, button32, button33;

HWND hDisplay1;
HWND hEdit1;
HWND hEdit2;
HWND hEdit3;
HWND hEdit4;
HWND hLogo1;
HWND hLogo2;



char* concateneazaText(char *textIesire, char *textAdaugare, char *textAdaugare3);

// START FUNCTIE PRELUCRARE Mesaje - Pas 4
LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{

	case WM_COMMAND:
		switch (wParam) {
		case 1:
			MessageBox(hwnd, "Ai apasat pe FILE", "mesaj catre utilizator", 4);
			break;
		case 2:
			MessageBox(hwnd, "Ai apasat pe EDIT", "mesaj catre utilizator", 4);
			break;
		case 3:
			MessageBox(hwnd, "Ai apasat pe VIEW", "mesaj catre utilizator", 4);
			break;
		case 4:
			MessageBox(hwnd, "Ai apasat pe HELP", "mesaj catre utilizator", 4);
			break;
		case 5:
			MessageBox(hwnd, "Ai apasat pe NEW", "mesaj catre utilizator", 4);
			break;
		case 6:
			MessageBox(hwnd, "Ai apasat pe OPEN", "mesaj catre utilizator", 4);
			break;
		case 7:
			MessageBox(hwnd, "Ai apasat pe SAVE", "mesaj catre utilizator", 4);
			break;
		case 8:
			DestroyWindow(hwnd);
			break;
		case 9:
			MessageBox(hwnd, "Ai apasat pe COPY", "mesaj catre utilizator", 4);
			break;
		case 10:
			MessageBox(hwnd, "Ai apasat pe PASTE", "mesaj catre utilizator", 4);
			break;
		case 11:
			MessageBox(hwnd, "Ai apasat pe CUT", "mesaj catre utilizator", 4);
			break;
		case 12:
			MessageBox(hwnd, "Ai apasat pe UNDO", "mesaj catre utilizator", 4);
			break;
		case 13:
			MessageBox(hwnd, "Ai apasat pe FULL SCREEN", "mesaj catre utilizator", 4);
			break;
		case 14:
			MessageBox(hwnd, "Ai apasat pe NOTIFICATIONS", "mesaj catre utilizator", 4);
			break;
		case 15:
			MessageBox(hwnd, "Ai apasat pe CALL CENTER", "mesaj catre utilizator", 4);
			break;
		case 16:
			MessageBox(hwnd, "Ai apasat pe Open TEXT", "mesaj catre utilizator", 4);
			break;
		case 17:
			MessageBox(hwnd, "Ai apasat pe Open JPEG", "mesaj catre utilizator", 4);
			break;
		case 18:
			MessageBox(hwnd, "Ai apasat pe Open PNG", "mesaj catre utilizator", 4);
			break;
		case 19:
			MessageBox(hwnd, "Ai apasat pe Open with", "mesaj catre utilizator", 4);
			break;
		case 20:
			MessageBox(hwnd, "Ai apasat pe Edit", "mesaj catre utilizator", 4);
			break;
		case 21:
			MessageBox(hwnd, "Ai apasat pe Run", "mesaj catre utilizator", 4);
			break;
		case 22:
			MessageBox(hwnd, "Ai apasat pe Open with", "mesaj catre utilizator", 4);
			break;
		case 23:
			MessageBox(hwnd, "Ai apasat pe Edit", "mesaj catre utilizator", 4);
			break;
		case 24:
			MessageBox(hwnd, "Ai apasat pe Run", "mesaj catre utilizator", 4);
			break;
		case 25:
			MessageBox(hwnd, "Ai apasat pe Open with", "mesaj catre utilizator", 4);
			break;
		case 26:
			MessageBox(hwnd, "Ai apasat pe Edit", "mesaj catre utilizator", 4);
			break;
		case 27:
			MessageBox(hwnd, "Ai apasat pe Run", "mesaj catre utilizator", 4);
			break;
		case 28:

			break;
		case 29:
			int nr;
			nr = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "MESAJ", MB_YESNO);


			if (nr == 6) {
				if (hButtonColour2 == hAlbastru) {
					hButtonColour2 = hRosu;
					SendMessage(button2, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);
					
					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);
					
					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);
					
					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour2) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}
			}
			if (nr == 7) {
				DestroyWindow;
			}
			break;
		case 30:
			int nr1;
			nr1 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "MESAJ", MB_YESNO);

			if (nr1 == 6) {
				if (hButtonColour3 == hAlbastru) {
					hButtonColour3 = hRosu;
					SendMessage(button3, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour3) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr1 == 7) {

			}
			break;

		case 31:
			int nr2;
			nr2 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr2 == 6) {
				if (hButtonColour4 == hAlbastru) {
					hButtonColour4 = hRosu;
					SendMessage(button4, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour4) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr2 == 7) {

			}
			break;

		case 32:
			int nr3;
			nr3 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr3 == 6) {
				if (hButtonColour5 == hAlbastru) {
					hButtonColour5 = hRosu;
					SendMessage(button5, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour5) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr3 == 7) {

			}
			break;

		case 33:
			int nr4;
			nr4 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr4 == 6) {
				if (hButtonColour6 == hAlbastru) {
					hButtonColour6 = hRosu;
					SendMessage(button6, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour6) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr4 == 7) {

			}
			break;

		case 34:
			int nr5;
			nr5 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr5 == 6) {
				if (hButtonColour7 == hAlbastru) {
					hButtonColour7 = hRosu;
					SendMessage(button7, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour7) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr5 == 7) {

			}
			break;

		case 35:
			int nr6;
			nr6 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr6 == 6) {
				if (hButtonColour8 == hAlbastru) {
					hButtonColour8 = hRosu;
					SendMessage(button8, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour8) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr6 == 7) {

			}
			break;

		case 36:
			int nr7;
			nr7 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr7 == 6) {
				if (hButtonColour9 == hAlbastru) {
					hButtonColour9 = hRosu;
					SendMessage(button9, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour9) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr7 == 7) {

			}
			break;

		case 37:
			int nr8;
			nr8 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr8 == 6) {
				if (hButtonColour10 == hAlbastru) {
					hButtonColour10 = hRosu;
					SendMessage(button10, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour10) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr8 == 7) {

			}
			break;

		case 38:
			int nr9;
			nr9 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr9 == 6) {
				if (hButtonColour11 == hAlbastru) {
					hButtonColour11 = hRosu;
					SendMessage(button11, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour11) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr9 == 7) {

			}
			break;

		case 39:
			int nr10;
			nr10 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr10 == 6) {
				if (hButtonColour12 == hAlbastru) {
					hButtonColour12 = hRosu;
					SendMessage(button12, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour12) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr10 == 7) {

			}
			break;

		case 40:
			int nr11;
			nr11 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr11 == 6) {
				if (hButtonColour13 == hAlbastru) {
					hButtonColour13 = hRosu;
					SendMessage(button13, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour13) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr11 == 7) {

			}
			break;

		case 41:
			int nr12;
			nr12 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr12 == 6) {
				if (hButtonColour14 == hAlbastru) {
					hButtonColour14 = hRosu;
					SendMessage(button14, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour14) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr12 == 7) {

			}
			break;

		case 42:
			int nr13;
			nr13 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr13 == 6) {
				if (hButtonColour15 == hAlbastru) {
					hButtonColour15 = hRosu;
					SendMessage(button15, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour15) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr13 == 7) {

			}
			break;

		case 43:
			int nr14;
			nr14 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr14 == 6) {
				if (hButtonColour16 == hAlbastru) {
					hButtonColour16 = hRosu;
					SendMessage(button16, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour16) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr14 == 7) {

			}
			break;

		case 44:
			int nr15;
			nr15 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr15 == 6) {
				if (hButtonColour17 == hAlbastru) {
					hButtonColour17 = hRosu;
					SendMessage(button17, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour17) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr15 == 7) {

			}
			break;

		case 45:
			int nr16;
			nr16 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr16 == 6) {
				if (hButtonColour18 == hAlbastru) {
					hButtonColour18 = hRosu;
					SendMessage(button18, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour18) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr16 == 7) {

			}
			break;

		case 46:
			int nr17;
			nr17 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr17 == 6) {
				if (hButtonColour19 == hAlbastru) {
					hButtonColour19 = hRosu;
					SendMessage(button19, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour19) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr17 == 7) {

			}
			break;

		case 47:
			int nr18;
			nr18 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr18 == 6) {
				if (hButtonColour20 == hAlbastru) {
					hButtonColour20 = hRosu;
					SendMessage(button20, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour20) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr18 == 7) {

			}
			break;

		case 48:
			int nr19;
			nr19 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr19 == 6) {
				if (hButtonColour21 == hAlbastru) {
					hButtonColour21 = hRosu;
					SendMessage(button21, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour21) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr19 == 7) {

			}
			break;

		case 49:
			int nr20;
			nr20 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr20 == 6) {
				if (hButtonColour22 == hAlbastru) {
					hButtonColour22 = hRosu;
					SendMessage(button22, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour22) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr20 == 7) {

			}
			break;

		case 50:
			int nr21;
			nr21 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr21 == 6) {
				if (hButtonColour23 == hAlbastru) {
					hButtonColour23 = hRosu;
					SendMessage(button23, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour23) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr21 == 7) {

			}
			break;

		case 51:
			int nr22;
			nr22 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr22 == 6) {
				if (hButtonColour24 == hAlbastru) {
					hButtonColour24 = hRosu;
					SendMessage(button24, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour24) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr22 == 7) {

			}
			break;

		case 52:
			int nr23;
			nr23 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr23 == 6) {
				if (hButtonColour25 == hAlbastru) {
					hButtonColour25 = hRosu;
					SendMessage(button25, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour25) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr23 == 7) {

			}
			break;

		case 53:
			int nr24;
			nr24 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr24 == 6) {
				if (hButtonColour26 == hAlbastru) {
					hButtonColour26 = hRosu;
					SendMessage(button26, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour26) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr24 == 7) {

			}
			break;

		case 54:
			int nr25;
			nr25 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr25 == 6) {
				if (hButtonColour27 == hAlbastru) {
					hButtonColour27 = hRosu;
					SendMessage(button27, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour27) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr25 == 7) {

			}
			break;

		case 55:
			int nr26;
			nr26 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr26 == 6) {
				if (hButtonColour28 == hAlbastru) {
					hButtonColour28 = hRosu;
					SendMessage(button28, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour28) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr26 == 7) {

			}
			break;

		case 56:
			int nr27;
			nr27 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr27 == 6) {
				if (hButtonColour29 == hAlbastru) {
					hButtonColour29 = hRosu;
					SendMessage(button29, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour29) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr27 == 7) {

			}
			break;

		case 57:
			int nr28;
			nr28 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr28 == 6) {
				if (hButtonColour30 == hAlbastru) {
					hButtonColour30 = hRosu;
					SendMessage(button30, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour30) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr28 == 7) {

			}
			break;

		case 58:
			int nr29;
			nr29 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr29 == 6) {
				if (hButtonColour31 == hAlbastru) {
					hButtonColour31 = hRosu;
					SendMessage(button31, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour31) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr29 == 7) {

			}
			break;

		case 59:
			int nr30;
			nr30 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr30 == 6) {
				if (hButtonColour32 == hAlbastru) {
					hButtonColour32 = hRosu;
					SendMessage(button32, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour32) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr30 == 7) {

			}
			break;
			
		case 60:
			int nr31;
			nr31 = MessageBox(hwnd, "Vreti sa rezervati acest loc?", "Mesaj pentru utilizator", MB_YESNO);

			if (nr31 == 6) {
				if (hButtonColour33 == hAlbastru) {
					hButtonColour33 = hRosu;
					SendMessage(button33, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hRosu);
					MessageBox(hwnd, "Ati ales locul. Urmatorul pas este plata.\nDoriti sa continuati?", "MESAJ", 4);

					wchar_t bufferText1[100];
					GetWindowText(hEdit1, (LPSTR)bufferText1, 100);

					wchar_t bufferText2[100];
					GetWindowText(hEdit2, (LPSTR)bufferText2, 100);

					wchar_t bufferText3[100];
					GetWindowText(hEdit3, (LPSTR)bufferText3, 100);

					concateneazaText((char*)&bufferText1, (char*)&bufferText2, (char*)&bufferText3);
					SetWindowText(hDisplay1, (LPSTR)(char*)&bufferText1);

				}

				else if (hRosu == hButtonColour33) {
					MessageBox(hwnd, "Ne pare rau! Acest loc este ocupat!", "MESAJ", MB_ICONEXCLAMATION);
				}

			}
			if (nr31 == 7) {

			}
			break;

		}
			
	case WM_LBUTTONDOWN:

		break;

	case WM_MBUTTONDOWN: {
		a = a + 10;
		MessageBox(hwnd, "Ai apasat pe butonul din mijloc", "mesaj catre utilizator", 4);
		break;
	}
	case WM_RBUTTONDOWN: {
		a = a + 100;
		MessageBox(hwnd, "Ai apasat pe butonul din dreapta", "mesaj catre utilizator", MB_RETRYCANCEL);
		break;
	}
	case WM_CHAR:
	{
		if (wParam == VK_ESCAPE)
			SendMessage(hwnd, WM_CLOSE, 0, 0);
		return 0;
	}
	case WM_CREATE: {
		IncarcaPoza();
		AddMenus(hwnd);
		AddControls(hwnd);
		break;
	}
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hDC;
		char szBuffer[] = "Hello World!";
		strcpy(szBuffer, szBuffer + (char)a);
		hDC = BeginPaint(hwnd, &ps);

		EndPaint(hwnd, &ps);
		return 0;
	}
	case WM_DESTROY:
	{
		PostQuitMessage(0);
		return 0;
	}

	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_LEFT:

			MessageBox(hwnd, "ai apasat tasta stanga", "mesaj utilizator", MB_YESNO);

			break;

		case VK_RIGHT:

			MessageBox(hwnd, "ai apasat tasta dreapta", "mesaj utilizator", MB_YESNOCANCEL);

			break;

		case VK_UP:

			MessageBox(hwnd, "ai apasat sageata sus", "mesaj utilizator", MB_YESNO);

			break;

		case VK_DOWN:

			MessageBox(hwnd, "ai apasat sageata jos", "mesaj utilizator", MB_YESNO);

			break;

		case VK_HOME:

			MessageBox(hwnd, "ai apasat tasta home", "mesaj utilizator", MB_YESNO);

			break;

		case VK_END:

			MessageBox(hwnd, "ai apasat tasta end", "mesaj utilizator", MB_CANCELTRYCONTINUE);

			break;

		case VK_INSERT:

			MessageBox(hwnd, "ai apasat tasta insert", "mesaj utilizator", MB_YESNO);

			break;

		case VK_DELETE:

			MessageBox(hwnd, "ai apasat tasta delete", "mesaj utilizator", MB_YESNO);

			break;

		case VK_F2:

			MessageBox(hwnd, "Ai apasat F2 : ", "Mesaj", MB_OKCANCEL);

			break;
			// Process other non-character keystrokes. 
		default:
			MessageBox(hwnd, "ati apasat orice alta tasta", "mesaj utilizator", MB_YESNO);
			break;
		}
	}

	return DefWindowProc(hwnd, message, wParam, lParam);
}
// STOP FUNCTIE PRELUCRARE Mesaje - Pas 4

int WINAPI WinMain(HINSTANCE hIns, HINSTANCE hPrev, LPSTR lpszArgument, int nCmdShow)
{
	// START REGISTER Window Class - Pas 1
	char szClassName[] = "BUS RESERVATION v1.0";
	WNDCLASSEX wc;
	MSG messages;
	HWND hwnd;

	wc.hInstance = hIns;
	wc.lpszClassName = szClassName, wc.lpfnWndProc = WndProc;
	wc.style = CS_DBLCLKS, wc.cbSize = sizeof(WNDCLASSEX);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION), wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW), wc.lpszMenuName = NULL;
	wc.cbClsExtra = 0, wc.cbWndExtra = 0;
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	RegisterClassEx(&wc);


	// STOP register Window Class - Pas 1

	// START Creare Fereastra Propriu Zisa si Afisare - Pas 2
	hwnd = CreateWindow(szClassName, szClassName, WS_OVERLAPPEDWINDOW, 50, 50, 1400, 1050, HWND_DESKTOP, NULL, hIns, NULL);
	ShowWindow(hwnd, nCmdShow);
	// STOP Creare Fereastra Propriu Zisa si Afisare - Pas 2

	// START Coada de asteptare mesaje - Pas 3
	while (GetMessage(&messages, NULL, 0, 0))
	{
		TranslateMessage(&messages);
		DispatchMessage(&messages);
	}
	// STOP Coada de asteptare mesaje - Pas 3

	return messages.wParam;
}

void AddMenus(HWND hwnd) {
	hmenu = CreateMenu();
	HMENU hFileMenu = CreateMenu();
	HMENU hEditMenu = CreateMenu();
	HMENU hViewMenu = CreateMenu();
	HMENU hHelpMenu = CreateMenu();
	HMENU hOpenMenu = CreateMenu();
	HMENU hOpenTextMenu = CreateMenu();
	HMENU hOpenJPEGMenu = CreateMenu();
	HMENU hOpenPNGMenu = CreateMenu();

	AppendMenu(hmenu, MF_POPUP, (UINT_PTR)hFileMenu, "File");
	AppendMenu(hmenu, MF_POPUP, (UINT_PTR)hEditMenu, "Edit");
	AppendMenu(hmenu, MF_POPUP, (UINT_PTR)hViewMenu, "View");
	AppendMenu(hmenu, MF_POPUP, (UINT_PTR)hHelpMenu, "Help");

	AppendMenu(hFileMenu, MF_STRING, 5, "New");
	AppendMenu(hFileMenu, MF_POPUP, (UINT_PTR)hOpenMenu, "Open");
	AppendMenu(hFileMenu, MF_STRING, 7, "Save");
	AppendMenu(hFileMenu, MF_STRING, 8, "Close");

	AppendMenu(hEditMenu, MF_STRING, 9, "Copy");
	AppendMenu(hEditMenu, MF_STRING, 10, "Paste");
	AppendMenu(hEditMenu, MF_STRING, 11, "Cut");
	AppendMenu(hEditMenu, MF_STRING, 12, "Undo");

	AppendMenu(hViewMenu, MF_STRING, 13, "Full Screen");
	AppendMenu(hViewMenu, MF_STRING, 14, "Notifications");

	AppendMenu(hHelpMenu, MF_STRING, 15, "Call Center");

	AppendMenu(hOpenMenu, MF_POPUP, (UINT_PTR)hOpenTextMenu, "Open TEXT");
	AppendMenu(hOpenMenu, MF_POPUP, (UINT_PTR)hOpenJPEGMenu, "Open JPEG");
	AppendMenu(hOpenMenu, MF_POPUP, (UINT_PTR)hOpenPNGMenu, "Open PNG");

	AppendMenu(hOpenTextMenu, MF_STRING, 19, "Open with");
	AppendMenu(hOpenTextMenu, MF_STRING, 20, "Edit");
	AppendMenu(hOpenTextMenu, MF_STRING, 21, "Run");

	AppendMenu(hOpenJPEGMenu, MF_STRING, 22, "Open with");
	AppendMenu(hOpenJPEGMenu, MF_STRING, 23, "Edit");
	AppendMenu(hOpenJPEGMenu, MF_STRING, 24, "Run");

	AppendMenu(hOpenPNGMenu, MF_STRING, 25, "Open with");
	AppendMenu(hOpenPNGMenu, MF_STRING, 26, "Edit");
	AppendMenu(hOpenPNGMenu, MF_STRING, 27, "Run");


	SetMenu(hwnd, hmenu);
}


void AddControls(HWND hwnd) {
	CreateWindowEx(0, "static", "Pleaca din:", WS_VISIBLE | WS_CHILD | WS_BORDER, 20, 350, 100, 30, hwnd, NULL, NULL, NULL);
	hEdit1 = CreateWindowEx(0, "EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 140, 350, 250, 30, hwnd, NULL, NULL, NULL);

	CreateWindowEx(0, "static", "Sosire la:", WS_VISIBLE | WS_CHILD | WS_BORDER, 500, 350, 100, 30, hwnd, NULL, NULL, NULL);
	hEdit2 = CreateWindowEx(0, "EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 620, 350, 250, 30, hwnd, NULL, NULL, NULL);

	CreateWindowEx(0, "static", "Data Plecare:", WS_VISIBLE | WS_CHILD | WS_BORDER, 980, 350, 100, 30, hwnd, NULL, NULL, NULL);
	hEdit3 = CreateWindowEx(0, "EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER | EM_SETHANDLE, 1100, 350, 250, 30, hwnd, NULL, NULL, NULL);

	// PENTRU LOCURI:
	CreateWindowEx(0, "static", "Selectati Locul:", WS_VISIBLE | WS_CHILD, 20, 450, 110, 25, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "1", WS_VISIBLE | WS_CHILD | ES_CENTER, 60, 500, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "2", WS_VISIBLE | WS_CHILD | ES_CENTER, 100, 500, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "3", WS_VISIBLE | WS_CHILD | ES_CENTER, 140, 500, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "4", WS_VISIBLE | WS_CHILD | ES_CENTER, 180, 500, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "5", WS_VISIBLE | WS_CHILD | ES_CENTER, 220, 500, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "6", WS_VISIBLE | WS_CHILD | ES_CENTER, 260, 500, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "7", WS_VISIBLE | WS_CHILD | ES_CENTER, 300, 500, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "8", WS_VISIBLE | WS_CHILD | ES_CENTER, 340, 500, 30, 30, hwnd, NULL, NULL, NULL);
	
	CreateWindowEx(0, "static", "A", WS_VISIBLE | WS_CHILD | ES_CENTER, 20, 540, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "B", WS_VISIBLE | WS_CHILD | ES_CENTER, 20, 580, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "C", WS_VISIBLE | WS_CHILD | ES_CENTER, 20, 640, 30, 30, hwnd, NULL, NULL, NULL);
	CreateWindowEx(0, "static", "D", WS_VISIBLE | WS_CHILD | ES_CENTER, 20, 680, 30, 30, hwnd, NULL, NULL, NULL);
	// LOCURI END!

	// LOGO1
	hLogo1 = CreateWindowExA(0, "static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, 20, 20, 663, 289, hwnd, NULL, NULL, NULL);
	SendMessage(hLogo1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hPozaLogo1);
	// LOGO2
	hLogo2 = CreateWindowExA(0, "static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, 700, 20, 663, 289, hwnd, NULL, NULL, NULL);
	SendMessage(hLogo2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hPozaLogo2);

	// BUTTON PENTRU SEARCH:
	button1 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 620, 400, 100, 30, hwnd, (HMENU)28, NULL, NULL);
	SendMessage(button1, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour);
	
	// BUTTONS PENTRU LOCURI:
	// 1.sira:
	button2 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 60, 540, 30, 30, hwnd, (HMENU)29, NULL, NULL);
	SendMessage(button2, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour2);

	button3 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 60, 580, 30, 30, hwnd, (HMENU)30, NULL, NULL);
	SendMessage(button3, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour3);

	button4 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 60, 640, 30, 30, hwnd, (HMENU)31, NULL, NULL);
	SendMessage(button4, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour4);

	button5 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 60, 680, 30, 30, hwnd, (HMENU)32, NULL, NULL);
	SendMessage(button5, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour5);

	// 2.sira:
	button6 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 100, 540, 30, 30, hwnd, (HMENU)33, NULL, NULL);
	SendMessage(button6, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour6);

	button7 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 100, 580, 30, 30, hwnd, (HMENU)34, NULL, NULL);
	SendMessage(button7, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour7);

	button8 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 100, 640, 30, 30, hwnd, (HMENU)35, NULL, NULL);
	SendMessage(button8, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour8);

	button9 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 100, 680, 30, 30, hwnd, (HMENU)36, NULL, NULL);
	SendMessage(button9, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour9);

	// 3.sira:
	button10 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 140, 540, 30, 30, hwnd, (HMENU)37, NULL, NULL);
	SendMessage(button10, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour10);

	button11 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 140, 580, 30, 30, hwnd, (HMENU)38, NULL, NULL);
	SendMessage(button11, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour11);

	button12 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 140, 640, 30, 30, hwnd, (HMENU)39, NULL, NULL);
	SendMessage(button12, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour12);

	button13 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 140, 680, 30, 30, hwnd, (HMENU)40, NULL, NULL);
	SendMessage(button13, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour13);

	// 4.sira:
	button14 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 180, 540, 30, 30, hwnd, (HMENU)41, NULL, NULL);
	SendMessage(button14, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour14);

	button15 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 180, 580, 30, 30, hwnd, (HMENU)42, NULL, NULL);
	SendMessage(button15, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour15);

	button16 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 180, 640, 30, 30, hwnd, (HMENU)43, NULL, NULL);
	SendMessage(button16, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour16);

	button17 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 180, 680, 30, 30, hwnd, (HMENU)44, NULL, NULL);
	SendMessage(button17, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour17);

	// 5.sira:
	button18 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 220, 540, 30, 30, hwnd, (HMENU)45, NULL, NULL);
	SendMessage(button18, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour18);

	button19 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 220, 580, 30, 30, hwnd, (HMENU)46, NULL, NULL);
	SendMessage(button19, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour19);

	button20 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 220, 640, 30, 30, hwnd, (HMENU)47, NULL, NULL);
	SendMessage(button20, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour20);

	button21 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 220, 680, 30, 30, hwnd, (HMENU)48, NULL, NULL);
	SendMessage(button21, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour21);

	// 6.sira:
	button22 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 260, 540, 30, 30, hwnd, (HMENU)49, NULL, NULL);
	SendMessage(button22, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour22);

	button23 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 260, 580, 30, 30, hwnd, (HMENU)50, NULL, NULL);
	SendMessage(button23, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour23);

	button24 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 260, 640, 30, 30, hwnd, (HMENU)51, NULL, NULL);
	SendMessage(button24, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour24);

	button25 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 260, 680, 30, 30, hwnd, (HMENU)52, NULL, NULL);
	SendMessage(button25, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour25);

	// 7.sira:
	button26 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 300, 540, 30, 30, hwnd, (HMENU)53, NULL, NULL);
	SendMessage(button26, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour26);

	button27 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 300, 580, 30, 30, hwnd, (HMENU)54, NULL, NULL);
	SendMessage(button27, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour27);

	button28 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 300, 640, 30, 30, hwnd, (HMENU)55, NULL, NULL);
	SendMessage(button28, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour28);

	button29 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 300, 680, 30, 30, hwnd, (HMENU)56, NULL, NULL);
	SendMessage(button29, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour29);

	// 8.sira:
	button30 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 340, 540, 30, 30, hwnd, (HMENU)57, NULL, NULL);
	SendMessage(button30, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour30);

	button31 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 340, 580, 30, 30, hwnd, (HMENU)58, NULL, NULL);
	SendMessage(button31, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour31);

	button32 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 340, 640, 30, 30, hwnd, (HMENU)59, NULL, NULL);
	SendMessage(button32, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour32);

	button33 = CreateWindowExA(0, "Button", NULL, WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON | BS_BITMAP, 340, 680, 30, 30, hwnd, (HMENU)60, NULL, NULL);
	SendMessage(button33, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hButtonColour33);

	

	// DISPLAY 1 - 2
	CreateWindowEx(0, "static", "Detalii Pentru Calatorie Dumneavoastra:", WS_VISIBLE | WS_CHILD | WS_BORDER, 500, 500, 300, 30, hwnd, NULL, NULL, NULL);
	hDisplay1 = CreateWindowEx(0, "static", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 500, 550, 400, 160, hwnd, NULL, NULL, NULL);
}

char* concateneazaText(char *textIesire, char *textAdaugare, char *textAdaugare3) {
	strcat(textIesire, " spre "); // Pentru spatiu dupa primul text
	strcat(textIesire, textAdaugare);
	strcat(textIesire, "\nData: ");
	strcat(textIesire, textAdaugare3);
	strcat(textIesire, "\nPlata totala este: 150 LEI");
	return textIesire;
}

void IncarcaPoza() {
	char scaunRosu[] = "seatRed.bmp";
	char scaunAlbastru[] = "seatblue.bmp";
	hPozaLogo1 = (HBITMAP)LoadImageA(NULL, "bus_img.bmp", IMAGE_BITMAP, 663, 289, LR_LOADFROMFILE);
	hPozaLogo2 = (HBITMAP)LoadImageA(NULL, "bus_img2.bmp", IMAGE_BITMAP, 663, 289, LR_LOADFROMFILE);
	hButtonColour = (HBITMAP)LoadImageA(NULL, "red.bmp", IMAGE_BITMAP, 100, 30, LR_LOADFROMFILE);
	hRosu = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hAlbastru = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);

	hButtonColour2 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour3 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour4 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour5 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour6 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour7 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour8 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour9 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour10 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour11 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour12 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour13 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour14 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour15 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour16 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour17 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour18 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour19 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour20 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour21 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour22 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour23 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour24 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour25 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour26 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour27 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour28 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour29 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour30 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour31 = (HBITMAP)LoadImageA(NULL, scaunRosu, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour32 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);
	hButtonColour33 = (HBITMAP)LoadImageA(NULL, scaunAlbastru, IMAGE_BITMAP, 30, 30, LR_LOADFROMFILE);

	hButtonColour2 = hAlbastru;
	hButtonColour3 = hRosu;
	hButtonColour4 = hAlbastru;
	hButtonColour5 = hAlbastru;
	hButtonColour6 = hRosu;
	hButtonColour7 = hAlbastru;
	hButtonColour8 = hAlbastru;
	hButtonColour9 = hRosu;
	hButtonColour10 = hRosu;
	hButtonColour11 = hRosu;
	hButtonColour12 = hRosu;
	hButtonColour13 = hAlbastru;
	hButtonColour14 = hAlbastru;
	hButtonColour15 = hRosu;
	hButtonColour16 = hAlbastru;
	hButtonColour17 = hAlbastru;
	hButtonColour18 = hAlbastru;
	hButtonColour19 = hAlbastru;
	hButtonColour20 = hAlbastru;
	hButtonColour21 = hRosu;
	hButtonColour22 = hRosu;
	hButtonColour23 = hAlbastru;
	hButtonColour24 = hRosu;
	hButtonColour25 = hRosu;
	hButtonColour26 = hAlbastru;
	hButtonColour27 = hRosu;
	hButtonColour28 = hAlbastru;
	hButtonColour29 = hAlbastru;
	hButtonColour30 = hRosu;
	hButtonColour31 = hRosu;
	hButtonColour32 = hAlbastru;
	hButtonColour33 = hAlbastru;

}
