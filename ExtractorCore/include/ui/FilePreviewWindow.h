#pragma once
#include "Common.h"

#include <vector>
#include <memory>

namespace ExtractorCore::UI
{

	class FilePreview
	{
	public:
		FilePreview(string fileName) : fileName(fileName) {}

		virtual void Draw() = 0;
		
		string fileName;
	};

	class FilePreviewWindow
	{
	public:
		static void Draw();

		static std::vector<std::shared_ptr<FilePreview>> previews;
	};

}