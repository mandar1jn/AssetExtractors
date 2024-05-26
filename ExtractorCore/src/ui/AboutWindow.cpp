#include "ui/Aboutwindow.h"
#include "imgui.h"

namespace ExtractorCore::UI
{
	bool AboutWindow::shouldDraw = false;

	void AboutWindow::Draw()
	{
		if (shouldDraw)
		{
			if (ImGui::Begin("About", &shouldDraw))
			{
				if (ImGui::BeginTabBar("AboutTabBar"))
				{
					if (ImGui::BeginTabItem("INSERT TOOL NAME"))
					{

					}
					if (ImGui::BeginTabItem("License"))
					{

					}


					ImGui::EndTabBar();
				}
			}
			ImGui::End();
		}
	}
}