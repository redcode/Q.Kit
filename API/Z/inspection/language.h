/* Z Kit - inspection/language.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
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

#define Z_C_FLAG(FLAG) FLAG

#if Z_LANGUAGE_INCLUDES(CPP)
#	define Z_CPP_FLAG(FLAG) FLAG
#else
#	define Z_CPP_FLAG(FLAG) FALSE
#endif

#if Z_LANGUAGE_INCLUDES(OBJECTIVE_C)
#	define Z_OBJECTIVE_C_FLAG(FLAG) FLAG
#else
#	define Z_OBJECTIVE_C_FLAG(FLAG) FALSE
#endif

#if defined(Z_USE_LANGUAGE_STANDARD) || Z_COMPILER == Z_COMPILER_UNKNOWN

#	define Z_DIALECT_HAS(LANGUAGE, FEATURE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_##FEATURE)

#	define Z_DIALECT_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE)

#	define Z_DIALECT_HAS_ESCAPE_SEQUENCE(LANGUAGE, ESCAPE_SEQUENCE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ESCAPE_SEQUENCE_##ESCAPE_SEQUENCE)

#	define Z_DIALECT_HAS_IDENTIFIER(LANGUAGE, IDENTIFIER) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_IDENTIFIER_##IDENTIFIER)

#	define Z_DIALECT_HAS_LITERAL(LANGUAGE, LITERAL) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_LITERAL_##LITERAL)

#	define Z_DIALECT_HAS_OPERATOR(LANGUAGE, OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_##OPERATOR)

#	define Z_DIALECT_HAS_OPERATOR_CASE(LANGUAGE, OPERATOR, CASE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_CASE_##OPERATOR##_##CASE)

#	define Z_DIALECT_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE)

#	define Z_DIALECT_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR)

#	define Z_DIALECT_HAS_SPECIFIER(LANGUAGE, SPECIFIER) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER)

#	define Z_DIALECT_HAS_SPECIFIER_CASE(LANGUAGE, SPECIFIER, CASE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_CASE_##SPECIFIER##_##CASE)

#	define Z_DIALECT_HAS_STANDARD_PRAGMA(LANGUAGE, STANDARD_PRAGMA) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STANDARD_PRAGMA_##STANDARD_PRAGMA)

#	define Z_DIALECT_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS)

#	define Z_DIALECT_HAS_TYPE(LANGUAGE, TYPE) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_##TYPE)

#	define Z_DIALECT_HAS_TYPE_MODIFIER(LANGUAGE, TYPE_MODIFIER) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_MODIFIER_##TYPE_MODIFIER)

#	define Z_DIALECT_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) \
		Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER)

#elif defined(Z_USE_SUPPORTED_LANGUAGE_STANDARD)

#	define Z_DIALECT_HAS(LANGUAGE, FEATURE)			     \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_##FEATURE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_##FEATURE))

#	define Z_DIALECT_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE)			 \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE))

#	define Z_DIALECT_HAS_ESCAPE_SEQUENCE(LANGUAGE, ESCAPE_SEQUENCE)			     \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_ESCAPE_SEQUENCE_##ESCAPE_SEQUENCE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ESCAPE_SEQUENCE_##ESCAPE_SEQUENCE))

#	define Z_DIALECT_HAS_IDENTIFIER(LANGUAGE, IDENTIFIER)			   \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_IDENTIFIER_##IDENTIFIER) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_IDENTIFIER_##IDENTIFIER))

#	define Z_DIALECT_HAS_LITERAL(LANGUAGE, LITERAL)			     \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_LITERAL_##LITERAL) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_LITERAL_##LITERAL))

#	define Z_DIALECT_HAS_OPERATOR(LANGUAGE, OPERATOR)		       \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_##OPERATOR) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_##OPERATOR))

#	define Z_DIALECT_HAS_OPERATOR_CASE(LANGUAGE, OPERATOR, CASE)			     \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_OPERATOR_CASE_##OPERATOR##_##CASE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_CASE_##OPERATOR##_##CASE))

#	define Z_DIALECT_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE)			   \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE))

#	define Z_DIALECT_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR)			 \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR))

#	define Z_DIALECT_HAS_SPECIFIER(LANGUAGE, SPECIFIER)			 \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER))

#	define Z_DIALECT_HAS_SPECIFIER_CASE(LANGUAGE, SPECIFIER, CASE)			       \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_SPECIFIER_CASE_##SPECIFIER##_##CASE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_CASE_##SPECIFIER##_##CASE))

#	define Z_DIALECT_HAS_STANDARD_PRAGMA(LANGUAGE, STANDARD_PRAGMA)			     \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STANDARD_PRAGMA_##STANDARD_PRAGMA) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STANDARD_PRAGMA_##STANDARD_PRAGMA))

#	define Z_DIALECT_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS)			 \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS))

#	define Z_DIALECT_HAS_TYPE(LANGUAGE, TYPE)		       \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_##TYPE) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_##TYPE))

#	define Z_DIALECT_HAS_TYPE_MODIFIER(LANGUAGE, TYPE_MODIFIER)			 \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_MODIFIER_##TYPE_MODIFIER) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_MODIFIER_##TYPE_MODIFIER))

#	define Z_DIALECT_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER)			   \
		(Z_##LANGUAGE##_FLAG(Z_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER) && \
		 Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER))

#else

#	define Z_DIALECT_HAS(LANGUAGE, FEATURE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_##FEATURE)

#	define Z_DIALECT_HAS_ATTRIBUTE(LANGUAGE, ATTRIBUTE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ATTRIBUTE_##ATTRIBUTE)

#	define Z_DIALECT_HAS_ESCAPE_SEQUENCE(LANGUAGE, ESCAPE_SEQUENCE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_ESCAPE_SEQUENCE_##ESCAPE_SEQUENCE)

#	define Z_DIALECT_HAS_IDENTIFIER(LANGUAGE, IDENTIFIER) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_IDENTIFIER_##IDENTIFIER)

#	define Z_DIALECT_HAS_LITERAL(LANGUAGE, LITERAL) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_LITERAL_##LITERAL)

#	define Z_DIALECT_HAS_OPERATOR(LANGUAGE, OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_##OPERATOR)

#	define Z_DIALECT_HAS_OPERATOR_CASE(LANGUAGE, OPERATOR, CASE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_OPERATOR_CASE_##OPERATOR##_##CASE)

#	define Z_DIALECT_HAS_PREPROCESSOR_DIRECTIVE(LANGUAGE, PREPROCESSOR_DIRECTIVE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_DIRECTIVE_##PREPROCESSOR_DIRECTIVE)

#	define Z_DIALECT_HAS_PREPROCESSOR_OPERATOR(LANGUAGE, PREPROCESSOR_OPERATOR) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_PREPROCESSOR_OPERATOR_##PREPROCESSOR_OPERATOR)

#	define Z_DIALECT_HAS_SPECIFIER(LANGUAGE, SPECIFIER) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_##SPECIFIER)

#	define Z_DIALECT_HAS_SPECIFIER_CASE(LANGUAGE, SPECIFIER, CASE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_SPECIFIER_CASE_##SPECIFIER##_##CASE)

#	define Z_DIALECT_HAS_STANDARD_PRAGMA(LANGUAGE, STANDARD_PRAGMA) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STANDARD_PRAGMA_##STANDARD_PRAGMA)

#	define Z_DIALECT_HAS_STORAGE_CLASS(LANGUAGE, STORAGE_CLASS) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_STORAGE_CLASS_##STORAGE_CLASS)

#	define Z_DIALECT_HAS_TYPE(LANGUAGE, TYPE) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_##TYPE)

#	define Z_DIALECT_HAS_TYPE_MODIFIER(LANGUAGE, TYPE_MODIFIER) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_MODIFIER_##TYPE_MODIFIER)

#	define Z_DIALECT_HAS_TYPE_QUALIFIER(LANGUAGE, TYPE_QUALIFIER) \
		Z_##LANGUAGE##_FLAG(Z_COMPILER_##LANGUAGE##_HAS_TYPE_QUALIFIER_##TYPE_QUALIFIER)

#endif

#endif /* Z_inspection_language_H */
