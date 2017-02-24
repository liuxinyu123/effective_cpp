#ifndef _FILESYSTEM_H_
#define _FILESYSTEM_H_

#include <cstdlib>

class FileSystem 
{
	
public:
		FileSystem () = default;
		std::size_t numDisks ()  const;
private:
		std::size_t sz;
};

#endif
