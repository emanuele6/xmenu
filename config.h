/* font */
static const char *font = "monospace:size=9";    /* for regular items */

/* colors */
static const char *background_color = "#FFFFFF";
static const char *foreground_color = "#2E3436";
static const char *selbackground_color = "#3584E4";
static const char *selforeground_color = "#FFFFFF";
static const char *separator_color = "#CDC7C2";
static const char *border_color = "#E6E6E6";

/* sizes in pixels */
static int width_pixels = 130;      /* minimum width of a menu */
static int height_pixels = 25;      /* height of a single menu item */
static int border_pixels = 1;       /* menu border */
static int separator_pixels = 3;    /* space around separator */

/* the variables below cannot be set by X resources */

/* geometry of the right-pointing isoceles triangle for submenus */
static const int triangle_width = 3;
static const int triangle_height = 7;

/* padding of the area around the icon */
static const int iconpadding = 4;
