/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#141210",   /* after initialization */
	[INPUT] =  "#8e8e8e",   /* during input */
	[FAILED] = "#ff4444",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
