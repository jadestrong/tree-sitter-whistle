#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum {
  aux_sym__line_token1 = 1,
  sym_comment = 2,
  anon_sym_CR = 3,
  anon_sym_LF = 4,
  sym_negation = 5,
  sym_regexp_pattern = 6,
  sym_regexp_pattern_no_flag = 7,
  sym_dollar_regexp = 8,
  sym_port_pattern = 9,
  sym_url_pattern = 10,
  sym_wildcard_pattern = 11,
  sym_ipv6_with_brackets = 12,
  sym_ipv4_pattern = 13,
  sym_ipv6_pattern = 14,
  sym_local_path_windows = 15,
  sym_local_path_unix = 16,
  sym_macro_pattern = 17,
  sym_at_reference = 18,
  sym_plugin_var = 19,
  sym_domain_pattern = 20,
  anon_sym_COLON_SLASH_SLASH = 21,
  sym_protocol_name = 22,
  sym_plugin_full_name = 23,
  sym_operator_value = 24,
  sym_simple_value = 25,
  sym_source_file = 26,
  sym__line = 27,
  sym_rule = 28,
  sym__pattern = 29,
  sym__operator = 30,
  sym_protocol_operator = 31,
  sym_plugin_operator = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_rule_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_comment] = "comment",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [sym_negation] = "negation",
  [sym_regexp_pattern] = "regexp_pattern",
  [sym_regexp_pattern_no_flag] = "regexp_pattern_no_flag",
  [sym_dollar_regexp] = "dollar_regexp",
  [sym_port_pattern] = "port_pattern",
  [sym_url_pattern] = "url_pattern",
  [sym_wildcard_pattern] = "wildcard_pattern",
  [sym_ipv6_with_brackets] = "ipv6_with_brackets",
  [sym_ipv4_pattern] = "ipv4_pattern",
  [sym_ipv6_pattern] = "ipv6_pattern",
  [sym_local_path_windows] = "local_path_windows",
  [sym_local_path_unix] = "local_path_unix",
  [sym_macro_pattern] = "macro_pattern",
  [sym_at_reference] = "at_reference",
  [sym_plugin_var] = "plugin_var",
  [sym_domain_pattern] = "domain_pattern",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [sym_protocol_name] = "protocol_name",
  [sym_plugin_full_name] = "plugin_full_name",
  [sym_operator_value] = "operator_value",
  [sym_simple_value] = "simple_value",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_rule] = "rule",
  [sym__pattern] = "_pattern",
  [sym__operator] = "_operator",
  [sym_protocol_operator] = "protocol_operator",
  [sym_plugin_operator] = "plugin_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_comment] = sym_comment,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [sym_negation] = sym_negation,
  [sym_regexp_pattern] = sym_regexp_pattern,
  [sym_regexp_pattern_no_flag] = sym_regexp_pattern_no_flag,
  [sym_dollar_regexp] = sym_dollar_regexp,
  [sym_port_pattern] = sym_port_pattern,
  [sym_url_pattern] = sym_url_pattern,
  [sym_wildcard_pattern] = sym_wildcard_pattern,
  [sym_ipv6_with_brackets] = sym_ipv6_with_brackets,
  [sym_ipv4_pattern] = sym_ipv4_pattern,
  [sym_ipv6_pattern] = sym_ipv6_pattern,
  [sym_local_path_windows] = sym_local_path_windows,
  [sym_local_path_unix] = sym_local_path_unix,
  [sym_macro_pattern] = sym_macro_pattern,
  [sym_at_reference] = sym_at_reference,
  [sym_plugin_var] = sym_plugin_var,
  [sym_domain_pattern] = sym_domain_pattern,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [sym_protocol_name] = sym_protocol_name,
  [sym_plugin_full_name] = sym_plugin_full_name,
  [sym_operator_value] = sym_operator_value,
  [sym_simple_value] = sym_simple_value,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_rule] = sym_rule,
  [sym__pattern] = sym__pattern,
  [sym__operator] = sym__operator,
  [sym_protocol_operator] = sym_protocol_operator,
  [sym_plugin_operator] = sym_plugin_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_pattern_no_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_dollar_regexp] = {
    .visible = true,
    .named = true,
  },
  [sym_port_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_url_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6_with_brackets] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv4_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_local_path_windows] = {
    .visible = true,
    .named = true,
  },
  [sym_local_path_unix] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_at_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_var] = {
    .visible = true,
    .named = true,
  },
  [sym_domain_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_protocol_name] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_full_name] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_value] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym_protocol_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_negation = 1,
  field_operator = 2,
  field_pattern = 3,
  field_plugin = 4,
  field_protocol = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_negation] = "negation",
  [field_operator] = "operator",
  [field_pattern] = "pattern",
  [field_plugin] = "plugin",
  [field_protocol] = "protocol",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_operator, 1, .inherited = true},
    {field_pattern, 0},
  [3] =
    {field_negation, 0},
    {field_operator, 2, .inherited = true},
    {field_pattern, 1},
  [6] =
    {field_protocol, 0},
  [7] =
    {field_plugin, 0},
  [8] =
    {field_operator, 0, .inherited = true},
    {field_operator, 1, .inherited = true},
  [10] =
    {field_protocol, 0},
    {field_value, 2},
  [12] =
    {field_plugin, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '!') ADVANCE(844);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(846);
      if (lookahead == '%') ADVANCE(1105);
      if (lookahead == '(') ADVANCE(699);
      if (lookahead == '.') ADVANCE(1108);
      if (lookahead == '/') ADVANCE(1144);
      if (lookahead == '0') ADVANCE(714);
      if (lookahead == '1') ADVANCE(711);
      if (lookahead == '2') ADVANCE(709);
      if (lookahead == ':') ADVANCE(1145);
      if (lookahead == '<') ADVANCE(1146);
      if (lookahead == '@') ADVANCE(1107);
      if (lookahead == '[') ADVANCE(1110);
      if (lookahead == '^') ADVANCE(1107);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == 'b') ADVANCE(1116);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(1112);
      if (lookahead == 'e') ADVANCE(1114);
      if (lookahead == 'f') ADVANCE(1113);
      if (lookahead == 'h') ADVANCE(1120);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'j') ADVANCE(1128);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'm') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1118);
      if (lookahead == 'r') ADVANCE(1119);
      if (lookahead == 's') ADVANCE(1126);
      if (lookahead == 't') ADVANCE(1127);
      if (lookahead == 'u') ADVANCE(1117);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == 'x') ADVANCE(1123);
      if (lookahead == '{') ADVANCE(1147);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1129);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '/') ADVANCE(2);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '5') ADVANCE(6);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(686);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(180);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '2') ADVANCE(5);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == '2') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(228);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(214);
      if (lookahead == '1') ADVANCE(210);
      if (lookahead == '2') ADVANCE(200);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '/') ADVANCE(61);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(152);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(1477);
      if (lookahead == 'c') ADVANCE(1260);
      if (lookahead == 'd') ADVANCE(1311);
      if (lookahead == 'e') ADVANCE(1402);
      if (lookahead == 'f') ADVANCE(1360);
      if (lookahead == 'h') ADVANCE(1322);
      if (lookahead == 'i') ADVANCE(1346);
      if (lookahead == 'j') ADVANCE(1467);
      if (lookahead == 'l') ADVANCE(1361);
      if (lookahead == 'm') ADVANCE(1320);
      if (lookahead == 'p') ADVANCE(1261);
      if (lookahead == 'r') ADVANCE(1266);
      if (lookahead == 's') ADVANCE(1376);
      if (lookahead == 't') ADVANCE(1386);
      if (lookahead == 'u') ADVANCE(1259);
      if (lookahead == 'w') ADVANCE(1323);
      if (lookahead == 'x') ADVANCE(1344);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '/') ADVANCE(66);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 79:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '!') ADVANCE(844);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(846);
      if (lookahead == '%') ADVANCE(1105);
      if (lookahead == '(') ADVANCE(699);
      if (lookahead == '.') ADVANCE(1108);
      if (lookahead == '/') ADVANCE(1144);
      if (lookahead == '0') ADVANCE(714);
      if (lookahead == '1') ADVANCE(711);
      if (lookahead == '2') ADVANCE(709);
      if (lookahead == ':') ADVANCE(763);
      if (lookahead == '<') ADVANCE(1146);
      if (lookahead == '@') ADVANCE(1107);
      if (lookahead == '[') ADVANCE(1110);
      if (lookahead == '^') ADVANCE(1107);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == 'b') ADVANCE(1116);
      if (lookahead == 'c') ADVANCE(1111);
      if (lookahead == 'd') ADVANCE(1112);
      if (lookahead == 'e') ADVANCE(1114);
      if (lookahead == 'f') ADVANCE(1113);
      if (lookahead == 'h') ADVANCE(1120);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'j') ADVANCE(1128);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'm') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(1118);
      if (lookahead == 'r') ADVANCE(1119);
      if (lookahead == 's') ADVANCE(1126);
      if (lookahead == 't') ADVANCE(1127);
      if (lookahead == 'u') ADVANCE(1117);
      if (lookahead == 'w') ADVANCE(1121);
      if (lookahead == 'x') ADVANCE(1123);
      if (lookahead == '{') ADVANCE(1147);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1129);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 80:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(673);
      if (lookahead == '0') ADVANCE(331);
      if (lookahead == '1') ADVANCE(328);
      if (lookahead == '2') ADVANCE(326);
      if (lookahead == ':') ADVANCE(1198);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead == '@') ADVANCE(674);
      if (lookahead == '[') ADVANCE(629);
      if (lookahead == '^') ADVANCE(675);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'b') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'h') ADVANCE(640);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'j') ADVANCE(647);
      if (lookahead == 'l') ADVANCE(644);
      if (lookahead == 'm') ADVANCE(639);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == 's') ADVANCE(645);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead == 'u') ADVANCE(637);
      if (lookahead == 'w') ADVANCE(641);
      if (lookahead == 'x') ADVANCE(642);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '%') ADVANCE(657);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == '.') ADVANCE(659);
      if (lookahead == '/') ADVANCE(680);
      if (lookahead == '0') ADVANCE(346);
      if (lookahead == '1') ADVANCE(343);
      if (lookahead == '2') ADVANCE(341);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '@') ADVANCE(674);
      if (lookahead == '[') ADVANCE(664);
      if (lookahead == '^') ADVANCE(675);
      if (lookahead == 'h') ADVANCE(666);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == 'w') ADVANCE(665);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(81)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(669);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(668);
      if (lookahead != 0) ADVANCE(658);
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '%') ADVANCE(657);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == '.') ADVANCE(659);
      if (lookahead == '/') ADVANCE(680);
      if (lookahead == '0') ADVANCE(346);
      if (lookahead == '1') ADVANCE(343);
      if (lookahead == '2') ADVANCE(341);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '@') ADVANCE(674);
      if (lookahead == '[') ADVANCE(664);
      if (lookahead == '^') ADVANCE(675);
      if (lookahead == 'h') ADVANCE(666);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == 'w') ADVANCE(665);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(83)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(669);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(668);
      if (lookahead != 0) ADVANCE(658);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '%') ADVANCE(657);
      if (lookahead == '(') ADVANCE(309);
      if (lookahead == '.') ADVANCE(659);
      if (lookahead == '/') ADVANCE(680);
      if (lookahead == '0') ADVANCE(346);
      if (lookahead == '1') ADVANCE(343);
      if (lookahead == '2') ADVANCE(341);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '@') ADVANCE(674);
      if (lookahead == '[') ADVANCE(664);
      if (lookahead == '^') ADVANCE(675);
      if (lookahead == 'h') ADVANCE(666);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == 'w') ADVANCE(665);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(83)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(669);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(668);
      if (lookahead != 0) ADVANCE(658);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_negation);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_negation);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_regexp_pattern);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_regexp_pattern);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(286);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_regexp_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(290);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_regexp_pattern_no_flag);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '?') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '?') ADVANCE(658);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '?') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1232);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == ':') ADVANCE(1232);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(163);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(167);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '5') ADVANCE(173);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '5') ADVANCE(177);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1233);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == '5') ADVANCE(185);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == '5') ADVANCE(192);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(189);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(196);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1194);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '5') ADVANCE(201);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '5') ADVANCE(208);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(205);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(212);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1239);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1197);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1234);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1234);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1234);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1234);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1235);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1235);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1235);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1235);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1236);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1236);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1236);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1236);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1237);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1237);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1237);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1237);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1238);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_local_path_windows);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_local_path_windows);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_macro_pattern);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1240);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(685);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead == '/') ADVANCE(300);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == ':') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == ':') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(620);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == ':') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(306);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(658);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(307);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == ':') ADVANCE(1172);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == ':') ADVANCE(1172);
      if (lookahead == '>') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(683);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(683);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '>') ADVANCE(658);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == ':') ADVANCE(1173);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == ':') ADVANCE(1174);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == ':') ADVANCE(1174);
      if (lookahead == '}') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(684);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(684);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '}') ADVANCE(658);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == ':') ADVANCE(1175);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(473);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '2') ADVANCE(468);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '2') ADVANCE(472);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(327);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(330);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(333);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(649);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1181);
      if (lookahead == '?') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(619);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(337);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(342);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(345);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(348);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(350);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(355);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '?') ADVANCE(658);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '5') ADVANCE(361);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(106);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '0') ADVANCE(358);
      if (lookahead == '1') ADVANCE(357);
      if (lookahead == '2') ADVANCE(354);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(161);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '0') ADVANCE(340);
      if (lookahead == '1') ADVANCE(339);
      if (lookahead == '2') ADVANCE(336);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '0') ADVANCE(170);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == '2') ADVANCE(162);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == '1') ADVANCE(363);
      if (lookahead == '2') ADVANCE(360);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == '0') ADVANCE(353);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(349);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'A') ADVANCE(553);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(470);
      if (lookahead == 'D') ADVANCE(460);
      if (lookahead == 'H') ADVANCE(455);
      if (lookahead == 'M') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(418);
      if (lookahead == 'T') ADVANCE(616);
      if (lookahead == 'W') ADVANCE(567);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'A') ADVANCE(553);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(470);
      if (lookahead == 'D') ADVANCE(460);
      if (lookahead == 'H') ADVANCE(455);
      if (lookahead == 'M') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(418);
      if (lookahead == 'T') ADVANCE(616);
      if (lookahead == 'W') ADVANCE(567);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'A') ADVANCE(553);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'P') ADVANCE(563);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'C') ADVANCE(539);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'C') ADVANCE(401);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'F') ADVANCE(532);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'H') ADVANCE(570);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'O') ADVANCE(555);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'P') ADVANCE(566);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'P') ADVANCE(403);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'S') ADVANCE(419);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'S') ADVANCE(597);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(610);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(498);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'b') ADVANCE(498);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == 'g') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(694);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(615);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(377);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(486);
      if (lookahead == 'f') ADVANCE(444);
      if (lookahead == 'p') ADVANCE(500);
      if (lookahead == 'q') ADVANCE(373);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'f') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'g') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'g') ADVANCE(478);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(531);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(600);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'k') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'k') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(431);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'm') ADVANCE(459);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(584);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(688);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(579);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(584);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(551);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(542);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(543);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'u') ADVANCE(428);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'u') ADVANCE(578);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'w') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'w') ADVANCE(462);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'w') ADVANCE(520);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'w') ADVANCE(399);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'x') ADVANCE(615);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'y') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == 'y') ADVANCE(548);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1181);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(334);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == 'c') ADVANCE(623);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == 'h') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1231);
      if (lookahead == ']') ADVANCE(155);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1231);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1242);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1242);
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1242);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1242);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 'x') ADVANCE(414);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1242);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1242);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead == 's') ADVANCE(696);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'k') ADVANCE(475);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 'l') ADVANCE(577);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(523);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(1243);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(620);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '?') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(143);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(671);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(670);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 't') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(359);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(652);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 's') ADVANCE(671);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(658);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(685);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '?') ADVANCE(658);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(144);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(681);
      if (lookahead == ':') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(678);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(297);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(125);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == ':') ADVANCE(1241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(678);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(679);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == ':') ADVANCE(1241);
      if (lookahead == '\\') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(679);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(679);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == ':') ADVANCE(1509);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_protocol_name);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '2') ADVANCE(468);
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '2') ADVANCE(472);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(1435);
      if (lookahead == '2') ADVANCE(1353);
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(1435);
      if (lookahead == '2') ADVANCE(1357);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'R') ADVANCE(393);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'R') ADVANCE(1270);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'e') ADVANCE(1449);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_plugin_full_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ')') ADVANCE(844);
      if (lookahead == '/') ADVANCE(700);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ')') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(701);
      if (lookahead == ':') ADVANCE(698);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ')') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ')') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '-') ADVANCE(954);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(952);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(952);
      if (lookahead == ':') ADVANCE(1157);
      if (lookahead == 's') ADVANCE(706);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(953);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '2') ADVANCE(953);
      if (lookahead == ':') ADVANCE(1157);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '5') ADVANCE(710);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(713);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(715);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(847);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(827);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '?') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(1130);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(717);
      if (lookahead == '?') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(718);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '5') ADVANCE(721);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(722);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '5') ADVANCE(728);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(729);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(725);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(732);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(1106);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '5') ADVANCE(737);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(759);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '5') ADVANCE(742);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(759);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(759);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(759);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(759);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(848);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '5') ADVANCE(747);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(848);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(848);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(848);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(848);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(757);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '5') ADVANCE(752);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(757);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(757);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(757);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '.') ADVANCE(757);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '0') ADVANCE(755);
      if (lookahead == '1') ADVANCE(754);
      if (lookahead == '2') ADVANCE(751);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '0') ADVANCE(745);
      if (lookahead == '1') ADVANCE(744);
      if (lookahead == '2') ADVANCE(741);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '0') ADVANCE(727);
      if (lookahead == '1') ADVANCE(723);
      if (lookahead == '2') ADVANCE(719);
      if (lookahead == 'f') ADVANCE(767);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(772);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '0') ADVANCE(806);
      if (lookahead == '1') ADVANCE(805);
      if (lookahead == '2') ADVANCE(761);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '0') ADVANCE(734);
      if (lookahead == '1') ADVANCE(730);
      if (lookahead == '2') ADVANCE(720);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(817);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '5') ADVANCE(803);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(758);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '\\') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == 'f') ADVANCE(766);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == 'f') ADVANCE(765);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(843);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(760);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(840);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(840);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(840);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(840);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(762);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(762);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(762);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(762);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(837);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(837);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(837);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(837);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(771);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(771);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(771);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(771);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(839);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(839);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(839);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(839);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(773);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(773);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(773);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(773);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(841);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(841);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(841);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(841);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(774);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(774);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(774);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(774);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(842);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(775);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(775);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(775);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(775);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(776);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(776);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(776);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ':') ADVANCE(776);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '?') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '\\') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == ']') ADVANCE(806);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1168);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1143);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(1074);
      if (lookahead == 't') ADVANCE(1093);
      if (lookahead == 'w') ADVANCE(1064);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '0') ADVANCE(750);
      if (lookahead == '1') ADVANCE(749);
      if (lookahead == '2') ADVANCE(746);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '0') ADVANCE(740);
      if (lookahead == '1') ADVANCE(739);
      if (lookahead == '2') ADVANCE(736);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '0') ADVANCE(1142);
      if (lookahead == '1') ADVANCE(1140);
      if (lookahead == '2') ADVANCE(850);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == '5') ADVANCE(1139);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'B') ADVANCE(1010);
      if (lookahead == 'C') ADVANCE(950);
      if (lookahead == 'D') ADVANCE(940);
      if (lookahead == 'H') ADVANCE(941);
      if (lookahead == 'M') ADVANCE(933);
      if (lookahead == 'P') ADVANCE(1045);
      if (lookahead == 'R') ADVANCE(931);
      if (lookahead == 'S') ADVANCE(898);
      if (lookahead == 'T') ADVANCE(1103);
      if (lookahead == 'W') ADVANCE(1050);
      if (lookahead == 'p') ADVANCE(1015);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'B') ADVANCE(1010);
      if (lookahead == 'C') ADVANCE(950);
      if (lookahead == 'D') ADVANCE(940);
      if (lookahead == 'H') ADVANCE(941);
      if (lookahead == 'M') ADVANCE(933);
      if (lookahead == 'P') ADVANCE(1045);
      if (lookahead == 'R') ADVANCE(931);
      if (lookahead == 'S') ADVANCE(898);
      if (lookahead == 'T') ADVANCE(1103);
      if (lookahead == 'W') ADVANCE(1050);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'B') ADVANCE(1010);
      if (lookahead == 'P') ADVANCE(1045);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'C') ADVANCE(1021);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'C') ADVANCE(880);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'F') ADVANCE(1014);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'F') ADVANCE(962);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'H') ADVANCE(1053);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'O') ADVANCE(1038);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'P') ADVANCE(1049);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'P') ADVANCE(881);
      if (lookahead == 'R') ADVANCE(932);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'R') ADVANCE(932);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'R') ADVANCE(874);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'S') ADVANCE(899);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'S') ADVANCE(1083);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(991);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(909);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1102);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(896);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(902);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1097);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(901);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'y') ADVANCE(980);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1055);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1077);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(983);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1048);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(976);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1051);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(895);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1085);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'b') ADVANCE(980);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'b') ADVANCE(877);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(1107);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == 't') ADVANCE(947);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(970);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(969);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(978);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(978);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(879);
      if (lookahead == 'g') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(1054);
      if (lookahead == 'p') ADVANCE(937);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(1054);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(1068);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'c') ADVANCE(918);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(1102);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(856);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(967);
      if (lookahead == 'f') ADVANCE(924);
      if (lookahead == 'p') ADVANCE(982);
      if (lookahead == 'q') ADVANCE(852);
      if (lookahead == 's') ADVANCE(851);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(915);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(923);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(929);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(936);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1107);
      if (lookahead == 't') ADVANCE(926);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(857);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(863);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1046);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1056);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1039);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1073);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1041);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(997);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == 'u') ADVANCE(985);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1042);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1068);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'f') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'f') ADVANCE(958);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'g') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'g') ADVANCE(959);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(862);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(1012);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(993);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(883);
      if (lookahead == 'o') ADVANCE(1011);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(926);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(1088);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(1089);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'h') ADVANCE(1090);
      if (lookahead == 'p') ADVANCE(1040);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(855);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1022);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1006);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(989);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(987);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(927);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1065);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1035);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1052);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1018);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'k') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'k') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'k') ADVANCE(963);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(853);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(911);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(889);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(1096);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(1132);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(1019);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(875);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(977);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(869);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(927);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(920);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(1087);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(936);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'm') ADVANCE(973);
      if (lookahead == 't') ADVANCE(1023);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'm') ADVANCE(914);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'm') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'm') ADVANCE(939);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(858);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(1020);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(902);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(913);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(1070);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(981);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(1066);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(1068);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(1003);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(1044);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'n') ADVANCE(882);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(1101);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(891);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(903);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(971);
      if (lookahead == 'r') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(902);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(1063);
      if (lookahead == 't') ADVANCE(1079);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(1039);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(1002);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(1032);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(999);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(905);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(972);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1040);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(951);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(708);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1131);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1062);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(930);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1068);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1034);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(988);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(1091);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(944);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1100);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(938);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1007);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1017);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1067);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(925);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(966);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(908);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(926);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(866);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(853);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(859);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(854);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(1078);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(1131);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(1086);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(919);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 's') ADVANCE(935);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(946);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(948);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1095);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1076);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(872);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1031);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(965);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1028);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1033);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1029);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1024);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(917);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1094);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(926);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1080);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1081);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(1082);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 't') ADVANCE(968);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'u') ADVANCE(945);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'u') ADVANCE(1005);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'u') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'u') ADVANCE(1061);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'u') ADVANCE(907);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(1001);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'x') ADVANCE(1102);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'y') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == 'y') ADVANCE(1030);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(1107);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(717);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(718);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(718);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(829);
      if (lookahead == ']') ADVANCE(1142);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(829);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(764);
      if (lookahead == 'a') ADVANCE(1133);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead == 's') ADVANCE(1059);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(764);
      if (lookahead == 'e') ADVANCE(1135);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead == 'o') ADVANCE(1099);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(764);
      if (lookahead == 'i') ADVANCE(974);
      if (lookahead == 'o') ADVANCE(1043);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(866);
      if (lookahead == 'x') ADVANCE(894);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(764);
      if (lookahead == 't') ADVANCE(1075);
      if (lookahead == 'u') ADVANCE(1069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(764);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'a') ADVANCE(1107);
      if (lookahead == 'r') ADVANCE(975);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == 'i') ADVANCE(1030);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'e') ADVANCE(868);
      if (lookahead == 'o') ADVANCE(1063);
      if (lookahead == 't') ADVANCE(990);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'e') ADVANCE(957);
      if (lookahead == 'h') ADVANCE(964);
      if (lookahead == 's') ADVANCE(1131);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'e') ADVANCE(1071);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'f') ADVANCE(958);
      if (lookahead == 'h') ADVANCE(1013);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead == 'p') ADVANCE(1040);
      if (lookahead == 'r') ADVANCE(870);
      if (lookahead == 's') ADVANCE(1009);
      if (lookahead == 't') ADVANCE(1025);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'g') ADVANCE(995);
      if (lookahead == 'n') ADVANCE(893);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'i') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(897);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'k') ADVANCE(956);
      if (lookahead == 'n') ADVANCE(955);
      if (lookahead == 'o') ADVANCE(891);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(972);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(1005);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == 's') ADVANCE(853);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(828);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(827);
      if (lookahead == '?') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1130);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(1157);
      if (lookahead == 's') ADVANCE(1132);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(1157);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == 'c') ADVANCE(1134);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == 'h') ADVANCE(912);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == 'l') ADVANCE(928);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1159);
      if (lookahead == ':') ADVANCE(834);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1107);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1160);
      if (lookahead == ':') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1159);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1160);
      if (lookahead == ':') ADVANCE(1150);
      if (lookahead == '\\') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1151);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(845);
      if (lookahead == ':') ADVANCE(758);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1161);
      if (lookahead == ':') ADVANCE(1153);
      if (lookahead == '>') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1146);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1162);
      if (lookahead == ':') ADVANCE(1154);
      if (lookahead == '}') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1147);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1168);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1165);
      if (lookahead == '\\') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1149);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1165);
      if (lookahead == '\\') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1150);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1158);
      if (lookahead == ':') ADVANCE(1150);
      if (lookahead == '\\') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1151);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1158);
      if (lookahead == ':') ADVANCE(1149);
      if (lookahead == '\\') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1152);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1164);
      if (lookahead == '>') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1153);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1166);
      if (lookahead == '}') ADVANCE(844);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1154);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1150);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1152);
      if (lookahead == ':') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1151);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '/') ADVANCE(1148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(844);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ':') ADVANCE(1168);
      if (lookahead == 'i') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1159);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ':') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1159);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ':') ADVANCE(1167);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1160);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ':') ADVANCE(1164);
      if (lookahead == '>') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1161);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ':') ADVANCE(1166);
      if (lookahead == '}') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1162);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == ':') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1152);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '>') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1164);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == 'i') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1168);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '}') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1166);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1167);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1168);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_operator_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1149);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1170);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '/') ADVANCE(1170);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1171);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(1173);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1172);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '>') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1173);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(1175);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1174);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1175);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1435);
      if (lookahead == '2') ADVANCE(1353);
      if (lookahead == 's') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1435);
      if (lookahead == '2') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1435);
      if (lookahead == 's') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1230);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '?') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1181);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1195);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '5') ADVANCE(1184);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1195);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1195);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1195);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1195);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1196);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '5') ADVANCE(1189);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1196);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1196);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1196);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1196);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '0') ADVANCE(191);
      if (lookahead == '1') ADVANCE(187);
      if (lookahead == '2') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(220);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '0') ADVANCE(1192);
      if (lookahead == '1') ADVANCE(1191);
      if (lookahead == '2') ADVANCE(1188);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == '1') ADVANCE(175);
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '0') ADVANCE(1187);
      if (lookahead == '1') ADVANCE(1186);
      if (lookahead == '2') ADVANCE(1183);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead == '1') ADVANCE(194);
      if (lookahead == '2') ADVANCE(184);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1193);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1205);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1205);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1205);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1205);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1200);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1200);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1200);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1200);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1201);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1201);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1201);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1201);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1202);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1202);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1202);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1202);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1203);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1203);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1203);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1203);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1204);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1204);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1204);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ':') ADVANCE(1204);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '?') ADVANCE(1240);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(151);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(1511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(1244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1241);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1240);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1241);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'A') ADVANCE(1444);
      if (lookahead == 'B') ADVANCE(1418);
      if (lookahead == 'C') ADVANCE(1355);
      if (lookahead == 'D') ADVANCE(1342);
      if (lookahead == 'H') ADVANCE(1335);
      if (lookahead == 'M') ADVANCE(1333);
      if (lookahead == 'P') ADVANCE(1454);
      if (lookahead == 'R') ADVANCE(1339);
      if (lookahead == 'S') ADVANCE(1296);
      if (lookahead == 'T') ADVANCE(1508);
      if (lookahead == 'W') ADVANCE(1459);
      if (lookahead == 'p') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'A') ADVANCE(1444);
      if (lookahead == 'B') ADVANCE(1418);
      if (lookahead == 'C') ADVANCE(1355);
      if (lookahead == 'D') ADVANCE(1342);
      if (lookahead == 'H') ADVANCE(1335);
      if (lookahead == 'M') ADVANCE(1333);
      if (lookahead == 'P') ADVANCE(1454);
      if (lookahead == 'R') ADVANCE(1339);
      if (lookahead == 'S') ADVANCE(1296);
      if (lookahead == 'T') ADVANCE(1508);
      if (lookahead == 'W') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'A') ADVANCE(1444);
      if (lookahead == 'B') ADVANCE(1418);
      if (lookahead == 'P') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'C') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'C') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'F') ADVANCE(1423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'F') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'H') ADVANCE(1461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'O') ADVANCE(1446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'P') ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'P') ADVANCE(1279);
      if (lookahead == 'R') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'R') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'S') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'S') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1289);
      if (lookahead == 'i') ADVANCE(1438);
      if (lookahead == 's') ADVANCE(1467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1287);
      if (lookahead == 'i') ADVANCE(1439);
      if (lookahead == 'l') ADVANCE(1498);
      if (lookahead == 'r') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1503);
      if (lookahead == 'e') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1480);
      if (lookahead == 'y') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'b') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'b') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(1268);
      if (lookahead == 't') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1384);
      if (lookahead == 't') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1277);
      if (lookahead == 'g') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1462);
      if (lookahead == 'p') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1373);
      if (lookahead == 'f') ADVANCE(1327);
      if (lookahead == 'p') ADVANCE(1389);
      if (lookahead == 'q') ADVANCE(1246);
      if (lookahead == 's') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == 't') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1395);
      if (lookahead == 'i') ADVANCE(1466);
      if (lookahead == 'o') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead == 'o') ADVANCE(1471);
      if (lookahead == 't') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead == 'h') ADVANCE(1370);
      if (lookahead == 's') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1445);
      if (lookahead == 'u') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'f') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'f') ADVANCE(1364);
      if (lookahead == 'h') ADVANCE(1420);
      if (lookahead == 'i') ADVANCE(1410);
      if (lookahead == 'p') ADVANCE(1448);
      if (lookahead == 'r') ADVANCE(1267);
      if (lookahead == 's') ADVANCE(1421);
      if (lookahead == 't') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'f') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'g') ADVANCE(1406);
      if (lookahead == 'n') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'g') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'g') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1281);
      if (lookahead == 'o') ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1496);
      if (lookahead == 'p') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1381);
      if (lookahead == 'o') ADVANCE(1451);
      if (lookahead == 'r') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1405);
      if (lookahead == 'o') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(1362);
      if (lookahead == 'n') ADVANCE(1359);
      if (lookahead == 'o') ADVANCE(1288);
      if (lookahead == 't') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1468);
      if (lookahead == 'p') ADVANCE(1379);
      if (lookahead == 'r') ADVANCE(1284);
      if (lookahead == 'u') ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(1380);
      if (lookahead == 't') ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1262);
      if (lookahead == 'x') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1378);
      if (lookahead == 'r') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1471);
      if (lookahead == 't') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1483);
      if (lookahead == 'u') ADVANCE(1478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'x') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'y') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'y') ADVANCE(1439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1509);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1511);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 79},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 80},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 81},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 65},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 82},
  [22] = {.lex_state = 82},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_negation] = ACTIONS(1),
    [sym_regexp_pattern] = ACTIONS(1),
    [sym_regexp_pattern_no_flag] = ACTIONS(1),
    [sym_dollar_regexp] = ACTIONS(1),
    [sym_port_pattern] = ACTIONS(1),
    [sym_url_pattern] = ACTIONS(1),
    [sym_wildcard_pattern] = ACTIONS(1),
    [sym_ipv6_with_brackets] = ACTIONS(1),
    [sym_ipv4_pattern] = ACTIONS(1),
    [sym_ipv6_pattern] = ACTIONS(1),
    [sym_local_path_windows] = ACTIONS(1),
    [sym_local_path_unix] = ACTIONS(1),
    [sym_macro_pattern] = ACTIONS(1),
    [sym_at_reference] = ACTIONS(1),
    [sym_plugin_var] = ACTIONS(1),
    [sym_domain_pattern] = ACTIONS(1),
    [anon_sym_COLON_SLASH_SLASH] = ACTIONS(1),
    [sym_protocol_name] = ACTIONS(1),
    [sym_plugin_full_name] = ACTIONS(1),
    [sym_operator_value] = ACTIONS(1),
    [sym_simple_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__line] = STATE(10),
    [sym_rule] = STATE(10),
    [sym__pattern] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_negation] = ACTIONS(7),
    [sym_regexp_pattern] = ACTIONS(9),
    [sym_regexp_pattern_no_flag] = ACTIONS(9),
    [sym_dollar_regexp] = ACTIONS(11),
    [sym_port_pattern] = ACTIONS(9),
    [sym_url_pattern] = ACTIONS(11),
    [sym_wildcard_pattern] = ACTIONS(9),
    [sym_ipv6_with_brackets] = ACTIONS(9),
    [sym_ipv4_pattern] = ACTIONS(9),
    [sym_ipv6_pattern] = ACTIONS(9),
    [sym_local_path_windows] = ACTIONS(11),
    [sym_local_path_unix] = ACTIONS(9),
    [sym_macro_pattern] = ACTIONS(9),
    [sym_at_reference] = ACTIONS(9),
    [sym_plugin_var] = ACTIONS(9),
    [sym_domain_pattern] = ACTIONS(9),
  },
  [2] = {
    [sym__operator] = STATE(9),
    [sym_protocol_operator] = STATE(9),
    [sym_plugin_operator] = STATE(9),
    [aux_sym_rule_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym__line_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(13),
    [anon_sym_CR] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [sym_negation] = ACTIONS(15),
    [sym_regexp_pattern] = ACTIONS(15),
    [sym_regexp_pattern_no_flag] = ACTIONS(15),
    [sym_dollar_regexp] = ACTIONS(13),
    [sym_port_pattern] = ACTIONS(15),
    [sym_url_pattern] = ACTIONS(13),
    [sym_wildcard_pattern] = ACTIONS(15),
    [sym_ipv6_with_brackets] = ACTIONS(15),
    [sym_ipv4_pattern] = ACTIONS(15),
    [sym_ipv6_pattern] = ACTIONS(15),
    [sym_local_path_windows] = ACTIONS(13),
    [sym_local_path_unix] = ACTIONS(15),
    [sym_macro_pattern] = ACTIONS(15),
    [sym_at_reference] = ACTIONS(15),
    [sym_plugin_var] = ACTIONS(15),
    [sym_domain_pattern] = ACTIONS(15),
    [sym_protocol_name] = ACTIONS(21),
    [sym_plugin_full_name] = ACTIONS(23),
    [sym_simple_value] = ACTIONS(25),
  },
  [3] = {
    [sym__operator] = STATE(9),
    [sym_protocol_operator] = STATE(9),
    [sym_plugin_operator] = STATE(9),
    [aux_sym_rule_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(27),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(27),
    [sym_negation] = ACTIONS(29),
    [sym_regexp_pattern] = ACTIONS(29),
    [sym_regexp_pattern_no_flag] = ACTIONS(29),
    [sym_dollar_regexp] = ACTIONS(27),
    [sym_port_pattern] = ACTIONS(29),
    [sym_url_pattern] = ACTIONS(27),
    [sym_wildcard_pattern] = ACTIONS(29),
    [sym_ipv6_with_brackets] = ACTIONS(29),
    [sym_ipv4_pattern] = ACTIONS(29),
    [sym_ipv6_pattern] = ACTIONS(29),
    [sym_local_path_windows] = ACTIONS(27),
    [sym_local_path_unix] = ACTIONS(29),
    [sym_macro_pattern] = ACTIONS(29),
    [sym_at_reference] = ACTIONS(29),
    [sym_plugin_var] = ACTIONS(29),
    [sym_domain_pattern] = ACTIONS(29),
    [sym_protocol_name] = ACTIONS(31),
    [sym_plugin_full_name] = ACTIONS(34),
    [sym_simple_value] = ACTIONS(37),
  },
  [4] = {
    [sym__operator] = STATE(9),
    [sym_protocol_operator] = STATE(9),
    [sym_plugin_operator] = STATE(9),
    [aux_sym_rule_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym__line_token1] = ACTIONS(42),
    [sym_comment] = ACTIONS(40),
    [anon_sym_CR] = ACTIONS(44),
    [anon_sym_LF] = ACTIONS(46),
    [sym_negation] = ACTIONS(42),
    [sym_regexp_pattern] = ACTIONS(42),
    [sym_regexp_pattern_no_flag] = ACTIONS(42),
    [sym_dollar_regexp] = ACTIONS(40),
    [sym_port_pattern] = ACTIONS(42),
    [sym_url_pattern] = ACTIONS(40),
    [sym_wildcard_pattern] = ACTIONS(42),
    [sym_ipv6_with_brackets] = ACTIONS(42),
    [sym_ipv4_pattern] = ACTIONS(42),
    [sym_ipv6_pattern] = ACTIONS(42),
    [sym_local_path_windows] = ACTIONS(40),
    [sym_local_path_unix] = ACTIONS(42),
    [sym_macro_pattern] = ACTIONS(42),
    [sym_at_reference] = ACTIONS(42),
    [sym_plugin_var] = ACTIONS(42),
    [sym_domain_pattern] = ACTIONS(42),
    [sym_protocol_name] = ACTIONS(21),
    [sym_plugin_full_name] = ACTIONS(23),
    [sym_simple_value] = ACTIONS(25),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [aux_sym__line_token1] = ACTIONS(50),
    [sym_comment] = ACTIONS(48),
    [anon_sym_CR] = ACTIONS(50),
    [anon_sym_LF] = ACTIONS(48),
    [sym_negation] = ACTIONS(50),
    [sym_regexp_pattern] = ACTIONS(50),
    [sym_regexp_pattern_no_flag] = ACTIONS(50),
    [sym_dollar_regexp] = ACTIONS(50),
    [sym_port_pattern] = ACTIONS(50),
    [sym_url_pattern] = ACTIONS(50),
    [sym_wildcard_pattern] = ACTIONS(50),
    [sym_ipv6_with_brackets] = ACTIONS(50),
    [sym_ipv4_pattern] = ACTIONS(50),
    [sym_ipv6_pattern] = ACTIONS(50),
    [sym_local_path_windows] = ACTIONS(50),
    [sym_local_path_unix] = ACTIONS(50),
    [sym_macro_pattern] = ACTIONS(50),
    [sym_at_reference] = ACTIONS(50),
    [sym_plugin_var] = ACTIONS(50),
    [sym_domain_pattern] = ACTIONS(50),
    [sym_protocol_name] = ACTIONS(50),
    [sym_plugin_full_name] = ACTIONS(50),
    [sym_operator_value] = ACTIONS(52),
    [sym_simple_value] = ACTIONS(50),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym__line_token1] = ACTIONS(56),
    [sym_comment] = ACTIONS(54),
    [anon_sym_CR] = ACTIONS(56),
    [anon_sym_LF] = ACTIONS(54),
    [sym_negation] = ACTIONS(56),
    [sym_regexp_pattern] = ACTIONS(56),
    [sym_regexp_pattern_no_flag] = ACTIONS(56),
    [sym_dollar_regexp] = ACTIONS(56),
    [sym_port_pattern] = ACTIONS(56),
    [sym_url_pattern] = ACTIONS(56),
    [sym_wildcard_pattern] = ACTIONS(56),
    [sym_ipv6_with_brackets] = ACTIONS(56),
    [sym_ipv4_pattern] = ACTIONS(56),
    [sym_ipv6_pattern] = ACTIONS(56),
    [sym_local_path_windows] = ACTIONS(56),
    [sym_local_path_unix] = ACTIONS(56),
    [sym_macro_pattern] = ACTIONS(56),
    [sym_at_reference] = ACTIONS(56),
    [sym_plugin_var] = ACTIONS(56),
    [sym_domain_pattern] = ACTIONS(56),
    [sym_protocol_name] = ACTIONS(56),
    [sym_plugin_full_name] = ACTIONS(56),
    [sym_operator_value] = ACTIONS(58),
    [sym_simple_value] = ACTIONS(56),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym__line_token1] = ACTIONS(62),
    [sym_comment] = ACTIONS(60),
    [anon_sym_CR] = ACTIONS(62),
    [anon_sym_LF] = ACTIONS(60),
    [sym_negation] = ACTIONS(62),
    [sym_regexp_pattern] = ACTIONS(62),
    [sym_regexp_pattern_no_flag] = ACTIONS(62),
    [sym_dollar_regexp] = ACTIONS(60),
    [sym_port_pattern] = ACTIONS(62),
    [sym_url_pattern] = ACTIONS(60),
    [sym_wildcard_pattern] = ACTIONS(62),
    [sym_ipv6_with_brackets] = ACTIONS(62),
    [sym_ipv4_pattern] = ACTIONS(62),
    [sym_ipv6_pattern] = ACTIONS(62),
    [sym_local_path_windows] = ACTIONS(60),
    [sym_local_path_unix] = ACTIONS(62),
    [sym_macro_pattern] = ACTIONS(62),
    [sym_at_reference] = ACTIONS(62),
    [sym_plugin_var] = ACTIONS(62),
    [sym_domain_pattern] = ACTIONS(62),
    [sym_protocol_name] = ACTIONS(60),
    [sym_plugin_full_name] = ACTIONS(60),
    [sym_simple_value] = ACTIONS(62),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym__line_token1] = ACTIONS(66),
    [sym_comment] = ACTIONS(64),
    [anon_sym_CR] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(64),
    [sym_negation] = ACTIONS(66),
    [sym_regexp_pattern] = ACTIONS(66),
    [sym_regexp_pattern_no_flag] = ACTIONS(66),
    [sym_dollar_regexp] = ACTIONS(64),
    [sym_port_pattern] = ACTIONS(66),
    [sym_url_pattern] = ACTIONS(64),
    [sym_wildcard_pattern] = ACTIONS(66),
    [sym_ipv6_with_brackets] = ACTIONS(66),
    [sym_ipv4_pattern] = ACTIONS(66),
    [sym_ipv6_pattern] = ACTIONS(66),
    [sym_local_path_windows] = ACTIONS(64),
    [sym_local_path_unix] = ACTIONS(66),
    [sym_macro_pattern] = ACTIONS(66),
    [sym_at_reference] = ACTIONS(66),
    [sym_plugin_var] = ACTIONS(66),
    [sym_domain_pattern] = ACTIONS(66),
    [sym_protocol_name] = ACTIONS(64),
    [sym_plugin_full_name] = ACTIONS(64),
    [sym_simple_value] = ACTIONS(66),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [aux_sym__line_token1] = ACTIONS(70),
    [sym_comment] = ACTIONS(68),
    [anon_sym_CR] = ACTIONS(70),
    [anon_sym_LF] = ACTIONS(68),
    [sym_negation] = ACTIONS(70),
    [sym_regexp_pattern] = ACTIONS(70),
    [sym_regexp_pattern_no_flag] = ACTIONS(70),
    [sym_dollar_regexp] = ACTIONS(68),
    [sym_port_pattern] = ACTIONS(70),
    [sym_url_pattern] = ACTIONS(68),
    [sym_wildcard_pattern] = ACTIONS(70),
    [sym_ipv6_with_brackets] = ACTIONS(70),
    [sym_ipv4_pattern] = ACTIONS(70),
    [sym_ipv6_pattern] = ACTIONS(70),
    [sym_local_path_windows] = ACTIONS(68),
    [sym_local_path_unix] = ACTIONS(70),
    [sym_macro_pattern] = ACTIONS(70),
    [sym_at_reference] = ACTIONS(70),
    [sym_plugin_var] = ACTIONS(70),
    [sym_domain_pattern] = ACTIONS(70),
    [sym_protocol_name] = ACTIONS(68),
    [sym_plugin_full_name] = ACTIONS(68),
    [sym_simple_value] = ACTIONS(70),
  },
  [10] = {
    [sym__line] = STATE(11),
    [sym_rule] = STATE(11),
    [sym__pattern] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(72),
    [aux_sym__line_token1] = ACTIONS(74),
    [sym_comment] = ACTIONS(74),
    [sym_negation] = ACTIONS(7),
    [sym_regexp_pattern] = ACTIONS(9),
    [sym_regexp_pattern_no_flag] = ACTIONS(9),
    [sym_dollar_regexp] = ACTIONS(11),
    [sym_port_pattern] = ACTIONS(9),
    [sym_url_pattern] = ACTIONS(11),
    [sym_wildcard_pattern] = ACTIONS(9),
    [sym_ipv6_with_brackets] = ACTIONS(9),
    [sym_ipv4_pattern] = ACTIONS(9),
    [sym_ipv6_pattern] = ACTIONS(9),
    [sym_local_path_windows] = ACTIONS(11),
    [sym_local_path_unix] = ACTIONS(9),
    [sym_macro_pattern] = ACTIONS(9),
    [sym_at_reference] = ACTIONS(9),
    [sym_plugin_var] = ACTIONS(9),
    [sym_domain_pattern] = ACTIONS(9),
  },
  [11] = {
    [sym__line] = STATE(11),
    [sym_rule] = STATE(11),
    [sym__pattern] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym__line_token1] = ACTIONS(78),
    [sym_comment] = ACTIONS(78),
    [sym_negation] = ACTIONS(81),
    [sym_regexp_pattern] = ACTIONS(84),
    [sym_regexp_pattern_no_flag] = ACTIONS(84),
    [sym_dollar_regexp] = ACTIONS(87),
    [sym_port_pattern] = ACTIONS(84),
    [sym_url_pattern] = ACTIONS(87),
    [sym_wildcard_pattern] = ACTIONS(84),
    [sym_ipv6_with_brackets] = ACTIONS(84),
    [sym_ipv4_pattern] = ACTIONS(84),
    [sym_ipv6_pattern] = ACTIONS(84),
    [sym_local_path_windows] = ACTIONS(87),
    [sym_local_path_unix] = ACTIONS(84),
    [sym_macro_pattern] = ACTIONS(84),
    [sym_at_reference] = ACTIONS(84),
    [sym_plugin_var] = ACTIONS(84),
    [sym_domain_pattern] = ACTIONS(84),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym__line_token1] = ACTIONS(92),
    [sym_comment] = ACTIONS(90),
    [anon_sym_LF] = ACTIONS(94),
    [sym_negation] = ACTIONS(92),
    [sym_regexp_pattern] = ACTIONS(92),
    [sym_regexp_pattern_no_flag] = ACTIONS(92),
    [sym_dollar_regexp] = ACTIONS(90),
    [sym_port_pattern] = ACTIONS(92),
    [sym_url_pattern] = ACTIONS(90),
    [sym_wildcard_pattern] = ACTIONS(92),
    [sym_ipv6_with_brackets] = ACTIONS(92),
    [sym_ipv4_pattern] = ACTIONS(92),
    [sym_ipv6_pattern] = ACTIONS(92),
    [sym_local_path_windows] = ACTIONS(90),
    [sym_local_path_unix] = ACTIONS(92),
    [sym_macro_pattern] = ACTIONS(92),
    [sym_at_reference] = ACTIONS(92),
    [sym_plugin_var] = ACTIONS(92),
    [sym_domain_pattern] = ACTIONS(92),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym__line_token1] = ACTIONS(98),
    [sym_comment] = ACTIONS(96),
    [anon_sym_LF] = ACTIONS(100),
    [sym_negation] = ACTIONS(98),
    [sym_regexp_pattern] = ACTIONS(98),
    [sym_regexp_pattern_no_flag] = ACTIONS(98),
    [sym_dollar_regexp] = ACTIONS(96),
    [sym_port_pattern] = ACTIONS(98),
    [sym_url_pattern] = ACTIONS(96),
    [sym_wildcard_pattern] = ACTIONS(98),
    [sym_ipv6_with_brackets] = ACTIONS(98),
    [sym_ipv4_pattern] = ACTIONS(98),
    [sym_ipv6_pattern] = ACTIONS(98),
    [sym_local_path_windows] = ACTIONS(96),
    [sym_local_path_unix] = ACTIONS(98),
    [sym_macro_pattern] = ACTIONS(98),
    [sym_at_reference] = ACTIONS(98),
    [sym_plugin_var] = ACTIONS(98),
    [sym_domain_pattern] = ACTIONS(98),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym__line_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(96),
    [sym_negation] = ACTIONS(98),
    [sym_regexp_pattern] = ACTIONS(98),
    [sym_regexp_pattern_no_flag] = ACTIONS(98),
    [sym_dollar_regexp] = ACTIONS(96),
    [sym_port_pattern] = ACTIONS(98),
    [sym_url_pattern] = ACTIONS(96),
    [sym_wildcard_pattern] = ACTIONS(98),
    [sym_ipv6_with_brackets] = ACTIONS(98),
    [sym_ipv4_pattern] = ACTIONS(98),
    [sym_ipv6_pattern] = ACTIONS(98),
    [sym_local_path_windows] = ACTIONS(96),
    [sym_local_path_unix] = ACTIONS(98),
    [sym_macro_pattern] = ACTIONS(98),
    [sym_at_reference] = ACTIONS(98),
    [sym_plugin_var] = ACTIONS(98),
    [sym_domain_pattern] = ACTIONS(98),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym__line_token1] = ACTIONS(90),
    [sym_comment] = ACTIONS(90),
    [sym_negation] = ACTIONS(92),
    [sym_regexp_pattern] = ACTIONS(92),
    [sym_regexp_pattern_no_flag] = ACTIONS(92),
    [sym_dollar_regexp] = ACTIONS(90),
    [sym_port_pattern] = ACTIONS(92),
    [sym_url_pattern] = ACTIONS(90),
    [sym_wildcard_pattern] = ACTIONS(92),
    [sym_ipv6_with_brackets] = ACTIONS(92),
    [sym_ipv4_pattern] = ACTIONS(92),
    [sym_ipv6_pattern] = ACTIONS(92),
    [sym_local_path_windows] = ACTIONS(90),
    [sym_local_path_unix] = ACTIONS(92),
    [sym_macro_pattern] = ACTIONS(92),
    [sym_at_reference] = ACTIONS(92),
    [sym_plugin_var] = ACTIONS(92),
    [sym_domain_pattern] = ACTIONS(92),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym__line_token1] = ACTIONS(102),
    [sym_comment] = ACTIONS(102),
    [sym_negation] = ACTIONS(104),
    [sym_regexp_pattern] = ACTIONS(104),
    [sym_regexp_pattern_no_flag] = ACTIONS(104),
    [sym_dollar_regexp] = ACTIONS(102),
    [sym_port_pattern] = ACTIONS(104),
    [sym_url_pattern] = ACTIONS(102),
    [sym_wildcard_pattern] = ACTIONS(104),
    [sym_ipv6_with_brackets] = ACTIONS(104),
    [sym_ipv4_pattern] = ACTIONS(104),
    [sym_ipv6_pattern] = ACTIONS(104),
    [sym_local_path_windows] = ACTIONS(102),
    [sym_local_path_unix] = ACTIONS(104),
    [sym_macro_pattern] = ACTIONS(104),
    [sym_at_reference] = ACTIONS(104),
    [sym_plugin_var] = ACTIONS(104),
    [sym_domain_pattern] = ACTIONS(104),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym__line_token1] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [sym_negation] = ACTIONS(108),
    [sym_regexp_pattern] = ACTIONS(108),
    [sym_regexp_pattern_no_flag] = ACTIONS(108),
    [sym_dollar_regexp] = ACTIONS(106),
    [sym_port_pattern] = ACTIONS(108),
    [sym_url_pattern] = ACTIONS(106),
    [sym_wildcard_pattern] = ACTIONS(108),
    [sym_ipv6_with_brackets] = ACTIONS(108),
    [sym_ipv4_pattern] = ACTIONS(108),
    [sym_ipv6_pattern] = ACTIONS(108),
    [sym_local_path_windows] = ACTIONS(106),
    [sym_local_path_unix] = ACTIONS(108),
    [sym_macro_pattern] = ACTIONS(108),
    [sym_at_reference] = ACTIONS(108),
    [sym_plugin_var] = ACTIONS(108),
    [sym_domain_pattern] = ACTIONS(108),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(19), 1,
      sym__pattern,
    ACTIONS(112), 3,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(110), 12,
      sym_regexp_pattern,
      sym_regexp_pattern_no_flag,
      sym_port_pattern,
      sym_wildcard_pattern,
      sym_ipv6_with_brackets,
      sym_ipv4_pattern,
      sym_ipv6_pattern,
      sym_local_path_unix,
      sym_macro_pattern,
      sym_at_reference,
      sym_plugin_var,
      sym_domain_pattern,
  [23] = 5,
    ACTIONS(21), 1,
      sym_protocol_name,
    ACTIONS(23), 1,
      sym_plugin_full_name,
    ACTIONS(25), 1,
      sym_simple_value,
    STATE(2), 1,
      aux_sym_rule_repeat1,
    STATE(9), 3,
      sym__operator,
      sym_protocol_operator,
      sym_plugin_operator,
  [41] = 5,
    ACTIONS(21), 1,
      sym_protocol_name,
    ACTIONS(23), 1,
      sym_plugin_full_name,
    ACTIONS(25), 1,
      sym_simple_value,
    STATE(4), 1,
      aux_sym_rule_repeat1,
    STATE(9), 3,
      sym__operator,
      sym_protocol_operator,
      sym_plugin_operator,
  [59] = 1,
    ACTIONS(114), 1,
      anon_sym_COLON_SLASH_SLASH,
  [63] = 1,
    ACTIONS(116), 1,
      anon_sym_COLON_SLASH_SLASH,
  [67] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 23,
  [SMALL_STATE(20)] = 41,
  [SMALL_STATE(21)] = 59,
  [SMALL_STATE(22)] = 63,
  [SMALL_STATE(23)] = 67,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6), SHIFT_REPEAT(21),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_operator, 2, .production_id = 5),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin_operator, 2, .production_id = 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_operator, 2, .production_id = 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol_operator, 2, .production_id = 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_operator, 3, .production_id = 8),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin_operator, 3, .production_id = 8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_operator, 3, .production_id = 7),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol_operator, 3, .production_id = 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 1, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_whistle(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
