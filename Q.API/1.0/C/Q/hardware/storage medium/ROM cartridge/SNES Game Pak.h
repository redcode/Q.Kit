/* Q API - hardware/storage medium/ROM cartridge/SNES Game Pak.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2013 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_hardware_storage_medium_ROM_cartridge_SNES_Game_Pak_H__
#define __Q_hardware_storage_medium_ROM_cartridge_SNES_Game_Pak_H__

#include <Q/types/base.h>

Q_DEFINE_STRICT_STRUCTURE (
	QString	name[21];
	quint8	layout;
	quint8	type;
	quint8	rom_size;
	quint8	ram_size;
	quint8	region;
	quint8	license;
	quint8	version;
	quint16	checksum;
	quint16	snes_checksum;
	quint8	unknown1[4];
	quint8	native_cop_interrupt_rutine_pointer;
	quint8	native_brk_interrupt_rutine_pointer;
	quint8	native_abort_interrupt_rutine_pointer;
	quint8	native_unused;
	quint8	native_irq_interrupt_rutine_pointer;
	quint8	unknown2[4];
	quint8	emulation_cop_interrupt_rutine_pointer;
	quint8	emulation_unused;
	quint8	emulation_abort_interrupt_rutine_pointer;
	quint8	emulation_nmi_interrupt_rutine_pointer;
	quint8	emulation_reset_interrupt_rutine_pointer;
	quint8	emulation_irq_or_brk_interrupt_rutine_pointer;
) QSNESGamePakHeader;

#define Q_SNES_GAME_PAK_LAYOUT_LO_ROM					0x20
#define Q_SNES_GAME_PAK_LAYOUT_HI_ROM					0x21
#define Q_SNES_GAME_PAK_LAYOUT_LO_ROM_FAST				0x30
#define Q_SNES_GAME_PAK_LAYOUT_HI_ROM_FAST				0x31

#define Q_SNES_GAME_PAK_TYPE_ROM_ONLY					0x00
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_RAM				0x01
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SAVE_RAM				0x02
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SUPER_FX_A				0x13
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SUPER_FX_B				0x14
#define Q_SNES_GAME_PAK_TYPE_ROM_SAVE_RAM_AND_SUPER_FX_A		0x15
#define Q_SNES_GAME_PAK_TYPE_ROM_SAVE_RAM_AND_SUPER_FX_B		0x1A
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SA_1_A				0x34
#define Q_SNES_GAME_PAK_TYPE_ROM_AND_SA_1_B				0x35

#define Q_SNES_GAME_PAK_MEMORY_SIZE_0					0x00
#define Q_SNES_GAME_PAK_MEMORY_SIZE_2_KIB				0x01
#define Q_SNES_GAME_PAK_MEMORY_SIZE_4_KIB				0x02
#define Q_SNES_GAME_PAK_MEMORY_SIZE_8_KIB				0x03
#define Q_SNES_GAME_PAK_MEMORY_SIZE_16_KIB				0x04
#define Q_SNES_GAME_PAK_MEMORY_SIZE_32_KIB				0x05
#define Q_SNES_GAME_PAK_MEMORY_SIZE_64_KIB				0x06
#define Q_SNES_GAME_PAK_MEMORY_SIZE_128_KIB				0x07
#define Q_SNES_GAME_PAK_MEMORY_SIZE_256_KIB				0x08
#define Q_SNES_GAME_PAK_MEMORY_SIZE_512_KIB				0x09
#define Q_SNES_GAME_PAK_MEMORY_SIZE_1_MIB				0x0A
#define Q_SNES_GAME_PAK_MEMORY_SIZE_2_MIB				0x0B
#define Q_SNES_GAME_PAK_MEMORY_SIZE_4_MIB				0x0C

#define Q_SNES_GAME_PAK_REGION_JAPAN					 0
#define Q_SNES_GAME_PAK_REGION_USA					 1
#define Q_SNES_GAME_PAK_REGION_AUSTRALIA_EUROPE_OCEANIA_AND_ASIA	 2
#define Q_SNES_GAME_PAK_REGION_SWEDEN					 3
#define Q_SNES_GAME_PAK_REGION_FINLAND					 4
#define Q_SNES_GAME_PAK_REGION_DENMARK					 5
#define Q_SNES_GAME_PAK_REGION_FRANCE					 6
#define Q_SNES_GAME_PAK_REGION_HOLLAND					 7
#define Q_SNES_GAME_PAK_REGION_SPAIN					 8
#define Q_SNES_GAME_PAK_REGION_GERMANY_AUSTRIA_AND_SWITZERLAND		 9
#define Q_SNES_GAME_PAK_REGION_ITALY					10
#define Q_SNES_GAME_PAK_REGION_HONG_KONG_AND_CHINA			11
#define Q_SNES_GAME_PAK_REGION_INDONESIA				12
#define Q_SNES_GAME_PAK_REGION_KOREA					13
/*
#DEFINE Q_SNES_GAME_PAK_LICENSE_NINTENDO				  1
#DEFINE Q_SNES_GAME_PAK_LICENSE_IMAGINEER_ZOOM				  3
#DEFINE Q_SNES_GAME_PAK_LICENSE_ZAMUSE					  5
#DEFINE Q_SNES_GAME_PAK_LICENSE_FALCOM					  6
#DEFINE Q_SNES_GAME_PAK_LICENSE_CAPCOM					  8
#DEFINE Q_SNES_GAME_PAK_LICENSE_HOT_B					  9
#DEFINE Q_SNES_GAME_PAK_LICENSE_JALECO					 10
#DEFINE Q_SNES_GAME_PAK_LICENSE_COCONUTS				 11
#DEFINE Q_SNES_GAME_PAK_LICENSE_RAGE_SOFTWARE				 12
#DEFINE Q_SNES_GAME_PAK_LICENSE_TECHNOS					 14
#DEFINE Q_SNES_GAME_PAK_LICENSE_MEBIO_SOFTWARE				 15
#DEFINE Q_SNES_GAME_PAK_LICENSE_GREMLIN_GRAPHICS			 18
#DEFINE Q_SNES_GAME_PAK_LICENSE_ELECTRONIC_ARTS				 19
#DEFINE Q_SNES_GAME_PAK_LICENSE_COBRA_TEAM				 21
#DEFINE Q_SNES_GAME_PAK_LICENSE_HUMAN_FIELD				 22
#DEFINE Q_SNES_GAME_PAK_LICENSE_KOEI					 23
#DEFINE Q_SNES_GAME_PAK_LICENSE_HUDSON_SOFT				 24
#DEFINE Q_SNES_GAME_PAK_LICENSE_YANOMAN					 26
#DEFINE Q_SNES_GAME_PAK_LICENSE_TECMO					 28
#DEFINE Q_SNES_GAME_PAK_LICENSE_OPEN_SYSTEM				 30
#DEFINE Q_SNES_GAME_PAK_LICENSE_VIRGIN_GAMES				 31
#DEFINE Q_SNES_GAME_PAK_LICENSE_KSS					 32
#DEFINE Q_SNES_GAME_PAK_LICENSE_SUNSOFT					 33
#DEFINE Q_SNES_GAME_PAK_LICENSE_POW					 34
#DEFINE Q_SNES_GAME_PAK_LICENSE_MICRO_WORLD				 35
#DEFINE Q_SNES_GAME_PAK_LICENSE_ENIX					 38
#DEFINE Q_SNES_GAME_PAK_LICENSE_LORICIEL_ELECTRO_BRAIN			 39
#DEFINE Q_SNES_GAME_PAK_LICENSE_KEMCO					 40
#DEFINE Q_SNES_GAME_PAK_LICENSE_SETA					 41
#DEFINE Q_SNES_GAME_PAK_LICENSE_VISIT					 45
#DEFINE Q_SNES_GAME_PAK_LICENSE_CARROZZERIA				 49
#DEFINE Q_SNES_GAME_PAK_LICENSE_DYNAMIC					 50
#DEFINE Q_SNES_GAME_PAK_LICENSE_NINTENDO				 51
#DEFINE Q_SNES_GAME_PAK_LICENSE_MAGIFACT				 52
#DEFINE Q_SNES_GAME_PAK_LICENSE_HECT					 53
#DEFINE Q_SNES_GAME_PAK_LICENSE_EMPIRE_SOFTWARE				 60
#DEFINE Q_SNES_GAME_PAK_LICENSE_LORICIEL				 61
#DEFINE Q_SNES_GAME_PAK_LICENSE_SEIKA					 64
#DEFINE Q_SNES_GAME_PAK_LICENSE_UBI_SOFT				 65
#DEFINE Q_SNES_GAME_PAK_LICENSE_SYSTEM_3				 70
#DEFINE Q_SNES_GAME_PAK_LICENSE_SPECTRUM_HOLOBYTE			 71
#DEFINE Q_SNES_GAME_PAK_LICENSE_IREM					 73
#DEFINE Q_SNES_GAME_PAK_LICENSE_RAYA_SYSTEMS_SCULPTURED_SOFTWARE	 75
#DEFINE Q_SNES_GAME_PAK_LICENSE_RENOVATION_PRODUCTS			 76
#DEFINE Q_SNES_GAME_PAK_LICENSE_MALIBU_GAMES_BLACK_PEARL		 77
#DEFINE Q_SNES_GAME_PAK_LICENSE_US_GOLD					 79
#DEFINE Q_SNES_GAME_PAK_LICENSE_ABSOLUTE_ENTERTAINMENT			 80
#DEFINE Q_SNES_GAME_PAK_LICENSE_ACCLAIM					 81
#DEFINE Q_SNES_GAME_PAK_LICENSE_ACTIVISION				 82
#DEFINE Q_SNES_GAME_PAK_LICENSE_AMERICAN_SAMMY				 83
#DEFINE Q_SNES_GAME_PAK_LICENSE_GAMETEK					 84
#DEFINE Q_SNES_GAME_PAK_LICENSE_HI_TECH_EXPRESSIONS			 85
#DEFINE Q_SNES_GAME_PAK_LICENSE_LJN_TOYS				 86
#DEFINE Q_SNES_GAME_PAK_LICENSE_MINDSCAPE				 90
#DEFINE Q_SNES_GAME_PAK_LICENSE_TRADEWEST				 93
#DEFINE Q_SNES_GAME_PAK_LICENSE_AMERICAN_SOFTWORKS			 95
#DEFINE Q_SNES_GAME_PAK_LICENSE_TITUS					 96
#DEFINE Q_SNES_GAME_PAK_LICENSE_VIRGIN_INTERACTIVE_ENTERTAINMENT	 97
#DEFINE Q_SNES_GAME_PAK_LICENSE_MAXIS					 98
#DEFINE Q_SNES_GAME_PAK_LICENSE_OCEAN					103
#DEFINE Q_SNES_GAME_PAK_LICENSE_ELECTRONIC_ARTS				105
#DEFINE Q_SNES_GAME_PAK_LICENSE_LASER_BEAM				107
#DEFINE Q_SNES_GAME_PAK_LICENSE_ELITE					110
#DEFINE Q_SNES_GAME_PAK_LICENSE_ELECTRO_BRAIN				111
#DEFINE Q_SNES_GAME_PAK_LICENSE_INFOGRAMES				112
#DEFINE Q_SNES_GAME_PAK_LICENSE_INTERPLAY				113
#DEFINE Q_SNES_GAME_PAK_LICENSE_LUCASARTS				114
#DEFINE Q_SNES_GAME_PAK_LICENSE_PARKER_BROTHERS				115
#DEFINE Q_SNES_GAME_PAK_LICENSE_STORM					117
#DEFINE Q_SNES_GAME_PAK_LICENSE_THQ_SOFTWARE				120
#DEFINE Q_SNES_GAME_PAK_LICENSE_ACCOLADE				121
#DEFINE Q_SNES_GAME_PAK_LICENSE_TRIFFIX_ENTERTAINMENT			122
#DEFINE Q_SNES_GAME_PAK_LICENSE_MICROPROSE				124
#DEFINE Q_SNES_GAME_PAK_LICENSE_KEMCO					127
#DEFINE Q_SNES_GAME_PAK_LICENSE_MISAWA					128
#DEFINE Q_SNES_GAME_PAK_LICENSE_TEICHIO					129
#DEFINE Q_SNES_GAME_PAK_LICENSE_NAMCO					130
#DEFINE Q_SNES_GAME_PAK_LICENSE_LOZC					131
#DEFINE Q_SNES_GAME_PAK_LICENSE_KOEI					132
#DEFINE Q_SNES_GAME_PAK_LICENSE_TOKUMA_SHOTEN_INTERMEDIA		134
#DEFINE Q_SNES_GAME_PAK_LICENSE_DATAM_POLYSTAR				136
#DEFINE Q_SNES_GAME_PAK_LICENSE_BULLET_PROOF_SOFTWARE			139
#DEFINE Q_SNES_GAME_PAK_LICENSE_VIC_TOKAI				140
#DEFINE Q_SNES_GAME_PAK_LICENSE_CHARACTER_SOFT				142
#DEFINE Q_SNES_GAME_PAK_LICENSE_I_MAX					143
#DEFINE Q_SNES_GAME_PAK_LICENSE_TAKARA					144
#DEFINE Q_SNES_GAME_PAK_LICENSE_CHUN_SOFT				145
#DEFINE Q_SNES_GAME_PAK_LICENSE_VIDEO_SYSTEM				146
#DEFINE Q_SNES_GAME_PAK_LICENSE_BEC					147
#DEFINE Q_SNES_GAME_PAK_LICENSE_VARIE					149
#DEFINE Q_SNES_GAME_PAK_LICENSE_KANECO					151
#DEFINE Q_SNES_GAME_PAK_LICENSE_PACK_IN_VIDEO				153
#DEFINE Q_SNES_GAME_PAK_LICENSE_NICHIBUTSU				154
#DEFINE Q_SNES_GAME_PAK_LICENSE_TECMO					155
#DEFINE Q_SNES_GAME_PAK_LICENSE_IMAGINEER				156
#DEFINE Q_SNES_GAME_PAK_LICENSE_TELENET					160
#DEFINE Q_SNES_GAME_PAK_LICENSE_KONAMI					164
#DEFINE Q_SNES_GAME_PAK_LICENSE_K_AMUSEMENT_LEASING			165
#DEFINE Q_SNES_GAME_PAK_LICENSE_TAKARA					167
#DEFINE Q_SNES_GAME_PAK_LICENSE_TECHNOS_JAPAN				169
#DEFINE Q_SNES_GAME_PAK_LICENSE_JVC					170
#DEFINE Q_SNES_GAME_PAK_LICENSE_TOEI_ANIMATION				172
#DEFINE Q_SNES_GAME_PAK_LICENSE_TOHO					173
#DEFINE Q_SNES_GAME_PAK_LICENSE_NAMCO					175
#DEFINE Q_SNES_GAME_PAK_LICENSE_ASCII_ACTIVISON				177
#DEFINE Q_SNES_GAME_PAK_LICENSE_BANDAI_AMERICA				178
#DEFINE Q_SNES_GAME_PAK_LICENSE_ENIX					180
#DEFINE Q_SNES_GAME_PAK_LICENSE_HALKEN					182
#DEFINE Q_SNES_GAME_PAK_LICENSE_CULTURE_BRAIN				186
#DEFINE Q_SNES_GAME_PAK_LICENSE_SUNSOFT					187
#DEFINE Q_SNES_GAME_PAK_LICENSE_TOSHIBA_EMI				188
#DEFINE Q_SNES_GAME_PAK_LICENSE_SONY_IMAGESOFT				189
#DEFINE Q_SNES_GAME_PAK_LICENSE_SAMMY					191
#DEFINE Q_SNES_GAME_PAK_LICENSE_TAITO					192
#DEFINE Q_SNES_GAME_PAK_LICENSE_KEMCO					194
#DEFINE Q_SNES_GAME_PAK_LICENSE_SQUARE					195
#DEFINE Q_SNES_GAME_PAK_LICENSE_TOKUMA_SOFT				196
#DEFINE Q_SNES_GAME_PAK_LICENSE_DATA_EAST				197
#DEFINE Q_SNES_GAME_PAK_LICENSE_TONKIN_HOUSE				198
#DEFINE Q_SNES_GAME_PAK_LICENSE_KOEI					200
#DEFINE Q_SNES_GAME_PAK_LICENSE_KONAMI_USA				202
#DEFINE Q_SNES_GAME_PAK_LICENSE_NTVIC					203
#DEFINE Q_SNES_GAME_PAK_LICENSE_MELDAC					205
#DEFINE Q_SNES_GAME_PAK_LICENSE_PONY_CANYON				206
#DEFINE Q_SNES_GAME_PAK_LICENSE_SOTSU_AGENCY_SUNRISE			207
#DEFINE Q_SNES_GAME_PAK_LICENSE_DISCO_TAITO				208
#DEFINE Q_SNES_GAME_PAK_LICENSE_SOFEL					209
#DEFINE Q_SNES_GAME_PAK_LICENSE_QUEST					210
#DEFINE Q_SNES_GAME_PAK_LICENSE_SIGMA					211
#DEFINE Q_SNES_GAME_PAK_LICENSE_NAXAT					214
#DEFINE Q_SNES_GAME_PAK_LICENSE_CAPCOM					216
#DEFINE Q_SNES_GAME_PAK_LICENSE_BANPRESTO				217
#DEFINE Q_SNES_GAME_PAK_LICENSE_TOMY					218
#DEFINE Q_SNES_GAME_PAK_LICENSE_ACCLAIM					219
#DEFINE Q_SNES_GAME_PAK_LICENSE_NCS					221
#DEFINE Q_SNES_GAME_PAK_LICENSE_HUMAN_ENTERTAINMENT			222
#DEFINE Q_SNES_GAME_PAK_LICENSE_ALTRON					223
#DEFINE Q_SNES_GAME_PAK_LICENSE_JALECO					224
#DEFINE Q_SNES_GAME_PAK_LICENSE_YUTAKA					226
#DEFINE Q_SNES_GAME_PAK_LICENSE_T&ESOFT					228
#DEFINE Q_SNES_GAME_PAK_LICENSE_EPOCH					229
#DEFINE Q_SNES_GAME_PAK_LICENSE_ATHENA					231
#DEFINE Q_SNES_GAME_PAK_LICENSE_ASMIK					232
#DEFINE Q_SNES_GAME_PAK_LICENSE_NATSUME					233
#DEFINE Q_SNES_GAME_PAK_LICENSE_KING_RECORDS				234
#DEFINE Q_SNES_GAME_PAK_LICENSE_ATLUS					235
#DEFINE Q_SNES_GAME_PAK_LICENSE_SONY_MUSIC_ENTERTAINMENT		236
#DEFINE Q_SNES_GAME_PAK_LICENSE_IGS					238
#DEFINE Q_SNES_GAME_PAK_LICENSE_MOTOWN_SOFTWARE				241
#DEFINE Q_SNES_GAME_PAK_LICENSE_LEFT_FIELD_ENTERTAINMENT		242
#DEFINE Q_SNES_GAME_PAK_LICENSE_BEAM_SOFTWARE				243
#DEFINE Q_SNES_GAME_PAK_LICENSE_TEC_MAGIK				244
#DEFINE Q_SNES_GAME_PAK_LICENSE_CYBERSOFT				249
#DEFINE Q_SNES_GAME_PAK_LICENSE_HUDSON_SOFT				255*/

#endif /* __Q_hardware_storage_medium_ROM_cartridge_SNES_Game_Pak_H__ */
