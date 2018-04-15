
#define	IDM_MAINMENU	128

#define	MAKE_MENUID(a, b)	((a << 16) | b)

// --------------------------------------------------------------- system menu

enum {
	IDM_APPLE			= 128,
	IDM_EMULATE			= 129,
	IDM_FDD1			= 132,
	IDM_FDD2			= 133,
	IDM_HARDDISK		= 134,
	IDM_SASI1			= 135,
	IDM_SASI2			= 136,
	IDM_SCREEN			= 137,
	IDM_DEVICE			= 138,
	IDM_KEYBOARD		= 139,
	IDM_SOUND			= 140,
	IDM_MEMORY			= 141,
	IDM_OTHER			= 142,

	IDM_ABOUT			= MAKE_MENUID(IDM_APPLE, 1),

	IDM_RESET			= MAKE_MENUID(IDM_EMULATE, 1),
	IDM_CONFIGURE		= MAKE_MENUID(IDM_EMULATE, 3),
	IDM_NEWDISK			= MAKE_MENUID(IDM_EMULATE, 4),
	IDM_FONT			= MAKE_MENUID(IDM_EMULATE, 5),
	IDM_EXIT			= MAKE_MENUID(IDM_EMULATE, 7),

	IDM_FDD1OPEN		= MAKE_MENUID(IDM_FDD1, 1),
	IDM_FDD1EJECT		= MAKE_MENUID(IDM_FDD1, 3),

	IDM_FDD2OPEN		= MAKE_MENUID(IDM_FDD2, 1),
	IDM_FDD2EJECT		= MAKE_MENUID(IDM_FDD2, 3),

	IDM_SASI1OPEN		= MAKE_MENUID(IDM_SASI1, 1),
	IDM_SASI1REMOVE		= MAKE_MENUID(IDM_SASI1, 3),

	IDM_SASI2OPEN		= MAKE_MENUID(IDM_SASI2, 1),
	IDM_SASI2REMOVE		= MAKE_MENUID(IDM_SASI2, 3),

	IDM_ROLNORMAL		= MAKE_MENUID(IDM_SCREEN, 1),
	IDM_ROLLEFT			= MAKE_MENUID(IDM_SCREEN, 2),
	IDM_ROLRIGHT		= MAKE_MENUID(IDM_SCREEN, 3),
	IDM_DISPSYNC		= MAKE_MENUID(IDM_SCREEN, 5),
	IDM_RASTER			= MAKE_MENUID(IDM_SCREEN, 6),
	IDM_NOWAIT			= MAKE_MENUID(IDM_SCREEN, 7),
	IDM_AUTOFPS			= MAKE_MENUID(IDM_SCREEN, 8),
	IDM_60FPS			= MAKE_MENUID(IDM_SCREEN, 9),
	IDM_30FPS			= MAKE_MENUID(IDM_SCREEN, 10),
	IDM_20FPS			= MAKE_MENUID(IDM_SCREEN, 11),
	IDM_15FPS			= MAKE_MENUID(IDM_SCREEN, 12),
	IDM_SCREENOPT		= MAKE_MENUID(IDM_SCREEN, 14),

	IDM_MOUSE			= MAKE_MENUID(IDM_DEVICE, 4),
	IDM_SEROPT			= MAKE_MENUID(IDM_DEVICE, 6),
	IDM_MIDIOPT			= MAKE_MENUID(IDM_DEVICE, 8),
	IDM_MIDIPANIC		= MAKE_MENUID(IDM_DEVICE, 9),
	IDM_SNDOPT			= MAKE_MENUID(IDM_DEVICE, 11),

	IDM_KEY				= MAKE_MENUID(IDM_KEYBOARD, 1),
	IDM_JOY1			= MAKE_MENUID(IDM_KEYBOARD, 2),
	IDM_JOY2			= MAKE_MENUID(IDM_KEYBOARD, 3),
	IDM_MOUSEKEY		= MAKE_MENUID(IDM_KEYBOARD, 4),
	IDM_XSHIFT			= MAKE_MENUID(IDM_KEYBOARD, 6),
	IDM_XCTRL			= MAKE_MENUID(IDM_KEYBOARD, 7),
	IDM_XGRPH			= MAKE_MENUID(IDM_KEYBOARD, 8),
	IDM_F12MOUSE		= MAKE_MENUID(IDM_KEYBOARD, 10),
	IDM_F12COPY			= MAKE_MENUID(IDM_KEYBOARD, 11),
	IDM_F12STOP			= MAKE_MENUID(IDM_KEYBOARD, 12),

	IDM_BEEPOFF			= MAKE_MENUID(IDM_SOUND, 1),
	IDM_BEEPLOW			= MAKE_MENUID(IDM_SOUND, 2),
	IDM_BEEPMID			= MAKE_MENUID(IDM_SOUND, 3),
	IDM_BEEPHIGH		= MAKE_MENUID(IDM_SOUND, 4),
	IDM_NOSOUND			= MAKE_MENUID(IDM_SOUND, 6),
	IDM_PC9801_14		= MAKE_MENUID(IDM_SOUND, 7),
	IDM_PC9801_26K		= MAKE_MENUID(IDM_SOUND, 8),
	IDM_PC9801_86		= MAKE_MENUID(IDM_SOUND, 9),
	IDM_PC9801_26_86	= MAKE_MENUID(IDM_SOUND, 10),
	IDM_PC9801_86_CB	= MAKE_MENUID(IDM_SOUND, 11),
	IDM_PC9801_118		= MAKE_MENUID(IDM_SOUND, 12),
	IDM_SPEAKBOARD		= MAKE_MENUID(IDM_SOUND, 13),
	IDM_SPARKBOARD		= MAKE_MENUID(IDM_SOUND, 14),
	IDM_AMD98			= MAKE_MENUID(IDM_SOUND, 15),
	IDM_SEEKSND			= MAKE_MENUID(IDM_SOUND, 17),

	IDM_MEM640			= MAKE_MENUID(IDM_MEMORY, 1),
	IDM_MEM16			= MAKE_MENUID(IDM_MEMORY, 2),
	IDM_MEM36			= MAKE_MENUID(IDM_MEMORY, 3),
	IDM_MEM76			= MAKE_MENUID(IDM_MEMORY, 4),

	IDM_BMPSAVE			= MAKE_MENUID(IDM_OTHER, 1),
	IDM_S98LOGGING		= MAKE_MENUID(IDM_OTHER, 2),
	IDM_DISPCLOCK		= MAKE_MENUID(IDM_OTHER, 3),
	IDM_DISPFLAME		= MAKE_MENUID(IDM_OTHER, 4),
	IDM_JOYX			= MAKE_MENUID(IDM_OTHER, 5),
	IDM_RAPID			= MAKE_MENUID(IDM_OTHER, 6),
	IDM_MSRAPID			= MAKE_MENUID(IDM_OTHER, 7),
	IDM_I286SAVE		= MAKE_MENUID(IDM_OTHER, 8)
};


// -------------------------------------------------------------------- dialog

enum {
	IDOK				= 1,
	IDCANCEL			= 2,

	IDD_ABOUT			= 128,
	IDD_VERSION			= 4,

	IDD_NEWFDDDISK		= 129,
	IDC_DISKLABEL		= 4,
	IDC_MAKE2DD			= 6,
	IDC_MAKE2HD			= 7,

	IDD_NEWHDDDISK		= 130,
	IDC_HDDSIZE			= 3,

	IDD_CONFIGURE		= 131,
	IDC_BASECLOCK20		= 4,
	IDC_BASECLOCK25		= 5,
	IDC_MULTIPLE		= 7,
	IDC_CLOCKMSG		= 8,
	IDC_RATE11			= 12,
	IDC_RATE22			= 13,
	IDC_RATE44			= 14,
	IDC_SOUNDBUF		= 16,
	IDC_RESUME			= 18,

	IDD_RESUMEERROR		= 132,

	IDD_RESUMEWARNING	= 133,
	IDC_RESUMEEXIT		= 3,
	IDC_RESUMEREASON	= 6,

	IDD_SCREENOPT		= 134,
	IDC_LCD				= 23,
	IDC_LCDX			= 24,
	IDC_SKIPLINE		= 25,
	IDC_SKIPLIGHT		= 26,
	IDC_GDC7220			= 4,
	IDC_GDC72020		= 5,
	IDC_GRCGNON			= 7,
	IDC_GRCG			= 8,
	IDC_GRCG2			= 9,
	IDC_EGC				= 10,
	IDC_PC980124		= 11,
	IDC_TRAMWAIT		= 13,
	IDC_VRAMWAIT		= 16,
	IDC_GRCGWAIT		= 19,
	IDC_REALPAL			= 22
};


// ------------------------------------------------------------------ Messages

enum {
	IDT_TITLE			= 128,
	IDT_NEWDISK			= 129,
	IDT_NEWHDDDISK		= 130
};

