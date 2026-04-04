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
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  sym_reference_name = 26,
  aux_sym_value_text_start_token1 = 27,
  sym_simple_value = 28,
  sym_source_file = 29,
  sym__line = 30,
  sym_rule = 31,
  sym__pattern = 32,
  sym__operator = 33,
  sym_protocol_operator = 34,
  sym_plugin_operator = 35,
  sym_operator_value = 36,
  sym__operator_value_start = 37,
  sym__operator_value_part = 38,
  sym_value_reference_start = 39,
  sym_value_reference = 40,
  sym_value_text_start = 41,
  sym_value_text = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_rule_repeat1 = 44,
  aux_sym_operator_value_repeat1 = 45,
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
  [anon_sym_LBRACE] = "brace_open",
  [anon_sym_RBRACE] = "brace_close",
  [sym_reference_name] = "reference_name",
  [aux_sym_value_text_start_token1] = "value_text_start_token1",
  [sym_simple_value] = "simple_value",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_rule] = "rule",
  [sym__pattern] = "_pattern",
  [sym__operator] = "_operator",
  [sym_protocol_operator] = "protocol_operator",
  [sym_plugin_operator] = "plugin_operator",
  [sym_operator_value] = "operator_value",
  [sym__operator_value_start] = "_operator_value_start",
  [sym__operator_value_part] = "_operator_value_part",
  [sym_value_reference_start] = "value_reference_start",
  [sym_value_reference] = "value_reference",
  [sym_value_text_start] = "value_text_start",
  [sym_value_text] = "value_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_operator_value_repeat1] = "operator_value_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_reference_name] = sym_reference_name,
  [aux_sym_value_text_start_token1] = aux_sym_value_text_start_token1,
  [sym_simple_value] = sym_simple_value,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_rule] = sym_rule,
  [sym__pattern] = sym__pattern,
  [sym__operator] = sym__operator,
  [sym_protocol_operator] = sym_protocol_operator,
  [sym_plugin_operator] = sym_plugin_operator,
  [sym_operator_value] = sym_operator_value,
  [sym__operator_value_start] = sym__operator_value_start,
  [sym__operator_value_part] = sym__operator_value_part,
  [sym_value_reference_start] = sym_value_reference_start,
  [sym_value_reference] = sym_value_reference,
  [sym_value_text_start] = sym_value_text_start,
  [sym_value_text] = sym_value_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_operator_value_repeat1] = aux_sym_operator_value_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_text_start_token1] = {
    .visible = false,
    .named = false,
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
  [sym_operator_value] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_value_start] = {
    .visible = false,
    .named = true,
  },
  [sym__operator_value_part] = {
    .visible = false,
    .named = true,
  },
  [sym_value_reference_start] = {
    .visible = true,
    .named = true,
  },
  [sym_value_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_value_text_start] = {
    .visible = true,
    .named = true,
  },
  [sym_value_text] = {
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
  [aux_sym_operator_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_negation = 2,
  field_operator = 3,
  field_pattern = 4,
  field_plugin = 5,
  field_protocol = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
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
  [9] = {.index = 14, .length = 1},
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
  [14] =
    {field_name, 1},
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '!') ADVANCE(1629);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(1629);
      if (lookahead == '%') ADVANCE(1627);
      if (lookahead == '(') ADVANCE(758);
      if (lookahead == '/') ADVANCE(927);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == '1') ADVANCE(785);
      if (lookahead == '2') ADVANCE(774);
      if (lookahead == ':') ADVANCE(946);
      if (lookahead == '<') ADVANCE(1358);
      if (lookahead == '@') ADVANCE(1629);
      if (lookahead == '[') ADVANCE(1626);
      if (lookahead == '^') ADVANCE(1629);
      if (lookahead == 'a') ADVANCE(1270);
      if (lookahead == 'b') ADVANCE(1271);
      if (lookahead == 'c') ADVANCE(1266);
      if (lookahead == 'd') ADVANCE(1267);
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == 'f') ADVANCE(1268);
      if (lookahead == 'h') ADVANCE(1276);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead == 'j') ADVANCE(1283);
      if (lookahead == 'l') ADVANCE(1280);
      if (lookahead == 'm') ADVANCE(1275);
      if (lookahead == 'p') ADVANCE(1273);
      if (lookahead == 'r') ADVANCE(1274);
      if (lookahead == 's') ADVANCE(1281);
      if (lookahead == 't') ADVANCE(1282);
      if (lookahead == 'u') ADVANCE(1272);
      if (lookahead == 'w') ADVANCE(1277);
      if (lookahead == 'x') ADVANCE(1278);
      if (lookahead == '{') ADVANCE(754);
      if (lookahead == '}') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(79)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1284);
      if (lookahead != 0) ADVANCE(1629);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '/') ADVANCE(2);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(137);
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
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '5') ADVANCE(6);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '5') ADVANCE(11);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(342);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(342);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
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
      if (lookahead == '/') ADVANCE(742);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(219);
      if (lookahead == '1') ADVANCE(215);
      if (lookahead == '2') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(256);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(186);
      if (lookahead == '1') ADVANCE(185);
      if (lookahead == '2') ADVANCE(177);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '2') ADVANCE(5);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(226);
      if (lookahead == '1') ADVANCE(222);
      if (lookahead == '2') ADVANCE(212);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 31:
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 32:
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 33:
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 34:
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 35:
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 36:
      if (lookahead == ':') ADVANCE(335);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '/') ADVANCE(61);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(154);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == 'a') ADVANCE(2018);
      if (lookahead == 'c') ADVANCE(1818);
      if (lookahead == 'd') ADVANCE(1880);
      if (lookahead == 'e') ADVANCE(1945);
      if (lookahead == 'f') ADVANCE(1902);
      if (lookahead == 'h') ADVANCE(1863);
      if (lookahead == 'i') ADVANCE(1889);
      if (lookahead == 'j') ADVANCE(2009);
      if (lookahead == 'l') ADVANCE(1904);
      if (lookahead == 'm') ADVANCE(1862);
      if (lookahead == 'p') ADVANCE(1802);
      if (lookahead == 'r') ADVANCE(1808);
      if (lookahead == 's') ADVANCE(1918);
      if (lookahead == 't') ADVANCE(1930);
      if (lookahead == 'u') ADVANCE(1803);
      if (lookahead == 'w') ADVANCE(1864);
      if (lookahead == 'x') ADVANCE(1887);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(2069);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(757);
      END_STATE();
    case 68:
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
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
          lookahead == '~') ADVANCE(151);
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
          lookahead == '~') ADVANCE(156);
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
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(2066);
      if (lookahead == '%') ADVANCE(2064);
      if (lookahead == '(') ADVANCE(1632);
      if (lookahead == '/') ADVANCE(1713);
      if (lookahead == '0') ADVANCE(1647);
      if (lookahead == '1') ADVANCE(1643);
      if (lookahead == '2') ADVANCE(1641);
      if (lookahead == ':') ADVANCE(1729);
      if (lookahead == '<') ADVANCE(1635);
      if (lookahead == '@') ADVANCE(2067);
      if (lookahead == '[') ADVANCE(2063);
      if (lookahead == '^') ADVANCE(2068);
      if (lookahead == 'a') ADVANCE(1734);
      if (lookahead == 'b') ADVANCE(1735);
      if (lookahead == 'c') ADVANCE(1730);
      if (lookahead == 'd') ADVANCE(1731);
      if (lookahead == 'e') ADVANCE(1733);
      if (lookahead == 'f') ADVANCE(1732);
      if (lookahead == 'h') ADVANCE(1740);
      if (lookahead == 'i') ADVANCE(1743);
      if (lookahead == 'j') ADVANCE(1747);
      if (lookahead == 'l') ADVANCE(1744);
      if (lookahead == 'm') ADVANCE(1739);
      if (lookahead == 'p') ADVANCE(1736);
      if (lookahead == 'r') ADVANCE(1738);
      if (lookahead == 's') ADVANCE(1745);
      if (lookahead == 't') ADVANCE(1746);
      if (lookahead == 'u') ADVANCE(1737);
      if (lookahead == 'w') ADVANCE(1741);
      if (lookahead == 'x') ADVANCE(1742);
      if (lookahead == '}') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(79)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1644);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(2069);
      END_STATE();
    case 80:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '!') ADVANCE(943);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(951);
      if (lookahead == '%') ADVANCE(1219);
      if (lookahead == '(') ADVANCE(760);
      if (lookahead == '.') ADVANCE(1222);
      if (lookahead == '/') ADVANCE(953);
      if (lookahead == '0') ADVANCE(803);
      if (lookahead == '1') ADVANCE(800);
      if (lookahead == '2') ADVANCE(798);
      if (lookahead == ':') ADVANCE(863);
      if (lookahead == '<') ADVANCE(954);
      if (lookahead == '@') ADVANCE(1221);
      if (lookahead == '[') ADVANCE(1224);
      if (lookahead == '^') ADVANCE(1221);
      if (lookahead == 'a') ADVANCE(1229);
      if (lookahead == 'b') ADVANCE(1230);
      if (lookahead == 'c') ADVANCE(1225);
      if (lookahead == 'd') ADVANCE(1226);
      if (lookahead == 'e') ADVANCE(1228);
      if (lookahead == 'f') ADVANCE(1227);
      if (lookahead == 'h') ADVANCE(1234);
      if (lookahead == 'i') ADVANCE(1238);
      if (lookahead == 'j') ADVANCE(1242);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead == 'm') ADVANCE(1236);
      if (lookahead == 'p') ADVANCE(1232);
      if (lookahead == 'r') ADVANCE(1233);
      if (lookahead == 's') ADVANCE(1240);
      if (lookahead == 't') ADVANCE(1241);
      if (lookahead == 'u') ADVANCE(1231);
      if (lookahead == 'w') ADVANCE(1235);
      if (lookahead == 'x') ADVANCE(1237);
      if (lookahead == '{') ADVANCE(755);
      if (lookahead == '}') ADVANCE(700);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(81)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1243);
      if (lookahead != 0) ADVANCE(1221);
      END_STATE();
    case 81:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '%') ADVANCE(699);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == '.') ADVANCE(701);
      if (lookahead == '/') ADVANCE(737);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '1') ADVANCE(400);
      if (lookahead == '2') ADVANCE(398);
      if (lookahead == ':') ADVANCE(1680);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '[') ADVANCE(709);
      if (lookahead == '^') ADVANCE(732);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(715);
      if (lookahead == 'c') ADVANCE(710);
      if (lookahead == 'd') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead == 'f') ADVANCE(712);
      if (lookahead == 'h') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(723);
      if (lookahead == 'j') ADVANCE(727);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'm') ADVANCE(721);
      if (lookahead == 'p') ADVANCE(717);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == 't') ADVANCE(726);
      if (lookahead == 'u') ADVANCE(716);
      if (lookahead == 'w') ADVANCE(720);
      if (lookahead == 'x') ADVANCE(722);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(81)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      if (lookahead != 0) ADVANCE(700);
      END_STATE();
    case 82:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '%') ADVANCE(436);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == '.') ADVANCE(438);
      if (lookahead == '/') ADVANCE(730);
      if (lookahead == '0') ADVANCE(388);
      if (lookahead == '1') ADVANCE(385);
      if (lookahead == '2') ADVANCE(383);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(373);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == '^') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'w') ADVANCE(444);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(82)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 83:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '%') ADVANCE(436);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == '.') ADVANCE(438);
      if (lookahead == '/') ADVANCE(730);
      if (lookahead == '0') ADVANCE(388);
      if (lookahead == '1') ADVANCE(385);
      if (lookahead == '2') ADVANCE(383);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(373);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == '^') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'w') ADVANCE(444);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(84)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == '%') ADVANCE(436);
      if (lookahead == '(') ADVANCE(370);
      if (lookahead == '.') ADVANCE(438);
      if (lookahead == '/') ADVANCE(730);
      if (lookahead == '0') ADVANCE(388);
      if (lookahead == '1') ADVANCE(385);
      if (lookahead == '2') ADVANCE(383);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(373);
      if (lookahead == '@') ADVANCE(731);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead == '^') ADVANCE(732);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'w') ADVANCE(444);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(84)
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_negation);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_negation);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_regexp_pattern);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_regexp_pattern);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(349);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_regexp_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(352);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_regexp_pattern_no_flag);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(113);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_dollar_regexp);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_port_pattern);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
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
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_port_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_port_pattern);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_port_pattern);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_port_pattern);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_port_pattern);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_url_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '/') ADVANCE(139);
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
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '?') ADVANCE(151);
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
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '?') ADVANCE(700);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(151);
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
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '?') ADVANCE(151);
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
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == ':') ADVANCE(156);
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
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '?') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1715);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == ':') ADVANCE(2055);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == ':') ADVANCE(1715);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ipv6_with_brackets);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(168);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(172);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '5') ADVANCE(180);
      if (lookahead == ':') ADVANCE(2056);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '5') ADVANCE(183);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(184);
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
      if (lookahead == '5') ADVANCE(187);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(2056);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(2056);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(2056);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(2056);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == ':') ADVANCE(1716);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ipv4_pattern);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == '5') ADVANCE(197);
      if (lookahead == ':') ADVANCE(2062);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == '5') ADVANCE(204);
      if (lookahead == ':') ADVANCE(2061);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(201);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2062);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2062);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2062);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(208);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2061);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2061);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2061);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '5') ADVANCE(213);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(214);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
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
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '5') ADVANCE(220);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(221);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
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
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(217);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
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
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
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
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 219:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(224);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
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
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
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
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
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
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
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
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == '5') ADVANCE(229);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(230);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == '5') ADVANCE(236);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(237);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(233);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(240);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '.') ADVANCE(1675);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2062);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2062);
      if (lookahead == 'f') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2062);
      if (lookahead == 'f') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(243);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2062);
      if (lookahead == 'f') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1728);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(254);
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
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(257);
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
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(251);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(255);
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
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
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
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 256:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1722);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1679);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2057);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 272:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
    case 273:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
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
      if (lookahead == ':') ADVANCE(1717);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1717);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1717);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1717);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2058);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1718);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1718);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1718);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1718);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2059);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1719);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1719);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1719);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1719);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2060);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1720);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1720);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1720);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1720);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2061);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == ':') ADVANCE(1721);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ipv6_pattern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_local_path_windows);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(341);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_local_path_windows);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_local_path_windows);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_local_path_windows);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(346);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_local_path_unix);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_macro_pattern);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(1723);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_macro_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(741);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead == '/') ADVANCE(362);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead == '/') ADVANCE(361);
      if (lookahead == ':') ADVANCE(359);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_reference);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead == '/') ADVANCE(366);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == ':') ADVANCE(363);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_plugin_var);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(358);
      if (lookahead == ':') ADVANCE(1630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(355);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead == ':') ADVANCE(1631);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(437);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(368);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(700);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead == ':') ADVANCE(1631);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(369);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(740);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(740);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '>') ADVANCE(437);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == ':') ADVANCE(1633);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == ':') ADVANCE(1633);
      if (lookahead == '>') ADVANCE(700);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == ':') ADVANCE(1634);
      if (lookahead == '>') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == ')') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(553);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '2') ADVANCE(548);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '2') ADVANCE(552);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(384);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(390);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(424);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(393);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(424);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(424);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(424);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(424);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(399);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(402);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(405);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(407);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(412);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(729);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1649);
      if (lookahead == '?') ADVANCE(700);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '5') ADVANCE(418);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(104);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(108);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '0') ADVANCE(415);
      if (lookahead == '1') ADVANCE(414);
      if (lookahead == '2') ADVANCE(411);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '0') ADVANCE(396);
      if (lookahead == '1') ADVANCE(395);
      if (lookahead == '2') ADVANCE(392);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '0') ADVANCE(175);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '0') ADVANCE(421);
      if (lookahead == '1') ADVANCE(420);
      if (lookahead == '2') ADVANCE(417);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == '0') ADVANCE(410);
      if (lookahead == '1') ADVANCE(409);
      if (lookahead == '2') ADVANCE(406);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(364);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(144);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(391);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(437);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(146);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(551);
      if (lookahead == 'D') ADVANCE(539);
      if (lookahead == 'H') ADVANCE(533);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(647);
      if (lookahead == 'R') ADVANCE(530);
      if (lookahead == 'S') ADVANCE(498);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == 'W') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(608);
      if (lookahead == 'C') ADVANCE(551);
      if (lookahead == 'D') ADVANCE(539);
      if (lookahead == 'H') ADVANCE(533);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(647);
      if (lookahead == 'R') ADVANCE(530);
      if (lookahead == 'S') ADVANCE(498);
      if (lookahead == 'T') ADVANCE(696);
      if (lookahead == 'W') ADVANCE(644);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(608);
      if (lookahead == 'P') ADVANCE(647);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'C') ADVANCE(619);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'C') ADVANCE(480);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'F') ADVANCE(612);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'F') ADVANCE(562);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'H') ADVANCE(650);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'O') ADVANCE(635);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'P') ADVANCE(643);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'P') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(531);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'R') ADVANCE(531);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'S') ADVANCE(499);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'S') ADVANCE(677);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(695);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'y') ADVANCE(578);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(560);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'b') ADVANCE(578);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'b') ADVANCE(477);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(549);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead == 'g') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == 'p') ADVANCE(536);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(664);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(750);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(540);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == 'q') ADVANCE(453);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(583);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'f') ADVANCE(558);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'g') ADVANCE(559);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(463);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(610);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(681);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(591);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(526);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(683);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'h') ADVANCE(684);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(661);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'k') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'k') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'k') ADVANCE(563);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'm') ADVANCE(572);
      if (lookahead == 't') ADVANCE(623);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'm') ADVANCE(514);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'm') ADVANCE(538);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(618);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(579);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(570);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(636);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(600);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(592);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(379);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(571);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(659);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(532);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(664);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(586);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(614);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(561);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(663);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(665);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(752);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(545);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(689);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(621);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(630);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(626);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(688);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(584);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(675);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'u') ADVANCE(544);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'u') ADVANCE(508);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'u') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'u') ADVANCE(658);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'w') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'w') ADVANCE(542);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'w') ADVANCE(599);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'w') ADVANCE(478);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'x') ADVANCE(695);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'y') ADVANCE(743);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == 'y') ADVANCE(628);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(364);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1649);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(144);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(416);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1682);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1714);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1714);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1673);
      if (lookahead == 'a') ADVANCE(702);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1673);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1673);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(467);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1673);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == 'x') ADVANCE(494);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1673);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == 'u') ADVANCE(666);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1673);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'h') ADVANCE(556);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'f') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead == 't') ADVANCE(627);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'g') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'k') ADVANCE(555);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 'p') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(604);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(1674);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(700);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(741);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '?') ADVANCE(700);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(147);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(738);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(736);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(361);
      if (lookahead == ':') ADVANCE(359);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(360);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(133);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead == ':') ADVANCE(1671);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(735);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(736);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(1671);
      if (lookahead == '\\') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead == ':') ADVANCE(1671);
      if (lookahead == '\\') ADVANCE(733);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(735);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(738);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == ':') ADVANCE(2052);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead == '>') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_domain_pattern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_protocol_name);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(1979);
      if (lookahead == '2') ADVANCE(1896);
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(1979);
      if (lookahead == '2') ADVANCE(1900);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == '2') ADVANCE(548);
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == '2') ADVANCE(552);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'R') ADVANCE(1812);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'R') ADVANCE(473);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 'e') ADVANCE(1992);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_protocol_name);
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_plugin_full_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_reference_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(757);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ')') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(758);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ')') ADVANCE(943);
      if (lookahead == '/') ADVANCE(758);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(759);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ')') ADVANCE(1221);
      if (lookahead == '/') ADVANCE(761);
      if (lookahead == ':') ADVANCE(759);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(760);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ')') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(761);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1068);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1535);
      if (lookahead == '2') ADVANCE(1458);
      if (lookahead == 's') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1535);
      if (lookahead == '2') ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1535);
      if (lookahead == 's') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1140);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1066);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(770);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1140);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1066);
      if (lookahead == ':') ADVANCE(958);
      if (lookahead == 's') ADVANCE(771);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1140);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1067);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1140);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '2') ADVANCE(1067);
      if (lookahead == ':') ADVANCE(958);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1140);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(773);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-') ADVANCE(1140);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == '5') ADVANCE(784);
      if (lookahead == ':') ADVANCE(1292);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(787);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == '5') ADVANCE(777);
      if (lookahead == ':') ADVANCE(1625);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(778);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == '5') ADVANCE(791);
      if (lookahead == ':') ADVANCE(1624);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(792);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(781);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1625);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1625);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1625);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(789);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1292);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1292);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1292);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(795);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1624);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1624);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1624);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1257);
      if (lookahead == ':') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '5') ADVANCE(799);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(802);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(804);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(961);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(926);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1244);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(806);
      if (lookahead == '?') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '5') ADVANCE(810);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(811);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '5') ADVANCE(817);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(818);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(814);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(821);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1258);
      if (lookahead == '5') ADVANCE(826);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1220);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(963);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '5') ADVANCE(832);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(963);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(963);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(963);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(963);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(859);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '5') ADVANCE(837);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(859);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(859);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(859);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(859);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1259);
      if (lookahead == '5') ADVANCE(842);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(962);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '5') ADVANCE(847);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(962);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(962);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(962);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(962);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(857);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '5') ADVANCE(852);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(857);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(857);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(857);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.') ADVANCE(857);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '0') ADVANCE(855);
      if (lookahead == '1') ADVANCE(854);
      if (lookahead == '2') ADVANCE(851);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '0') ADVANCE(840);
      if (lookahead == '1') ADVANCE(839);
      if (lookahead == '2') ADVANCE(836);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '0') ADVANCE(816);
      if (lookahead == '1') ADVANCE(812);
      if (lookahead == '2') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(866);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(871);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '0') ADVANCE(905);
      if (lookahead == '1') ADVANCE(904);
      if (lookahead == '2') ADVANCE(861);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '0') ADVANCE(823);
      if (lookahead == '1') ADVANCE(819);
      if (lookahead == '2') ADVANCE(809);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '5') ADVANCE(902);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(858);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == 'f') ADVANCE(865);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == 'f') ADVANCE(877);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == 'f') ADVANCE(864);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(860);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(939);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(939);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(939);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(939);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(862);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(862);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(862);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(862);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(936);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(936);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(936);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(936);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(870);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(870);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(870);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(870);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(938);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(938);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(938);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(938);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(872);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(872);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(872);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(872);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(940);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(940);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(940);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(940);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(873);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(873);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(873);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(873);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(941);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(874);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(874);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(874);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(874);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(875);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(875);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(875);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ':') ADVANCE(875);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '?') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '\\') ADVANCE(959);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(1671);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(947);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == ']') ADVANCE(905);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1358);
      if (lookahead == '>') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(945);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(944);
      if (lookahead == ':') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1465);
      if (lookahead == '\\') ADVANCE(959);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(1671);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(947);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1465);
      if (lookahead == '\\') ADVANCE(1610);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(948);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(942);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(952);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1188);
      if (lookahead == 't') ADVANCE(1207);
      if (lookahead == 'w') ADVANCE(1178);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1302);
      if (lookahead == ':') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1264);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1302);
      if (lookahead == ':') ADVANCE(947);
      if (lookahead == '\\') ADVANCE(960);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(956);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1265);
      if (lookahead == ':') ADVANCE(945);
      if (lookahead == '>') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(954);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1299);
      if (lookahead == ':') ADVANCE(947);
      if (lookahead == '\\') ADVANCE(960);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(956);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1299);
      if (lookahead == ':') ADVANCE(948);
      if (lookahead == '\\') ADVANCE(1313);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(957);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(955);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(943);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(948);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(1671);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(947);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ':') ADVANCE(947);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(956);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '0') ADVANCE(850);
      if (lookahead == '1') ADVANCE(849);
      if (lookahead == '2') ADVANCE(846);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '0') ADVANCE(835);
      if (lookahead == '1') ADVANCE(834);
      if (lookahead == '2') ADVANCE(831);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '0') ADVANCE(1256);
      if (lookahead == '1') ADVANCE(1254);
      if (lookahead == '2') ADVANCE(964);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == '5') ADVANCE(1253);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'A') ADVANCE(1150);
      if (lookahead == 'B') ADVANCE(1124);
      if (lookahead == 'C') ADVANCE(1064);
      if (lookahead == 'D') ADVANCE(1054);
      if (lookahead == 'H') ADVANCE(1055);
      if (lookahead == 'M') ADVANCE(1047);
      if (lookahead == 'P') ADVANCE(1159);
      if (lookahead == 'R') ADVANCE(1045);
      if (lookahead == 'S') ADVANCE(1012);
      if (lookahead == 'T') ADVANCE(1217);
      if (lookahead == 'W') ADVANCE(1164);
      if (lookahead == 'p') ADVANCE(1129);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'A') ADVANCE(1150);
      if (lookahead == 'B') ADVANCE(1124);
      if (lookahead == 'C') ADVANCE(1064);
      if (lookahead == 'D') ADVANCE(1054);
      if (lookahead == 'H') ADVANCE(1055);
      if (lookahead == 'M') ADVANCE(1047);
      if (lookahead == 'P') ADVANCE(1159);
      if (lookahead == 'R') ADVANCE(1045);
      if (lookahead == 'S') ADVANCE(1012);
      if (lookahead == 'T') ADVANCE(1217);
      if (lookahead == 'W') ADVANCE(1164);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'A') ADVANCE(1150);
      if (lookahead == 'B') ADVANCE(1124);
      if (lookahead == 'P') ADVANCE(1159);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'C') ADVANCE(1135);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'C') ADVANCE(994);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'F') ADVANCE(1128);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'F') ADVANCE(1076);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'H') ADVANCE(1167);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'O') ADVANCE(1152);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'P') ADVANCE(1163);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'P') ADVANCE(995);
      if (lookahead == 'R') ADVANCE(1046);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'R') ADVANCE(1046);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'R') ADVANCE(988);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'S') ADVANCE(1013);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'S') ADVANCE(1197);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1002);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1105);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1216);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1106);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1010);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1016);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1211);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'y') ADVANCE(1094);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1006);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1191);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1097);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1162);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1090);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1165);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1009);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1199);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'b') ADVANCE(1094);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1221);
      if (lookahead == 'r') ADVANCE(985);
      if (lookahead == 't') ADVANCE(1061);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1084);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1083);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1092);
      if (lookahead == 't') ADVANCE(1036);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1092);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1063);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(993);
      if (lookahead == 'g') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1168);
      if (lookahead == 'p') ADVANCE(1051);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1168);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1182);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'c') ADVANCE(1032);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1216);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(970);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1081);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1096);
      if (lookahead == 'q') ADVANCE(966);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1029);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1037);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1043);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'd') ADVANCE(1050);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1221);
      if (lookahead == 't') ADVANCE(1040);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(974);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(978);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1056);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(977);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(970);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(830);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1160);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1018);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1170);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1153);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1187);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead == 'u') ADVANCE(1099);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1156);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1161);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1118);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1098);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'f') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'f') ADVANCE(1072);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'g') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'g') ADVANCE(1073);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(976);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1126);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1107);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(997);
      if (lookahead == 'o') ADVANCE(1125);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1040);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1202);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1203);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'h') ADVANCE(1204);
      if (lookahead == 'p') ADVANCE(1154);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1136);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1120);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1094);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1110);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1198);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1101);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1041);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1179);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'k') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'k') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'k') ADVANCE(1077);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1025);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(975);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1003);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1210);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1246);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1133);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(989);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1091);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(983);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1041);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1034);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1201);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'l') ADVANCE(1050);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'm') ADVANCE(1087);
      if (lookahead == 't') ADVANCE(1137);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'm') ADVANCE(1028);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'm') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'm') ADVANCE(1053);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1134);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(830);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1016);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1027);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1184);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1095);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1180);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1048);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1117);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'n') ADVANCE(996);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1215);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1005);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1017);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1085);
      if (lookahead == 'r') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1016);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1177);
      if (lookahead == 't') ADVANCE(1193);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1153);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1116);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1108);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1146);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1113);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(987);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1158);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'o') ADVANCE(1019);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(769);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(772);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1086);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1154);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1065);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(768);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(773);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1176);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1044);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1182);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1102);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1205);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1122);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(976);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1058);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1214);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1052);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1121);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(985);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1131);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1075);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1039);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1030);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1080);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1022);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'r') ADVANCE(1040);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(980);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(967);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(973);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(968);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(773);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(1192);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(1245);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(1200);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(1033);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 's') ADVANCE(1049);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1036);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1209);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1190);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1145);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1079);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1142);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1147);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1143);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1138);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1000);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1031);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1208);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1100);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1040);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1194);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1195);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1196);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 't') ADVANCE(1082);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'u') ADVANCE(1059);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'u') ADVANCE(1119);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'u') ADVANCE(1171);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'u') ADVANCE(1175);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'u') ADVANCE(1021);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'w') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'w') ADVANCE(1057);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'w') ADVANCE(1115);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'w') ADVANCE(992);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'x') ADVANCE(1216);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'y') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == 'y') ADVANCE(1144);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(1221);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(806);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(807);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(807);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(928);
      if (lookahead == ']') ADVANCE(1256);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(928);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'a') ADVANCE(1247);
      if (lookahead == 'i') ADVANCE(1141);
      if (lookahead == 's') ADVANCE(1173);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'e') ADVANCE(1249);
      if (lookahead == 'i') ADVANCE(1172);
      if (lookahead == 'o') ADVANCE(1213);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'i') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(1157);
      if (lookahead == 'r') ADVANCE(981);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'n') ADVANCE(980);
      if (lookahead == 'x') ADVANCE(1008);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 't') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1183);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'a') ADVANCE(1221);
      if (lookahead == 'r') ADVANCE(1089);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'a') ADVANCE(1004);
      if (lookahead == 'i') ADVANCE(1144);
      if (lookahead == 'l') ADVANCE(1206);
      if (lookahead == 'r') ADVANCE(1122);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead == 'e') ADVANCE(1020);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == 'o') ADVANCE(1177);
      if (lookahead == 't') ADVANCE(1104);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'e') ADVANCE(1071);
      if (lookahead == 'h') ADVANCE(1078);
      if (lookahead == 's') ADVANCE(1245);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'f') ADVANCE(1072);
      if (lookahead == 'h') ADVANCE(1127);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'p') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(984);
      if (lookahead == 's') ADVANCE(1123);
      if (lookahead == 't') ADVANCE(1139);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'g') ADVANCE(1109);
      if (lookahead == 'n') ADVANCE(1007);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'o') ADVANCE(1011);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'k') ADVANCE(1070);
      if (lookahead == 'n') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(990);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 'l') ADVANCE(1174);
      if (lookahead == 'p') ADVANCE(1086);
      if (lookahead == 'r') ADVANCE(999);
      if (lookahead == 'u') ADVANCE(1119);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == 's') ADVANCE(967);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(950);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(926);
      if (lookahead == '?') ADVANCE(1221);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1244);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(958);
      if (lookahead == 's') ADVANCE(1246);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(958);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == 'c') ADVANCE(1248);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == 'h') ADVANCE(1026);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == 'l') ADVANCE(1042);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/') ADVANCE(1264);
      if (lookahead == ':') ADVANCE(933);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1221);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '0') ADVANCE(845);
      if (lookahead == '1') ADVANCE(844);
      if (lookahead == '2') ADVANCE(841);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '0') ADVANCE(1337);
      if (lookahead == '1') ADVANCE(1336);
      if (lookahead == '2') ADVANCE(1262);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '0') ADVANCE(829);
      if (lookahead == '1') ADVANCE(828);
      if (lookahead == '2') ADVANCE(825);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '0') ADVANCE(783);
      if (lookahead == '1') ADVANCE(780);
      if (lookahead == '2') ADVANCE(775);
      if (lookahead == 'f') ADVANCE(1287);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(1293);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '0') ADVANCE(797);
      if (lookahead == '1') ADVANCE(794);
      if (lookahead == '2') ADVANCE(776);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1348);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '5') ADVANCE(1334);
      if (lookahead == ':') ADVANCE(1616);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1264);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1358);
      if (lookahead == '>') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1265);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1288);
      if (lookahead == 'a') ADVANCE(1303);
      if (lookahead == 'i') ADVANCE(1536);
      if (lookahead == 's') ADVANCE(1566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1288);
      if (lookahead == 'e') ADVANCE(1305);
      if (lookahead == 'i') ADVANCE(1565);
      if (lookahead == 'o') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1288);
      if (lookahead == 'i') ADVANCE(1484);
      if (lookahead == 'o') ADVANCE(1550);
      if (lookahead == 'r') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1288);
      if (lookahead == 'n') ADVANCE(1375);
      if (lookahead == 'x') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1288);
      if (lookahead == 't') ADVANCE(1582);
      if (lookahead == 'u') ADVANCE(1575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'a') ADVANCE(1629);
      if (lookahead == 'r') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'a') ADVANCE(1399);
      if (lookahead == 'i') ADVANCE(1538);
      if (lookahead == 'l') ADVANCE(1596);
      if (lookahead == 'r') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'a') ADVANCE(1601);
      if (lookahead == 'e') ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'e') ADVANCE(1578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'e') ADVANCE(1377);
      if (lookahead == 'o') ADVANCE(1570);
      if (lookahead == 't') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'e') ADVANCE(1467);
      if (lookahead == 'h') ADVANCE(1474);
      if (lookahead == 's') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'f') ADVANCE(1468);
      if (lookahead == 'h') ADVANCE(1521);
      if (lookahead == 'i') ADVANCE(1509);
      if (lookahead == 'p') ADVANCE(1547);
      if (lookahead == 'r') ADVANCE(1379);
      if (lookahead == 's') ADVANCE(1518);
      if (lookahead == 't') ADVANCE(1534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'g') ADVANCE(1504);
      if (lookahead == 'n') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'i') ADVANCE(1506);
      if (lookahead == 'o') ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'k') ADVANCE(1466);
      if (lookahead == 'n') ADVANCE(1464);
      if (lookahead == 'o') ADVANCE(1400);
      if (lookahead == 't') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 'l') ADVANCE(1567);
      if (lookahead == 'p') ADVANCE(1482);
      if (lookahead == 'r') ADVANCE(1395);
      if (lookahead == 'u') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead == 's') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (lookahead == 'f') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (lookahead == 'f') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (lookahead == 'f') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1611);
      if (lookahead == 'i') ADVANCE(1300);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1300);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1611);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1300);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1607);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1302);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1292);
      if (lookahead == 'c') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1292);
      if (lookahead == 'h') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1292);
      if (lookahead == 'l') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(948);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(957);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ':') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '>') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1358);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'A') ADVANCE(1543);
      if (lookahead == 'B') ADVANCE(1519);
      if (lookahead == 'C') ADVANCE(1461);
      if (lookahead == 'D') ADVANCE(1449);
      if (lookahead == 'H') ADVANCE(1450);
      if (lookahead == 'M') ADVANCE(1443);
      if (lookahead == 'P') ADVANCE(1553);
      if (lookahead == 'R') ADVANCE(1439);
      if (lookahead == 'S') ADVANCE(1407);
      if (lookahead == 'T') ADVANCE(1606);
      if (lookahead == 'W') ADVANCE(1558);
      if (lookahead == 'p') ADVANCE(1524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'A') ADVANCE(1543);
      if (lookahead == 'B') ADVANCE(1519);
      if (lookahead == 'C') ADVANCE(1461);
      if (lookahead == 'D') ADVANCE(1449);
      if (lookahead == 'H') ADVANCE(1450);
      if (lookahead == 'M') ADVANCE(1443);
      if (lookahead == 'P') ADVANCE(1553);
      if (lookahead == 'R') ADVANCE(1439);
      if (lookahead == 'S') ADVANCE(1407);
      if (lookahead == 'T') ADVANCE(1606);
      if (lookahead == 'W') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'A') ADVANCE(1543);
      if (lookahead == 'B') ADVANCE(1519);
      if (lookahead == 'P') ADVANCE(1553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'C') ADVANCE(1530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'C') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'F') ADVANCE(1523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'F') ADVANCE(1472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'H') ADVANCE(1560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'O') ADVANCE(1545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'P') ADVANCE(1557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'P') ADVANCE(1391);
      if (lookahead == 'R') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'R') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'R') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'S') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'S') ADVANCE(1590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == ']') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1577);
      if (lookahead == 'y') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'a') ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'b') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'b') ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1629);
      if (lookahead == 'r') ADVANCE(1380);
      if (lookahead == 't') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1487);
      if (lookahead == 't') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1388);
      if (lookahead == 'g') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1561);
      if (lookahead == 'p') ADVANCE(1446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'c') ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1477);
      if (lookahead == 'f') ADVANCE(1435);
      if (lookahead == 'p') ADVANCE(1491);
      if (lookahead == 'q') ADVANCE(1360);
      if (lookahead == 's') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'd') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1629);
      if (lookahead == 't') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1544);
      if (lookahead == 'u') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'e') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'f') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'f') ADVANCE(1468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'g') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'g') ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1392);
      if (lookahead == 'o') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'h') ADVANCE(1589);
      if (lookahead == 'p') ADVANCE(1547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1611);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1611);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'i') ADVANCE(1527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'k') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'k') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'k') ADVANCE(1473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'l') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'm') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'm') ADVANCE(1483);
      if (lookahead == 't') ADVANCE(1532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'm') ADVANCE(1423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'm') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'n') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1481);
      if (lookahead == 'r') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1570);
      if (lookahead == 't') ADVANCE(1579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'o') ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'p') ADVANCE(1595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'r') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 's') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 't') ADVANCE(1478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'u') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'u') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'u') ADVANCE(1568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'u') ADVANCE(1416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'w') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'w') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'w') ADVANCE(1511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'w') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'x') ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'y') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == 'y') ADVANCE(1538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(1607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1607);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(1629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(948);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1611);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_value_text_start_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1629);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1630);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '/') ADVANCE(1630);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1631);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(2069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1630);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(1634);
      if (lookahead == '>') ADVANCE(357);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1633);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '>') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1634);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '>') ADVANCE(2069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1634);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1979);
      if (lookahead == '2') ADVANCE(1896);
      if (lookahead == 's') ADVANCE(1638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1979);
      if (lookahead == '2') ADVANCE(1900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1979);
      if (lookahead == 's') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-') ADVANCE(1979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == '5') ADVANCE(1642);
      if (lookahead == ':') ADVANCE(1751);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1645);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1646);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(1751);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(1751);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(1751);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1760);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1724);
      if (lookahead == ':') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1712);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '?') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1649);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(2065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1726);
      if (lookahead == '5') ADVANCE(1652);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1726);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1676);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '5') ADVANCE(1657);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1676);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1676);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1676);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1676);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1727);
      if (lookahead == '5') ADVANCE(1662);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1677);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '5') ADVANCE(1667);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1677);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1677);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1677);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.') ADVANCE(1677);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1671);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1671);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(342);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(342);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '0') ADVANCE(1670);
      if (lookahead == '1') ADVANCE(1669);
      if (lookahead == '2') ADVANCE(1666);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == '1') ADVANCE(189);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '0') ADVANCE(1660);
      if (lookahead == '1') ADVANCE(1659);
      if (lookahead == '2') ADVANCE(1656);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '0') ADVANCE(235);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead == '2') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(264);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == '1') ADVANCE(238);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1678);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(336);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1681);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1681);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1681);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1681);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1683);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1683);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1683);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1683);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1684);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1684);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1684);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1684);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1685);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1685);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1685);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1685);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1686);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1686);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1686);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1686);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ':') ADVANCE(1687);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '?') ADVANCE(1723);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(155);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '\\') ADVANCE(1672);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1671);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/') ADVANCE(2069);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(1723);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '0') ADVANCE(1665);
      if (lookahead == '1') ADVANCE(1664);
      if (lookahead == '2') ADVANCE(1661);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == '1') ADVANCE(199);
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(249);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(182);
      if (lookahead == '2') ADVANCE(176);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '0') ADVANCE(1655);
      if (lookahead == '1') ADVANCE(1654);
      if (lookahead == '2') ADVANCE(1651);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '0') ADVANCE(210);
      if (lookahead == '1') ADVANCE(206);
      if (lookahead == '2') ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1725);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1749);
      if (lookahead == 'a') ADVANCE(1757);
      if (lookahead == 'i') ADVANCE(1980);
      if (lookahead == 's') ADVANCE(2009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1749);
      if (lookahead == 'e') ADVANCE(1759);
      if (lookahead == 'i') ADVANCE(2008);
      if (lookahead == 'o') ADVANCE(2047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1749);
      if (lookahead == 'i') ADVANCE(1925);
      if (lookahead == 'o') ADVANCE(1994);
      if (lookahead == 'r') ADVANCE(1805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1749);
      if (lookahead == 'n') ADVANCE(1804);
      if (lookahead == 'x') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1749);
      if (lookahead == 't') ADVANCE(2026);
      if (lookahead == 'u') ADVANCE(2021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'a') ADVANCE(1830);
      if (lookahead == 'i') ADVANCE(1982);
      if (lookahead == 'l') ADVANCE(2041);
      if (lookahead == 'r') ADVANCE(1960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(1926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead == 'e') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'e') ADVANCE(2024);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'e') ADVANCE(1806);
      if (lookahead == 'o') ADVANCE(2014);
      if (lookahead == 't') ADVANCE(1942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'e') ADVANCE(1906);
      if (lookahead == 'h') ADVANCE(1913);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'f') ADVANCE(1907);
      if (lookahead == 'h') ADVANCE(1964);
      if (lookahead == 'i') ADVANCE(1952);
      if (lookahead == 'p') ADVANCE(1990);
      if (lookahead == 'r') ADVANCE(1809);
      if (lookahead == 's') ADVANCE(1961);
      if (lookahead == 't') ADVANCE(1978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'g') ADVANCE(1947);
      if (lookahead == 'n') ADVANCE(1833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'i') ADVANCE(1949);
      if (lookahead == 'o') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'k') ADVANCE(1905);
      if (lookahead == 'n') ADVANCE(1903);
      if (lookahead == 'o') ADVANCE(1831);
      if (lookahead == 't') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 'l') ADVANCE(2011);
      if (lookahead == 'p') ADVANCE(1923);
      if (lookahead == 'r') ADVANCE(1827);
      if (lookahead == 'u') ADVANCE(1957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead == 's') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(2054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1751);
      if (lookahead == 'c') ADVANCE(1758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1751);
      if (lookahead == 'h') ADVANCE(1853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1751);
      if (lookahead == 'l') ADVANCE(1873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ':') ADVANCE(1755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'A') ADVANCE(1987);
      if (lookahead == 'B') ADVANCE(1962);
      if (lookahead == 'C') ADVANCE(1898);
      if (lookahead == 'D') ADVANCE(1885);
      if (lookahead == 'H') ADVANCE(1879);
      if (lookahead == 'M') ADVANCE(1877);
      if (lookahead == 'P') ADVANCE(1997);
      if (lookahead == 'R') ADVANCE(1874);
      if (lookahead == 'S') ADVANCE(1838);
      if (lookahead == 'T') ADVANCE(2051);
      if (lookahead == 'W') ADVANCE(2002);
      if (lookahead == 'p') ADVANCE(1967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'A') ADVANCE(1987);
      if (lookahead == 'B') ADVANCE(1962);
      if (lookahead == 'C') ADVANCE(1898);
      if (lookahead == 'D') ADVANCE(1885);
      if (lookahead == 'H') ADVANCE(1879);
      if (lookahead == 'M') ADVANCE(1877);
      if (lookahead == 'P') ADVANCE(1997);
      if (lookahead == 'R') ADVANCE(1874);
      if (lookahead == 'S') ADVANCE(1838);
      if (lookahead == 'T') ADVANCE(2051);
      if (lookahead == 'W') ADVANCE(2002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'A') ADVANCE(1987);
      if (lookahead == 'B') ADVANCE(1962);
      if (lookahead == 'P') ADVANCE(1997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'C') ADVANCE(1973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'C') ADVANCE(1821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'F') ADVANCE(1966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'F') ADVANCE(1911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'H') ADVANCE(2004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'O') ADVANCE(1989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'P') ADVANCE(2001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'P') ADVANCE(1823);
      if (lookahead == 'R') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'R') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'S') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'S') ADVANCE(2032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == ']') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1830);
      if (lookahead == 'i') ADVANCE(1982);
      if (lookahead == 'l') ADVANCE(2041);
      if (lookahead == 'r') ADVANCE(1960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(1926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead == 'e') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2023);
      if (lookahead == 'y') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1842);
      if (lookahead == 'i') ADVANCE(1980);
      if (lookahead == 's') ADVANCE(2009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(2034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'a') ADVANCE(1909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'b') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'b') ADVANCE(1817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(1810);
      if (lookahead == 't') ADVANCE(1893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1928);
      if (lookahead == 't') ADVANCE(1866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1820);
      if (lookahead == 'g') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(2005);
      if (lookahead == 'p') ADVANCE(1882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(2005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'c') ADVANCE(1894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(2050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1916);
      if (lookahead == 'f') ADVANCE(1869);
      if (lookahead == 'p') ADVANCE(1933);
      if (lookahead == 'q') ADVANCE(1788);
      if (lookahead == 's') ADVANCE(1787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'd') ADVANCE(1881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead == 't') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(2024);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1806);
      if (lookahead == 'o') ADVANCE(2014);
      if (lookahead == 't') ADVANCE(1942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1906);
      if (lookahead == 'h') ADVANCE(1913);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(2007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(2025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1988);
      if (lookahead == 'u') ADVANCE(1936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1924);
      if (lookahead == 'i') ADVANCE(2008);
      if (lookahead == 'o') ADVANCE(2047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'e') ADVANCE(1935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'f') ADVANCE(1907);
      if (lookahead == 'h') ADVANCE(1964);
      if (lookahead == 'i') ADVANCE(1952);
      if (lookahead == 'p') ADVANCE(1990);
      if (lookahead == 'r') ADVANCE(1809);
      if (lookahead == 's') ADVANCE(1961);
      if (lookahead == 't') ADVANCE(1978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'f') ADVANCE(1907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'g') ADVANCE(1947);
      if (lookahead == 'n') ADVANCE(1833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'g') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'g') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1824);
      if (lookahead == 'o') ADVANCE(1963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(2038);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'h') ADVANCE(2039);
      if (lookahead == 'p') ADVANCE(1990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1925);
      if (lookahead == 'o') ADVANCE(1994);
      if (lookahead == 'r') ADVANCE(1805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1949);
      if (lookahead == 'o') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(2033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(2015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(2003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'i') ADVANCE(1970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(1905);
      if (lookahead == 'n') ADVANCE(1903);
      if (lookahead == 'o') ADVANCE(1831);
      if (lookahead == 't') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'k') ADVANCE(1912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(2042);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(2011);
      if (lookahead == 'p') ADVANCE(1923);
      if (lookahead == 'r') ADVANCE(1827);
      if (lookahead == 'u') ADVANCE(1957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(2037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'l') ADVANCE(1881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(1922);
      if (lookahead == 't') ADVANCE(1975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(1855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'm') ADVANCE(1884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1804);
      if (lookahead == 'x') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(2022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(2016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'n') ADVANCE(1822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(2049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1921);
      if (lookahead == 'r') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(2014);
      if (lookahead == 't') ADVANCE(2028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'o') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(2013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(1939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'p') ADVANCE(2040);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(2048);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(2017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'r') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(2020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(2036);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 's') ADVANCE(1878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(2026);
      if (lookahead == 'u') ADVANCE(2021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(2044);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1976);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(2043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(2029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(2030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(2031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 't') ADVANCE(1917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(1891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'u') ADVANCE(2012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(1888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(1954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'w') ADVANCE(1819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'x') ADVANCE(2050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'y') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == 'y') ADVANCE(1982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '*' ||
          lookahead == '~') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2052);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '.' ||
          lookahead == '=') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(sym_simple_value);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(116);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(362);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(135);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(sym_simple_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(2069);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 83},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 80},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 81},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 80},
  [12] = {.lex_state = 80},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 83},
  [18] = {.lex_state = 83},
  [19] = {.lex_state = 82},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 83},
  [24] = {.lex_state = 83},
  [25] = {.lex_state = 83},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 83},
  [32] = {.lex_state = 83},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 0},
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
    [sym_ipv6_with_brackets] = ACTIONS(1),
    [sym_ipv4_pattern] = ACTIONS(1),
    [sym_ipv6_pattern] = ACTIONS(1),
    [sym_local_path_windows] = ACTIONS(1),
    [sym_local_path_unix] = ACTIONS(1),
    [sym_macro_pattern] = ACTIONS(1),
    [sym_at_reference] = ACTIONS(1),
    [sym_plugin_var] = ACTIONS(1),
    [anon_sym_COLON_SLASH_SLASH] = ACTIONS(1),
    [sym_protocol_name] = ACTIONS(1),
    [sym_plugin_full_name] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_value_text_start_token1] = ACTIONS(1),
    [sym_simple_value] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__line] = STATE(17),
    [sym_rule] = STATE(17),
    [sym__pattern] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(17),
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
    [sym__operator_value_part] = STATE(2),
    [sym_value_reference] = STATE(2),
    [sym_value_text] = STATE(2),
    [aux_sym_operator_value_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym__line_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(13),
    [anon_sym_CR] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(13),
    [sym_negation] = ACTIONS(15),
    [sym_regexp_pattern] = ACTIONS(15),
    [sym_regexp_pattern_no_flag] = ACTIONS(15),
    [sym_dollar_regexp] = ACTIONS(15),
    [sym_port_pattern] = ACTIONS(15),
    [sym_url_pattern] = ACTIONS(15),
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
    [sym_protocol_name] = ACTIONS(15),
    [sym_plugin_full_name] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [aux_sym_value_text_start_token1] = ACTIONS(20),
    [sym_simple_value] = ACTIONS(15),
  },
  [3] = {
    [sym__operator_value_part] = STATE(4),
    [sym_value_reference] = STATE(4),
    [sym_value_text] = STATE(4),
    [aux_sym_operator_value_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym__line_token1] = ACTIONS(25),
    [sym_comment] = ACTIONS(23),
    [anon_sym_CR] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(23),
    [sym_negation] = ACTIONS(25),
    [sym_regexp_pattern] = ACTIONS(25),
    [sym_regexp_pattern_no_flag] = ACTIONS(25),
    [sym_dollar_regexp] = ACTIONS(25),
    [sym_port_pattern] = ACTIONS(25),
    [sym_url_pattern] = ACTIONS(25),
    [sym_wildcard_pattern] = ACTIONS(25),
    [sym_ipv6_with_brackets] = ACTIONS(25),
    [sym_ipv4_pattern] = ACTIONS(25),
    [sym_ipv6_pattern] = ACTIONS(25),
    [sym_local_path_windows] = ACTIONS(23),
    [sym_local_path_unix] = ACTIONS(25),
    [sym_macro_pattern] = ACTIONS(25),
    [sym_at_reference] = ACTIONS(25),
    [sym_plugin_var] = ACTIONS(25),
    [sym_domain_pattern] = ACTIONS(25),
    [sym_protocol_name] = ACTIONS(25),
    [sym_plugin_full_name] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [aux_sym_value_text_start_token1] = ACTIONS(29),
    [sym_simple_value] = ACTIONS(25),
  },
  [4] = {
    [sym__operator_value_part] = STATE(2),
    [sym_value_reference] = STATE(2),
    [sym_value_text] = STATE(2),
    [aux_sym_operator_value_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym__line_token1] = ACTIONS(33),
    [sym_comment] = ACTIONS(31),
    [anon_sym_CR] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(31),
    [sym_negation] = ACTIONS(33),
    [sym_regexp_pattern] = ACTIONS(33),
    [sym_regexp_pattern_no_flag] = ACTIONS(33),
    [sym_dollar_regexp] = ACTIONS(33),
    [sym_port_pattern] = ACTIONS(33),
    [sym_url_pattern] = ACTIONS(33),
    [sym_wildcard_pattern] = ACTIONS(33),
    [sym_ipv6_with_brackets] = ACTIONS(33),
    [sym_ipv4_pattern] = ACTIONS(33),
    [sym_ipv6_pattern] = ACTIONS(33),
    [sym_local_path_windows] = ACTIONS(31),
    [sym_local_path_unix] = ACTIONS(33),
    [sym_macro_pattern] = ACTIONS(33),
    [sym_at_reference] = ACTIONS(33),
    [sym_plugin_var] = ACTIONS(33),
    [sym_domain_pattern] = ACTIONS(33),
    [sym_protocol_name] = ACTIONS(33),
    [sym_plugin_full_name] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(27),
    [aux_sym_value_text_start_token1] = ACTIONS(29),
    [sym_simple_value] = ACTIONS(33),
  },
  [5] = {
    [sym_operator_value] = STATE(16),
    [sym__operator_value_start] = STATE(3),
    [sym_value_reference_start] = STATE(3),
    [sym_value_text_start] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym__line_token1] = ACTIONS(37),
    [sym_comment] = ACTIONS(35),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(35),
    [sym_negation] = ACTIONS(37),
    [sym_regexp_pattern] = ACTIONS(37),
    [sym_regexp_pattern_no_flag] = ACTIONS(37),
    [sym_dollar_regexp] = ACTIONS(37),
    [sym_port_pattern] = ACTIONS(37),
    [sym_url_pattern] = ACTIONS(37),
    [sym_wildcard_pattern] = ACTIONS(37),
    [sym_ipv6_with_brackets] = ACTIONS(37),
    [sym_ipv4_pattern] = ACTIONS(37),
    [sym_ipv6_pattern] = ACTIONS(37),
    [sym_local_path_windows] = ACTIONS(35),
    [sym_local_path_unix] = ACTIONS(37),
    [sym_macro_pattern] = ACTIONS(37),
    [sym_at_reference] = ACTIONS(37),
    [sym_plugin_var] = ACTIONS(37),
    [sym_domain_pattern] = ACTIONS(37),
    [sym_protocol_name] = ACTIONS(37),
    [sym_plugin_full_name] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [aux_sym_value_text_start_token1] = ACTIONS(41),
    [sym_simple_value] = ACTIONS(37),
  },
  [6] = {
    [sym_operator_value] = STATE(14),
    [sym__operator_value_start] = STATE(3),
    [sym_value_reference_start] = STATE(3),
    [sym_value_text_start] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym__line_token1] = ACTIONS(45),
    [sym_comment] = ACTIONS(43),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(43),
    [sym_negation] = ACTIONS(45),
    [sym_regexp_pattern] = ACTIONS(45),
    [sym_regexp_pattern_no_flag] = ACTIONS(45),
    [sym_dollar_regexp] = ACTIONS(45),
    [sym_port_pattern] = ACTIONS(45),
    [sym_url_pattern] = ACTIONS(45),
    [sym_wildcard_pattern] = ACTIONS(45),
    [sym_ipv6_with_brackets] = ACTIONS(45),
    [sym_ipv4_pattern] = ACTIONS(45),
    [sym_ipv6_pattern] = ACTIONS(45),
    [sym_local_path_windows] = ACTIONS(43),
    [sym_local_path_unix] = ACTIONS(45),
    [sym_macro_pattern] = ACTIONS(45),
    [sym_at_reference] = ACTIONS(45),
    [sym_plugin_var] = ACTIONS(45),
    [sym_domain_pattern] = ACTIONS(45),
    [sym_protocol_name] = ACTIONS(45),
    [sym_plugin_full_name] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(39),
    [aux_sym_value_text_start_token1] = ACTIONS(41),
    [sym_simple_value] = ACTIONS(45),
  },
  [7] = {
    [sym__operator] = STATE(15),
    [sym_protocol_operator] = STATE(15),
    [sym_plugin_operator] = STATE(15),
    [aux_sym_rule_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__line_token1] = ACTIONS(49),
    [sym_comment] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(47),
    [sym_negation] = ACTIONS(49),
    [sym_regexp_pattern] = ACTIONS(49),
    [sym_regexp_pattern_no_flag] = ACTIONS(49),
    [sym_dollar_regexp] = ACTIONS(47),
    [sym_port_pattern] = ACTIONS(49),
    [sym_url_pattern] = ACTIONS(47),
    [sym_wildcard_pattern] = ACTIONS(49),
    [sym_ipv6_with_brackets] = ACTIONS(49),
    [sym_ipv4_pattern] = ACTIONS(49),
    [sym_ipv6_pattern] = ACTIONS(49),
    [sym_local_path_windows] = ACTIONS(47),
    [sym_local_path_unix] = ACTIONS(49),
    [sym_macro_pattern] = ACTIONS(49),
    [sym_at_reference] = ACTIONS(49),
    [sym_plugin_var] = ACTIONS(49),
    [sym_domain_pattern] = ACTIONS(49),
    [sym_protocol_name] = ACTIONS(51),
    [sym_plugin_full_name] = ACTIONS(54),
    [sym_simple_value] = ACTIONS(57),
  },
  [8] = {
    [sym__operator] = STATE(15),
    [sym_protocol_operator] = STATE(15),
    [sym_plugin_operator] = STATE(15),
    [aux_sym_rule_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym__line_token1] = ACTIONS(62),
    [sym_comment] = ACTIONS(60),
    [anon_sym_CR] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(66),
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
    [sym_protocol_name] = ACTIONS(68),
    [sym_plugin_full_name] = ACTIONS(70),
    [sym_simple_value] = ACTIONS(72),
  },
  [9] = {
    [sym__operator] = STATE(15),
    [sym_protocol_operator] = STATE(15),
    [sym_plugin_operator] = STATE(15),
    [aux_sym_rule_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym__line_token1] = ACTIONS(76),
    [sym_comment] = ACTIONS(74),
    [anon_sym_CR] = ACTIONS(78),
    [anon_sym_LF] = ACTIONS(80),
    [sym_negation] = ACTIONS(76),
    [sym_regexp_pattern] = ACTIONS(76),
    [sym_regexp_pattern_no_flag] = ACTIONS(76),
    [sym_dollar_regexp] = ACTIONS(74),
    [sym_port_pattern] = ACTIONS(76),
    [sym_url_pattern] = ACTIONS(74),
    [sym_wildcard_pattern] = ACTIONS(76),
    [sym_ipv6_with_brackets] = ACTIONS(76),
    [sym_ipv4_pattern] = ACTIONS(76),
    [sym_ipv6_pattern] = ACTIONS(76),
    [sym_local_path_windows] = ACTIONS(74),
    [sym_local_path_unix] = ACTIONS(76),
    [sym_macro_pattern] = ACTIONS(76),
    [sym_at_reference] = ACTIONS(76),
    [sym_plugin_var] = ACTIONS(76),
    [sym_domain_pattern] = ACTIONS(76),
    [sym_protocol_name] = ACTIONS(68),
    [sym_plugin_full_name] = ACTIONS(70),
    [sym_simple_value] = ACTIONS(72),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [aux_sym__line_token1] = ACTIONS(84),
    [sym_comment] = ACTIONS(82),
    [anon_sym_CR] = ACTIONS(84),
    [anon_sym_LF] = ACTIONS(82),
    [sym_negation] = ACTIONS(84),
    [sym_regexp_pattern] = ACTIONS(84),
    [sym_regexp_pattern_no_flag] = ACTIONS(84),
    [sym_dollar_regexp] = ACTIONS(84),
    [sym_port_pattern] = ACTIONS(84),
    [sym_url_pattern] = ACTIONS(84),
    [sym_wildcard_pattern] = ACTIONS(84),
    [sym_ipv6_with_brackets] = ACTIONS(84),
    [sym_ipv4_pattern] = ACTIONS(84),
    [sym_ipv6_pattern] = ACTIONS(84),
    [sym_local_path_windows] = ACTIONS(82),
    [sym_local_path_unix] = ACTIONS(84),
    [sym_macro_pattern] = ACTIONS(84),
    [sym_at_reference] = ACTIONS(84),
    [sym_plugin_var] = ACTIONS(84),
    [sym_domain_pattern] = ACTIONS(84),
    [sym_protocol_name] = ACTIONS(84),
    [sym_plugin_full_name] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(84),
    [aux_sym_value_text_start_token1] = ACTIONS(84),
    [sym_simple_value] = ACTIONS(84),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym__line_token1] = ACTIONS(88),
    [sym_comment] = ACTIONS(86),
    [anon_sym_CR] = ACTIONS(88),
    [anon_sym_LF] = ACTIONS(86),
    [sym_negation] = ACTIONS(88),
    [sym_regexp_pattern] = ACTIONS(88),
    [sym_regexp_pattern_no_flag] = ACTIONS(88),
    [sym_dollar_regexp] = ACTIONS(88),
    [sym_port_pattern] = ACTIONS(88),
    [sym_url_pattern] = ACTIONS(88),
    [sym_wildcard_pattern] = ACTIONS(88),
    [sym_ipv6_with_brackets] = ACTIONS(88),
    [sym_ipv4_pattern] = ACTIONS(88),
    [sym_ipv6_pattern] = ACTIONS(88),
    [sym_local_path_windows] = ACTIONS(86),
    [sym_local_path_unix] = ACTIONS(88),
    [sym_macro_pattern] = ACTIONS(88),
    [sym_at_reference] = ACTIONS(88),
    [sym_plugin_var] = ACTIONS(88),
    [sym_domain_pattern] = ACTIONS(88),
    [sym_protocol_name] = ACTIONS(88),
    [sym_plugin_full_name] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [aux_sym_value_text_start_token1] = ACTIONS(88),
    [sym_simple_value] = ACTIONS(88),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym__line_token1] = ACTIONS(92),
    [sym_comment] = ACTIONS(90),
    [anon_sym_CR] = ACTIONS(92),
    [anon_sym_LF] = ACTIONS(90),
    [sym_negation] = ACTIONS(92),
    [sym_regexp_pattern] = ACTIONS(92),
    [sym_regexp_pattern_no_flag] = ACTIONS(92),
    [sym_dollar_regexp] = ACTIONS(92),
    [sym_port_pattern] = ACTIONS(92),
    [sym_url_pattern] = ACTIONS(92),
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
    [sym_protocol_name] = ACTIONS(92),
    [sym_plugin_full_name] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [aux_sym_value_text_start_token1] = ACTIONS(92),
    [sym_simple_value] = ACTIONS(92),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym__line_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(94),
    [anon_sym_CR] = ACTIONS(96),
    [anon_sym_LF] = ACTIONS(94),
    [sym_negation] = ACTIONS(96),
    [sym_regexp_pattern] = ACTIONS(96),
    [sym_regexp_pattern_no_flag] = ACTIONS(96),
    [sym_dollar_regexp] = ACTIONS(96),
    [sym_port_pattern] = ACTIONS(96),
    [sym_url_pattern] = ACTIONS(96),
    [sym_wildcard_pattern] = ACTIONS(96),
    [sym_ipv6_with_brackets] = ACTIONS(96),
    [sym_ipv4_pattern] = ACTIONS(96),
    [sym_ipv6_pattern] = ACTIONS(96),
    [sym_local_path_windows] = ACTIONS(94),
    [sym_local_path_unix] = ACTIONS(96),
    [sym_macro_pattern] = ACTIONS(96),
    [sym_at_reference] = ACTIONS(96),
    [sym_plugin_var] = ACTIONS(96),
    [sym_domain_pattern] = ACTIONS(96),
    [sym_protocol_name] = ACTIONS(96),
    [sym_plugin_full_name] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [aux_sym_value_text_start_token1] = ACTIONS(96),
    [sym_simple_value] = ACTIONS(96),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym__line_token1] = ACTIONS(100),
    [sym_comment] = ACTIONS(98),
    [anon_sym_CR] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(98),
    [sym_negation] = ACTIONS(100),
    [sym_regexp_pattern] = ACTIONS(100),
    [sym_regexp_pattern_no_flag] = ACTIONS(100),
    [sym_dollar_regexp] = ACTIONS(98),
    [sym_port_pattern] = ACTIONS(100),
    [sym_url_pattern] = ACTIONS(98),
    [sym_wildcard_pattern] = ACTIONS(100),
    [sym_ipv6_with_brackets] = ACTIONS(100),
    [sym_ipv4_pattern] = ACTIONS(100),
    [sym_ipv6_pattern] = ACTIONS(100),
    [sym_local_path_windows] = ACTIONS(98),
    [sym_local_path_unix] = ACTIONS(100),
    [sym_macro_pattern] = ACTIONS(100),
    [sym_at_reference] = ACTIONS(100),
    [sym_plugin_var] = ACTIONS(100),
    [sym_domain_pattern] = ACTIONS(100),
    [sym_protocol_name] = ACTIONS(98),
    [sym_plugin_full_name] = ACTIONS(98),
    [sym_simple_value] = ACTIONS(100),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym__line_token1] = ACTIONS(104),
    [sym_comment] = ACTIONS(102),
    [anon_sym_CR] = ACTIONS(104),
    [anon_sym_LF] = ACTIONS(102),
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
    [sym_protocol_name] = ACTIONS(102),
    [sym_plugin_full_name] = ACTIONS(102),
    [sym_simple_value] = ACTIONS(104),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym__line_token1] = ACTIONS(108),
    [sym_comment] = ACTIONS(106),
    [anon_sym_CR] = ACTIONS(108),
    [anon_sym_LF] = ACTIONS(106),
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
    [sym_protocol_name] = ACTIONS(106),
    [sym_plugin_full_name] = ACTIONS(106),
    [sym_simple_value] = ACTIONS(108),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym_negation,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym__pattern,
    ACTIONS(112), 2,
      aux_sym__line_token1,
      sym_comment,
    ACTIONS(11), 3,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    STATE(18), 3,
      sym__line,
      sym_rule,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 12,
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
  [38] = 7,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_negation,
    STATE(27), 1,
      sym__pattern,
    ACTIONS(116), 2,
      aux_sym__line_token1,
      sym_comment,
    ACTIONS(125), 3,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    STATE(18), 3,
      sym__line,
      sym_rule,
      aux_sym_source_file_repeat1,
    ACTIONS(122), 12,
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
  [76] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(130), 14,
      aux_sym__line_token1,
      sym_negation,
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
  [103] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(136), 14,
      aux_sym__line_token1,
      sym_negation,
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
  [130] = 2,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(136), 13,
      sym_negation,
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
  [154] = 2,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(130), 13,
      sym_negation,
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
  [178] = 2,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(142), 13,
      sym_negation,
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
  [202] = 2,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(146), 13,
      sym_negation,
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
  [226] = 3,
    STATE(26), 1,
      sym__pattern,
    ACTIONS(150), 3,
      sym_dollar_regexp,
      sym_url_pattern,
      sym_local_path_windows,
    ACTIONS(148), 12,
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
  [249] = 5,
    ACTIONS(68), 1,
      sym_protocol_name,
    ACTIONS(70), 1,
      sym_plugin_full_name,
    ACTIONS(72), 1,
      sym_simple_value,
    STATE(9), 1,
      aux_sym_rule_repeat1,
    STATE(15), 3,
      sym__operator,
      sym_protocol_operator,
      sym_plugin_operator,
  [267] = 5,
    ACTIONS(68), 1,
      sym_protocol_name,
    ACTIONS(70), 1,
      sym_plugin_full_name,
    ACTIONS(72), 1,
      sym_simple_value,
    STATE(8), 1,
      aux_sym_rule_repeat1,
    STATE(15), 3,
      sym__operator,
      sym_protocol_operator,
      sym_plugin_operator,
  [285] = 1,
    ACTIONS(152), 1,
      sym_reference_name,
  [289] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [293] = 1,
    ACTIONS(156), 1,
      sym_reference_name,
  [297] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON_SLASH_SLASH,
  [301] = 1,
    ACTIONS(160), 1,
      anon_sym_COLON_SLASH_SLASH,
  [305] = 1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
  [309] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 38,
  [SMALL_STATE(19)] = 76,
  [SMALL_STATE(20)] = 103,
  [SMALL_STATE(21)] = 130,
  [SMALL_STATE(22)] = 154,
  [SMALL_STATE(23)] = 178,
  [SMALL_STATE(24)] = 202,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 249,
  [SMALL_STATE(27)] = 267,
  [SMALL_STATE(28)] = 285,
  [SMALL_STATE(29)] = 289,
  [SMALL_STATE(30)] = 293,
  [SMALL_STATE(31)] = 297,
  [SMALL_STATE(32)] = 301,
  [SMALL_STATE(33)] = 305,
  [SMALL_STATE(34)] = 309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_value_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operator_value_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_value_repeat1, 2), SHIFT_REPEAT(30),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_value_repeat1, 2), SHIFT_REPEAT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_value, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_value, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_value, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_value, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_operator, 2, .production_id = 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol_operator, 2, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_operator, 2, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin_operator, 2, .production_id = 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6), SHIFT_REPEAT(32),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6), SHIFT_REPEAT(31),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, .production_id = 6), SHIFT_REPEAT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_reference, 3, .production_id = 9),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_reference, 3, .production_id = 9),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_reference_start, 3, .production_id = 9),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_reference_start, 3, .production_id = 9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_text, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_text_start, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text_start, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_operator, 3, .production_id = 8),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin_operator, 3, .production_id = 8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 1, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 1, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_operator, 3, .production_id = 7),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol_operator, 3, .production_id = 7),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
