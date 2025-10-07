static const char norm_fg[] = "#f1c4c5";
static const char norm_bg[] = "#09080F";
static const char norm_border[] = "#a88989";

static const char sel_fg[] = "#f1c4c5";
static const char sel_bg[] = "#6E3D5D";
static const char sel_border[] = "#f1c4c5";

static const char urg_fg[] = "#f1c4c5";
static const char urg_bg[] = "#6D385B";
static const char urg_border[] = "#6D385B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
