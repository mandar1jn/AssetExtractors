#pragma once
#include "ReadableFile.h"

namespace ExtractorCore
{
	class Archive : ReadableFile
	{
	public:
		Archive(string path);

		virtual void Draw() = 0;
	};
}