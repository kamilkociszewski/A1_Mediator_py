/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "e42ap_v2_03.asn"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "ProtocolIE-SingleContainer.h"

/*
 * This type is implemented using RICaction_ToBeSetup_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RICaction_Admitted_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RICaction_NotAdmitted_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RICsubscription_withCause_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2connectionUpdate_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2connectionUpdateRemove_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2connectionSetupFailed_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigAddition_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigUpdate_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigRemoval_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeTNLassociationRemoval_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigAdditionAck_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigUpdateAck_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigRemovalAck_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RANfunction_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RANfunctionID_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RANfunctionIDcause_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03_tags_1_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03_tags_1_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03_tags_1_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03_tags_1_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03_tags_1_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P0_e2ap_v2_03_tags_1_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_RICaction_ToBeSetup_ItemIEs_1_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_RICaction_ToBeSetup_ItemIEs_specs_1_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03_tags_2_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03_tags_2_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03_tags_2_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03_tags_2_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03_tags_2_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03_tags_2_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_03_tags_2_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_RICaction_Admitted_ItemIEs_5_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_RICaction_Admitted_ItemIEs_specs_5_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03_tags_3_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03_tags_3_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03_tags_3_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03_tags_3_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03_tags_3_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03_tags_3_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P2_e2ap_v2_03_tags_3_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_RICaction_NotAdmitted_ItemIEs_9_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_RICaction_NotAdmitted_ItemIEs_specs_9_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03_tags_4_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03_tags_4_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03_tags_4_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03_tags_4_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03_tags_4_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03_tags_4_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P3_e2ap_v2_03_tags_4_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_RICsubscription_withCause_ItemIEs_13_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_RICsubscription_withCause_ItemIEs_specs_13_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03_tags_5_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03_tags_5_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03_tags_5_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03_tags_5_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03_tags_5_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03_tags_5_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P4_e2ap_v2_03_tags_5_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2connectionUpdate_ItemIEs_17_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2connectionUpdate_ItemIEs_specs_17_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03_tags_6_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03_tags_6_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03_tags_6_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03_tags_6_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03_tags_6_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03_tags_6_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P5_e2ap_v2_03_tags_6_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2connectionUpdateRemove_ItemIEs_21_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2connectionUpdateRemove_ItemIEs_specs_21_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03_tags_7_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03_tags_7_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03_tags_7_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03_tags_7_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03_tags_7_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03_tags_7_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P6_e2ap_v2_03_tags_7_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2connectionSetupFailed_ItemIEs_25_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2connectionSetupFailed_ItemIEs_specs_25_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03_tags_8_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03_tags_8_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03_tags_8_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03_tags_8_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03_tags_8_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03_tags_8_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P7_e2ap_v2_03_tags_8_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2nodeComponentConfigAddition_ItemIEs_29_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigAddition_ItemIEs_specs_29_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03_tags_9_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03_tags_9_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03_tags_9_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03_tags_9_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03_tags_9_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03_tags_9_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P8_e2ap_v2_03_tags_9_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2nodeComponentConfigUpdate_ItemIEs_33_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigUpdate_ItemIEs_specs_33_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03_tags_10_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03_tags_10_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03_tags_10_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03_tags_10_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03_tags_10_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03_tags_10_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P9_e2ap_v2_03_tags_10_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2nodeComponentConfigRemoval_ItemIEs_37_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigRemoval_ItemIEs_specs_37_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030_tags_11_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030_tags_11_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030_tags_11_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030_tags_11_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030_tags_11_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030_tags_11_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_030_tags_11_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2nodeTNLassociationRemoval_ItemIEs_41_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2nodeTNLassociationRemoval_ItemIEs_specs_41_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031_tags_12_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031_tags_12_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031_tags_12_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031_tags_12_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031_tags_12_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031_tags_12_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_031_tags_12_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2nodeComponentConfigAdditionAck_ItemIEs_45_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigAdditionAck_ItemIEs_specs_45_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032_tags_13_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032_tags_13_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032_tags_13_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032_tags_13_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032_tags_13_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032_tags_13_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_032_tags_13_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2nodeComponentConfigUpdateAck_ItemIEs_49_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigUpdateAck_ItemIEs_specs_49_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033_tags_14_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033_tags_14_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033_tags_14_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033_tags_14_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033_tags_14_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033_tags_14_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_033_tags_14_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_E2nodeComponentConfigRemovalAck_ItemIEs_53_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigRemovalAck_ItemIEs_specs_53_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034_tags_15_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034_tags_15_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034_tags_15_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034_tags_15_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034_tags_15_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034_tags_15_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_034_tags_15_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_RANfunction_ItemIEs_57_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_RANfunction_ItemIEs_specs_57_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035_tags_16_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035_tags_16_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035_tags_16_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035_tags_16_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035_tags_16_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035_tags_16_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_035_tags_16_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_RANfunctionID_ItemIEs_61_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_RANfunctionID_ItemIEs_specs_61_e2ap_v2_03	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036_tags_17_e2ap_v2_03[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE_e2ap_v2_03,
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036_tags_17_e2ap_v2_03,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036_tags_17_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036_tags_17_e2ap_v2_03[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036_tags_17_e2ap_v2_03,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036_tags_17_e2ap_v2_03)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_2151P1_e2ap_v2_036_tags_17_e2ap_v2_03[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint_e2ap_v2_03
	},
	asn_MBR_RANfunctionIDcause_ItemIEs_65_e2ap_v2_03,
	3,	/* Elements count */
	&asn_SPC_RANfunctionIDcause_ItemIEs_specs_65_e2ap_v2_03	/* Additional specs */
};

