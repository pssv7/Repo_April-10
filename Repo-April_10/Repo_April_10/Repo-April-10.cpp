// Repo_Attend_April_10.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Repo_Attend_April_10.h"


// This is an example of an exported variable
REPOATTENDAPRIL10_API int nRepoAttendApril10=0;

// This is an example of an exported function.
REPOATTENDAPRIL10_API int fnRepoAttendApril10(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CRepoAttendApril10::CRepoAttendApril10()
{
    return;
}

REPOATTENDAPRIL10_API int sampleTest(int i) {
    return i + 1;
}
