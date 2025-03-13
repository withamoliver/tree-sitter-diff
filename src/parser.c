#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 1
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  aux_sym_command_token1 = 3,
  anon_sym_new = 4,
  anon_sym_deleted = 5,
  anon_sym_file = 6,
  anon_sym_mode = 7,
  anon_sym_old = 8,
  anon_sym_rename = 9,
  anon_sym_from = 10,
  anon_sym_to = 11,
  anon_sym_Binary = 12,
  anon_sym_files = 13,
  anon_sym_and = 14,
  anon_sym_differ = 15,
  anon_sym_index = 16,
  anon_sym_DOT_DOT = 17,
  anon_sym_similarity = 18,
  anon_sym_index2 = 19,
  aux_sym_similarity_token1 = 20,
  anon_sym_PERCENT = 21,
  anon_sym_DASH_DASH_DASH = 22,
  anon_sym_PLUS_PLUS_PLUS = 23,
  anon_sym_AT_AT = 24,
  anon_sym_AT_AT2 = 25,
  aux_sym_location_token1 = 26,
  anon_sym_PLUS = 27,
  anon_sym_PLUS_PLUS = 28,
  anon_sym_PLUS_PLUS_PLUS_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_DASH_DASH = 31,
  anon_sym_DASH_DASH_DASH_DASH = 32,
  aux_sym_context_token1 = 33,
  anon_sym_POUND = 34,
  sym_content = 35,
  sym_linerange = 36,
  aux_sym_filename_token1 = 37,
  sym_commit = 38,
  sym_source = 39,
  sym__line = 40,
  sym__line_with_newline = 41,
  sym_block = 42,
  sym_hunks = 43,
  sym_hunk = 44,
  sym_changes = 45,
  sym_command = 46,
  sym_file_change = 47,
  sym_binary_change = 48,
  sym_index = 49,
  sym_similarity = 50,
  sym_old_file = 51,
  sym_new_file = 52,
  sym_location = 53,
  sym_addition = 54,
  sym_deletion = 55,
  sym_context = 56,
  sym_comment = 57,
  sym_filename = 58,
  sym_mode = 59,
  aux_sym_source_repeat1 = 60,
  aux_sym_block_repeat1 = 61,
  aux_sym_hunks_repeat1 = 62,
  aux_sym_changes_repeat1 = 63,
  aux_sym_changes_repeat2 = 64,
  aux_sym_filename_repeat1 = 65,
  alias_sym_score = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [aux_sym_command_token1] = "argument",
  [anon_sym_new] = "new",
  [anon_sym_deleted] = "deleted",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
  [anon_sym_old] = "old",
  [anon_sym_rename] = "rename",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_Binary] = "Binary",
  [anon_sym_files] = "files",
  [anon_sym_and] = "and",
  [anon_sym_differ] = "differ",
  [anon_sym_index] = "index",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_similarity] = "similarity",
  [anon_sym_index2] = "index",
  [aux_sym_similarity_token1] = "similarity_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_AT2] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = "++++",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [aux_sym_context_token1] = "context_token1",
  [anon_sym_POUND] = "#",
  [sym_content] = "content",
  [sym_linerange] = "linerange",
  [aux_sym_filename_token1] = "filename_token1",
  [sym_commit] = "commit",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym__line_with_newline] = "_line_with_newline",
  [sym_block] = "block",
  [sym_hunks] = "hunks",
  [sym_hunk] = "hunk",
  [sym_changes] = "changes",
  [sym_command] = "command",
  [sym_file_change] = "file_change",
  [sym_binary_change] = "binary_change",
  [sym_index] = "index",
  [sym_similarity] = "similarity",
  [sym_old_file] = "old_file",
  [sym_new_file] = "new_file",
  [sym_location] = "location",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [sym_context] = "context",
  [sym_comment] = "comment",
  [sym_filename] = "filename",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_hunks_repeat1] = "hunks_repeat1",
  [aux_sym_changes_repeat1] = "changes_repeat1",
  [aux_sym_changes_repeat2] = "changes_repeat2",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [alias_sym_score] = "score",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_diff] = anon_sym_diff,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_old] = anon_sym_old,
  [anon_sym_rename] = anon_sym_rename,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_Binary] = anon_sym_Binary,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_differ] = anon_sym_differ,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_similarity] = anon_sym_similarity,
  [anon_sym_index2] = anon_sym_index,
  [aux_sym_similarity_token1] = aux_sym_similarity_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT_AT2] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [aux_sym_context_token1] = aux_sym_context_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_content] = sym_content,
  [sym_linerange] = sym_linerange,
  [aux_sym_filename_token1] = aux_sym_filename_token1,
  [sym_commit] = sym_commit,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym__line_with_newline] = sym__line_with_newline,
  [sym_block] = sym_block,
  [sym_hunks] = sym_hunks,
  [sym_hunk] = sym_hunk,
  [sym_changes] = sym_changes,
  [sym_command] = sym_command,
  [sym_file_change] = sym_file_change,
  [sym_binary_change] = sym_binary_change,
  [sym_index] = sym_index,
  [sym_similarity] = sym_similarity,
  [sym_old_file] = sym_old_file,
  [sym_new_file] = sym_new_file,
  [sym_location] = sym_location,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [sym_context] = sym_context,
  [sym_comment] = sym_comment,
  [sym_filename] = sym_filename,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_hunks_repeat1] = aux_sym_hunks_repeat1,
  [aux_sym_changes_repeat1] = aux_sym_changes_repeat1,
  [aux_sym_changes_repeat2] = aux_sym_changes_repeat2,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [alias_sym_score] = alias_sym_score,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deleted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_old] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_differ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_similarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_similarity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_location_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_context_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_linerange] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__line_with_newline] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_hunks] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk] = {
    .visible = true,
    .named = true,
  },
  [sym_changes] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_file_change] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_change] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_similarity] = {
    .visible = true,
    .named = true,
  },
  [sym_old_file] = {
    .visible = true,
    .named = true,
  },
  [sym_new_file] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hunks_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_score] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_changes = 1,
  field_location = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_changes] = "changes",
  [field_location] = "location",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_location, 0},
  [1] =
    {field_changes, 2},
    {field_location, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_score,
  },
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 29,
  [39] = 28,
  [40] = 29,
  [41] = 28,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '\n', 93,
        '\r', 1,
        '#', 178,
        '%', 155,
        '+', 163,
        '-', 166,
        '.', 7,
        '@', 8,
        'B', 41,
        'a', 58,
        'd', 21,
        'f', 42,
        'i', 60,
        'm', 65,
        'n', 23,
        'o', 50,
        'r', 32,
        's', 40,
        't', 63,
        'b', 85,
        'c', 85,
        'e', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(179);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(157);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '@') ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(160);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(189);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(189);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '\n', 93,
        '\r', 1,
        '#', 178,
        '+', 163,
        '-', 166,
        '@', 170,
        'B', 175,
        'd', 173,
        'i', 177,
        'n', 171,
        'o', 176,
        'r', 172,
        's', 174,
        '\t', 169,
        0x0b, 169,
        '\f', 169,
        ' ', 169,
      );
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 87:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '\n', 93,
        '\r', 1,
        '%', 155,
        '.', 7,
        '@', 9,
        'a', 58,
        'd', 22,
        'f', 42,
        'i', 62,
        'm', 65,
        'n', 23,
        'o', 50,
        'r', 32,
        't', 63,
        'b', 85,
        'c', 85,
        'e', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 88:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '\n', 93,
        '\r', 1,
        '+', 5,
        '-', 78,
        '@', 9,
        'd', 45,
        'f', 46,
        'i', 62,
        'm', 65,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 89:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '\n', 93,
        '\r', 1,
        '@', 9,
        'd', 45,
        'f', 46,
        'i', 62,
        'm', 65,
        '+', 78,
        '-', 78,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 90:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(90);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_old);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(158);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_context_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == '@') ADVANCE(159);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_content);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 86},
  [2] = {.lex_state = 86},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 86},
  [5] = {.lex_state = 86},
  [6] = {.lex_state = 86},
  [7] = {.lex_state = 86},
  [8] = {.lex_state = 86},
  [9] = {.lex_state = 86},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 86},
  [13] = {.lex_state = 86},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 86},
  [16] = {.lex_state = 86},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 86},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 86},
  [25] = {.lex_state = 90},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 90},
  [28] = {.lex_state = 90},
  [29] = {.lex_state = 90},
  [30] = {.lex_state = 91},
  [31] = {.lex_state = 91},
  [32] = {.lex_state = 90},
  [33] = {.lex_state = 90},
  [34] = {.lex_state = 90},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 90},
  [37] = {.lex_state = 90},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 88},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 88},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 88},
  [58] = {.lex_state = 88},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 88},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 88},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 88},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 77},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 88},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 88},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_old] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_Binary] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_similarity] = ACTIONS(1),
    [anon_sym_index2] = ACTIONS(1),
    [aux_sym_similarity_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(85),
    [sym__line] = STATE(43),
    [sym__line_with_newline] = STATE(3),
    [sym_block] = STATE(3),
    [sym_command] = STATE(88),
    [sym_file_change] = STATE(43),
    [sym_binary_change] = STATE(43),
    [sym_index] = STATE(43),
    [sym_similarity] = STATE(43),
    [sym_old_file] = STATE(43),
    [sym_new_file] = STATE(43),
    [sym_location] = STATE(43),
    [sym_addition] = STATE(3),
    [sym_deletion] = STATE(3),
    [sym_context] = STATE(3),
    [sym_comment] = STATE(43),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_diff] = ACTIONS(7),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_deleted] = ACTIONS(11),
    [anon_sym_old] = ACTIONS(13),
    [anon_sym_rename] = ACTIONS(15),
    [anon_sym_Binary] = ACTIONS(17),
    [anon_sym_index] = ACTIONS(19),
    [anon_sym_similarity] = ACTIONS(21),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_AT_AT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(35),
    [aux_sym_context_token1] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
  },
  [2] = {
    [sym__line] = STATE(83),
    [sym__line_with_newline] = STATE(2),
    [sym_block] = STATE(2),
    [sym_command] = STATE(88),
    [sym_file_change] = STATE(83),
    [sym_binary_change] = STATE(83),
    [sym_index] = STATE(83),
    [sym_similarity] = STATE(83),
    [sym_old_file] = STATE(83),
    [sym_new_file] = STATE(83),
    [sym_location] = STATE(83),
    [sym_addition] = STATE(2),
    [sym_deletion] = STATE(2),
    [sym_context] = STATE(2),
    [sym_comment] = STATE(83),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_source_token1] = ACTIONS(43),
    [anon_sym_diff] = ACTIONS(46),
    [anon_sym_new] = ACTIONS(49),
    [anon_sym_deleted] = ACTIONS(52),
    [anon_sym_old] = ACTIONS(55),
    [anon_sym_rename] = ACTIONS(58),
    [anon_sym_Binary] = ACTIONS(61),
    [anon_sym_index] = ACTIONS(64),
    [anon_sym_similarity] = ACTIONS(67),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(70),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(73),
    [anon_sym_AT_AT] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_PLUS_PLUS] = ACTIONS(79),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_DASH_DASH] = ACTIONS(85),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(88),
    [aux_sym_context_token1] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(94),
  },
  [3] = {
    [sym__line] = STATE(49),
    [sym__line_with_newline] = STATE(2),
    [sym_block] = STATE(2),
    [sym_command] = STATE(88),
    [sym_file_change] = STATE(49),
    [sym_binary_change] = STATE(49),
    [sym_index] = STATE(49),
    [sym_similarity] = STATE(49),
    [sym_old_file] = STATE(49),
    [sym_new_file] = STATE(49),
    [sym_location] = STATE(49),
    [sym_addition] = STATE(2),
    [sym_deletion] = STATE(2),
    [sym_context] = STATE(2),
    [sym_comment] = STATE(49),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_source_token1] = ACTIONS(99),
    [anon_sym_diff] = ACTIONS(7),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_deleted] = ACTIONS(11),
    [anon_sym_old] = ACTIONS(13),
    [anon_sym_rename] = ACTIONS(15),
    [anon_sym_Binary] = ACTIONS(17),
    [anon_sym_index] = ACTIONS(19),
    [anon_sym_similarity] = ACTIONS(21),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_AT_AT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(35),
    [aux_sym_context_token1] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      anon_sym_deleted,
    ACTIONS(13), 1,
      anon_sym_old,
    ACTIONS(15), 1,
      anon_sym_rename,
    ACTIONS(17), 1,
      anon_sym_Binary,
    ACTIONS(19), 1,
      anon_sym_index,
    ACTIONS(21), 1,
      anon_sym_similarity,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(81), 1,
      sym_old_file,
    STATE(78), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(103), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [54] = 13,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      anon_sym_deleted,
    ACTIONS(13), 1,
      anon_sym_old,
    ACTIONS(15), 1,
      anon_sym_rename,
    ACTIONS(17), 1,
      anon_sym_Binary,
    ACTIONS(19), 1,
      anon_sym_index,
    ACTIONS(21), 1,
      anon_sym_similarity,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(61), 1,
      sym_old_file,
    STATE(78), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(109), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [108] = 12,
    ACTIONS(31), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      aux_sym_context_token1,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(117), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(8), 1,
      aux_sym_changes_repeat2,
    STATE(21), 1,
      sym_changes,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(12), 3,
      sym_addition,
      sym_deletion,
      sym_context,
    ACTIONS(113), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_POUND,
  [159] = 11,
    ACTIONS(123), 1,
      anon_sym_new,
    ACTIONS(126), 1,
      anon_sym_deleted,
    ACTIONS(129), 1,
      anon_sym_old,
    ACTIONS(132), 1,
      anon_sym_rename,
    ACTIONS(135), 1,
      anon_sym_Binary,
    ACTIONS(138), 1,
      anon_sym_index,
    ACTIONS(141), 1,
      anon_sym_similarity,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(78), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(121), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [208] = 11,
    ACTIONS(31), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      aux_sym_context_token1,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(117), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(9), 1,
      aux_sym_changes_repeat2,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(12), 3,
      sym_addition,
      sym_deletion,
      sym_context,
    ACTIONS(146), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_POUND,
  [256] = 11,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(170), 1,
      aux_sym_context_token1,
    STATE(9), 1,
      aux_sym_changes_repeat2,
    ACTIONS(158), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(164), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(12), 3,
      sym_addition,
      sym_deletion,
      sym_context,
    ACTIONS(150), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_POUND,
  [304] = 5,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(73), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(175), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [339] = 5,
    ACTIONS(181), 1,
      anon_sym_AT_AT,
    STATE(73), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(179), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [374] = 4,
    ACTIONS(186), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_changes_repeat1,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(189), 11,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [405] = 4,
    ACTIONS(193), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
    ACTIONS(191), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(196), 11,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [436] = 4,
    ACTIONS(198), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(150), 11,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [467] = 2,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(202), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [493] = 2,
    ACTIONS(204), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(206), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [519] = 2,
    ACTIONS(41), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(208), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [545] = 2,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(121), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [571] = 2,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(212), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [597] = 2,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(216), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [623] = 2,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(220), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [649] = 2,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(224), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      aux_sym_context_token1,
  [675] = 4,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(19), 1,
      sym_hunks,
    STATE(73), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [689] = 4,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(15), 1,
      sym_hunks,
    STATE(73), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [703] = 4,
    ACTIONS(226), 1,
      aux_sym_source_token1,
    ACTIONS(228), 1,
      aux_sym_filename_token1,
    STATE(29), 1,
      aux_sym_filename_repeat1,
    STATE(52), 1,
      sym_filename,
  [716] = 3,
    ACTIONS(232), 1,
      aux_sym_similarity_token1,
    STATE(54), 1,
      sym_mode,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [727] = 4,
    ACTIONS(228), 1,
      aux_sym_filename_token1,
    ACTIONS(234), 1,
      aux_sym_source_token1,
    STATE(29), 1,
      aux_sym_filename_repeat1,
    STATE(55), 1,
      sym_filename,
  [740] = 3,
    ACTIONS(238), 1,
      aux_sym_filename_token1,
    STATE(28), 1,
      aux_sym_filename_repeat1,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [751] = 3,
    ACTIONS(243), 1,
      aux_sym_filename_token1,
    STATE(28), 1,
      aux_sym_filename_repeat1,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [762] = 3,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_source_token1,
    ACTIONS(249), 1,
      aux_sym_location_token1,
  [772] = 3,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      aux_sym_source_token1,
    ACTIONS(255), 1,
      aux_sym_location_token1,
  [782] = 3,
    ACTIONS(228), 1,
      aux_sym_filename_token1,
    STATE(29), 1,
      aux_sym_filename_repeat1,
    STATE(52), 1,
      sym_filename,
  [792] = 3,
    ACTIONS(257), 1,
      aux_sym_filename_token1,
    STATE(40), 1,
      aux_sym_filename_repeat1,
    STATE(63), 1,
      sym_filename,
  [802] = 3,
    ACTIONS(228), 1,
      aux_sym_filename_token1,
    STATE(29), 1,
      aux_sym_filename_repeat1,
    STATE(55), 1,
      sym_filename,
  [812] = 3,
    ACTIONS(228), 1,
      aux_sym_filename_token1,
    STATE(29), 1,
      aux_sym_filename_repeat1,
    STATE(65), 1,
      sym_filename,
  [822] = 3,
    ACTIONS(259), 1,
      aux_sym_filename_token1,
    STATE(38), 1,
      aux_sym_filename_repeat1,
    STATE(70), 1,
      sym_filename,
  [832] = 3,
    ACTIONS(228), 1,
      aux_sym_filename_token1,
    STATE(29), 1,
      aux_sym_filename_repeat1,
    STATE(46), 1,
      sym_filename,
  [842] = 3,
    ACTIONS(261), 1,
      anon_sym_and,
    ACTIONS(263), 1,
      aux_sym_filename_token1,
    STATE(39), 1,
      aux_sym_filename_repeat1,
  [852] = 3,
    ACTIONS(265), 1,
      anon_sym_and,
    ACTIONS(267), 1,
      aux_sym_filename_token1,
    STATE(39), 1,
      aux_sym_filename_repeat1,
  [862] = 3,
    ACTIONS(261), 1,
      anon_sym_differ,
    ACTIONS(270), 1,
      aux_sym_filename_token1,
    STATE(41), 1,
      aux_sym_filename_repeat1,
  [872] = 3,
    ACTIONS(265), 1,
      anon_sym_differ,
    ACTIONS(272), 1,
      aux_sym_filename_token1,
    STATE(41), 1,
      aux_sym_filename_repeat1,
  [882] = 2,
    ACTIONS(275), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(67), 1,
      sym_new_file,
  [889] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      aux_sym_source_token1,
  [896] = 1,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [901] = 1,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [906] = 1,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [911] = 2,
    ACTIONS(232), 1,
      aux_sym_similarity_token1,
    STATE(46), 1,
      sym_mode,
  [918] = 1,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [923] = 2,
    ACTIONS(277), 1,
      aux_sym_source_token1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [930] = 1,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [935] = 2,
    ACTIONS(291), 1,
      anon_sym_file,
    ACTIONS(293), 1,
      anon_sym_mode,
  [942] = 1,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [947] = 1,
    ACTIONS(297), 2,
      anon_sym_from,
      anon_sym_to,
  [952] = 1,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [957] = 1,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [962] = 1,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [967] = 2,
    ACTIONS(232), 1,
      aux_sym_similarity_token1,
    STATE(44), 1,
      sym_mode,
  [974] = 2,
    ACTIONS(275), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(71), 1,
      sym_new_file,
  [981] = 1,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [986] = 1,
    ACTIONS(307), 1,
      anon_sym_AT_AT2,
  [990] = 1,
    ACTIONS(309), 1,
      aux_sym_source_token1,
  [994] = 1,
    ACTIONS(311), 1,
      anon_sym_mode,
  [998] = 1,
    ACTIONS(313), 1,
      anon_sym_differ,
  [1002] = 1,
    ACTIONS(291), 1,
      anon_sym_file,
  [1006] = 1,
    ACTIONS(315), 1,
      aux_sym_source_token1,
  [1010] = 1,
    ACTIONS(293), 1,
      anon_sym_mode,
  [1014] = 1,
    ACTIONS(317), 1,
      aux_sym_source_token1,
  [1018] = 1,
    ACTIONS(319), 1,
      sym_linerange,
  [1022] = 1,
    ACTIONS(321), 1,
      anon_sym_DOT_DOT,
  [1026] = 1,
    ACTIONS(323), 1,
      anon_sym_and,
  [1030] = 1,
    ACTIONS(325), 1,
      aux_sym_source_token1,
  [1034] = 1,
    ACTIONS(327), 1,
      sym_commit,
  [1038] = 1,
    ACTIONS(329), 1,
      aux_sym_source_token1,
  [1042] = 1,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
  [1046] = 1,
    ACTIONS(333), 1,
      aux_sym_similarity_token1,
  [1050] = 1,
    ACTIONS(234), 1,
      sym_content,
  [1054] = 1,
    ACTIONS(226), 1,
      sym_content,
  [1058] = 1,
    ACTIONS(335), 1,
      aux_sym_source_token1,
  [1062] = 1,
    ACTIONS(226), 1,
      aux_sym_source_token1,
  [1066] = 1,
    ACTIONS(234), 1,
      aux_sym_source_token1,
  [1070] = 1,
    ACTIONS(337), 1,
      aux_sym_source_token1,
  [1074] = 1,
    ACTIONS(339), 1,
      sym_content,
  [1078] = 1,
    ACTIONS(277), 1,
      aux_sym_source_token1,
  [1082] = 1,
    ACTIONS(341), 1,
      aux_sym_command_token1,
  [1086] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [1090] = 1,
    ACTIONS(345), 1,
      sym_linerange,
  [1094] = 1,
    ACTIONS(347), 1,
      anon_sym_files,
  [1098] = 1,
    ACTIONS(349), 1,
      aux_sym_source_token1,
  [1102] = 1,
    ACTIONS(351), 1,
      sym_commit,
  [1106] = 1,
    ACTIONS(353), 1,
      anon_sym_index2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 405,
  [SMALL_STATE(14)] = 436,
  [SMALL_STATE(15)] = 467,
  [SMALL_STATE(16)] = 493,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 545,
  [SMALL_STATE(19)] = 571,
  [SMALL_STATE(20)] = 597,
  [SMALL_STATE(21)] = 623,
  [SMALL_STATE(22)] = 649,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 689,
  [SMALL_STATE(25)] = 703,
  [SMALL_STATE(26)] = 716,
  [SMALL_STATE(27)] = 727,
  [SMALL_STATE(28)] = 740,
  [SMALL_STATE(29)] = 751,
  [SMALL_STATE(30)] = 762,
  [SMALL_STATE(31)] = 772,
  [SMALL_STATE(32)] = 782,
  [SMALL_STATE(33)] = 792,
  [SMALL_STATE(34)] = 802,
  [SMALL_STATE(35)] = 812,
  [SMALL_STATE(36)] = 822,
  [SMALL_STATE(37)] = 832,
  [SMALL_STATE(38)] = 842,
  [SMALL_STATE(39)] = 852,
  [SMALL_STATE(40)] = 862,
  [SMALL_STATE(41)] = 872,
  [SMALL_STATE(42)] = 882,
  [SMALL_STATE(43)] = 889,
  [SMALL_STATE(44)] = 896,
  [SMALL_STATE(45)] = 901,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 911,
  [SMALL_STATE(48)] = 918,
  [SMALL_STATE(49)] = 923,
  [SMALL_STATE(50)] = 930,
  [SMALL_STATE(51)] = 935,
  [SMALL_STATE(52)] = 942,
  [SMALL_STATE(53)] = 947,
  [SMALL_STATE(54)] = 952,
  [SMALL_STATE(55)] = 957,
  [SMALL_STATE(56)] = 962,
  [SMALL_STATE(57)] = 967,
  [SMALL_STATE(58)] = 974,
  [SMALL_STATE(59)] = 981,
  [SMALL_STATE(60)] = 986,
  [SMALL_STATE(61)] = 990,
  [SMALL_STATE(62)] = 994,
  [SMALL_STATE(63)] = 998,
  [SMALL_STATE(64)] = 1002,
  [SMALL_STATE(65)] = 1006,
  [SMALL_STATE(66)] = 1010,
  [SMALL_STATE(67)] = 1014,
  [SMALL_STATE(68)] = 1018,
  [SMALL_STATE(69)] = 1022,
  [SMALL_STATE(70)] = 1026,
  [SMALL_STATE(71)] = 1030,
  [SMALL_STATE(72)] = 1034,
  [SMALL_STATE(73)] = 1038,
  [SMALL_STATE(74)] = 1042,
  [SMALL_STATE(75)] = 1046,
  [SMALL_STATE(76)] = 1050,
  [SMALL_STATE(77)] = 1054,
  [SMALL_STATE(78)] = 1058,
  [SMALL_STATE(79)] = 1062,
  [SMALL_STATE(80)] = 1066,
  [SMALL_STATE(81)] = 1070,
  [SMALL_STATE(82)] = 1074,
  [SMALL_STATE(83)] = 1078,
  [SMALL_STATE(84)] = 1082,
  [SMALL_STATE(85)] = 1086,
  [SMALL_STATE(86)] = 1090,
  [SMALL_STATE(87)] = 1094,
  [SMALL_STATE(88)] = 1098,
  [SMALL_STATE(89)] = 1102,
  [SMALL_STATE(90)] = 1106,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 2, 0, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 2, 0, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changes, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changes, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0), SHIFT_REPEAT(79),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2, 0, 0), SHIFT_REPEAT(82),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunks, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunks, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunks_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 1, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 1, 0, 0), SHIFT_REPEAT(14),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3, 0, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 3, 0, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, 0, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_diff(void) {
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
