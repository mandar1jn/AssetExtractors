#pragma once

#include "ui/FilePreviewWindow.h"

namespace ExtractorCore::UI::Previews
{

	class StringPreview : public FilePreview
	{
	public:
		StringPreview(string fileName, string data);

		void Draw() override;

	private:
		string data;
	};

}