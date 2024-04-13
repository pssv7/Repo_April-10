// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the REPOATTENDAPRIL10_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// REPOATTENDAPRIL10_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef REPOATTENDAPRIL10_EXPORTS
#define REPOATTENDAPRIL10_API __declspec(dllexport)
#else
#define REPOATTENDAPRIL10_API __declspec(dllimport)
#endif

// This class is exported from the dll
class REPOATTENDAPRIL10_API CRepoAttendApril10 {
public:
	CRepoAttendApril10(void);
	// TODO: add your methods here.
};

extern REPOATTENDAPRIL10_API int nRepoAttendApril10;

REPOATTENDAPRIL10_API int fnRepoAttendApril10(void);

REPOATTENDAPRIL10_API int sampleTest(int i);