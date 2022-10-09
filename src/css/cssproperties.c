/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf -a -L ANSI-C -E -C -c -o -t -k '*' -NfindProp -Hhash_prop -Wwordlist_prop -D -s 2 cssproperties.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "cssproperties.gperf"

/* This file is automatically generated from cssproperties.in by makeprop, do not edit */
/* Copyright 1999 W. Bastian */
#include "cssproperties.h"
#line 6 "cssproperties.gperf"
struct css_prop {
    const char *name;
    int id;
};

static const struct css_prop * findProp (const char *str, unsigned int len);
/* maximum key range = 797, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash_prop (const char *str, unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802,   0, 802, 802, 802, 802,
      802,   0, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802,   5,   0,   0,
        0,   0, 240,   0, 180,  20,   0,  55,   0,  20,
       20,   0,   0,  10,   0,  10,   5,  80,  45, 265,
       60, 230,   0, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802, 802, 802, 802, 802,
      802, 802, 802, 802, 802, 802
    };
  int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[31]];
      /*FALLTHROUGH*/
      case 31:
        hval += asso_values[(unsigned char)str[30]];
      /*FALLTHROUGH*/
      case 30:
        hval += asso_values[(unsigned char)str[29]];
      /*FALLTHROUGH*/
      case 29:
        hval += asso_values[(unsigned char)str[28]];
      /*FALLTHROUGH*/
      case 28:
        hval += asso_values[(unsigned char)str[27]];
      /*FALLTHROUGH*/
      case 27:
        hval += asso_values[(unsigned char)str[26]];
      /*FALLTHROUGH*/
      case 26:
        hval += asso_values[(unsigned char)str[25]];
      /*FALLTHROUGH*/
      case 25:
        hval += asso_values[(unsigned char)str[24]];
      /*FALLTHROUGH*/
      case 24:
        hval += asso_values[(unsigned char)str[23]];
      /*FALLTHROUGH*/
      case 23:
        hval += asso_values[(unsigned char)str[22]];
      /*FALLTHROUGH*/
      case 22:
        hval += asso_values[(unsigned char)str[21]];
      /*FALLTHROUGH*/
      case 21:
        hval += asso_values[(unsigned char)str[20]];
      /*FALLTHROUGH*/
      case 20:
        hval += asso_values[(unsigned char)str[19]];
      /*FALLTHROUGH*/
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct css_prop *
findProp (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 179,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 32,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 801
    };

  static const struct css_prop wordlist_prop[] =
    {
#line 49 "cssproperties.gperf"
      {"color", CSS_PROP_COLOR},
#line 126 "cssproperties.gperf"
      {"border", CSS_PROP_BORDER},
#line 114 "cssproperties.gperf"
      {"top", CSS_PROP_TOP},
#line 47 "cssproperties.gperf"
      {"clear", CSS_PROP_CLEAR},
#line 127 "cssproperties.gperf"
      {"border-color", CSS_PROP_BORDER_COLOR},
#line 106 "cssproperties.gperf"
      {"src", CSS_PROP_SRC},
#line 129 "cssproperties.gperf"
      {"border-top", CSS_PROP_BORDER_TOP},
#line 33 "cssproperties.gperf"
      {"border-top-color", CSS_PROP_BORDER_TOP_COLOR},
#line 48 "cssproperties.gperf"
      {"clip", CSS_PROP_CLIP},
#line 180 "cssproperties.gperf"
      {"stop-color", CSS_PROP_STOP_COLOR},
#line 29 "cssproperties.gperf"
      {"border-collapse", CSS_PROP_BORDER_COLLAPSE},
#line 105 "cssproperties.gperf"
      {"size", CSS_PROP_SIZE},
#line 45 "cssproperties.gperf"
      {"bottom", CSS_PROP_BOTTOM},
#line 131 "cssproperties.gperf"
      {"border-bottom", CSS_PROP_BORDER_BOTTOM},
#line 35 "cssproperties.gperf"
      {"border-bottom-color", CSS_PROP_BORDER_BOTTOM_COLOR},
#line 140 "cssproperties.gperf"
      {"scrollbar-base-color", CSS_PROP_SCROLLBAR_BASE_COLOR},
#line 139 "cssproperties.gperf"
      {"padding", CSS_PROP_PADDING},
#line 50 "cssproperties.gperf"
      {"content", CSS_PROP_CONTENT},
#line 94 "cssproperties.gperf"
      {"padding-top", CSS_PROP_PADDING_TOP},
#line 30 "cssproperties.gperf"
      {"border-spacing", CSS_PROP_BORDER_SPACING},
#line 137 "cssproperties.gperf"
      {"margin", CSS_PROP_MARGIN},
#line 54 "cssproperties.gperf"
      {"direction", CSS_PROP_DIRECTION},
#line 157 "cssproperties.gperf"
      {"color-rendering", CSS_PROP_COLOR_RENDERING},
#line 182 "cssproperties.gperf"
      {"stroke", CSS_PROP_STROKE},
#line 65 "cssproperties.gperf"
      {"letter-spacing", CSS_PROP_LETTER_SPACING},
#line 70 "cssproperties.gperf"
      {"margin-top", CSS_PROP_MARGIN_TOP},
#line 102 "cssproperties.gperf"
      {"position", CSS_PROP_POSITION},
#line 173 "cssproperties.gperf"
      {"marker", CSS_PROP_MARKER},
#line 96 "cssproperties.gperf"
      {"padding-bottom", CSS_PROP_PADDING_BOTTOM},
#line 46 "cssproperties.gperf"
      {"caption-side", CSS_PROP_CAPTION_SIDE},
#line 177 "cssproperties.gperf"
      {"mask", CSS_PROP_MASK},
#line 53 "cssproperties.gperf"
      {"cursor", CSS_PROP_CURSOR},
#line 146 "cssproperties.gperf"
      {"scrollbar-track-color", CSS_PROP_SCROLLBAR_TRACK_COLOR},
#line 124 "cssproperties.gperf"
      {"z-index", CSS_PROP_Z_INDEX},
#line 72 "cssproperties.gperf"
      {"margin-bottom", CSS_PROP_MARGIN_BOTTOM},
#line 153 "cssproperties.gperf"
      {"clip-rule", CSS_PROP_CLIP_RULE},
#line 174 "cssproperties.gperf"
      {"marker-end", CSS_PROP_MARKER_END},
#line 103 "cssproperties.gperf"
      {"quotes", CSS_PROP_QUOTES},
#line 154 "cssproperties.gperf"
      {"color-interpolation", CSS_PROP_COLOR_INTERPOLATION},
#line 176 "cssproperties.gperf"
      {"marker-start", CSS_PROP_MARKER_START},
#line 170 "cssproperties.gperf"
      {"image-rendering", CSS_PROP_IMAGE_RENDERING},
#line 171 "cssproperties.gperf"
      {"kerning", CSS_PROP_KERNING},
#line 108 "cssproperties.gperf"
      {"text-align", CSS_PROP_TEXT_ALIGN},
#line 28 "cssproperties.gperf"
      {"border-radius", CSS_PROP_BORDER_RADIUS},
#line 185 "cssproperties.gperf"
      {"stroke-linecap", CSS_PROP_STROKE_LINECAP},
#line 175 "cssproperties.gperf"
      {"marker-mid", CSS_PROP_MARKER_MID},
#line 138 "cssproperties.gperf"
      {"outline", CSS_PROP_OUTLINE},
#line 52 "cssproperties.gperf"
      {"counter-reset", CSS_PROP_COUNTER_RESET},
#line 117 "cssproperties.gperf"
      {"vertical-align", CSS_PROP_VERTICAL_ALIGN},
#line 109 "cssproperties.gperf"
      {"text-decoration", CSS_PROP_TEXT_DECORATION},
#line 87 "cssproperties.gperf"
      {"outline-color", CSS_PROP_OUTLINE_COLOR},
#line 178 "cssproperties.gperf"
      {"pointer-events", CSS_PROP_POINTER_EVENTS},
#line 134 "cssproperties.gperf"
      {"box-sizing", CSS_PROP_BOX_SIZING},
#line 191 "cssproperties.gperf"
      {"text-rendering", CSS_PROP_TEXT_RENDERING},
#line 110 "cssproperties.gperf"
      {"text-indent", CSS_PROP_TEXT_INDENT},
#line 101 "cssproperties.gperf"
      {"page-break-inside", CSS_PROP_PAGE_BREAK_INSIDE},
#line 116 "cssproperties.gperf"
      {"unicode-range", CSS_PROP_UNICODE_RANGE},
#line 158 "cssproperties.gperf"
      {"dominant-baseline", CSS_PROP_DOMINANT_BASELINE},
#line 150 "cssproperties.gperf"
      {"alignment-baseline", CSS_PROP_ALIGNMENT_BASELINE},
#line 186 "cssproperties.gperf"
      {"stroke-linejoin", CSS_PROP_STROKE_LINEJOIN},
#line 125 "cssproperties.gperf"
      {"background", CSS_PROP_BACKGROUND},
#line 115 "cssproperties.gperf"
      {"unicode-bidi", CSS_PROP_UNICODE_BIDI},
#line 14 "cssproperties.gperf"
      {"background-color", CSS_PROP_BACKGROUND_COLOR},
#line 16 "cssproperties.gperf"
      {"background-repeat", CSS_PROP_BACKGROUND_REPEAT},
#line 21 "cssproperties.gperf"
      {"background-clip", CSS_PROP_BACKGROUND_CLIP},
#line 187 "cssproperties.gperf"
      {"stroke-miterlimit", CSS_PROP_STROKE_MITERLIMIT},
#line 159 "cssproperties.gperf"
      {"enable-background", CSS_PROP_ENABLE_BACKGROUND},
#line 23 "cssproperties.gperf"
      {"background-size", CSS_PROP_BACKGROUND_SIZE},
#line 51 "cssproperties.gperf"
      {"counter-increment", CSS_PROP_COUNTER_INCREMENT},
#line 104 "cssproperties.gperf"
      {"right", CSS_PROP_RIGHT},
#line 130 "cssproperties.gperf"
      {"border-right", CSS_PROP_BORDER_RIGHT},
#line 152 "cssproperties.gperf"
      {"clip-path", CSS_PROP_CLIP_PATH},
#line 15 "cssproperties.gperf"
      {"background-image", CSS_PROP_BACKGROUND_IMAGE},
#line 85 "cssproperties.gperf"
      {"orphans", CSS_PROP_ORPHANS},
#line 34 "cssproperties.gperf"
      {"border-right-color", CSS_PROP_BORDER_RIGHT_COLOR},
#line 22 "cssproperties.gperf"
      {"background-origin", CSS_PROP_BACKGROUND_ORIGIN},
#line 144 "cssproperties.gperf"
      {"scrollbar-3dlight-color", CSS_PROP_SCROLLBAR_3DLIGHT_COLOR},
#line 64 "cssproperties.gperf"
      {"left", CSS_PROP_LEFT},
#line 164 "cssproperties.gperf"
      {"flood-color", CSS_PROP_FLOOD_COLOR},
#line 18 "cssproperties.gperf"
      {"background-position", CSS_PROP_BACKGROUND_POSITION},
#line 57 "cssproperties.gperf"
      {"float", CSS_PROP_FLOAT},
#line 132 "cssproperties.gperf"
      {"border-left", CSS_PROP_BORDER_LEFT},
#line 128 "cssproperties.gperf"
      {"border-style", CSS_PROP_BORDER_STYLE},
#line 172 "cssproperties.gperf"
      {"lighting-color", CSS_PROP_LIGHTING_COLOR},
#line 36 "cssproperties.gperf"
      {"border-left-color", CSS_PROP_BORDER_LEFT_COLOR},
#line 95 "cssproperties.gperf"
      {"padding-right", CSS_PROP_PADDING_RIGHT},
#line 160 "cssproperties.gperf"
      {"fill", CSS_PROP_FILL},
#line 37 "cssproperties.gperf"
      {"border-top-style", CSS_PROP_BORDER_TOP_STYLE},
#line 86 "cssproperties.gperf"
      {"opacity", CSS_PROP_OPACITY},
#line 135 "cssproperties.gperf"
      {"font", CSS_PROP_FONT},
#line 179 "cssproperties.gperf"
      {"shape-rendering", CSS_PROP_SHAPE_RENDERING},
#line 163 "cssproperties.gperf"
      {"filter", CSS_PROP_FILTER},
#line 55 "cssproperties.gperf"
      {"display", CSS_PROP_DISPLAY},
#line 156 "cssproperties.gperf"
      {"color-profile", CSS_PROP_COLOR_PROFILE},
#line 56 "cssproperties.gperf"
      {"empty-cells", CSS_PROP_EMPTY_CELLS},
#line 141 "cssproperties.gperf"
      {"scrollbar-face-color", CSS_PROP_SCROLLBAR_FACE_COLOR},
#line 71 "cssproperties.gperf"
      {"margin-right", CSS_PROP_MARGIN_RIGHT},
#line 190 "cssproperties.gperf"
      {"text-anchor", CSS_PROP_TEXT_ANCHOR},
#line 181 "cssproperties.gperf"
      {"stop-opacity", CSS_PROP_STOP_OPACITY},
#line 136 "cssproperties.gperf"
      {"list-style", CSS_PROP_LIST_STYLE},
#line 39 "cssproperties.gperf"
      {"border-bottom-style", CSS_PROP_BORDER_BOTTOM_STYLE},
#line 97 "cssproperties.gperf"
      {"padding-left", CSS_PROP_PADDING_LEFT},
#line 59 "cssproperties.gperf"
      {"font-size", CSS_PROP_FONT_SIZE},
#line 147 "cssproperties.gperf"
      {"scrollbar-arrow-color", CSS_PROP_SCROLLBAR_ARROW_COLOR},
#line 19 "cssproperties.gperf"
      {"background-position-x", CSS_PROP_BACKGROUND_POSITION_X},
#line 73 "cssproperties.gperf"
      {"margin-left", CSS_PROP_MARGIN_LEFT},
#line 100 "cssproperties.gperf"
      {"page-break-before", CSS_PROP_PAGE_BREAK_BEFORE},
#line 99 "cssproperties.gperf"
      {"page-break-after", CSS_PROP_PAGE_BREAK_AFTER},
#line 123 "cssproperties.gperf"
      {"word-spacing", CSS_PROP_WORD_SPACING},
#line 67 "cssproperties.gperf"
      {"list-style-image", CSS_PROP_LIST_STYLE_IMAGE},
#line 107 "cssproperties.gperf"
      {"table-layout", CSS_PROP_TABLE_LAYOUT},
#line 188 "cssproperties.gperf"
      {"stroke-opacity", CSS_PROP_STROKE_OPACITY},
#line 24 "cssproperties.gperf"
      {"border-top-right-radius", CSS_PROP_BORDER_TOP_RIGHT_RADIUS},
#line 162 "cssproperties.gperf"
      {"fill-rule", CSS_PROP_FILL_RULE},
#line 98 "cssproperties.gperf"
      {"-khtml-padding-start", CSS_PROP__KHTML_PADDING_START},
#line 192 "cssproperties.gperf"
      {"writing-mode", CSS_PROP_WRITING_MODE},
#line 74 "cssproperties.gperf"
      {"-khtml-margin-start", CSS_PROP__KHTML_MARGIN_START},
#line 68 "cssproperties.gperf"
      {"list-style-position", CSS_PROP_LIST_STYLE_POSITION},
#line 25 "cssproperties.gperf"
      {"border-bottom-right-radius", CSS_PROP_BORDER_BOTTOM_RIGHT_RADIUS},
#line 61 "cssproperties.gperf"
      {"font-variant", CSS_PROP_FONT_VARIANT},
#line 118 "cssproperties.gperf"
      {"visibility", CSS_PROP_VISIBILITY},
#line 89 "cssproperties.gperf"
      {"outline-style", CSS_PROP_OUTLINE_STYLE},
#line 113 "cssproperties.gperf"
      {"text-transform", CSS_PROP_TEXT_TRANSFORM},
#line 27 "cssproperties.gperf"
      {"border-top-left-radius", CSS_PROP_BORDER_TOP_LEFT_RADIUS},
#line 75 "cssproperties.gperf"
      {"-khtml-marquee", CSS_PROP__KHTML_MARQUEE},
#line 63 "cssproperties.gperf"
      {"height", CSS_PROP_HEIGHT},
#line 155 "cssproperties.gperf"
      {"color-interpolation-filters", CSS_PROP_COLOR_INTERPOLATION_FILTERS},
#line 79 "cssproperties.gperf"
      {"-khtml-marquee-speed", CSS_PROP__KHTML_MARQUEE_SPEED},
#line 166 "cssproperties.gperf"
      {"font-size-adjust", CSS_PROP_FONT_SIZE_ADJUST},
#line 26 "cssproperties.gperf"
      {"border-bottom-left-radius", CSS_PROP_BORDER_BOTTOM_LEFT_RADIUS},
#line 32 "cssproperties.gperf"
      {"-khtml-border-vertical-spacing", CSS_PROP__KHTML_BORDER_VERTICAL_SPACING},
#line 17 "cssproperties.gperf"
      {"background-attachment", CSS_PROP_BACKGROUND_ATTACHMENT},
#line 66 "cssproperties.gperf"
      {"line-height", CSS_PROP_LINE_HEIGHT},
#line 83 "cssproperties.gperf"
      {"min-height", CSS_PROP_MIN_HEIGHT},
#line 76 "cssproperties.gperf"
      {"-khtml-marquee-direction", CSS_PROP__KHTML_MARQUEE_DIRECTION},
#line 38 "cssproperties.gperf"
      {"border-right-style", CSS_PROP_BORDER_RIGHT_STYLE},
#line 78 "cssproperties.gperf"
      {"-khtml-marquee-repetition", CSS_PROP__KHTML_MARQUEE_REPETITION},
#line 121 "cssproperties.gperf"
      {"width", CSS_PROP_WIDTH},
#line 167 "cssproperties.gperf"
      {"font-stretch", CSS_PROP_FONT_STRETCH},
#line 81 "cssproperties.gperf"
      {"max-height", CSS_PROP_MAX_HEIGHT},
#line 133 "cssproperties.gperf"
      {"border-width", CSS_PROP_BORDER_WIDTH},
#line 77 "cssproperties.gperf"
      {"-khtml-marquee-increment", CSS_PROP__KHTML_MARQUEE_INCREMENT},
#line 20 "cssproperties.gperf"
      {"background-position-y", CSS_PROP_BACKGROUND_POSITION_Y},
#line 41 "cssproperties.gperf"
      {"border-top-width", CSS_PROP_BORDER_TOP_WIDTH},
#line 149 "cssproperties.gperf"
      {"-khtml-user-input", CSS_PROP__KHTML_USER_INPUT},
#line 119 "cssproperties.gperf"
      {"white-space", CSS_PROP_WHITE_SPACE},
#line 142 "cssproperties.gperf"
      {"scrollbar-shadow-color", CSS_PROP_SCROLLBAR_SHADOW_COLOR},
#line 40 "cssproperties.gperf"
      {"border-left-style", CSS_PROP_BORDER_LEFT_STYLE},
#line 165 "cssproperties.gperf"
      {"flood-opacity", CSS_PROP_FLOOD_OPACITY},
#line 43 "cssproperties.gperf"
      {"border-bottom-width", CSS_PROP_BORDER_BOTTOM_WIDTH},
#line 60 "cssproperties.gperf"
      {"font-style", CSS_PROP_FONT_STYLE},
#line 183 "cssproperties.gperf"
      {"stroke-dasharray", CSS_PROP_STROKE_DASHARRAY},
#line 151 "cssproperties.gperf"
      {"baseline-shift", CSS_PROP_BASELINE_SHIFT},
#line 69 "cssproperties.gperf"
      {"list-style-type", CSS_PROP_LIST_STYLE_TYPE},
#line 161 "cssproperties.gperf"
      {"fill-opacity", CSS_PROP_FILL_OPACITY},
#line 84 "cssproperties.gperf"
      {"min-width", CSS_PROP_MIN_WIDTH},
#line 112 "cssproperties.gperf"
      {"text-shadow", CSS_PROP_TEXT_SHADOW},
#line 122 "cssproperties.gperf"
      {"word-wrap", CSS_PROP_WORD_WRAP},
#line 189 "cssproperties.gperf"
      {"stroke-width", CSS_PROP_STROKE_WIDTH},
#line 91 "cssproperties.gperf"
      {"overflow", CSS_PROP_OVERFLOW},
#line 145 "cssproperties.gperf"
      {"scrollbar-darkshadow-color", CSS_PROP_SCROLLBAR_DARKSHADOW_COLOR},
#line 82 "cssproperties.gperf"
      {"max-width", CSS_PROP_MAX_WIDTH},
#line 120 "cssproperties.gperf"
      {"widows", CSS_PROP_WIDOWS},
#line 31 "cssproperties.gperf"
      {"-khtml-border-horizontal-spacing", CSS_PROP__KHTML_BORDER_HORIZONTAL_SPACING},
#line 169 "cssproperties.gperf"
      {"glyph-orientation-vertical", CSS_PROP_GLYPH_ORIENTATION_VERTICAL},
#line 90 "cssproperties.gperf"
      {"outline-width", CSS_PROP_OUTLINE_WIDTH},
#line 92 "cssproperties.gperf"
      {"overflow-x", CSS_PROP_OVERFLOW_X},
#line 143 "cssproperties.gperf"
      {"scrollbar-highlight-color", CSS_PROP_SCROLLBAR_HIGHLIGHT_COLOR},
#line 111 "cssproperties.gperf"
      {"text-overflow", CSS_PROP_TEXT_OVERFLOW},
#line 88 "cssproperties.gperf"
      {"outline-offset", CSS_PROP_OUTLINE_OFFSET},
#line 80 "cssproperties.gperf"
      {"-khtml-marquee-style", CSS_PROP__KHTML_MARQUEE_STYLE},
#line 42 "cssproperties.gperf"
      {"border-right-width", CSS_PROP_BORDER_RIGHT_WIDTH},
#line 44 "cssproperties.gperf"
      {"border-left-width", CSS_PROP_BORDER_LEFT_WIDTH},
#line 62 "cssproperties.gperf"
      {"font-weight", CSS_PROP_FONT_WEIGHT},
#line 168 "cssproperties.gperf"
      {"glyph-orientation-horizontal", CSS_PROP_GLYPH_ORIENTATION_HORIZONTAL},
#line 184 "cssproperties.gperf"
      {"stroke-dashoffset", CSS_PROP_STROKE_DASHOFFSET},
#line 93 "cssproperties.gperf"
      {"overflow-y", CSS_PROP_OVERFLOW_Y},
#line 58 "cssproperties.gperf"
      {"font-family", CSS_PROP_FONT_FAMILY},
#line 148 "cssproperties.gperf"
      {"-khtml-flow-mode", CSS_PROP__KHTML_FLOW_MODE}
    };

  static const short lookup[] =
    {
       -1,  -1,  -1,  -1,  -1,   0,   1,  -1,   2,  -1,
        3,  -1,   4,   5,  -1,   6,  -1,  -1,  -1,  -1,
       -1,   7,  -1,  -1,   8,   9,  -1,  -1,  -1,  -1,
       10,  -1,  -1,  -1,  11,  -1,  12,  -1,  -1,  -1,
       -1,  -1,  -1,  13,  -1,  -1,  -1,  -1,  -1,  14,
       15,  -1,  16,  -1,  -1,  -1,  -1,  17,  -1,  -1,
       -1,  18,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  19,
       -1,  20,  -1,  -1,  21,  22,  23,  -1,  -1,  24,
       25,  -1,  -1,  26,  -1,  -1,  27,  -1,  -1,  28,
       -1,  -1,  29,  -1,  30,  -1,  31,  -1,  -1,  -1,
       -1,  32,  -1,  -1,  -1,  -1,  -1,  33,  34,  35,
       36,  37,  -1,  -1,  38,  -1,  -1,  39,  -1,  -1,
       40,  -1,  41,  -1,  -1,  42,  -1,  -1,  43,  44,
       45,  -1,  46,  47,  48,  49,  -1,  -1,  50,  51,
       52,  -1,  -1,  -1,  53,  -1,  54,  -1,  -1,  -1,
       -1,  -1,  55,  -1,  -1,  -1,  -1,  -1,  56,  -1,
       -1,  -1,  57,  58,  -1,  59,  -1,  -1,  -1,  -1,
       60,  -1,  61,  -1,  -1,  -1,  62,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  63,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  64,  -1,  65,  -1,  -1,
       -1,  -1,  66,  -1,  -1,  67,  -1,  68,  -1,  -1,
       69,  -1,  -1,  -1,  -1,  -1,  -1,  70,  -1,  71,
       -1,  72,  73,  74,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  75,  -1,  -1,
       -1,  -1,  -1,  76,  -1,  -1,  -1,  -1,  -1,  77,
       -1,  78,  -1,  -1,  79,  80,  81,  82,  -1,  83,
       -1,  -1,  84,  85,  86,  -1,  87,  88,  -1,  89,
       90,  91,  92,  93,  -1,  -1,  94,  -1,  -1,  -1,
       95,  -1,  96,  -1,  -1,  -1,  97,  98,  -1,  -1,
       99,  -1,  -1,  -1, 100,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 101,  -1, 102,  -1, 103,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 104,  -1,  -1,  -1,
       -1, 105, 106,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 107, 108,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 109, 110,  -1, 111,  -1,  -1,  -1, 112, 113,
      114,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 115,  -1,  -1,  -1,  -1,  -1,  -1, 116,
       -1,  -1,  -1,  -1, 117,  -1, 118, 119,  -1,  -1,
      120,  -1,  -1, 121, 122,  -1,  -1, 123,  -1, 124,
       -1, 125,  -1,  -1,  -1,  -1,  -1, 126,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 127,  -1,  -1,  -1,  -1,
       -1, 128,  -1,  -1,  -1, 129,  -1,  -1,  -1,  -1,
      130,  -1,  -1,  -1,  -1,  -1, 131,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 132,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 133,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 134,  -1,  -1,  -1, 135,  -1,
      136,  -1,  -1,  -1,  -1, 137,  -1, 138,  -1,  -1,
      139,  -1, 140,  -1, 141,  -1, 142,  -1,  -1,  -1,
       -1, 143, 144,  -1,  -1,  -1, 145, 146,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 147,  -1,  -1,
       -1,  -1,  -1, 148,  -1,  -1,  -1,  -1,  -1, 149,
      150, 151,  -1,  -1, 152,  -1,  -1,  -1,  -1,  -1,
      153,  -1, 154,  -1,  -1,  -1,  -1,  -1,  -1, 155,
       -1, 156,  -1,  -1, 157,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 158,  -1,  -1,  -1,  -1,  -1, 159,  -1,
       -1, 160,  -1,  -1, 161,  -1, 162,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 163,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 164,  -1, 165,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      166,  -1,  -1,  -1,  -1, 167,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 168, 169,  -1,  -1,  -1,  -1,  -1,
      170,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 171,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1, 172,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 173,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 174,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1, 175,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      176, 177,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1, 178
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      int key = hash_prop (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          int index = lookup[key];

          if (index >= 0)
            {
              const char *s = wordlist_prop[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist_prop[index];
            }
        }
    }
  return nullptr;
}
#line 193 "cssproperties.gperf"

static const char * const propertyList[] = {
"",
"background-color", 
"background-image", 
"background-repeat", 
"background-attachment", 
"background-position", 
"background-position-x", 
"background-position-y", 
"background-clip", 
"background-origin", 
"background-size", 
"border-top-right-radius", 
"border-bottom-right-radius", 
"border-bottom-left-radius", 
"border-top-left-radius", 
"border-radius", 
"border-collapse", 
"border-spacing", 
"-khtml-border-horizontal-spacing", 
"-khtml-border-vertical-spacing", 
"border-top-color", 
"border-right-color", 
"border-bottom-color", 
"border-left-color", 
"border-top-style", 
"border-right-style", 
"border-bottom-style", 
"border-left-style", 
"border-top-width", 
"border-right-width", 
"border-bottom-width", 
"border-left-width", 
"bottom", 
"caption-side", 
"clear", 
"clip", 
"color", 
"content", 
"counter-increment", 
"counter-reset", 
"cursor", 
"direction", 
"display", 
"empty-cells", 
"float", 
"font-family", 
"font-size", 
"font-style", 
"font-variant", 
"font-weight", 
"height", 
"left", 
"letter-spacing", 
"line-height", 
"list-style-image", 
"list-style-position", 
"list-style-type", 
"margin-top", 
"margin-right", 
"margin-bottom", 
"margin-left", 
"-khtml-margin-start", 
"-khtml-marquee", 
"-khtml-marquee-direction", 
"-khtml-marquee-increment", 
"-khtml-marquee-repetition", 
"-khtml-marquee-speed", 
"-khtml-marquee-style", 
"max-height", 
"max-width", 
"min-height", 
"min-width", 
"orphans", 
"opacity", 
"outline-color", 
"outline-offset", 
"outline-style", 
"outline-width", 
"overflow", 
"overflow-x", 
"overflow-y", 
"padding-top", 
"padding-right", 
"padding-bottom", 
"padding-left", 
"-khtml-padding-start", 
"page-break-after", 
"page-break-before", 
"page-break-inside", 
"position", 
"quotes", 
"right", 
"size", 
"src", 
"table-layout", 
"text-align", 
"text-decoration", 
"text-indent", 
"text-overflow", 
"text-shadow", 
"text-transform", 
"top", 
"unicode-bidi", 
"unicode-range", 
"vertical-align", 
"visibility", 
"white-space", 
"widows", 
"width", 
"word-wrap", 
"word-spacing", 
"z-index", 
"background", 
"border", 
"border-color", 
"border-style", 
"border-top", 
"border-right", 
"border-bottom", 
"border-left", 
"border-width", 
"box-sizing", 
"font", 
"list-style", 
"margin", 
"outline", 
"padding", 
"scrollbar-base-color", 
"scrollbar-face-color", 
"scrollbar-shadow-color", 
"scrollbar-highlight-color", 
"scrollbar-3dlight-color", 
"scrollbar-darkshadow-color", 
"scrollbar-track-color", 
"scrollbar-arrow-color", 
"-khtml-flow-mode", 
"-khtml-user-input", 
"alignment-baseline", 
"baseline-shift", 
"clip-path", 
"clip-rule", 
"color-interpolation", 
"color-interpolation-filters", 
"color-profile", 
"color-rendering", 
"dominant-baseline", 
"enable-background", 
"fill", 
"fill-opacity", 
"fill-rule", 
"filter", 
"flood-color", 
"flood-opacity", 
"font-size-adjust", 
"font-stretch", 
"glyph-orientation-horizontal", 
"glyph-orientation-vertical", 
"image-rendering", 
"kerning", 
"lighting-color", 
"marker", 
"marker-end", 
"marker-mid", 
"marker-start", 
"mask", 
"pointer-events", 
"shape-rendering", 
"stop-color", 
"stop-opacity", 
"stroke", 
"stroke-dasharray", 
"stroke-dashoffset", 
"stroke-linecap", 
"stroke-linejoin", 
"stroke-miterlimit", 
"stroke-opacity", 
"stroke-width", 
"text-anchor", 
"text-rendering", 
"writing-mode", 
    nullptr
};
DOMString getPropertyName(unsigned short id)
{
    if(id >= CSS_PROP_TOTAL || id == 0)
      return DOMString();
    else
      return DOMString(propertyList[id]);
}

