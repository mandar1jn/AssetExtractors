#include "ui/Aboutwindow.h"
#include "imgui.h"

namespace ExtractorCore::UI
{
	bool AboutWindow::shouldDraw = false;

	string license = "The MIT License(MIT)"
		"\n\n"
		"Copyright(c) 2024 Marijn Kneppers"
		"\n\n"
		"Permission is hereby granted, free of charge, to any person obtaining a copy"
		"of this software and associated documentation files(the \"Software\"), to deal"
		"in the Software without restriction, including without limitation the rights"
		"to use, copy, modify, merge, publish, distribute, sublicense, and /or sell"
		"copies of the Software, and to permit persons to whom the Software is"
		"furnished to do so, subject to the following conditions :"
		"\n\n"
		"The above copyright notice and this permission notice shall be included in all"
		"copies or substantial portions of the Software."
		"\n\n"
		"THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR"
		"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,"
		"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE"
		"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER"
		"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,"
		"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE"
		"SOFTWARE.";

	void AboutWindow::Draw()
	{
		if (shouldDraw)
		{
			if (ImGui::Begin("About", &shouldDraw, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoDocking | ImGuiWindowFlags_NoResize))
			{
				if (ImGui::BeginTabBar("AboutTabBar"))
				{
					if (ImGui::BeginTabItem("INSERT TOOL NAME"))
					{
						ImGui::EndTabItem();
					}
					if (ImGui::BeginTabItem("License"))
					{
						ImGui::TextWrapped(license.c_str());
						ImGui::EndTabItem();
					}


					ImGui::EndTabBar();
				}
			}
			ImGui::End();
		}
	}
}