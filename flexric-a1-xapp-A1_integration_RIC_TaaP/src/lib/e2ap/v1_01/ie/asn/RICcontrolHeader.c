/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-JER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RICcontrolHeader.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_RICcontrolHeader_e2ap_v1_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RICcontrolHeader_e2ap_v1_01 = {
	"RICcontrolHeader",
	"RICcontrolHeader",
	&asn_OP_OCTET_STRING_e2ap_v1_01,
	asn_DEF_RICcontrolHeader_e2ap_v1_01_tags_1,
	sizeof(asn_DEF_RICcontrolHeader_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_RICcontrolHeader_e2ap_v1_01_tags_1[0]), /* 1 */
	asn_DEF_RICcontrolHeader_e2ap_v1_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICcontrolHeader_e2ap_v1_01_tags_1)
		/sizeof(asn_DEF_RICcontrolHeader_e2ap_v1_01_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OCTET_STRING_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs_e2ap_v1_01	/* Additional specs */
};
