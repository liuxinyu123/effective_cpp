#include "directory.h"
#include "filesystem.h"

extern FileSystem tfs;

Directory::Directory (const std::string &s)
	:name (s)
{
	std::size_t disks = tfs.numDisks ();
}
