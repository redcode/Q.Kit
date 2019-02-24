/* Z Kit - inspection/C++/completion.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_CPP_completion_H
#define Z_inspection_CPP_completion_H

/* MARK: - C++98 */

#ifndef Z_CPP_HAS_SFINAE
#	define Z_CPP_HAS_SFINAE FALSE
#endif

#ifndef Z_CPP_HAS_TYPE_BOOL
#	define Z_CPP_HAS_TYPE_BOOL FALSE
#endif

#ifndef Z_CPP_HAS_TYPE_WCHAR_T
#	define Z_CPP_HAS_TYPE_WCHAR_T FALSE
#endif

/* MARK: - C++03 */

#ifndef Z_CPP_HAS_VALUE_INITIALIZATION
#	define Z_CPP_HAS_VALUE_INITIALIZATION FALSE
#endif

/* MARK: - C++11 */

#ifndef Z_CPP_HAS_C99_PREPROCESSOR
#	define Z_CPP_HAS_C99_PREPROCESSOR FALSE
#endif

#ifndef Z_CPP_HAS_CONCURRENT_STATIC_LOCAL_VARIABLE
#	define Z_CPP_HAS_CONCURRENT_STATIC_LOCAL_VARIABLE FALSE
#endif

#ifndef Z_CPP_HAS_CONDITIONALLY_SUPPORTED_BEHAVIOR
#	define Z_CPP_HAS_CONDITIONALLY_SUPPORTED_BEHAVIOR FALSE
#endif

#ifndef Z_CPP_HAS_COPY_LIST_INITIALIZATION
#	define Z_CPP_HAS_COPY_LIST_INITIALIZATION FALSE
#endif

#ifndef Z_CPP_HAS_CPP11_RULES_ON_UNIVERSAL_CHARACTER_NAMES
#	define Z_CPP_HAS_CPP11_RULES_ON_UNIVERSAL_CHARACTER_NAMES FALSE
#endif

#ifndef Z_CPP_HAS_DEFAULT_MEMBER_INITIALIZER
#	define Z_CPP_HAS_DEFAULT_MEMBER_INITIALIZER FALSE
#endif

#ifndef Z_CPP_HAS_DEFAULT_TEMPLATE_ARGUMENTS_FOR_FUNCTION_TEMPLATE
#	define Z_CPP_HAS_DEFAULT_TEMPLATE_ARGUMENTS_FOR_FUNCTION_TEMPLATE FALSE
#endif

#ifndef Z_CPP_HAS_DEFAULTED_FUNCTION
#	define Z_CPP_HAS_DEFAULTED_FUNCTION FALSE
#endif

#ifndef Z_CPP_HAS_DELEGATING_CONSTRUCTORS
#	define Z_CPP_HAS_DELEGATING_CONSTRUCTORS FALSE
#endif

#ifndef Z_CPP_HAS_DELETED_FUNCTION
#	define Z_CPP_HAS_DELETED_FUNCTION FALSE
#endif

#ifndef Z_CPP_HAS_DIRECT_LIST_INITIALIZATION
#	define Z_CPP_HAS_DIRECT_LIST_INITIALIZATION FALSE
#endif

#ifndef Z_CPP_HAS_EXPRESSION_SFINAE
#	define Z_CPP_HAS_EXPRESSION_SFINAE FALSE
#endif

#ifndef Z_CPP_HAS_EXTENDED_FRIEND_DECLARATION
#	define Z_CPP_HAS_EXTENDED_FRIEND_DECLARATION FALSE
#endif

#ifndef Z_CPP_HAS_EXTERN_TEMPLATE
#	define Z_CPP_HAS_EXTERN_TEMPLATE FALSE
#endif

#ifndef Z_CPP_HAS_INHERITING_CONSTRUCTORS
#	define Z_CPP_HAS_INHERITING_CONSTRUCTORS FALSE
#endif

#ifndef Z_CPP_HAS_INITIALIZATION_OF_CLASS_OBJECT_BY_RVALUE
#	define Z_CPP_HAS_INITIALIZATION_OF_CLASS_OBJECT_BY_RVALUE FALSE
#endif

#ifndef Z_CPP_HAS_INITIALIZER_LIST
#	define Z_CPP_HAS_INITIALIZER_LIST FALSE
#endif

#ifndef Z_CPP_HAS_LAMBDA
#	define Z_CPP_HAS_LAMBDA FALSE
#endif

#ifndef Z_CPP_HAS_LOCAL_TYPE_AS_TEMPLATE_ARGUMENT
#	define Z_CPP_HAS_LOCAL_TYPE_AS_TEMPLATE_ARGUMENT FALSE
#endif

#ifndef Z_CPP_HAS_MOVE_SPECIAL_MEMBER_FUNCTIONS
#	define Z_CPP_HAS_MOVE_SPECIAL_MEMBER_FUNCTIONS FALSE
#endif

#ifndef Z_CPP_HAS_MULTI_DECLARATOR_AUTO
#	define Z_CPP_HAS_MULTI_DECLARATOR_AUTO FALSE
#endif

#ifndef Z_CPP_HAS_OPAQUE_ENUMERATION_DECLARATION
#	define Z_CPP_HAS_OPAQUE_ENUMERATION_DECLARATION FALSE
#endif

#ifndef Z_CPP_HAS_RANGE_BASED_FOR
#	define Z_CPP_HAS_RANGE_BASED_FOR FALSE
#endif

#ifndef Z_CPP_HAS_REFERENCE_QUALIFIED_NON_STATIC_MEMBER_FUNCTION
#	define Z_CPP_HAS_REFERENCE_QUALIFIED_NON_STATIC_MEMBER_FUNCTION FALSE
#endif

#ifndef Z_CPP_HAS_REMOVAL_OF_AUTO_AS_STORAGE_CLASS
#	define Z_CPP_HAS_REMOVAL_OF_AUTO_AS_STORAGE_CLASS FALSE
#endif

#ifndef Z_CPP_HAS_RIGHT_ANGLE_BRACKETS
#	define Z_CPP_HAS_RIGHT_ANGLE_BRACKETS FALSE
#endif

#ifndef Z_CPP_HAS_RVALUE_REFERENCE
#	define Z_CPP_HAS_RVALUE_REFERENCE FALSE
#endif

#ifndef Z_CPP_HAS_STANDARD_LAYOUT
#	define Z_CPP_HAS_STANDARD_LAYOUT FALSE
#endif

#ifndef Z_CPP_HAS_STANDARDIZED_ATTRIBUTE_SYNTAX
#	define Z_CPP_HAS_STANDARDIZED_ATTRIBUTE_SYNTAX FALSE
#endif

#ifndef Z_CPP_HAS_STATIC_ASSERTION
#	define Z_CPP_HAS_STATIC_ASSERTION FALSE
#endif

#ifndef Z_CPP_HAS_STRONGLY_TYPED_ENUMERATION
#	define Z_CPP_HAS_STRONGLY_TYPED_ENUMERATION FALSE
#endif

#ifndef Z_CPP_HAS_TEMPLATE_ALIAS
#	define Z_CPP_HAS_TEMPLATE_ALIAS FALSE
#endif

#ifndef Z_CPP_HAS_TRAILING_RETURN_TYPE
#	define Z_CPP_HAS_TRAILING_RETURN_TYPE FALSE
#endif

#ifndef Z_CPP_HAS_UNNAMED_TYPE_AS_TEMPLATE_ARGUMENT
#	define Z_CPP_HAS_UNNAMED_TYPE_AS_TEMPLATE_ARGUMENT FALSE
#endif

#ifndef Z_CPP_HAS_UNRESTRICTED_UNION
#	define Z_CPP_HAS_UNRESTRICTED_UNION FALSE
#endif

#ifndef Z_CPP_HAS_VARIADIC_TEMPLATE
#	define Z_CPP_HAS_VARIADIC_TEMPLATE FALSE
#endif

#ifndef Z_CPP_HAS_VARIADIC_TEMPLATE_EXTENDED_PARAMETERS
#	define Z_CPP_HAS_VARIADIC_TEMPLATE_EXTENDED_PARAMETERS FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTE_CARRIES_DEPENDENCY
#	define Z_CPP_HAS_ATTRIBUTE_CARRIES_DEPENDENCY FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTE_NORETURN
#	define Z_CPP_HAS_ATTRIBUTE_NORETURN FALSE
#endif

#ifndef Z_CPP_HAS_IDENTIFIER_FUNC
#	define Z_CPP_HAS_IDENTIFIER_FUNC FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_CHAR16_T_CHARACTER
#	define Z_CPP_HAS_LITERAL_CHAR16_T_CHARACTER FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_CHAR16_T_STRING
#	define Z_CPP_HAS_LITERAL_CHAR16_T_STRING FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_CHAR32_T_CHARACTER
#	define Z_CPP_HAS_LITERAL_CHAR32_T_CHARACTER FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_CHAR32_T_STRING
#	define Z_CPP_HAS_LITERAL_CHAR32_T_STRING FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_NULLPTR
#	define Z_CPP_HAS_LITERAL_NULLPTR FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_RAW_STRING
#	define Z_CPP_HAS_LITERAL_RAW_STRING FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_USER_DEFINED
#	define Z_CPP_HAS_LITERAL_USER_DEFINED FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_UTF8_STRING
#	define Z_CPP_HAS_LITERAL_UTF8_STRING FALSE
#endif

#ifndef Z_CPP_HAS_OPERATOR_ALIGNOF
#	define Z_CPP_HAS_OPERATOR_ALIGNOF FALSE
#endif

#ifndef Z_CPP_HAS_OPERATOR_NOEXCEPT
#	define Z_CPP_HAS_OPERATOR_NOEXCEPT FALSE
#endif

#ifndef Z_CPP_HAS_OPERATOR_CASE_SIZEOF_NON_STATIC_DATA_MEMBER
#	define Z_CPP_HAS_OPERATOR_CASE_SIZEOF_NON_STATIC_DATA_MEMBER FALSE
#endif

#ifndef Z_CPP_HAS_OPERATOR_CASE_SIZEOF_PARAMETER_PACK
#	define Z_CPP_HAS_OPERATOR_CASE_SIZEOF_PARAMETER_PACK FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_ALIGNAS
#	define Z_CPP_HAS_SPECIFIER_ALIGNAS FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CONSTEXPR
#	define Z_CPP_HAS_SPECIFIER_CONSTEXPR FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_DECLTYPE
#	define Z_CPP_HAS_SPECIFIER_DECLTYPE FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_FINAL
#	define Z_CPP_HAS_SPECIFIER_FINAL FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_NOEXCEPT
#	define Z_CPP_HAS_SPECIFIER_NOEXCEPT FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_OVERRIDE
#	define Z_CPP_HAS_SPECIFIER_OVERRIDE FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CASE_DECLTYPE_INCOMPLETE_RETURN
#	define Z_CPP_HAS_SPECIFIER_CASE_DECLTYPE_INCOMPLETE_RETURN FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CASE_EXPLICIT_CONVERSION_FUNCTION
#	define Z_CPP_HAS_SPECIFIER_CASE_EXPLICIT_CONVERSION_FUNCTION FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CASE_INLINE_NAMESPACE
#	define Z_CPP_HAS_SPECIFIER_CASE_INLINE_NAMESPACE FALSE
#endif

#ifndef Z_CPP_HAS_STORAGE_CLASS_THREAD_LOCAL
#	define Z_CPP_HAS_STORAGE_CLASS_THREAD_LOCAL FALSE
#endif

#ifndef Z_CPP_HAS_TYPE_AUTO
#	define Z_CPP_HAS_TYPE_AUTO FALSE
#endif

#ifndef Z_CPP_HAS_TYPE_CHAR16_T
#	define Z_CPP_HAS_TYPE_CHAR16_T FALSE
#endif

#ifndef Z_CPP_HAS_TYPE_CHAR32_T
#	define Z_CPP_HAS_TYPE_CHAR32_T FALSE
#endif

#ifndef Z_CPP_HAS_TYPE_LONG_LONG
#	define Z_CPP_HAS_TYPE_LONG_LONG FALSE
#endif

/* MARK: - C++14 */

#ifndef Z_CPP_HAS_APOSTROPHE_AS_DIGIT_SEPARATOR
#	define Z_CPP_HAS_APOSTROPHE_AS_DIGIT_SEPARATOR FALSE
#endif

#ifndef Z_CPP_HAS_CPP14_RULES_ON_CONSTEXPR_FUNCTION
#	define Z_CPP_HAS_CPP14_RULES_ON_CONSTEXPR_FUNCTION FALSE
#endif

#ifndef Z_CPP_HAS_CPP14_RULES_ON_CONTEXTUAL_CONVERSION
#	define Z_CPP_HAS_CPP14_RULES_ON_CONTEXTUAL_CONVERSION FALSE
#endif

#ifndef Z_CPP_HAS_DEFAULT_MEMBER_INITIALIZER_FOR_AGGREGATE
#	define Z_CPP_HAS_DEFAULT_MEMBER_INITIALIZER_FOR_AGGREGATE FALSE
#endif

#ifndef Z_CPP_HAS_GENERIC_LAMBDA
#	define Z_CPP_HAS_GENERIC_LAMBDA FALSE
#endif

#ifndef Z_CPP_HAS_INITIALIZED_LAMBDA_CAPTURE
#	define Z_CPP_HAS_INITIALIZED_LAMBDA_CAPTURE FALSE
#endif

#ifndef Z_CPP_HAS_RETURN_TYPE_DEDUCTION_FOR_NORMAL_FUNCTION
#	define Z_CPP_HAS_RETURN_TYPE_DEDUCTION_FOR_NORMAL_FUNCTION FALSE
#endif

#ifndef Z_CPP_HAS_SIZED_DEALLOCATION
#	define Z_CPP_HAS_SIZED_DEALLOCATION FALSE
#endif

#ifndef Z_CPP_HAS_VARIABLE_TEMPLATE
#	define Z_CPP_HAS_VARIABLE_TEMPLATE FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTE_DEPRECATED
#	define Z_CPP_HAS_ATTRIBUTE_DEPRECATED FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_BINARY_INTEGRAL
#	define Z_CPP_HAS_LITERAL_BINARY_INTEGRAL FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CASE_DECLTYPE_AUTO
#	define Z_CPP_HAS_SPECIFIER_CASE_DECLTYPE_AUTO FALSE
#endif

/* MARK: - C++17 */

#ifndef Z_CPP_HAS_AGGREGATE_INITIALIZATION_FOR_DERIVED_CLASS
#	define Z_CPP_HAS_AGGREGATE_INITIALIZATION_FOR_DERIVED_CLASS FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTES_FOR_ENUMERATION
#	define Z_CPP_HAS_ATTRIBUTES_FOR_ENUMERATION FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTES_FOR_NAMESPACE
#	define Z_CPP_HAS_ATTRIBUTES_FOR_NAMESPACE FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTE_USING_PREFIX
#	define Z_CPP_HAS_ATTRIBUTE_USING_PREFIX FALSE
#endif

#ifndef Z_CPP_HAS_CPP17_RULES_ON_AUTO_AND_BRACED_INITIALIZATION
#	define Z_CPP_HAS_CPP17_RULES_ON_AUTO_AND_BRACED_INITIALIZATION FALSE
#endif

#ifndef Z_CPP_HAS_CPP17_RULES_ON_EXPRESSION_EVALUATION_ORDER
#	define Z_CPP_HAS_CPP17_RULES_ON_EXPRESSION_EVALUATION_ORDER FALSE
#endif

#ifndef Z_CPP_HAS_CPP17_RULES_ON_INHERITING_CONSTRUCTORS
#	define Z_CPP_HAS_CPP17_RULES_ON_INHERITING_CONSTRUCTORS FALSE
#endif

#ifndef Z_CPP_HAS_CPP17_RULES_ON_NON_TYPE_TEMPLATE_ARGUMENTS
#	define Z_CPP_HAS_CPP17_RULES_ON_NON_TYPE_TEMPLATE_ARGUMENTS FALSE
#endif

#ifndef Z_CPP_HAS_CPP17_RULES_ON_TEMPLATE_TEMPLATE_ARGUMENT_MATCHING
#	define Z_CPP_HAS_CPP17_RULES_ON_TEMPLATE_TEMPLATE_ARGUMENT_MATCHING FALSE
#endif

#ifndef Z_CPP_HAS_DIFFERING_BEGIN_AND_END_TYPES_IN_RANGE_BASED_FOR
#	define Z_CPP_HAS_DIFFERING_BEGIN_AND_END_TYPES_IN_RANGE_BASED_FOR FALSE
#endif

#ifndef Z_CPP_HAS_DIRECT_LIST_INITIALIZATION_FOR_ENUMERATION
#	define Z_CPP_HAS_DIRECT_LIST_INITIALIZATION_FOR_ENUMERATION FALSE
#endif

#ifndef Z_CPP_HAS_NOEXCEPT_AS_PART_OF_THE_TYPE
#	define Z_CPP_HAS_NOEXCEPT_AS_PART_OF_THE_TYPE FALSE
#endif

#ifndef Z_CPP_HAS_FOLD_EXPRESSION
#	define Z_CPP_HAS_FOLD_EXPRESSION FALSE
#endif

#ifndef Z_CPP_HAS_FOLD_EXPRESSION_SAFETY_WITH_EMPTY_PARAMETER_PACK
#	define Z_CPP_HAS_FOLD_EXPRESSION_SAFETY_WITH_EMPTY_PARAMETER_PACK FALSE
#endif

#ifndef Z_CPP_HAS_GUARANTEED_COPY_ELISION
#	define Z_CPP_HAS_GUARANTEED_COPY_ELISION FALSE
#endif

#ifndef Z_CPP_HAS_IF_WITH_INITIALIZER
#	define Z_CPP_HAS_IF_WITH_INITIALIZER FALSE
#endif

#ifndef Z_CPP_HAS_IGNORATION_OF_UNKNOWN_ATTRIBUTES
#	define Z_CPP_HAS_IGNORATION_OF_UNKNOWN_ATTRIBUTES FALSE
#endif

#ifndef Z_CPP_HAS_LAMBDA_CAPTURE_OF_THIS_OBJECT_BY_VALUE
#	define Z_CPP_HAS_LAMBDA_CAPTURE_OF_THIS_OBJECT_BY_VALUE FALSE
#endif

#ifndef Z_CPP_HAS_LAUNDER
#	define Z_CPP_HAS_LAUNDER FALSE
#endif

#ifndef Z_CPP_HAS_NESTED_NAMESPACE_DEFINITION
#	define Z_CPP_HAS_NESTED_NAMESPACE_DEFINITION FALSE
#endif

#ifndef Z_CPP_HAS_NON_TYPE_TEMPLATE_PARAMETER_WITH_AUTO_TYPE
#	define Z_CPP_HAS_NON_TYPE_TEMPLATE_PARAMETER_WITH_AUTO_TYPE FALSE
#endif

#ifndef Z_CPP_HAS_OVER_ALIGNED_DYNAMIC_ALLOCATION
#	define Z_CPP_HAS_OVER_ALIGNED_DYNAMIC_ALLOCATION FALSE
#endif

#ifndef Z_CPP_HAS_REMOVAL_OF_DYNAMIC_EXCEPTION_SPECIFICATION
#	define Z_CPP_HAS_REMOVAL_OF_DYNAMIC_EXCEPTION_SPECIFICATION FALSE
#endif

#ifndef Z_CPP_HAS_REMOVAL_OF_INCREMENT_OPERATOR_WITH_BOOL_OPERAND
#	define Z_CPP_HAS_REMOVAL_OF_INCREMENT_OPERATOR_WITH_BOOL_OPERAND FALSE
#endif

#ifndef Z_CPP_HAS_REMOVAL_OF_REGISTER_AS_STORAGE_CLASS
#	define Z_CPP_HAS_REMOVAL_OF_REGISTER_AS_STORAGE_CLASS FALSE
#endif

#ifndef Z_CPP_HAS_REMOVAL_OF_TRIGRAPHS
#	define Z_CPP_HAS_REMOVAL_OF_TRIGRAPHS FALSE
#endif

#ifndef Z_CPP_HAS_STATIC_ASSERTION_WITH_NO_MESSAGE
#	define Z_CPP_HAS_STATIC_ASSERTION_WITH_NO_MESSAGE FALSE
#endif

#ifndef Z_CPP_HAS_STRUCTURED_BINDING
#	define Z_CPP_HAS_STRUCTURED_BINDING FALSE
#endif

#ifndef Z_CPP_HAS_SWITCH_WITH_INITIALIZER
#	define Z_CPP_HAS_SWITCH_WITH_INITIALIZER FALSE
#endif

#ifndef Z_CPP_HAS_TEMPLATE_ARGUMENT_DEDUCTION_FOR_CLASS_TEMPLATE
#	define Z_CPP_HAS_TEMPLATE_ARGUMENT_DEDUCTION_FOR_CLASS_TEMPLATE FALSE
#endif

#ifndef Z_CPP_HAS_TYPENAME_IN_TEMPLATE_TEMPLATE_PARAMETER
#	define Z_CPP_HAS_TYPENAME_IN_TEMPLATE_TEMPLATE_PARAMETER FALSE
#endif

#ifndef Z_CPP_HAS_VARIADIC_USING
#	define Z_CPP_HAS_VARIADIC_USING FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTE_FALLTHROUGH
#	define Z_CPP_HAS_ATTRIBUTE_FALLTHROUGH FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTE_MAYBE_UNUSED
#	define Z_CPP_HAS_ATTRIBUTE_MAYBE_UNUSED FALSE
#endif

#ifndef Z_CPP_HAS_ATTRIBUTE_NODISCARD
#	define Z_CPP_HAS_ATTRIBUTE_NODISCARD FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT
#	define Z_CPP_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT FALSE
#endif

#ifndef Z_CPP_HAS_LITERAL_UTF8_CHARACTER
#	define Z_CPP_HAS_LITERAL_UTF8_CHARACTER FALSE
#endif

#ifndef Z_CPP_HAS_PREPROCESSOR_OPERATOR_HAS_INCLUDE
#	define Z_CPP_HAS_PREPROCESSOR_OPERATOR_HAS_INCLUDE FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CASE_CONSTEXPR_IF
#	define Z_CPP_HAS_SPECIFIER_CASE_CONSTEXPR_IF FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CASE_CONSTEXPR_LAMBDA
#	define Z_CPP_HAS_SPECIFIER_CASE_CONSTEXPR_LAMBDA FALSE
#endif

#ifndef Z_CPP_HAS_SPECIFIER_CASE_INLINE_VARIABLE
#	define Z_CPP_HAS_SPECIFIER_CASE_INLINE_VARIABLE FALSE
#endif

#endif /* Z_inspection_CPP_completion_H */
