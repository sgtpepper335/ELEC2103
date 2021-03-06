/**************************************************************
 * HTTPPrint.h
 * Provides callback headers and resolution for user's custom
 * HTTP Application.
 * 
 * This file is automatically generated by the MPFS Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS GENERATOR
 **************************************************************/

#ifndef __HTTPPRINT_H
#define __HTTPPRINT_H

#include "TCPIP Stack/TCPIP.h"

#if defined(STACK_USE_HTTP2_SERVER)

extern HTTP_STUB httpStubs[MAX_HTTP_CONNECTIONS];
extern BYTE curHTTPID;

void HTTPPrint(DWORD callbackID);
void HTTPPrint_hellomsg(void);
void HTTPPrint_led(WORD);
void HTTPPrint_btn(WORD);
void HTTPPrint_pot(void);
void HTTPPrint_MyWebMessage(void);
void HTTPPrint_P1gold(void);
void HTTPPrint_P1sol(void);
void HTTPPrint_P2gold(void);
void HTTPPrint_P2sol(void);
void HTTPPrint_timer_round(void);

void HTTPPrint(DWORD callbackID)
{
	switch(callbackID)
	{
        case 0x00000000:
			HTTPPrint_hellomsg();
			break;
        case 0x00000001:
			HTTPPrint_led(0);
			break;
        case 0x00000002:
			HTTPPrint_led(1);
			break;
        case 0x00000003:
			HTTPPrint_led(2);
			break;
        case 0x00000004:
			HTTPPrint_led(3);
			break;
        case 0x00000005:
			HTTPPrint_led(4);
			break;
        case 0x00000006:
			HTTPPrint_led(5);
			break;
        case 0x00000007:
			HTTPPrint_led(6);
			break;
        case 0x00000008:
			HTTPPrint_led(7);
			break;
        case 0x00000009:
			HTTPPrint_btn(0);
			break;
        case 0x0000000a:
			HTTPPrint_btn(1);
			break;
        case 0x0000000b:
			HTTPPrint_btn(2);
			break;
        case 0x0000000c:
			HTTPPrint_btn(3);
			break;
        case 0x0000000d:
			HTTPPrint_pot();
			break;
        case 0x0000000e:
			HTTPPrint_MyWebMessage();
			break;
        case 0x0000000f:
			HTTPPrint_P1gold();
			break;
        case 0x00000010:
			HTTPPrint_P1sol();
			break;
        case 0x00000011:
			HTTPPrint_P2gold();
			break;
        case 0x00000012:
			HTTPPrint_P2sol();
			break;
        case 0x00000013:
			HTTPPrint_timer_round();
			break;
		default:
			// Output notification for undefined values
			TCPPutROMArray(sktHTTP, (ROM BYTE*)"!DEF", 4);
	}

	return;
}

void HTTPPrint_(void)
{
	TCPPut(sktHTTP, '~');
	return;
}

#endif

#endif
