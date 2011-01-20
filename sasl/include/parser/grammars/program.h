#ifndef SASL_PARSER_GRAMMARS_PROGRAM_H
#define SASL_PARSER_GRAMMARS_PROGRAM_H

#include <sasl/include/parser/parser_forward.h>
#include <sasl/include/parser_tree/program.h>

#include <eflib/include/platform/boost_begin.h>
#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/lex.hpp>
#include <eflib/include/platform/boost_end.h>

SASL_DEFINE_GRAMMAR( program_grammar, sasl::parser_tree::program() ){
	template<typename TokenDefT, typename SASLGrammarT>
	program_grammar(const TokenDefT& tok, SASLGrammarT& g);
	
	SASL_GRAMMAR_RULE_DEFINITION_HELPER();

	typename rule<sasl::parser_tree::program()>::type prog;
};

#endif