/* Z Kit - inspection/C/completion.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_C_completion_H
#define Z_inspection_C_completion_H

/* MARK: - K&R C */

#ifndef Z_C_HAS_OLD_STYLE_FUNCTION
#	define Z_C_HAS_OLD_STYLE_FUNCTION FALSE
#endif

#ifndef Z_C_HAS_OPERATOR_SIZEOF
#	define Z_C_HAS_OPERATOR_SIZEOF FALSE
#endif

#ifndef Z_C_HAS_STORAGE_CLASS_AUTO
#	define Z_C_HAS_STORAGE_CLASS_AUTO FALSE
#endif

#ifndef Z_C_HAS_STORAGE_CLASS_EXTERN
#	define Z_C_HAS_STORAGE_CLASS_EXTERN FALSE
#endif

#ifndef Z_C_HAS_STORAGE_CLASS_REGISTER
#	define Z_C_HAS_STORAGE_CLASS_REGISTER FALSE
#endif

#ifndef Z_C_HAS_STORAGE_CLASS_STATIC
#	define Z_C_HAS_STORAGE_CLASS_STATIC FALSE
#endif

#ifndef Z_C_HAS_TYPE_DOUBLE
#	define Z_C_HAS_TYPE_DOUBLE FALSE
#endif

#ifndef Z_C_HAS_TYPE_FLOAT
#	define Z_C_HAS_TYPE_FLOAT FALSE
#endif

/* MARK: - C89 */

#ifndef Z_C_HAS_C89_RULES_ON_TYPE_CONVERSION
#	define Z_C_HAS_C89_RULES_ON_TYPE_CONVERSION FALSE
#endif

#ifndef Z_C_HAS_CONSTRUCT_AS_FUNCTION_ARGUMENT
#	define Z_C_HAS_CONSTRUCT_AS_FUNCTION_ARGUMENT FALSE
#endif

#ifndef Z_C_HAS_CONSTRUCT_AS_RETURN_TYPE
#	define Z_C_HAS_CONSTRUCT_AS_RETURN_TYPE FALSE
#endif

#ifndef Z_C_HAS_CONSTRUCT_ASSIGNMENT
#	define Z_C_HAS_CONSTRUCT_ASSIGNMENT FALSE
#endif

#ifndef Z_C_HAS_CONSTRUCT_NAMESPACE
#	define Z_C_HAS_CONSTRUCT_NAMESPACE FALSE
#endif

#ifndef Z_C_HAS_ENUMERATION
#	define Z_C_HAS_ENUMERATION FALSE
#endif

#ifndef Z_C_HAS_FUNCTION_POINTER_AUTODEREFERENCING
#	define Z_C_HAS_FUNCTION_POINTER_AUTODEREFERENCING FALSE
#endif

#ifndef Z_C_HAS_FUNCTION_PROTOTYPE
#	define Z_C_HAS_FUNCTION_PROTOTYPE FALSE
#endif

#ifndef Z_C_HAS_INTEGRAL_SWITCH
#	define Z_C_HAS_INTEGRAL_SWITCH FALSE
#endif

#ifndef Z_C_HAS_LOCAL_AGGREGATE_CONSTANT_INITIALZATION
#	define Z_C_HAS_LOCAL_AGGREGATE_CONSTANT_INITIALZATION FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_INDENTATION
#	define Z_C_HAS_PREPROCESSOR_INDENTATION FALSE
#endif

#ifndef Z_C_HAS_REMOVAL_OF_ENTRY_AS_KEYWORD
#	define Z_C_HAS_REMOVAL_OF_ENTRY_AS_KEYWORD FALSE
#endif

#ifndef Z_C_HAS_REMOVAL_OF_LONG_FLOAT_AS_TYPE
#	define Z_C_HAS_REMOVAL_OF_LONG_FLOAT_AS_TYPE FALSE
#endif

#ifndef Z_C_HAS_STRING_LITERAL_CONCATENATION
#	define Z_C_HAS_STRING_LITERAL_CONCATENATION FALSE
#endif

#ifndef Z_C_HAS_TRIGRAPHS
#	define Z_C_HAS_TRIGRAPHS FALSE
#endif

#ifndef Z_C_HAS_UNION_CONSTANT_INITIALIZATION
#	define Z_C_HAS_UNION_CONSTANT_INITIALIZATION FALSE
#endif

#ifndef Z_C_HAS_ESCAPE_SEQUENCE_ALERT
#	define Z_C_HAS_ESCAPE_SEQUENCE_ALERT FALSE
#endif

#ifndef Z_C_HAS_ESCAPE_SEQUENCE_HEXADECIMAL
#	define Z_C_HAS_ESCAPE_SEQUENCE_HEXADECIMAL FALSE
#endif

#ifndef Z_C_HAS_ESCAPE_SEQUENCE_VERTICAL_TAB
#	define Z_C_HAS_ESCAPE_SEQUENCE_VERTICAL_TAB FALSE
#endif

#ifndef Z_C_HAS_LITERAL_FLOAT
#	define Z_C_HAS_LITERAL_FLOAT FALSE
#endif

#ifndef Z_C_HAS_LITERAL_LONG_DOUBLE
#	define Z_C_HAS_LITERAL_LONG_DOUBLE FALSE
#endif

#ifndef Z_C_HAS_LITERAL_UNSIGNED
#	define Z_C_HAS_LITERAL_UNSIGNED FALSE
#endif

#ifndef Z_C_HAS_OPERATOR_UNARY_PLUS
#	define Z_C_HAS_OPERATOR_UNARY_PLUS FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_DIRECTIVE_NULL
#	define Z_C_HAS_PREPROCESSOR_DIRECTIVE_NULL FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_DIRECTIVE_ELIF
#	define Z_C_HAS_PREPROCESSOR_DIRECTIVE_ELIF FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_DIRECTIVE_ERROR
#	define Z_C_HAS_PREPROCESSOR_DIRECTIVE_ERROR FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_DIRECTIVE_LINE
#	define Z_C_HAS_PREPROCESSOR_DIRECTIVE_LINE FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_DIRECTIVE_PRAGMA
#	define Z_C_HAS_PREPROCESSOR_DIRECTIVE_PRAGMA FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_OPERATOR_DEFINED
#	define Z_C_HAS_PREPROCESSOR_OPERATOR_DEFINED FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_OPERATOR_PASTING
#	define Z_C_HAS_PREPROCESSOR_OPERATOR_PASTING FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_OPERATOR_STRINGIZING
#	define Z_C_HAS_PREPROCESSOR_OPERATOR_STRINGIZING FALSE
#endif

#ifndef Z_C_HAS_TYPE_LONG_DOUBLE
#	define Z_C_HAS_TYPE_LONG_DOUBLE FALSE
#endif

#ifndef Z_C_HAS_TYPE_UNSIGNED_CHAR
#	define Z_C_HAS_TYPE_UNSIGNED_CHAR FALSE
#endif

#ifndef Z_C_HAS_TYPE_UNSIGNED_LONG
#	define Z_C_HAS_TYPE_UNSIGNED_LONG FALSE
#endif

#ifndef Z_C_HAS_TYPE_UNSIGNED_SHORT
#	define Z_C_HAS_TYPE_UNSIGNED_SHORT FALSE
#endif

#ifndef Z_C_HAS_TYPE_VOID
#	define Z_C_HAS_TYPE_VOID FALSE
#endif

#ifndef Z_C_HAS_TYPE_VOID_POINTER
#	define Z_C_HAS_TYPE_VOID_POINTER FALSE
#endif

#ifndef Z_C_HAS_TYPE_MODIFIER_SIGNED
#	define Z_C_HAS_TYPE_MODIFIER_SIGNED FALSE
#endif

#ifndef Z_C_HAS_TYPE_QUALIFIER_CONST
#	define Z_C_HAS_TYPE_QUALIFIER_CONST FALSE
#endif

#ifndef Z_C_HAS_TYPE_QUALIFIER_VOLATILE
#	define Z_C_HAS_TYPE_QUALIFIER_VOLATILE FALSE
#endif

/* MARK: - C95 */

#ifndef Z_C_HAS_DIGRAPHS
#	define Z_C_HAS_DIGRAPHS FALSE
#endif

/* MARK: - C99 */

#ifndef Z_C_HAS_C99_RULES_ON_INTEGER_LITERALS
#	define Z_C_HAS_C99_RULES_ON_INTEGER_LITERALS FALSE
#endif

#ifndef Z_C_HAS_C99_RULES_ON_TYPE_COMPATIBILITY
#	define Z_C_HAS_C99_RULES_ON_TYPE_COMPATIBILITY FALSE
#endif

#ifndef Z_C_HAS_C99_RULES_ON_TYPE_CONVERSION
#	define Z_C_HAS_C99_RULES_ON_TYPE_CONVERSION FALSE
#endif

#ifndef Z_C_HAS_COMPOUND_LITERAL
#	define Z_C_HAS_COMPOUND_LITERAL FALSE
#endif

#ifndef Z_C_HAS_CONVERSION_OF_NON_LVALUE_ARRAY_TO_POINTER
#	define Z_C_HAS_CONVERSION_OF_NON_LVALUE_ARRAY_TO_POINTER FALSE
#endif

#ifndef Z_C_HAS_CPP_STYLE_COMMENT
#	define Z_C_HAS_CPP_STYLE_COMMENT FALSE
#endif

#ifndef Z_C_HAS_DESIGNATED_INITIALIZER
#	define Z_C_HAS_DESIGNATED_INITIALIZER FALSE
#endif

#ifndef Z_C_HAS_EMPTY_MACRO_ARGUMENT
#	define Z_C_HAS_EMPTY_MACRO_ARGUMENT FALSE
#endif

#ifndef Z_C_HAS_EXTENDED_IDENTIFIER
#	define Z_C_HAS_EXTENDED_IDENTIFIER FALSE
#endif

#ifndef Z_C_HAS_FLEXIBLE_ARRAY_MEMBER
#	define Z_C_HAS_FLEXIBLE_ARRAY_MEMBER FALSE
#endif

#ifndef Z_C_HAS_FOR_WITH_DECLARATION
#	define Z_C_HAS_FOR_WITH_DECLARATION FALSE
#endif

#ifndef Z_C_HAS_IDEMPOTENT_TYPE_QUALIFIERS
#	define Z_C_HAS_IDEMPOTENT_TYPE_QUALIFIERS FALSE
#endif

#ifndef Z_C_HAS_LOCAL_AGGREGATE_NON_CONSTANT_INITIALIZATION
#	define Z_C_HAS_LOCAL_AGGREGATE_NON_CONSTANT_INITIALIZATION FALSE
#endif

#ifndef Z_C_HAS_MIXED_DECLARATIONS_AND_CODE
#	define Z_C_HAS_MIXED_DECLARATIONS_AND_CODE FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_ARITHMETIC_DONE_IN_INTMAX
#	define Z_C_HAS_PREPROCESSOR_ARITHMETIC_DONE_IN_INTMAX FALSE
#endif

#ifndef Z_C_HAS_RELIABLE_INTEGER_DIVISION
#	define Z_C_HAS_RELIABLE_INTEGER_DIVISION FALSE
#endif

#ifndef Z_C_HAS_REMOVAL_OF_ILL_FORMED_RETURN
#	define Z_C_HAS_REMOVAL_OF_ILL_FORMED_RETURN FALSE
#endif

#ifndef Z_C_HAS_REMOVAL_OF_IMPLICIT_FUNCTION_DECLARATION
#	define Z_C_HAS_REMOVAL_OF_IMPLICIT_FUNCTION_DECLARATION FALSE
#endif

#ifndef Z_C_HAS_REMOVAL_OF_IMPLICIT_INT
#	define Z_C_HAS_REMOVAL_OF_IMPLICIT_INT FALSE
#endif

#ifndef Z_C_HAS_STATIC_AND_TYPE_QUALIFIERS_IN_ARRAY_PARAMETER
#	define Z_C_HAS_STATIC_AND_TYPE_QUALIFIERS_IN_ARRAY_PARAMETER FALSE
#endif

#ifndef Z_C_HAS_TRAILING_COMMA_ALLOWED_IN_ENUMERATION
#	define Z_C_HAS_TRAILING_COMMA_ALLOWED_IN_ENUMERATION FALSE
#endif

#ifndef Z_C_HAS_UNIVERSAL_CHARACTER_NAMES
#	define Z_C_HAS_UNIVERSAL_CHARACTER_NAMES FALSE
#endif

#ifndef Z_C_HAS_VARIADIC_MACRO
#	define Z_C_HAS_VARIADIC_MACRO FALSE
#endif

#ifndef Z_C_HAS_VLA
#	define Z_C_HAS_VLA FALSE
#endif

#ifndef Z_C_HAS_IDENTIFIER_FUNC
#	define Z_C_HAS_IDENTIFIER_FUNC FALSE
#endif

#ifndef Z_C_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT
#	define Z_C_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT FALSE
#endif

#ifndef Z_C_HAS_LITERAL_WCHAR_T_CHARACTER
#	define Z_C_HAS_LITERAL_WCHAR_T_CHARACTER FALSE
#endif

#ifndef Z_C_HAS_LITERAL_WCHAR_T_STRING
#	define Z_C_HAS_LITERAL_WCHAR_T_STRING FALSE
#endif

#ifndef Z_C_HAS_PREPROCESSOR_OPERATOR_PRAGMA
#	define Z_C_HAS_PREPROCESSOR_OPERATOR_PRAGMA FALSE
#endif

#ifndef Z_C_HAS_SPECIFIER_INLINE
#	define Z_C_HAS_SPECIFIER_INLINE FALSE
#endif

#ifndef Z_C_HAS_STANDARD_PRAGMA_CX_LIMITED_RANGE
#	define Z_C_HAS_STANDARD_PRAGMA_CX_LIMITED_RANGE FALSE
#endif

#ifndef Z_C_HAS_STANDARD_PRAGMA_FENV_ACCESS
#	define Z_C_HAS_STANDARD_PRAGMA_FENV_ACCESS FALSE
#endif

#ifndef Z_C_HAS_STANDARD_PRAGMA_FP_CONTRACT
#	define Z_C_HAS_STANDARD_PRAGMA_FP_CONTRACT FALSE
#endif

#ifndef Z_C_HAS_TYPE_BOOL
#	define Z_C_HAS_TYPE_BOOL FALSE
#endif

#ifndef Z_C_HAS_TYPE_DOUBLE_COMPLEX
#	define Z_C_HAS_TYPE_DOUBLE_COMPLEX FALSE
#endif

#ifndef Z_C_HAS_TYPE_DOUBLE_IMAGINARY
#	define Z_C_HAS_TYPE_DOUBLE_IMAGINARY FALSE
#endif

#ifndef Z_C_HAS_TYPE_FLOAT_COMPLEX
#	define Z_C_HAS_TYPE_FLOAT_COMPLEX FALSE
#endif

#ifndef Z_C_HAS_TYPE_FLOAT_IMAGINARY
#	define Z_C_HAS_TYPE_FLOAT_IMAGINARY FALSE
#endif

#ifndef Z_C_HAS_TYPE_LONG_DOUBLE_COMPLEX
#	define Z_C_HAS_TYPE_LONG_DOUBLE_COMPLEX FALSE
#endif

#ifndef Z_C_HAS_TYPE_LONG_DOUBLE_IMAGINARY
#	define Z_C_HAS_TYPE_LONG_DOUBLE_IMAGINARY FALSE
#endif

#ifndef Z_C_HAS_TYPE_LONG_LONG
#	define Z_C_HAS_TYPE_LONG_LONG FALSE
#endif

#ifndef Z_C_HAS_TYPE_QUALIFIER_RESTRICT
#	define Z_C_HAS_TYPE_QUALIFIER_RESTRICT FALSE
#endif

#ifndef Z_C_HAS_TYPE_MODIFIER_COMPLEX
#	define Z_C_HAS_TYPE_MODIFIER_COMPLEX FALSE
#endif

#ifndef Z_C_HAS_TYPE_MODIFIER_IMAGINARY
#	define Z_C_HAS_TYPE_MODIFIER_IMAGINARY FALSE
#endif

/* MARK: - C11 */

#ifndef Z_C_HAS_ANONYMOUS_STRUCTURE
#	define Z_C_HAS_ANONYMOUS_STRUCTURE FALSE
#endif

#ifndef Z_C_HAS_ANONYMOUS_UNION
#	define Z_C_HAS_ANONYMOUS_UNION FALSE
#endif

#ifndef Z_C_HAS_GENERIC_SELECTION
#	define Z_C_HAS_GENERIC_SELECTION FALSE
#endif

#ifndef Z_C_HAS_STATIC_ASSERTION
#	define Z_C_HAS_STATIC_ASSERTION FALSE
#endif

#ifndef Z_C_HAS_TYPEDEF_REDECLARATION
#	define Z_C_HAS_TYPEDEF_REDECLARATION FALSE
#endif

#ifndef Z_C_HAS_LITERAL_CHAR16_T_CHARACTER
#	define Z_C_HAS_LITERAL_CHAR16_T_CHARACTER FALSE
#endif

#ifndef Z_C_HAS_LITERAL_CHAR16_T_STRING
#	define Z_C_HAS_LITERAL_CHAR16_T_STRING FALSE
#endif

#ifndef Z_C_HAS_LITERAL_CHAR32_T_CHARACTER
#	define Z_C_HAS_LITERAL_CHAR32_T_CHARACTER FALSE
#endif

#ifndef Z_C_HAS_LITERAL_CHAR32_T_STRING
#	define Z_C_HAS_LITERAL_CHAR32_T_STRING FALSE
#endif

#ifndef Z_C_HAS_LITERAL_UNICODE_STRING
#	define Z_C_HAS_LITERAL_UNICODE_STRING FALSE
#endif

#ifndef Z_C_HAS_OPERATOR_ALIGNOF
#	define Z_C_HAS_OPERATOR_ALIGNOF FALSE
#endif

#ifndef Z_C_HAS_SPECIFIER_ALIGNAS
#	define Z_C_HAS_SPECIFIER_ALIGNAS FALSE
#endif

#ifndef Z_C_HAS_SPECIFIER_NORETURN
#	define Z_C_HAS_SPECIFIER_NORETURN FALSE
#endif

#ifndef Z_C_HAS_STORAGE_CLASS_THREAD_LOCAL
#	define Z_C_HAS_STORAGE_CLASS_THREAD_LOCAL FALSE
#endif

#ifndef Z_C_HAS_TYPE_MODIFIER_ATOMIC
#	define Z_C_HAS_TYPE_MODIFIER_ATOMIC FALSE
#endif

#ifndef Z_C_HAS_TYPE_QUALIFIER_ATOMIC
#	define Z_C_HAS_TYPE_QUALIFIER_ATOMIC FALSE
#endif

#endif /* Z_inspection_C_completion_H */
