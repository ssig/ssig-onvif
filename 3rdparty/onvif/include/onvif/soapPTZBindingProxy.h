/* soapPTZBindingProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapPTZBindingProxy_H
#define soapPTZBindingProxy_H
#include "soapH.h"

class SOAP_CMAC PTZBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'PTZBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	PTZBindingProxy();
	/// Constructor to use/share an engine state
	PTZBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	PTZBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	PTZBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	PTZBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	PTZBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~PTZBindingProxy();
	/// Initializer used by constructors
	virtual	void PTZBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_tptz__GetServiceCapabilities *tptz__GetServiceCapabilities, _tptz__GetServiceCapabilitiesResponse *tptz__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, tptz__GetServiceCapabilities, tptz__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _tptz__GetServiceCapabilities *tptz__GetServiceCapabilities, _tptz__GetServiceCapabilitiesResponse *tptz__GetServiceCapabilitiesResponse);

	/// Web service operation 'GetConfigurations' (returns error code or SOAP_OK)
	virtual	int GetConfigurations(_tptz__GetConfigurations *tptz__GetConfigurations, _tptz__GetConfigurationsResponse *tptz__GetConfigurationsResponse) { return this->GetConfigurations(NULL, NULL, tptz__GetConfigurations, tptz__GetConfigurationsResponse); }
	virtual	int GetConfigurations(const char *endpoint, const char *soap_action, _tptz__GetConfigurations *tptz__GetConfigurations, _tptz__GetConfigurationsResponse *tptz__GetConfigurationsResponse);

	/// Web service operation 'GetPresets' (returns error code or SOAP_OK)
	virtual	int GetPresets(_tptz__GetPresets *tptz__GetPresets, _tptz__GetPresetsResponse *tptz__GetPresetsResponse) { return this->GetPresets(NULL, NULL, tptz__GetPresets, tptz__GetPresetsResponse); }
	virtual	int GetPresets(const char *endpoint, const char *soap_action, _tptz__GetPresets *tptz__GetPresets, _tptz__GetPresetsResponse *tptz__GetPresetsResponse);

	/// Web service operation 'SetPreset' (returns error code or SOAP_OK)
	virtual	int SetPreset(_tptz__SetPreset *tptz__SetPreset, _tptz__SetPresetResponse *tptz__SetPresetResponse) { return this->SetPreset(NULL, NULL, tptz__SetPreset, tptz__SetPresetResponse); }
	virtual	int SetPreset(const char *endpoint, const char *soap_action, _tptz__SetPreset *tptz__SetPreset, _tptz__SetPresetResponse *tptz__SetPresetResponse);

	/// Web service operation 'RemovePreset' (returns error code or SOAP_OK)
	virtual	int RemovePreset(_tptz__RemovePreset *tptz__RemovePreset, _tptz__RemovePresetResponse *tptz__RemovePresetResponse) { return this->RemovePreset(NULL, NULL, tptz__RemovePreset, tptz__RemovePresetResponse); }
	virtual	int RemovePreset(const char *endpoint, const char *soap_action, _tptz__RemovePreset *tptz__RemovePreset, _tptz__RemovePresetResponse *tptz__RemovePresetResponse);

	/// Web service operation 'GotoPreset' (returns error code or SOAP_OK)
	virtual	int GotoPreset(_tptz__GotoPreset *tptz__GotoPreset, _tptz__GotoPresetResponse *tptz__GotoPresetResponse) { return this->GotoPreset(NULL, NULL, tptz__GotoPreset, tptz__GotoPresetResponse); }
	virtual	int GotoPreset(const char *endpoint, const char *soap_action, _tptz__GotoPreset *tptz__GotoPreset, _tptz__GotoPresetResponse *tptz__GotoPresetResponse);

	/// Web service operation 'GetStatus' (returns error code or SOAP_OK)
	virtual	int GetStatus(_tptz__GetStatus *tptz__GetStatus, _tptz__GetStatusResponse *tptz__GetStatusResponse) { return this->GetStatus(NULL, NULL, tptz__GetStatus, tptz__GetStatusResponse); }
	virtual	int GetStatus(const char *endpoint, const char *soap_action, _tptz__GetStatus *tptz__GetStatus, _tptz__GetStatusResponse *tptz__GetStatusResponse);

	/// Web service operation 'GetConfiguration' (returns error code or SOAP_OK)
	virtual	int GetConfiguration(_tptz__GetConfiguration *tptz__GetConfiguration, _tptz__GetConfigurationResponse *tptz__GetConfigurationResponse) { return this->GetConfiguration(NULL, NULL, tptz__GetConfiguration, tptz__GetConfigurationResponse); }
	virtual	int GetConfiguration(const char *endpoint, const char *soap_action, _tptz__GetConfiguration *tptz__GetConfiguration, _tptz__GetConfigurationResponse *tptz__GetConfigurationResponse);

	/// Web service operation 'GetNodes' (returns error code or SOAP_OK)
	virtual	int GetNodes(_tptz__GetNodes *tptz__GetNodes, _tptz__GetNodesResponse *tptz__GetNodesResponse) { return this->GetNodes(NULL, NULL, tptz__GetNodes, tptz__GetNodesResponse); }
	virtual	int GetNodes(const char *endpoint, const char *soap_action, _tptz__GetNodes *tptz__GetNodes, _tptz__GetNodesResponse *tptz__GetNodesResponse);

	/// Web service operation 'GetNode' (returns error code or SOAP_OK)
	virtual	int GetNode(_tptz__GetNode *tptz__GetNode, _tptz__GetNodeResponse *tptz__GetNodeResponse) { return this->GetNode(NULL, NULL, tptz__GetNode, tptz__GetNodeResponse); }
	virtual	int GetNode(const char *endpoint, const char *soap_action, _tptz__GetNode *tptz__GetNode, _tptz__GetNodeResponse *tptz__GetNodeResponse);

	/// Web service operation 'SetConfiguration' (returns error code or SOAP_OK)
	virtual	int SetConfiguration(_tptz__SetConfiguration *tptz__SetConfiguration, _tptz__SetConfigurationResponse *tptz__SetConfigurationResponse) { return this->SetConfiguration(NULL, NULL, tptz__SetConfiguration, tptz__SetConfigurationResponse); }
	virtual	int SetConfiguration(const char *endpoint, const char *soap_action, _tptz__SetConfiguration *tptz__SetConfiguration, _tptz__SetConfigurationResponse *tptz__SetConfigurationResponse);

	/// Web service operation 'GetConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetConfigurationOptions(_tptz__GetConfigurationOptions *tptz__GetConfigurationOptions, _tptz__GetConfigurationOptionsResponse *tptz__GetConfigurationOptionsResponse) { return this->GetConfigurationOptions(NULL, NULL, tptz__GetConfigurationOptions, tptz__GetConfigurationOptionsResponse); }
	virtual	int GetConfigurationOptions(const char *endpoint, const char *soap_action, _tptz__GetConfigurationOptions *tptz__GetConfigurationOptions, _tptz__GetConfigurationOptionsResponse *tptz__GetConfigurationOptionsResponse);

	/// Web service operation 'GotoHomePosition' (returns error code or SOAP_OK)
	virtual	int GotoHomePosition(_tptz__GotoHomePosition *tptz__GotoHomePosition, _tptz__GotoHomePositionResponse *tptz__GotoHomePositionResponse) { return this->GotoHomePosition(NULL, NULL, tptz__GotoHomePosition, tptz__GotoHomePositionResponse); }
	virtual	int GotoHomePosition(const char *endpoint, const char *soap_action, _tptz__GotoHomePosition *tptz__GotoHomePosition, _tptz__GotoHomePositionResponse *tptz__GotoHomePositionResponse);

	/// Web service operation 'SetHomePosition' (returns error code or SOAP_OK)
	virtual	int SetHomePosition(_tptz__SetHomePosition *tptz__SetHomePosition, _tptz__SetHomePositionResponse *tptz__SetHomePositionResponse) { return this->SetHomePosition(NULL, NULL, tptz__SetHomePosition, tptz__SetHomePositionResponse); }
	virtual	int SetHomePosition(const char *endpoint, const char *soap_action, _tptz__SetHomePosition *tptz__SetHomePosition, _tptz__SetHomePositionResponse *tptz__SetHomePositionResponse);

	/// Web service operation 'ContinuousMove' (returns error code or SOAP_OK)
	virtual	int ContinuousMove(_tptz__ContinuousMove *tptz__ContinuousMove, _tptz__ContinuousMoveResponse *tptz__ContinuousMoveResponse) { return this->ContinuousMove(NULL, NULL, tptz__ContinuousMove, tptz__ContinuousMoveResponse); }
	virtual	int ContinuousMove(const char *endpoint, const char *soap_action, _tptz__ContinuousMove *tptz__ContinuousMove, _tptz__ContinuousMoveResponse *tptz__ContinuousMoveResponse);

	/// Web service operation 'RelativeMove' (returns error code or SOAP_OK)
	virtual	int RelativeMove(_tptz__RelativeMove *tptz__RelativeMove, _tptz__RelativeMoveResponse *tptz__RelativeMoveResponse) { return this->RelativeMove(NULL, NULL, tptz__RelativeMove, tptz__RelativeMoveResponse); }
	virtual	int RelativeMove(const char *endpoint, const char *soap_action, _tptz__RelativeMove *tptz__RelativeMove, _tptz__RelativeMoveResponse *tptz__RelativeMoveResponse);

	/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
	virtual	int SendAuxiliaryCommand(_tptz__SendAuxiliaryCommand *tptz__SendAuxiliaryCommand, _tptz__SendAuxiliaryCommandResponse *tptz__SendAuxiliaryCommandResponse) { return this->SendAuxiliaryCommand(NULL, NULL, tptz__SendAuxiliaryCommand, tptz__SendAuxiliaryCommandResponse); }
	virtual	int SendAuxiliaryCommand(const char *endpoint, const char *soap_action, _tptz__SendAuxiliaryCommand *tptz__SendAuxiliaryCommand, _tptz__SendAuxiliaryCommandResponse *tptz__SendAuxiliaryCommandResponse);

	/// Web service operation 'AbsoluteMove' (returns error code or SOAP_OK)
	virtual	int AbsoluteMove(_tptz__AbsoluteMove *tptz__AbsoluteMove, _tptz__AbsoluteMoveResponse *tptz__AbsoluteMoveResponse) { return this->AbsoluteMove(NULL, NULL, tptz__AbsoluteMove, tptz__AbsoluteMoveResponse); }
	virtual	int AbsoluteMove(const char *endpoint, const char *soap_action, _tptz__AbsoluteMove *tptz__AbsoluteMove, _tptz__AbsoluteMoveResponse *tptz__AbsoluteMoveResponse);

	/// Web service operation 'Stop' (returns error code or SOAP_OK)
	virtual	int Stop(_tptz__Stop *tptz__Stop, _tptz__StopResponse *tptz__StopResponse) { return this->Stop(NULL, NULL, tptz__Stop, tptz__StopResponse); }
	virtual	int Stop(const char *endpoint, const char *soap_action, _tptz__Stop *tptz__Stop, _tptz__StopResponse *tptz__StopResponse);

	/// Web service operation 'GetPresetTours' (returns error code or SOAP_OK)
	virtual	int GetPresetTours(_tptz__GetPresetTours *tptz__GetPresetTours, _tptz__GetPresetToursResponse *tptz__GetPresetToursResponse) { return this->GetPresetTours(NULL, NULL, tptz__GetPresetTours, tptz__GetPresetToursResponse); }
	virtual	int GetPresetTours(const char *endpoint, const char *soap_action, _tptz__GetPresetTours *tptz__GetPresetTours, _tptz__GetPresetToursResponse *tptz__GetPresetToursResponse);

	/// Web service operation 'GetPresetTour' (returns error code or SOAP_OK)
	virtual	int GetPresetTour(_tptz__GetPresetTour *tptz__GetPresetTour, _tptz__GetPresetTourResponse *tptz__GetPresetTourResponse) { return this->GetPresetTour(NULL, NULL, tptz__GetPresetTour, tptz__GetPresetTourResponse); }
	virtual	int GetPresetTour(const char *endpoint, const char *soap_action, _tptz__GetPresetTour *tptz__GetPresetTour, _tptz__GetPresetTourResponse *tptz__GetPresetTourResponse);

	/// Web service operation 'GetPresetTourOptions' (returns error code or SOAP_OK)
	virtual	int GetPresetTourOptions(_tptz__GetPresetTourOptions *tptz__GetPresetTourOptions, _tptz__GetPresetTourOptionsResponse *tptz__GetPresetTourOptionsResponse) { return this->GetPresetTourOptions(NULL, NULL, tptz__GetPresetTourOptions, tptz__GetPresetTourOptionsResponse); }
	virtual	int GetPresetTourOptions(const char *endpoint, const char *soap_action, _tptz__GetPresetTourOptions *tptz__GetPresetTourOptions, _tptz__GetPresetTourOptionsResponse *tptz__GetPresetTourOptionsResponse);

	/// Web service operation 'CreatePresetTour' (returns error code or SOAP_OK)
	virtual	int CreatePresetTour(_tptz__CreatePresetTour *tptz__CreatePresetTour, _tptz__CreatePresetTourResponse *tptz__CreatePresetTourResponse) { return this->CreatePresetTour(NULL, NULL, tptz__CreatePresetTour, tptz__CreatePresetTourResponse); }
	virtual	int CreatePresetTour(const char *endpoint, const char *soap_action, _tptz__CreatePresetTour *tptz__CreatePresetTour, _tptz__CreatePresetTourResponse *tptz__CreatePresetTourResponse);

	/// Web service operation 'ModifyPresetTour' (returns error code or SOAP_OK)
	virtual	int ModifyPresetTour(_tptz__ModifyPresetTour *tptz__ModifyPresetTour, _tptz__ModifyPresetTourResponse *tptz__ModifyPresetTourResponse) { return this->ModifyPresetTour(NULL, NULL, tptz__ModifyPresetTour, tptz__ModifyPresetTourResponse); }
	virtual	int ModifyPresetTour(const char *endpoint, const char *soap_action, _tptz__ModifyPresetTour *tptz__ModifyPresetTour, _tptz__ModifyPresetTourResponse *tptz__ModifyPresetTourResponse);

	/// Web service operation 'OperatePresetTour' (returns error code or SOAP_OK)
	virtual	int OperatePresetTour(_tptz__OperatePresetTour *tptz__OperatePresetTour, _tptz__OperatePresetTourResponse *tptz__OperatePresetTourResponse) { return this->OperatePresetTour(NULL, NULL, tptz__OperatePresetTour, tptz__OperatePresetTourResponse); }
	virtual	int OperatePresetTour(const char *endpoint, const char *soap_action, _tptz__OperatePresetTour *tptz__OperatePresetTour, _tptz__OperatePresetTourResponse *tptz__OperatePresetTourResponse);

	/// Web service operation 'RemovePresetTour' (returns error code or SOAP_OK)
	virtual	int RemovePresetTour(_tptz__RemovePresetTour *tptz__RemovePresetTour, _tptz__RemovePresetTourResponse *tptz__RemovePresetTourResponse) { return this->RemovePresetTour(NULL, NULL, tptz__RemovePresetTour, tptz__RemovePresetTourResponse); }
	virtual	int RemovePresetTour(const char *endpoint, const char *soap_action, _tptz__RemovePresetTour *tptz__RemovePresetTour, _tptz__RemovePresetTourResponse *tptz__RemovePresetTourResponse);

	/// Web service operation 'GetCompatibleConfigurations' (returns error code or SOAP_OK)
	virtual	int GetCompatibleConfigurations(_tptz__GetCompatibleConfigurations *tptz__GetCompatibleConfigurations, _tptz__GetCompatibleConfigurationsResponse *tptz__GetCompatibleConfigurationsResponse) { return this->GetCompatibleConfigurations(NULL, NULL, tptz__GetCompatibleConfigurations, tptz__GetCompatibleConfigurationsResponse); }
	virtual	int GetCompatibleConfigurations(const char *endpoint, const char *soap_action, _tptz__GetCompatibleConfigurations *tptz__GetCompatibleConfigurations, _tptz__GetCompatibleConfigurationsResponse *tptz__GetCompatibleConfigurationsResponse);
};
#endif
