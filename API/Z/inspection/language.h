/* Zeta API - Z/inspection/language.h
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2023 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_language_H
#define Z_inspection_language_H

#include <Z/keys/language.h>
#include <Z/inspection/C.h>
#include <Z/inspection/compiler.h>

#if defined(__cplusplus) && (defined(__OBJC__) || defined(__OBJC2__))
#	include <Z/inspection/C++.h>
#	include <Z/inspection/Objective-C.h>
#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_CPP

#elif defined(__OBJC__) || defined(__OBJC2__)
#	include <Z/inspection/Objective-C.h>
#	define Z_LANGUAGE Z_LANGUAGE_OBJECTIVE_C

#elif defined(__cplusplus)
#	include <Z/inspection/C++.h>
#	define Z_LANGUAGE Z_LANGUAGE_CPP

#else
#	define Z_LANGUAGE Z_LANGUAGE_C
#endif

#define Z_LANGUAGE_INCLUDES(LANGUAGE) \
	((Z_LANGUAGE & Z_LANGUAGE_##LANGUAGE) == Z_LANGUAGE_##LANGUAGE)

#define Z_C_FLAG(FLAG) Z_IS_TRUE(FLAG)

#if Z_LANGUAGE_INCLUDES(CPP)
#	define Z_CPP_FLAG(FLAG) Z_IS_TRUE(FLAG)
#else
#	define Z_CPP_FLAG(FLAG) 0
#endif

#if Z_LANGUAGE_INCLUDES(OBJECTIVE_C)
#	define Z_OBJECTIVE_C_FLAG(FLAG) Z_IS_TRUE(FLAG)
#else
#	define Z_OBJECTIVE_C_FLAG(FLAG) 0
#endif

#if defined(Z_USE_LANGUAGE_STD) || Z_COMPILER == Z_COMPILER_UNKNOWN
#	define Z_DIALECT_HAS(LANGUAGE, FEATURE) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_##FEATURE)

#	define Z_DIALECT_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_ATTRIBUTE_##ATTRIBUTE)

#	define Z_DIALECT_HAS_ESCAPE_SEQUENCE(LANGUAGE, ESCAPE_SEQUENCE) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_ESCAPE_SEQUENCE_##ESCAPE_SEQUENCE)

#	define Z_DIALECT_HAS_IDENTIFIER(LANGUAGE, IDENTIFIER) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_IDENTIFIER_##IDENTIFIER)

#	define Z_DIALECT_HAS_LITERAL(LANGUAGE, LITERAL) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_LITERAL_##LITERAL)

#	define Z_DIALECT_HAS_OPERATOR(LANGUAGE, OPERATOR) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_OPERATOR_##OPERATOR)

#	define Z_DIALECT_HAS_OPERATOR_CASE(LANGUAGE, OPERATOR_CASE) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_OPERATOR_CASE_##OPERATOR_CASE)

#	define Z_DIALECT_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE)

#	define Z_DIALECT_HAS_PREPROCESSOR_IDENTIFIER(LANGUAGE, PREPROCESSOR_IDENTIFIER) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_PREPROCESSOR_IDENTIFIER_##PREPROCESSOR_IDENTIFIER)

#	define Z_DIALECT_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR)

#	define Z_DIALECT_HAS_SPECIFIER(LANGUAGE, SPECIFIER) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_SPECIFIER_##SPECIFIER)

#	define Z_DIALECT_HAS_SPECIFIER_CASE(LANGUAGE, SPECIFIER_CASE) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_SPECIFIER_CASE_##SPECIFIER_CASE)

#	define Z_DIALECT_HAS_STD_PRAGMA(LANGUAGE, STD_PRAGMA) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_STD_PRAGMA_##STD_PRAGMA)

#	define Z_DIALECT_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_STORAGE_CLASS_##STORAGE_CLASS)

#	define Z_DIALECT_HAS_TYPE(LANGUAGE, TYPE) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_TYPE_##TYPE)

#	define Z_DIALECT_HAS_TYPE_MODIFIER(LANGUAGE, TYPE_MODIFIER) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_TYPE_MODIFIER_##TYPE_MODIFIER)

#	define Z_DIALECT_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) \
		Z_IS_TRUE(Z_COMPILER_HAS_##LANGUAGE##_TYPE_QUALIFIER_##TYPE_QUALIFIER)


#elif defined(Z_USE_SUPPORTED_LANGUAGE_STD)

#	define Z_DIALECT_HAS(LANGUAGE, FEATURE) (		    \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_##FEATURE) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_##FEATURE))

#	define Z_DIALECT_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE) (			\
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE))

#	define Z_DIALECT_HAS_ESCAPE_SEQUENCE(LANGUAGE, ESCAPE_SEQUENCE) (		    \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ESCAPE_SEQUENCE_##ESCAPE_SEQUENCE) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ESCAPE_SEQUENCE_##ESCAPE_SEQUENCE))

#	define Z_DIALECT_HAS_IDENTIFIER(LANGUAGE, IDENTIFIER) (			  \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_IDENTIFIER_##IDENTIFIER) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_IDENTIFIER_##IDENTIFIER))

#	define Z_DIALECT_HAS_LITERAL(LANGUAGE, LITERAL) (		    \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_LITERAL_##LITERAL) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_LITERAL_##LITERAL))

#	define Z_DIALECT_HAS_OPERATOR(LANGUAGE, OPERATOR) (		      \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_##OPERATOR) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_##OPERATOR))

#	define Z_DIALECT_HAS_OPERATOR_CASE(LANGUAGE, OPERATOR, CASE) (			    \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_CASE_##OPERATOR##_##CASE) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_CASE_##OPERATOR##_##CASE))

#	define Z_DIALECT_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE) (			  \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE))

#	define Z_DIALECT_HAS_PREPROCESSOR_IDENTIFIER(LANGUAGE, PREPROCESSOR_IDENTIFIER) (		    \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_IDENTIFIER_##PREPROCESSOR_IDENTIFIER) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_IDENTIFIER_##PREPROCESSOR_IDENTIFIER))

#	define Z_DIALECT_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR) (			\
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR))

#	define Z_DIALECT_HAS_SPECIFIER(LANGUAGE, SPECIFIER) (			\
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER))

#	define Z_DIALECT_HAS_SPECIFIER_CASE(LANGUAGE, SPECIFIER, CASE) (		      \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_CASE_##SPECIFIER##_##CASE) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_CASE_##SPECIFIER##_##CASE))

#	define Z_DIALECT_HAS_STD_PRAGMA(LANGUAGE, STD_PRAGMA) (			  \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STD_PRAGMA_##STD_PRAGMA) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STD_PRAGMA_##STD_PRAGMA))

#	define Z_DIALECT_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) (			\
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS))

#	define Z_DIALECT_HAS_TYPE(LANGUAGE, TYPE) (		      \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_##TYPE) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_##TYPE))

#	define Z_DIALECT_HAS_TYPE_MODIFIER(LANGUAGE, TYPE_MODIFIER) (			\
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_MODIFIER_##TYPE_MODIFIER) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_MODIFIER_##TYPE_MODIFIER))

#	define Z_DIALECT_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) (			  \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER) && \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER))

#else
#	define Z_DIALECT_HAS			     Z_COMPILER_DIALECT_HAS
#	define Z_DIALECT_HAS_ATTRIBUTE		     Z_COMPILER_DIALECT_HAS_ATTRIBUTE
#	define Z_DIALECT_HAS_ESCAPE_SEQUENCE	     Z_COMPILER_DIALECT_HAS_ESCAPE_SEQUENCE
#	define Z_DIALECT_HAS_IDENTIFIER		     Z_COMPILER_DIALECT_HAS_IDENTIFIER
#	define Z_DIALECT_HAS_LITERAL		     Z_COMPILER_DIALECT_HAS_LITERAL
#	define Z_DIALECT_HAS_OPERATOR		     Z_COMPILER_DIALECT_HAS_OPERATOR
#	define Z_DIALECT_HAS_OPERATOR_CASE	     Z_COMPILER_DIALECT_HAS_OPERATOR_CASE
#	define Z_DIALECT_HAS_PREPROCESSOR_DIRECTIVE  Z_COMPILER_DIALECT_HAS_PREPROCESSOR_DIRECTIVE
#	define Z_DIALECT_HAS_PREPROCESSOR_IDENTIFIER Z_COMPILER_DIALECT_HAS_PREPROCESSOR_IDENTIFIER
#	define Z_DIALECT_HAS_PREPROCESSOR_OPERATOR   Z_COMPILER_DIALECT_HAS_PREPROCESSOR_OPERATOR
#	define Z_DIALECT_HAS_SPECIFIER		     Z_COMPILER_DIALECT_HAS_SPECIFIER
#	define Z_DIALECT_HAS_SPECIFIER_CASE	     Z_COMPILER_DIALECT_HAS_SPECIFIER_CASE
#	define Z_DIALECT_HAS_STD_PRAGMA		     Z_COMPILER_DIALECT_HAS_STD_PRAGMA
#	define Z_DIALECT_HAS_STORAGE_CLASS	     Z_COMPILER_DIALECT_HAS_STORAGE_CLASS
#	define Z_DIALECT_HAS_TYPE		     Z_COMPILER_DIALECT_HAS_TYPE
#	define Z_DIALECT_HAS_TYPE_MODIFIER	     Z_COMPILER_DIALECT_HAS_TYPE_MODIFIER
#	define Z_DIALECT_HAS_TYPE_QUALIFIER	     Z_COMPILER_DIALECT_HAS_TYPE_QUALIFIER
#endif

#endif /* Z_inspection_language_H */
