#ifndef MediaPlayerPlaylist_H
#define MediaPlayerPlaylist_H

#include <ListView.h>
#include <ColumnListView.h>

enum {
	M_PLAYLIST_ON_SELECT = 'ploa'
};

class MediaPlayerPlaylist {
public:
	static void Initialize();
	static BListView* GetPlaylist();
	static BColumnListView* GetPlaylistContent();

	static BListView* pl;
	static BColumnListView* plc;
private:
	MediaPlayerPlaylist();
	~MediaPlayerPlaylist();
};

#endif // MediaPlayerPlaylist_H