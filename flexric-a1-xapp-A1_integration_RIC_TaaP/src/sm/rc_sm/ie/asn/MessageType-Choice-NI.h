/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_MessageType_Choice_NI_H_
#define	_MessageType_Choice_NI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterfaceType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterfaceIdentifier;
struct Interface_MessageID;

/* MessageType-Choice-NI */
typedef struct MessageType_Choice_NI {
	InterfaceType_t	 nI_Type;
	struct InterfaceIdentifier	*nI_Identifier;	/* OPTIONAL */
	struct Interface_MessageID	*nI_Message;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MessageType_Choice_NI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MessageType_Choice_NI;
extern asn_SEQUENCE_specifics_t asn_SPC_MessageType_Choice_NI_specs_1;
extern asn_TYPE_member_t asn_MBR_MessageType_Choice_NI_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MessageType_Choice_NI_H_ */
#include <asn_internal.h>