/* Z Kit - inspection/compiler/modules/template.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Copyright (C) 2018 Sofía Ortega Sosa.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_inspection_compiler_modules_template_H
#define Z_inspection_compiler_modules_template_H

/* MARK: - Identification */

/*#define Z_COMPILER*/
/*#define Z_COMPILER_STRING*/
/*#define Z_COMPILER_VERSION*/
/*#define Z_COMPILER_VERSION_STRING*/

/* MARK: - CPU */

/*#define Z_COMPILER_CPU_ARCHITECTURE*/

/* MARK: - CPU integral endianness */

/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_ALL*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_8BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_16BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_32BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_64BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_128BIT*/

/* MARK: - CPU integer format */

/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_ALL*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_8BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_16BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_32BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_64BIT*/
/*#define Z_COMPIER_CPU_INTEGRAL_ENDIANNESS_128BIT*/

/* MARK: - Bit field order */

/*#define Z_COMPILER_BIT_FIELD_ORDER_ALL*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_8BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_16BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_32BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_64BIT*/
/*#define Z_COMPILER_BIT_FIELD_ORDER_128BIT*/

/* MARK: - Platform */

/*#define Z_COMPILER_PLATFORM*/

/* MARK: - OS */

/*#define Z_COMPIER_OS*/

/* MARK: - Data model */

/*#define Z_COMPILER_DATA_MODEL*/

/* MARK: - K&R C */

/*#define Z_COMPILER_C_HAS_OLD_STYLE_FUNCTION*/
/*#define Z_COMPILER_C_HAS_OPERATOR_SIZEOF*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_AUTO*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_EXTERN*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_REGISTER*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_STATIC*/
/*#define Z_COMPILER_C_HAS_TYPE_DOUBLE*/
/*#define Z_COMPILER_C_HAS_TYPE_FLOAT*/

/* MARK: - C89 */

/*#define Z_COMPILER_C_HAS_C89_RULES_ON_TYPE_CONVERSION*/
/*#define Z_COMPILER_C_HAS_CONSTRUCT_AS_FUNCTION_ARGUMENT*/
/*#define Z_COMPILER_C_HAS_CONSTRUCT_AS_RETURN_TYPE*/
/*#define Z_COMPILER_C_HAS_CONSTRUCT_ASSIGNMENT*/
/*#define Z_COMPILER_C_HAS_CONSTRUCT_NAMESPACE*/
/*#define Z_COMPILER_C_HAS_ENUMERATION*/
/*#define Z_COMPILER_C_HAS_FUNCTION_POINTER_AUTODEREFERENCING*/
/*#define Z_COMPILER_C_HAS_FUNCTION_PROTOTYPE*/
/*#define Z_COMPILER_C_HAS_INTEGRAL_SWITCH*/
/*#define Z_COMPILER_C_HAS_LOCAL_AGGREGATE_CONSTANT_INITIALZATION*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_INDENTATION*/
/*#define Z_COMPILER_C_HAS_REMOVAL_OF_ENTRY_AS_KEYWORD*/
/*#define Z_COMPILER_C_HAS_REMOVAL_OF_LONG_FLOAT_AS_TYPE*/
/*#define Z_COMPILER_C_HAS_STRING_LITERAL_CONCATENATION*/
/*#define Z_COMPILER_C_HAS_TRIGRAPHS*/
/*#define Z_COMPILER_C_HAS_UNION_CONSTANT_INITIALIZATION*/
/*#define Z_COMPILER_C_HAS_ESCAPE_SEQUENCE_ALERT*/
/*#define Z_COMPILER_C_HAS_ESCAPE_SEQUENCE_HEXADECIMAL*/
/*#define Z_COMPILER_C_HAS_ESCAPE_SEQUENCE_VERTICAL_TAB*/
/*#define Z_COMPILER_C_HAS_LITERAL_FLOAT*/
/*#define Z_COMPILER_C_HAS_LITERAL_LONG_DOUBLE*/
/*#define Z_COMPILER_C_HAS_LITERAL_UNSIGNED*/
/*#define Z_COMPILER_C_HAS_OPERATOR_UNARY_PLUS*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_DIRECTIVE_NULL*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_DIRECTIVE_ELIF*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_DIRECTIVE_ERROR*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_DIRECTIVE_LINE*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_DIRECTIVE_PRAGMA*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_OPERATOR_DEFINED*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_OPERATOR_PASTING*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_OPERATOR_STRINGIZING*/
/*#define Z_COMPILER_C_HAS_TYPE_LONG_DOUBLE*/
/*#define Z_COMPILER_C_HAS_TYPE_UNSIGNED_CHAR*/
/*#define Z_COMPILER_C_HAS_TYPE_UNSIGNED_LONG*/
/*#define Z_COMPILER_C_HAS_TYPE_UNSIGNED_SHORT*/
/*#define Z_COMPILER_C_HAS_TYPE_VOID*/
/*#define Z_COMPILER_C_HAS_TYPE_VOID_POINTER*/
/*#define Z_COMPILER_C_HAS_TYPE_MODIFIER_SIGNED*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_CONST*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_VOLATILE*/

/* MARK: - C95 */

/*#define Z_COMPILER_C_HAS_DIGRAPHS*/

/* MARK: - C99 */

/*#define Z_COMPILER_C_HAS_C99_RULES_ON_INTEGER_LITERALS*/
/*#define Z_COMPILER_C_HAS_C99_RULES_ON_TYPE_COMPATIBILITY*/
/*#define Z_COMPILER_C_HAS_C99_RULES_ON_TYPE_CONVERSION*/
/*#define Z_COMPILER_C_HAS_COMPOUND_LITERAL*/
/*#define Z_COMPILER_C_HAS_CONVERSION_OF_NON_LVALUE_ARRAY_TO_POINTER*/
/*#define Z_COMPILER_C_HAS_CPP_STYLE_COMMENT*/
/*#define Z_COMPILER_C_HAS_DESIGNATED_INITIALIZER*/
/*#define Z_COMPILER_C_HAS_EMPTY_MACRO_ARGUMENT*/
/*#define Z_COMPILER_C_HAS_EXTENDED_IDENTIFIER*/
/*#define Z_COMPILER_C_HAS_FLEXIBLE_ARRAY_MEMBER*/
/*#define Z_COMPILER_C_HAS_FOR_WITH_DECLARATION*/
/*#define Z_COMPILER_C_HAS_IDEMPOTENT_TYPE_QUALIFIERS*/
/*#define Z_COMPILER_C_HAS_LOCAL_AGGREGATE_NON_CONSTANT_INITIALIZATION*/
/*#define Z_COMPILER_C_HAS_MIXED_DECLARATIONS_AND_CODE*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_ARITHMETIC_DONE_IN_INTMAX*/
/*#define Z_COMPILER_C_HAS_RELIABLE_INTEGER_DIVISION*/
/*#define Z_COMPILER_C_HAS_REMOVAL_OF_ILL_FORMED_RETURN*/
/*#define Z_COMPILER_C_HAS_REMOVAL_OF_IMPLICIT_FUNCTION_DECLARATION*/
/*#define Z_COMPILER_C_HAS_REMOVAL_OF_IMPLICIT_INT*/
/*#define Z_COMPILER_C_HAS_STATIC_AND_TYPE_QUALIFIERS_IN_ARRAY_PARAMETER*/
/*#define Z_COMPILER_C_HAS_TRAILING_COMMA_ALLOWED_IN_ENUMERATION*/
/*#define Z_COMPILER_C_HAS_UNIVERSAL_CHARACTER_NAMES*/
/*#define Z_COMPILER_C_HAS_VARIADIC_MACRO*/
/*#define Z_COMPILER_C_HAS_VLA*/
/*#define Z_COMPILER_C_HAS_IDENTIFIER_FUNC*/
/*#define Z_COMPILER_C_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT*/
/*#define Z_COMPILER_C_HAS_LITERAL_WCHAR_T_CHARACTER*/
/*#define Z_COMPILER_C_HAS_LITERAL_WCHAR_T_STRING*/
/*#define Z_COMPILER_C_HAS_PREPROCESSOR_OPERATOR_PRAGMA*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_INLINE*/
/*#define Z_COMPILER_C_HAS_STANDARD_PRAGMA_CX_LIMITED_RANGE*/
/*#define Z_COMPILER_C_HAS_STANDARD_PRAGMA_FENV_ACCESS*/
/*#define Z_COMPILER_C_HAS_STANDARD_PRAGMA_FP_CONTRACT*/
/*#define Z_COMPILER_C_HAS_TYPE_BOOL*/
/*#define Z_COMPILER_C_HAS_TYPE_DOUBLE_COMPLEX*/
/*#define Z_COMPILER_C_HAS_TYPE_DOUBLE_IMAGINARY*/
/*#define Z_COMPILER_C_HAS_TYPE_FLOAT_COMPLEX*/
/*#define Z_COMPILER_C_HAS_TYPE_FLOAT_IMAGINARY*/
/*#define Z_COMPILER_C_HAS_TYPE_LONG_DOUBLE_COMPLEX*/
/*#define Z_COMPILER_C_HAS_TYPE_LONG_DOUBLE_IMAGINARY*/
/*#define Z_COMPILER_C_HAS_TYPE_LONG_LONG*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_RESTRICT*/
/*#define Z_COMPILER_C_HAS_TYPE_MODIFIER_COMPLEX*/
/*#define Z_COMPILER_C_HAS_TYPE_MODIFIER_IMAGINARY*/

/* MARK: - C11 */

/*#define Z_COMPILER_C_HAS_ANONYMOUS_STRUCTURE*/
/*#define Z_COMPILER_C_HAS_ANONYMOUS_UNION*/
/*#define Z_COMPILER_C_HAS_GENERIC_SELECTION*/
/*#define Z_COMPILER_C_HAS_STATIC_ASSERTION*/
/*#define Z_COMPILER_C_HAS_TYPEDEF_REDECLARATION*/
/*#define Z_COMPILER_C_HAS_LITERAL_CHAR16_T_CHARACTER*/
/*#define Z_COMPILER_C_HAS_LITERAL_CHAR16_T_STRING*/
/*#define Z_COMPILER_C_HAS_LITERAL_CHAR32_T_CHARACTER*/
/*#define Z_COMPILER_C_HAS_LITERAL_CHAR32_T_STRING*/
/*#define Z_COMPILER_C_HAS_LITERAL_UNICODE_STRING*/
/*#define Z_COMPILER_C_HAS_OPERATOR_ALIGNOF*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_ALIGNAS*/
/*#define Z_COMPILER_C_HAS_SPECIFIER_NORETURN*/
/*#define Z_COMPILER_C_HAS_STORAGE_CLASS_THREAD_LOCAL*/
/*#define Z_COMPILER_C_HAS_TYPE_MODIFIER_ATOMIC*/
/*#define Z_COMPILER_C_HAS_TYPE_QUALIFIER_ATOMIC*/

/* MARK: - Apple C extensions */

/*#define Z_COMPILER_C_HAS_CLOSURE*/

/*#ifdef __cplusplus*/

	/* MARK: - C++98 */

	/*#define Z_COMPILER_CPP_HAS_SFINAE*/
	/*#define Z_COMPILER_CPP_HAS_TYPE_BOOL*/
	/*#define Z_COMPILER_CPP_HAS_TYPE_WCHAR_T*/

	/* MARK: - C++03 */

	/*#define Z_COMPILER_CPP_HAS_VALUE_INITIALIZATION*/

	/* MARK: - C++11 */

	/*#define Z_COMPILER_CPP_HAS_C99_PREPROCESSOR*/
	/*#define Z_COMPILER_CPP_HAS_CONCURRENT_STATIC_LOCAL_VARIABLE*/
	/*#define Z_COMPILER_CPP_HAS_CONDITIONALLY_SUPPORTED_BEHAVIOR*/
	/*#define Z_COMPILER_CPP_HAS_COPY_LIST_INITIALIZATION*/
	/*#define Z_COMPILER_CPP_HAS_CPP11_RULES_ON_UNIVERSAL_CHARACTER_NAMES*/
	/*#define Z_COMPILER_CPP_HAS_DEFAULT_MEMBER_INITIALIZER*/
	/*#define Z_COMPILER_CPP_HAS_DEFAULT_TEMPLATE_ARGUMENTS_FOR_FUNCTION_TEMPLATE*/
	/*#define Z_COMPILER_CPP_HAS_DEFAULTED_FUNCTION*/
	/*#define Z_COMPILER_CPP_HAS_DELEGATING_CONSTRUCTORS*/
	/*#define Z_COMPILER_CPP_HAS_DELETED_FUNCTION*/
	/*#define Z_COMPILER_CPP_HAS_DIRECT_LIST_INITIALIZATION*/
	/*#define Z_COMPILER_CPP_HAS_EXPRESSION_SFINAE*/
	/*#define Z_COMPILER_CPP_HAS_EXTENDED_FRIEND_DECLARATION*/
	/*#define Z_COMPILER_CPP_HAS_EXTERN_TEMPLATE*/
	/*#define Z_COMPILER_CPP_HAS_INHERITING_CONSTRUCTORS*/
	/*#define Z_COMPILER_CPP_HAS_INITIALIZATION_OF_CLASS_OBJECT_BY_RVALUE*/
	/*#define Z_COMPILER_CPP_HAS_INITIALIZER_LIST*/
	/*#define Z_COMPILER_CPP_HAS_LAMBDA*/
	/*#define Z_COMPILER_CPP_HAS_LOCAL_TYPE_AS_TEMPLATE_ARGUMENT*/
	/*#define Z_COMPILER_CPP_HAS_MOVE_SPECIAL_MEMBER_FUNCTIONS*/
	/*#define Z_COMPILER_CPP_HAS_MULTI_DECLARATOR_AUTO*/
	/*#define Z_COMPILER_CPP_HAS_OPAQUE_ENUMERATION_DECLARATION*/
	/*#define Z_COMPILER_CPP_HAS_RANGE_BASED_FOR*/
	/*#define Z_COMPILER_CPP_HAS_REFERENCE_QUALIFIED_NON_STATIC_MEMBER_FUNCTION*/
	/*#define Z_COMPILER_CPP_HAS_REMOVAL_OF_AUTO_AS_STORAGE_CLASS*/
	/*#define Z_COMPILER_CPP_HAS_RIGHT_ANGLE_BRACKETS*/
	/*#define Z_COMPILER_CPP_HAS_RVALUE_REFERENCE*/
	/*#define Z_COMPILER_CPP_HAS_STANDARD_LAYOUT*/
	/*#define Z_COMPILER_CPP_HAS_STANDARDIZED_ATTRIBUTE_SYNTAX*/
	/*#define Z_COMPILER_CPP_HAS_STATIC_ASSERTION*/
	/*#define Z_COMPILER_CPP_HAS_STRONGLY_TYPED_ENUMERATION*/
	/*#define Z_COMPILER_CPP_HAS_TEMPLATE_ALIAS*/
	/*#define Z_COMPILER_CPP_HAS_TRAILING_RETURN_TYPE*/
	/*#define Z_COMPILER_CPP_HAS_UNNAMED_TYPE_AS_TEMPLATE_ARGUMENT*/
	/*#define Z_COMPILER_CPP_HAS_UNRESTRICTED_UNION*/
	/*#define Z_COMPILER_CPP_HAS_VARIADIC_TEMPLATE*/
	/*#define Z_COMPILER_CPP_HAS_VARIADIC_TEMPLATE_EXTENDED_PARAMETERS*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTE_CARRIES_DEPENDENCY*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTE_NORETURN*/
	/*#define Z_COMPILER_CPP_HAS_IDENTIFIER_FUNC*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_CHAR16_T_CHARACTER*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_CHAR16_T_STRING*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_CHAR32_T_CHARACTER*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_CHAR32_T_STRING*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_NULLPTR*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_RAW_STRING*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_USER_DEFINED*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_UTF8_STRING*/
	/*#define Z_COMPILER_CPP_HAS_OPERATOR_ALIGNOF*/
	/*#define Z_COMPILER_CPP_HAS_OPERATOR_NOEXCEPT*/
	/*#define Z_COMPILER_CPP_HAS_OPERATOR_CASE_SIZEOF_NON_STATIC_DATA_MEMBER*/
	/*#define Z_COMPILER_CPP_HAS_OPERATOR_CASE_SIZEOF_PARAMETER_PACK*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_ALIGNAS*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CONSTEXPR*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_DECLTYPE*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_FINAL*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_NOEXCEPT*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_OVERRIDE*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CASE_DECLTYPE_INCOMPLETE_RETURN*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CASE_EXPLICIT_CONVERSION_FUNCTION*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CASE_INLINE_NAMESPACE*/
	/*#define Z_COMPILER_CPP_HAS_STORAGE_CLASS_THREAD_LOCAL*/
	/*#define Z_COMPILER_CPP_HAS_TYPE_AUTO*/
	/*#define Z_COMPILER_CPP_HAS_TYPE_CHAR16_T*/
	/*#define Z_COMPILER_CPP_HAS_TYPE_CHAR32_T*/
	/*#define Z_COMPILER_CPP_HAS_TYPE_LONG_LONG*/

	/* MARK: - C++14 */

	/*#define Z_COMPILER_CPP_HAS_APOSTROPHE_AS_DIGIT_SEPARATOR*/
	/*#define Z_COMPILER_CPP_HAS_CPP14_RULES_ON_CONSTEXPR_FUNCTION*/
	/*#define Z_COMPILER_CPP_HAS_CPP14_RULES_ON_CONTEXTUAL_CONVERSION*/
	/*#define Z_COMPILER_CPP_HAS_DEFAULT_MEMBER_INITIALIZER_FOR_AGGREGATE*/
	/*#define Z_COMPILER_CPP_HAS_GENERIC_LAMBDA*/
	/*#define Z_COMPILER_CPP_HAS_INITIALIZED_LAMBDA_CAPTURE*/
	/*#define Z_COMPILER_CPP_HAS_RETURN_TYPE_DEDUCTION_FOR_NORMAL_FUNCTION*/
	/*#define Z_COMPILER_CPP_HAS_SIZED_DEALLOCATION*/
	/*#define Z_COMPILER_CPP_HAS_VARIABLE_TEMPLATE*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTE_DEPRECATED*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_BINARY_INTEGRAL*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CASE_DECLTYPE_AUTO*/

	/* MARK: - C++17 */

	/*#define Z_COMPILER_CPP_HAS_AGGREGATE_INITIALIZATION_FOR_DERIVED_CLASS*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTES_FOR_ENUMERATION*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTES_FOR_NAMESPACE*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTE_USING_PREFIX*/
	/*#define Z_COMPILER_CPP_HAS_CPP17_RULES_ON_AUTO_AND_BRACED_INITIALIZATION*/
	/*#define Z_COMPILER_CPP_HAS_CPP17_RULES_ON_EXPRESSION_EVALUATION_ORDER*/
	/*#define Z_COMPILER_CPP_HAS_CPP17_RULES_ON_INHERITING_CONSTRUCTORS*/
	/*#define Z_COMPILER_CPP_HAS_CPP17_RULES_ON_NON_TYPE_TEMPLATE_ARGUMENTS*/
	/*#define Z_COMPILER_CPP_HAS_CPP17_RULES_ON_TEMPLATE_TEMPLATE_ARGUMENT_MATCHING*/
	/*#define Z_COMPILER_CPP_HAS_DIFFERING_BEGIN_AND_END_TYPES_IN_RANGE_BASED_FOR*/
	/*#define Z_COMPILER_CPP_HAS_DIRECT_LIST_INITIALIZATION_FOR_ENUMERATION*/
	/*#define Z_COMPILER_CPP_HAS_NOEXCEPT_AS_PART_OF_THE_TYPE*/
	/*#define Z_COMPILER_CPP_HAS_FOLD_EXPRESSION*/
	/*#define Z_COMPILER_CPP_HAS_FOLD_EXPRESSION_SAFETY_WITH_EMPTY_PARAMETER_PACK*/
	/*#define Z_COMPILER_CPP_HAS_GUARANTEED_COPY_ELISION*/
	/*#define Z_COMPILER_CPP_HAS_IF_WITH_INITIALIZER*/
	/*#define Z_COMPILER_CPP_HAS_IGNORATION_OF_UNKNOWN_ATTRIBUTES*/
	/*#define Z_COMPILER_CPP_HAS_LAMBDA_CAPTURE_OF_THIS_OBJECT_BY_VALUE*/
	/*#define Z_COMPILER_CPP_HAS_LAUNDER*/
	/*#define Z_COMPILER_CPP_HAS_NESTED_NAMESPACE_DEFINITION*/
	/*#define Z_COMPILER_CPP_HAS_NON_TYPE_TEMPLATE_PARAMETER_WITH_AUTO_TYPE*/
	/*#define Z_COMPILER_CPP_HAS_OVER_ALIGNED_DYNAMIC_ALLOCATION*/
	/*#define Z_COMPILER_CPP_HAS_REMOVAL_OF_DYNAMIC_EXCEPTION_SPECIFICATION*/
	/*#define Z_COMPILER_CPP_HAS_REMOVAL_OF_INCREMENT_OPERATOR_WITH_BOOL_OPERAND*/
	/*#define Z_COMPILER_CPP_HAS_REMOVAL_OF_REGISTER_AS_STORAGE_CLASS*/
	/*#define Z_COMPILER_CPP_HAS_REMOVAL_OF_TRIGRAPHS*/
	/*#define Z_COMPILER_CPP_HAS_STATIC_ASSERTION_WITH_NO_MESSAGE*/
	/*#define Z_COMPILER_CPP_HAS_STRUCTURED_BINDING*/
	/*#define Z_COMPILER_CPP_HAS_SWITCH_WITH_INITIALIZER*/
	/*#define Z_COMPILER_CPP_HAS_TEMPLATE_ARGUMENT_DEDUCTION_FOR_CLASS_TEMPLATE*/
	/*#define Z_COMPILER_CPP_HAS_TYPENAME_IN_TEMPLATE_TEMPLATE_PARAMETER*/
	/*#define Z_COMPILER_CPP_HAS_VARIADIC_USING*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTE_FALLTHROUGH*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTE_MAYBE_UNUSED*/
	/*#define Z_COMPILER_CPP_HAS_ATTRIBUTE_NODISCARD*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_HEXADECIMAL_FLOATING_POINT*/
	/*#define Z_COMPILER_CPP_HAS_LITERAL_UTF8_CHARACTER*/
	/*#define Z_COMPILER_CPP_HAS_PREPROCESSOR_OPERATOR_HAS_INCLUDE*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CASE_CONSTEXPR_IF*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CASE_CONSTEXPR_LAMBDA*/
	/*#define Z_COMPILER_CPP_HAS_SPECIFIER_CASE_INLINE_VARIABLE*/

/*#endif*/

/* MARK: - Attributes */

/*#define Z_COMPILER_ATTRIBUTE_ALIAS*/
/*#define Z_COMPILER_ATTRIBUTE_API*/
/*#define Z_COMPILER_ATTRIBUTE_API_ALIAS*/
/*#define Z_COMPILER_ATTRIBUTE_API_EXPORT*/
/*#define Z_COMPILER_ATTRIBUTE_API_EXPORT_ALIAS*/
/*#define Z_COMPILER_ATTRIBUTE_API_WEAK_EXPORT*/
/*#define Z_COMPILER_ATTRIBUTE_EBCO*/
/*#define Z_COMPILER_ATTRIBUTE_INLINE*/
/*#define Z_COMPILER_ATTRIBUTE_NO_RETURN*/
/*#define Z_COMPILER_ATTRIBUTE_NULL_TERMINATED*/
/*#define Z_COMPILER_ATTRIBUTE_PRIVATE*/
/*#define Z_COMPILER_ATTRIBUTE_PUBLIC*/
/*#define Z_COMPILER_ATTRIBUTE_THREAD_LOCAL*/
/*#define Z_COMPILER_ATTRIBUTE_WEAK*/

/* MARK: - Padding modifiers */

/*#define Z_COMPILER_DEFINE_PACKED_STRUCTURE_BEFORE_TYPEDEF*/
/*#define Z_COMPILER_DEFINE_PACKED_STRUCTURE_BEFORE_STRUCT*/
/*#define Z_COMPILER_DEFINE_PACKED_STRUCTURE_BEFORE_BODY*/
/*#define Z_COMPILER_DEFINE_PACKED_STRUCTURE_BEFORE_TYPE*/
/*#define Z_COMPILER_DEFINE_PACKED_STRUCTURE_AFTER_TYPE*/
/*#define Z_COMPILER_DEFINE_PACKED_UNION_BEFORE_TYPEDEF*/
/*#define Z_COMPILER_DEFINE_PACKED_UNION_BEFORE_UNION*/
/*#define Z_COMPILER_DEFINE_PACKED_UNION_BEFORE_BODY*/
/*#define Z_COMPILER_DEFINE_PACKED_UNION_BEFORE_TYPE*/
/*#define Z_COMPILER_DEFINE_PACKED_UNION_AFTER_TYPE*/
/*#define Z_COMPILER_PACKED_NAMED_STRUCTURE_BEFORE_STRUCT*/
/*#define Z_COMPILER_PACKED_NAMED_STRUCTURE_BEFORE_TYPE*/
/*#define Z_COMPILER_PACKED_NAMED_STRUCTURE_BEFORE_BODY*/
/*#define Z_COMPILER_PACKED_NAMED_STRUCTURE_AFTER_BODY*/
/*#define Z_COMPILER_PACKED_NAMED_UNION_BEFORE_UNION*/
/*#define Z_COMPILER_PACKED_NAMED_UNION_BEFORE_TYPE*/
/*#define Z_COMPILER_PACKED_NAMED_UNION_BEFORE_BODY*/
/*#define Z_COMPILER_PACKED_NAMED_UNION_AFTER_BODY*/
/*#define Z_COMPILER_PACKED_UNNAMED_STRUTURE_BEFORE_STRUCT*/
/*#define Z_COMPILER_PACKED_UNNAMED_STRUTURE_BEFORE_BODY*/
/*#define Z_COMPILER_PACKED_UNNAMED_STRUTURE_BEFORE_IDENTIFIER*/
/*#define Z_COMPILER_PACKED_UNNAMED_STRUTURE_AFTER_IDENTIFIER*/
/*#define Z_COMPILER_PACKED_UNNAMED_UNION_BEFORE_STRUCT*/
/*#define Z_COMPILER_PACKED_UNNAMED_UNION_BEFORE_BODY*/
/*#define Z_COMPILER_PACKED_UNNAMED_UNION_BEFORE_IDENTIFIER*/
/*#define Z_COMPILER_PACKED_UNNAMED_UNION_AFTER_IDENTIFIER*/

/* MARK: - Built-in types */

/*#define Z_COMPILER_TYPE_UINT8*/
/*#define Z_COMPILER_TYPE_SINT8*/
/*#define Z_COMPILER_TYPE_UINT16*/
/*#define Z_COMPILER_TYPE_SINT16*/
/*#define Z_COMPILER_TYPE_UINT32*/
/*#define Z_COMPILER_TYPE_SINT32*/
/*#define Z_COMPILER_TYPE_UINT64*/
/*#define Z_COMPILER_TYPE_SINT64*/
/*#define Z_COMPILER_TYPE_UINT128*/
/*#define Z_COMPILER_TYPE_SINT128*/
/*#define Z_COMPILER_TYPE_FLOAT16*/
/*#define Z_COMPILER_TYPE_FLOAT32*/
/*#define Z_COMPILER_TYPE_FLOAT64*/
/*#define Z_COMPILER_TYPE_FLOAT128*/
/*#define Z_COMPILER_TYPE_FLOAT80_X87*/
/*#define Z_COMPILER_TYPE_FLOAT96_X87*/
/*#define Z_COMPILER_TYPE_FLOAT128_X87*/
/*#define Z_COMPILER_TYPE_VAL*/

/* MARK: - Suffix macros for built-in types */

/*#define Z_COMPILER_LITERAL_UINT8*/
/*#define Z_COMPILER_LITERAL_SINT8*/
/*#define Z_COMPILER_LITERAL_UINT16*/
/*#define Z_COMPILER_LITERAL_SINT16*/
/*#define Z_COMPILER_LITERAL_UINT32*/
/*#define Z_COMPILER_LITERAL_SINT32*/
/*#define Z_COMPILER_LITERAL_UINT64*/
/*#define Z_COMPILER_LITERAL_SINT64*/
/*#define Z_COMPILER_LITERAL_UINT128*/
/*#define Z_COMPILER_LITERAL_SINT128*/
/*#define Z_COMPILER_LITERAL_FLOAT16*/
/*#define Z_COMPILER_LITERAL_FLOAT32*/
/*#define Z_COMPILER_LITERAL_FLOAT64*/
/*#define Z_COMPILER_LITERAL_FLOAT128*/
/*#define Z_COMPILER_LITERAL_FLOAT80_X87*/
/*#define Z_COMPILER_LITERAL_FLOAT96_X87*/
/*#define Z_COMPILER_LITERAL_FLOAT128_X87*/

/* MARK: - Built-in constants */

/*#define Z_COMPILER_CONSTANT_FLOAT16_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT16_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT32_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT32_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT64_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT64_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT80_X87_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT80_X87_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT96_X87_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT96_X87_NAN*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_X87_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT128_X87_NAN*/
/*#define Z_COMPILER_CONSTANT_CHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_UCHAR_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SCHAR_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SCHAR_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SHORT_BITS*/
/*#define Z_COMPILER_CONSTANT_SHORT_SIZE*/
/*#define Z_COMPILER_CONSTANT_USHORT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SSHORT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SSHORT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_INT_BITS*/
/*#define Z_COMPILER_CONSTANT_INT_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SINT_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SINT_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_LONG_BITS*/
/*#define Z_COMPILER_CONSTANT_LONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SLONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SLONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_LLONG_BITS*/
/*#define Z_COMPILER_CONSTANT_LLONG_SIZE*/
/*#define Z_COMPILER_CONSTANT_ULLONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SLLONG_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SLLONG_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_FLOAT_BITS*/
/*#define Z_COMPILER_CONSTANT_FLOAT_SIZE*/
/*#define Z_COMPILER_CONSTANT_FLOAT_INFINITY*/
/*#define Z_COMPILER_CONSTANT_FLOAT_NAN*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_DOUBLE_NAN*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_BITS*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_SIZE*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_INFINITY*/
/*#define Z_COMPILER_CONSTANT_LDOUBLE_NAN*/
/*#define Z_COMPILER_CONSTANT_WCHAR_BITS*/
/*#define Z_COMPILER_CONSTANT_WCHAR_SIZE*/
/*#define Z_COMPILER_CONSTANT_WCHAR_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SIZE_BITS*/
/*#define Z_COMPILER_CONSTANT_SIZE_SIZE*/
/*#define Z_COMPILER_CONSTANT_USIZE_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SSIZE_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SSIZE_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_UINTMAX_BITS*/
/*#define Z_COMPILER_CONSTANT_UINTMAX_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINTMAX_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SINTMAX_BITS*/
/*#define Z_COMPILER_CONSTANT_SINTMAX_SIZE*/
/*#define Z_COMPILER_CONSTANT_SINTMAX_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SINTMAX_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_INTPTR_BITS*/
/*#define Z_COMPILER_CONSTANT_INTPTR_SIZE*/
/*#define Z_COMPILER_CONSTANT_UINTPTR_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_SINTPTR_MINIMUM*/
/*#define Z_COMPILER_CONSTANT_SINTPTR_MAXIMUM*/
/*#define Z_COMPILER_CONSTANT_POINTER_BITS*/
/*#define Z_COMPILER_CONSTANT_POINTER_SIZE*/

/* MARK: - Built-in magic constants */

/*#define Z_COMPILER_MAGIC_CONSTANT_MANGLED_FUNCTION_NAME*/

/* MARK: - Built-in macros: Struture */

/*#define Z_COMPILER_MACRO_OFFSET_OF(type, member)*/

/* MARK: - Built-in macros: VAL */

/*#define Z_COMPILER_MACRO_VAL_INITIALIZE(object, last_parameter)*/
/*#define Z_COMPILER_MACRO_VAL_FINALIZE(object)*/
/*#define Z_COMPILER_MACRO_VAL_READ(object, type)*/
/*#define Z_COMPILER_MACRO_VAL_COPY(object, output)*/

/* MARK: - Built-in functions: Atomic operations */

/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT8_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT8_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT16_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT16_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT32_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT32_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT64_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT64_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_UINT128_ATOMIC_XOR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_ADD_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_AND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_DECREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_ADD*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_AND*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_DECREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_INCREMENT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_NAND*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_NOT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_OR*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_SET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_SUBTRACT*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_GET_THEN_XOR*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_INCREMENT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_NAND_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_NOT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_OR_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_SET_IF_EQUAL*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_SUBTRACT_THEN_GET*/
/*#define Z_COMPILER_FUNCTION_SINT128_ATOMIC_XOR_THEN_GET*/

/* MARK: - Built-in traits */

/*#define Z_COMPILER_TRAIT_TYPE_HAS_VIRTUAL_DESTRUCTOR(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_ABSTRACT(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_AGGREGATE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_ASSIGNABLE(type, from_type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_BASE(type, of_type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_CLASS(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_CONSTRUCTIBLE(type, ...)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_CONVERTIBLE(type, to_type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_EMPTY(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_ENUMERATION(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_FINAL(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_INTERFACE_CLASS(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_LITERAL(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_NOTHROW_ASSIGNABLE(type, from_type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_NOTHROW_CONSTRUCTIBLE(type, ...)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_NOTHROW_COPY_ASSIGNABLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_NOTHROW_COPY_CONSTRUCTIBLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_NOTHROW_DEFAULT_CONSTRUCTIBLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_POD(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_POLYMORPHIC(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_STANDARD_LAYOUT(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIAL(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIALLY_ASSIGNABLE(type, from_type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIALLY_CONSTRUCTIBLE(type, ...)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIALLY_COPY_ASSIGNABLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIALLY_COPY_CONSTRUCTIBLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIALLY_COPYABLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIALLY_DEFAULT_CONSTRUCTIBLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_TRIVIALLY_DESTRUCTIBLE(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_IS_UNION(type)*/
/*#define Z_COMPILER_TRAIT_TYPE_UNDERLYING_TYPE(type)*/

#endif /* Z_inspection_compiler_modules_template_H */
