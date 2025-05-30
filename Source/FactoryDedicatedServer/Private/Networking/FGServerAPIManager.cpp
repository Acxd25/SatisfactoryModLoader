// This file has been automatically generated by the Unreal Header Implementation tool

#include "Networking/FGServerAPIManager.h"
#include "HttpServerResponse.h"

FFGServerAPIManagerRef::FFGServerAPIManagerRef(){ }
FFGServerAPIManagerRef::FFGServerAPIManagerRef(UFGServerAPIManager* InAPIManager){ }
FString FFGServerAPIManagerRef::GetReferencerName() const{ return FString(); }
void FFGServerAPIManagerRef::AddReferencedObjects(FReferenceCollector& Collector){ }
FFGRequestHandlerContext::FFGRequestHandlerContext(const TSharedRef<const FInternetAddr>& InPlayerAddress, const TMap<FString, TArray<FString>>& InRequestHeaders): PlayerAddress(InPlayerAddress){ }
FFGRequestHandlerContext::~FFGRequestHandlerContext(){ }
bool FFGRequestHandlerContext::IsPrivilegedFor(EPrivilegeLevel MinPrivilegeLevel) const{ return bool(); }
TSharedPtr<FFGRequestBodyPart> FFGRequestHandlerContext::FindFirstMultipartDataOfContentType(const FString& ContentType) const{ return TSharedPtr<FFGRequestBodyPart>(); }
TSharedPtr<FFGRequestBodyPart> FFGRequestHandlerContext::FindFirstMultipartDataOfFormField(const FString& FormFieldName) const{ return TSharedPtr<FFGRequestBodyPart>(); }
void FFGRequestHandlerContext::AddResponseHeader(const FString& HeaderName, const FString& HeaderValue){ }
void FFGRequestHandlerContext::Internal_CompleteRequest(TUniquePtr<FHttpServerResponse>&& InServerResponse){ }
void FFGRequestHandlerContext::Internal_CompleteRequestWithError(const FFGServerErrorResponse& InErrorResponse){ }
TArray<FString> FFGRequestHandlerContext::GetSupportedCompressionAlgorithms() const{ return TArray<FString>(); }
UFGServerAPIManager::UFGServerAPIManager(){ }
TSharedPtr<FInternetAddr> UFGServerAPIManager::Initialize(int32 ServerAPIPort, const TArray<TSharedRef<FInternetAddr>>& BindAddresses){ return TSharedPtr<FInternetAddr>(); }
void UFGServerAPIManager::Shutdown(){ }
void UFGServerAPIManager::RegisterRequestHandler(UObject* RequestHandler){ }
void UFGServerAPIManager::RegisterParamHandler(UScriptStruct* ScriptStruct, const FFGServerAPIRequestParamHandler& ParamHandler){ }
void UFGServerAPIManager::Internal_CompleteAsyncRequest(const UFunction* CompleteRequestFunction, void* ParametersStack){ }
UFGServerSubsystem* UFGServerAPIManager::GetOuterServerSubsystem() const{ return nullptr; }
TSharedPtr<FFGRequestHandlerContext> UFGServerAPIManager::CreateRequestHandlerContext(const FHttpServerRequest& Request, const FHttpResultCallback& OnComplete){ return TSharedPtr<FFGRequestHandlerContext>(); }
bool UFGServerAPIManager::ProcessPostRequest(const FHttpServerRequest& Request, const FHttpResultCallback& OnComplete){ return bool(); }
bool UFGServerAPIManager::IsLocalAddress(const TSharedPtr<FInternetAddr>& InternetAddr){ return bool(); }
bool UFGServerAPIManager::ProcessPostRequestContentBody(TSharedPtr<FFGRequestHandlerContext> RequestHandlerContext, const FString& ContentType, TMap<FString, FString> ContentTypeAttributes, const TArray<uint8>& RequestBodyData) const{ return bool(); }
bool UFGServerAPIManager::ProcessServerAPIBodyJSON(TSharedPtr<FFGRequestHandlerContext> RequestHandlerContext) const{ return bool(); }
void UFGServerAPIManager::ExecuteRequestHandler(TSharedPtr<FFGRequestHandlerContext> RequestHandlerContext){ }
void UFGServerAPIManager::PopulateStackFromRequest(TSharedPtr<FFGRequestHandlerContext> RequestHandlerContext, void* ParametersStack, TArray<FString>& OutMissingParameters, TMap<FString, FString>& OutInvalidParameterValues, TArray<FString>& OutAdditionalErrors) const{ }
TUniquePtr<FHttpServerResponse> UFGServerAPIManager::CreateServerResponseFromStack(const UFunction* ResponseFunction, void* ParametersStack, bool bOutParameters, const TArray<FString>& SupportedCompressionAlgorithms){ return TUniquePtr<FHttpServerResponse>(); }
bool UFGServerAPIManager::ProcessClientAuthentication(const FString& AuthenticationHeader, TSharedPtr<FFGRequestHandlerContext> RequestHandlerContext) const{ return bool(); }
void UFGServerAPIManager::OnClientFailedAuthentication(TSharedPtr<FFGRequestHandlerContext> RequestHandlerContext, EHttpServerResponseCodes ResponseCode,
		const FString& OAuth2ErrorCode, const FString& ErrorDescription, const FString& OAuth2Scope){ }
bool UFGServerAPIManager::CreateServerAPIListenSocket(FSocket*& OutSocket, ISocketSubsystem*& OutSocketSubsystem){ return false; }
void UFGServerAPIManager::BindRoutes(){ }
void UFGServerAPIManager::UnbindRoutes() const{ }
void UFGServerAPIManager::RegisterDefaultParameterHandlers(){ }
