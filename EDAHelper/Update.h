#ifndef __UPDATE_H
#define	CURRENT_VERSION "2.0.11"
#define	UPDATE_CHECK_PERIOD (1000*60*60*24)

#define	NEW_VERSION_TIP		"�����°汾��"
#define	NONEW_VERSION_TIP	"���İ汾��������"

void UpdateCheck(bool IsQuiet);
DWORD WINAPI UpdateTask( LPVOID lpParameter );

#endif