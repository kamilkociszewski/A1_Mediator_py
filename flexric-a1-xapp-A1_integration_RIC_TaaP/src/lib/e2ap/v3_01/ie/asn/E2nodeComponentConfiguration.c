/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e42ap_v3_01.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "E2nodeComponentConfiguration.h"

asn_TYPE_member_t asn_MBR_E2nodeComponentConfiguration_1_e2ap_v3_01[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeComponentConfiguration, e2nodeComponentRequestPart),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING_e2ap_v3_01,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"e2nodeComponentRequestPart"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeComponentConfiguration, e2nodeComponentResponsePart),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING_e2ap_v3_01,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"e2nodeComponentResponsePart"
		},
};
static const ber_tlv_tag_t asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentConfiguration_tag2el_1_e2ap_v3_01[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e2nodeComponentRequestPart */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* e2nodeComponentResponsePart */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentConfiguration_specs_1_e2ap_v3_01 = {
	sizeof(struct E2nodeComponentConfiguration),
	offsetof(struct E2nodeComponentConfiguration, _asn_ctx),
	asn_MAP_E2nodeComponentConfiguration_tag2el_1_e2ap_v3_01,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01 = {
	"E2nodeComponentConfiguration",
	"E2nodeComponentConfiguration",
	&asn_OP_SEQUENCE_e2ap_v3_01,
	asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01_tags_1,
	sizeof(asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfiguration_e2ap_v3_01_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v3_01
	},
	asn_MBR_E2nodeComponentConfiguration_1_e2ap_v3_01,
	2,	/* Elements count */
	&asn_SPC_E2nodeComponentConfiguration_specs_1_e2ap_v3_01	/* Additional specs */
};
