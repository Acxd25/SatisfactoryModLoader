// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGSSearchableComboBox.h"

TSharedRef<ITableRow> FGSSearchableComboBox::GenerateMenuItemRow(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase> &OwnerTable) {
  return SNew(STableRow<TSharedPtr<FString>>, OwnerTable);
}
void FGSSearchableComboBox::OnMenuOpenChanged(bool bOpen){ }
void FGSSearchableComboBox::Construct(const FArguments& InArgs){ }
void FGSSearchableComboBox::ClearSelection(){ }
void FGSSearchableComboBox::SetSelectedItem(TSharedPtr<FString> InSelectedItem){ }
TSharedPtr<FString> FGSSearchableComboBox::GetSelectedItem(){ return TSharedPtr<FString>(); }
void FGSSearchableComboBox::RefreshOptions(){ }
void FGSSearchableComboBox::OnSelectionChanged_Internal(TSharedPtr<FString> ProposedSelection, ESelectInfo::Type SelectInfo){ }
void FGSSearchableComboBox::OnSearchTextChanged(const FText& ChangedText){ }
FReply FGSSearchableComboBox::OnButtonClicked(){ return FReply::Unhandled(); }
