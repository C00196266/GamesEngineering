#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>

int main(int argc, TCHAR *argv[]) {
	STARTUPINFO startupInfo = {sizeof(startupInfo)};
	PROCESS_INFORMATION processInfo;

	std::string path = "C:/Program Files/paint.net/PaintDotNet.exe C:/Users/nover/Pictures/tumblr_oy45q9t1731tub6hqo1_1280.jpg";

	// Start the child process. 
	if (CreateProcess(NULL, &path[0], NULL, NULL, FALSE, 0, NULL, NULL, &startupInfo, &processInfo))
	{
		WaitForSingleObject(processInfo.hProcess, INFINITE);
		CloseHandle(processInfo.hProcess);
		CloseHandle(processInfo.hThread);
	}

	return 0;
}

