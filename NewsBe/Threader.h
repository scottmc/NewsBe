#ifndef _MY_THREADER_
#define _MY_THREADER_

#include <Be.h>

#ifndef NEWSBEOUTLINELISTVIEW_HEADER
#include "NewsBeOutlineListView.h"
#endif

#ifndef _ARTICLE_
#include "Article.h"
#endif

class myThreader 
{
	
public:
	void SetSpoolVol(app_info *);
	void SetNewsGroup(char *);
	void NewList(NewsBeOutlineListView *OutLine);
private:
	BVolume itsSpoolVol;
	char *itsNewsGroup;

	Article *ThreadList(const char *, NewsBeOutlineListView *);
};	


#endif