#include "ui/FilePreviewWindow.h"
#include "imgui.h"

namespace ExtractorCore::UI
{

	std::vector<std::shared_ptr<FilePreview>> FilePreviewWindow::previews = std::vector<std::shared_ptr<FilePreview>>();

	void FilePreviewWindow::Draw()
	{

		if (ImGui::Begin("Previews"))
		{

			if (ImGui::BeginTabBar("PreviewTabBar", ImGuiTabBarFlags_Reorderable))
			{
				//TODO: allow the files to be closed
				for (u32 i = 0; i < previews.size(); i++)
				{
					ImGui::PushID(previews[i].get());
					bool open = true;
					if (ImGui::BeginTabItem(previews[i]->fileName.c_str(), &open))
					{
						previews[i]->Draw();
						ImGui::EndTabItem();
					}
					ImGui::PopID();
				}

				ImGui::EndTabBar();
			}

			ImGui::End();
		}

	}

}