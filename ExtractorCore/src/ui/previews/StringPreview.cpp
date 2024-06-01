#include "ui/previews/StringPreview.h"

#include "imgui.h"

namespace ExtractorCore::UI::Previews
{
	StringPreview::StringPreview(string fileName, string data) : FilePreview(fileName), data(data)
	{
	}

	void StringPreview::Draw()
	{
		ImGui::TextUnformatted(data.c_str());
	}
}
