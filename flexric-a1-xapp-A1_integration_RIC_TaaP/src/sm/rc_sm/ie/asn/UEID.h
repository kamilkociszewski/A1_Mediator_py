/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -S /home/mir/workspace/asn1c_mouse/skeletons/ -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_UEID_H_
#define	_UEID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEID_PR {
	UEID_PR_NOTHING,	/* No components present */
	UEID_PR_gNB_UEID,
	UEID_PR_gNB_DU_UEID,
	UEID_PR_gNB_CU_UP_UEID,
	UEID_PR_ng_eNB_UEID,
	UEID_PR_ng_eNB_DU_UEID,
	UEID_PR_en_gNB_UEID,
	UEID_PR_eNB_UEID
	/* Extensions may appear below */
	
} UEID_PR;

/* Forward declarations */
struct UEID_GNB;
struct UEID_GNB_DU;
struct UEID_GNB_CU_UP;
struct UEID_NG_ENB;
struct UEID_NG_ENB_DU;
struct UEID_EN_GNB;
struct UEID_ENB;

/* UEID */
typedef struct UEID {
	UEID_PR present;
	union UEID_u {
		struct UEID_GNB	*gNB_UEID;
		struct UEID_GNB_DU	*gNB_DU_UEID;
		struct UEID_GNB_CU_UP	*gNB_CU_UP_UEID;
		struct UEID_NG_ENB	*ng_eNB_UEID;
		struct UEID_NG_ENB_DU	*ng_eNB_DU_UEID;
		struct UEID_EN_GNB	*en_gNB_UEID;
		struct UEID_ENB	*eNB_UEID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEID;
extern asn_CHOICE_specifics_t asn_SPC_UEID_specs_1;
extern asn_TYPE_member_t asn_MBR_UEID_1[7];
extern asn_per_constraints_t asn_PER_type_UEID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UEID_H_ */
#include <asn_internal.h>