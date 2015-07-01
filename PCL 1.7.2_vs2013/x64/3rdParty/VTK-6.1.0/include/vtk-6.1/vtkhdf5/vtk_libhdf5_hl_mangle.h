#ifndef vtk_libhdf5_hl_mangle_h
#define vtk_libhdf5_hl_mangle_h

/*

This header file mangles all symbols exported from the hdf5_hl library.
It is included in all files while building the library.  Due to
namespace pollution, no hdf5_hl headers should be included in .h files in
VTK.

The following command was used to obtain the symbol list:

nm libhdf5_hl_debug.dylib | grep " [TR] " | awk '{print "#define "$3" vtk_"$3}'

Then on Linux I did the following to add symbols:

nm lib/libhdf5_hl_debug.so | grep -v vtk__ | grep " [ABCDGNRSTVW] " | awk '{print "#define "$3" vtk__"$3}' >> ../VTK/Utilities/vtkhdf5/hl/src/vtk_libhdf5_hl_mangle.h

*/

#define H5DS_get_REFLIST_type vtk__H5DS_get_REFLIST_type
#define H5DS_is_reserved vtk__H5DS_is_reserved
#define H5DSattach_scale vtk__H5DSattach_scale
#define H5DSdetach_scale vtk__H5DSdetach_scale
#define H5DSget_label vtk__H5DSget_label
#define H5DSget_num_scales vtk__H5DSget_num_scales
#define H5DSget_scale_name vtk__H5DSget_scale_name
#define H5DSis_attached vtk__H5DSis_attached
#define H5DSis_scale vtk__H5DSis_scale
#define H5DSiterate_scales vtk__H5DSiterate_scales
#define H5DSset_label vtk__H5DSset_label
#define H5DSset_scale vtk__H5DSset_scale
#define H5IM_find_palette vtk__H5IM_find_palette
#define H5IMget_image_info vtk__H5IMget_image_info
#define H5IMget_npalettes vtk__H5IMget_npalettes
#define H5IMget_palette vtk__H5IMget_palette
#define H5IMget_palette_info vtk__H5IMget_palette_info
#define H5IMis_image vtk__H5IMis_image
#define H5IMis_palette vtk__H5IMis_palette
#define H5IMlink_palette vtk__H5IMlink_palette
#define H5IMmake_image_24bit vtk__H5IMmake_image_24bit
#define H5IMmake_image_8bit vtk__H5IMmake_image_8bit
#define H5IMmake_palette vtk__H5IMmake_palette
#define H5IMread_image vtk__H5IMread_image
#define H5IMunlink_palette vtk__H5IMunlink_palette
#define H5LT_dtype_to_text vtk__H5LT_dtype_to_text
#define H5LT_find_attribute vtk__H5LT_find_attribute
#define H5LT_get_attribute_disk vtk__H5LT_get_attribute_disk
#define H5LT_set_attribute_numerical vtk__H5LT_set_attribute_numerical
#define H5LT_set_attribute_string vtk__H5LT_set_attribute_string
#define H5LTdtype_to_text vtk__H5LTdtype_to_text
#define H5LTfind_attribute vtk__H5LTfind_attribute
#define H5LTfind_dataset vtk__H5LTfind_dataset
#define H5LTget_attribute vtk__H5LTget_attribute
#define H5LTget_attribute_char vtk__H5LTget_attribute_char
#define H5LTget_attribute_double vtk__H5LTget_attribute_double
#define H5LTget_attribute_float vtk__H5LTget_attribute_float
#define H5LTget_attribute_info vtk__H5LTget_attribute_info
#define H5LTget_attribute_int vtk__H5LTget_attribute_int
#define H5LTget_attribute_long vtk__H5LTget_attribute_long
#define H5LTget_attribute_long_long vtk__H5LTget_attribute_long_long
#define H5LTget_attribute_ndims vtk__H5LTget_attribute_ndims
#define H5LTget_attribute_short vtk__H5LTget_attribute_short
#define H5LTget_attribute_string vtk__H5LTget_attribute_string
#define H5LTget_attribute_uchar vtk__H5LTget_attribute_uchar
#define H5LTget_attribute_uint vtk__H5LTget_attribute_uint
#define H5LTget_attribute_ulong vtk__H5LTget_attribute_ulong
#define H5LTget_attribute_ushort vtk__H5LTget_attribute_ushort
#define H5LTget_dataset_info vtk__H5LTget_dataset_info
#define H5LTget_dataset_ndims vtk__H5LTget_dataset_ndims
#define H5LTmake_dataset vtk__H5LTmake_dataset
#define H5LTmake_dataset_char vtk__H5LTmake_dataset_char
#define H5LTmake_dataset_double vtk__H5LTmake_dataset_double
#define H5LTmake_dataset_float vtk__H5LTmake_dataset_float
#define H5LTmake_dataset_int vtk__H5LTmake_dataset_int
#define H5LTmake_dataset_long vtk__H5LTmake_dataset_long
#define H5LTmake_dataset_short vtk__H5LTmake_dataset_short
#define H5LTmake_dataset_string vtk__H5LTmake_dataset_string
#define H5LTread_dataset vtk__H5LTread_dataset
#define H5LTread_dataset_char vtk__H5LTread_dataset_char
#define H5LTread_dataset_double vtk__H5LTread_dataset_double
#define H5LTread_dataset_float vtk__H5LTread_dataset_float
#define H5LTread_dataset_int vtk__H5LTread_dataset_int
#define H5LTread_dataset_long vtk__H5LTread_dataset_long
#define H5LTread_dataset_short vtk__H5LTread_dataset_short
#define H5LTread_dataset_string vtk__H5LTread_dataset_string
#define H5LTset_attribute_char vtk__H5LTset_attribute_char
#define H5LTset_attribute_double vtk__H5LTset_attribute_double
#define H5LTset_attribute_float vtk__H5LTset_attribute_float
#define H5LTset_attribute_int vtk__H5LTset_attribute_int
#define H5LTset_attribute_long vtk__H5LTset_attribute_long
#define H5LTset_attribute_long_long vtk__H5LTset_attribute_long_long
#define H5LTset_attribute_short vtk__H5LTset_attribute_short
#define H5LTset_attribute_string vtk__H5LTset_attribute_string
#define H5LTset_attribute_uchar vtk__H5LTset_attribute_uchar
#define H5LTset_attribute_uint vtk__H5LTset_attribute_uint
#define H5LTset_attribute_ulong vtk__H5LTset_attribute_ulong
#define H5LTset_attribute_ushort vtk__H5LTset_attribute_ushort
#define H5LTtext_to_dtype vtk__H5LTtext_to_dtype
#define H5LTyy_create_buffer vtk__H5LTyy_create_buffer
#define H5LTyy_delete_buffer vtk__H5LTyy_delete_buffer
#define H5LTyy_flush_buffer vtk__H5LTyy_flush_buffer
#define H5LTyy_init_buffer vtk__H5LTyy_init_buffer
#define H5LTyy_load_buffer_state vtk__H5LTyy_load_buffer_state
#define H5LTyy_scan_buffer vtk__H5LTyy_scan_buffer
#define H5LTyy_scan_bytes vtk__H5LTyy_scan_bytes
#define H5LTyy_scan_string vtk__H5LTyy_scan_string
#define H5LTyy_switch_to_buffer vtk__H5LTyy_switch_to_buffer
#define H5LTyyerror vtk__H5LTyyerror
#define H5LTyyin vtk__H5LTyyin
#define H5LTyylex vtk__H5LTyylex
#define H5LTyyout vtk__H5LTyyout
#define H5LTyyparse vtk__H5LTyyparse
#define H5LTyyrestart vtk__H5LTyyrestart
#define H5LTyywrap vtk__H5LTyywrap
#define H5PTappend vtk__H5PTappend
#define H5PTclose vtk__H5PTclose
#define H5PTcreate_fl vtk__H5PTcreate_fl
#define H5PTcreate_index vtk__H5PTcreate_index
#define H5PTget_index vtk__H5PTget_index
#define H5PTget_next vtk__H5PTget_next
#define H5PTget_num_packets vtk__H5PTget_num_packets
#define H5PTis_valid vtk__H5PTis_valid
#define H5PTopen vtk__H5PTopen
#define H5PTread_packets vtk__H5PTread_packets
#define H5PTset_index vtk__H5PTset_index
#define H5TBAget_fill vtk__H5TBAget_fill
#define H5TBAget_title vtk__H5TBAget_title
#define H5TB_common_append_records vtk__H5TB_common_append_records
#define H5TB_common_read_records vtk__H5TB_common_read_records
#define H5TBadd_records_from vtk__H5TBadd_records_from
#define H5TBappend_records vtk__H5TBappend_records
#define H5TBcombine_tables vtk__H5TBcombine_tables
#define H5TBdelete_field vtk__H5TBdelete_field
#define H5TBdelete_record vtk__H5TBdelete_record
#define H5TBget_field_info vtk__H5TBget_field_info
#define H5TBget_table_info vtk__H5TBget_table_info
#define H5TBinsert_field vtk__H5TBinsert_field
#define H5TBinsert_record vtk__H5TBinsert_record
#define H5TBmake_table vtk__H5TBmake_table
#define H5TBread_fields_index vtk__H5TBread_fields_index
#define H5TBread_fields_name vtk__H5TBread_fields_name
#define H5TBread_records vtk__H5TBread_records
#define H5TBread_table vtk__H5TBread_table
#define H5TBwrite_fields_index vtk__H5TBwrite_fields_index
#define H5TBwrite_fields_name vtk__H5TBwrite_fields_name
#define H5TBwrite_records vtk__H5TBwrite_records
#define asindex vtk__asindex
#define cmpd_stack vtk__cmpd_stack
#define csindex vtk__csindex
#define first_quote vtk__first_quote
#define indent vtk__indent
#define is_enum vtk__is_enum
#define is_enum_memb vtk__is_enum_memb
#define is_opq_size vtk__is_opq_size
#define is_opq_tag vtk__is_opq_tag
#define is_str_pad vtk__is_str_pad
#define is_str_size vtk__is_str_size
#define is_variable vtk__is_variable
#define my_yyinput vtk__my_yyinput

#define H5LTyychar vtk__H5LTyychar
#define H5LTyycheck vtk__H5LTyycheck
#define H5LTyydebug vtk__H5LTyydebug
#define H5LTyydefred vtk__H5LTyydefred
#define H5LTyydgoto vtk__H5LTyydgoto
#define H5LTyyerrflag vtk__H5LTyyerrflag
#define H5LTyygindex vtk__H5LTyygindex
#define H5LTyylen vtk__H5LTyylen
#define H5LTyyleng vtk__H5LTyyleng
#define H5LTyylhs vtk__H5LTyylhs
#define H5LTyylval vtk__H5LTyylval
#define H5LTyynerrs vtk__H5LTyynerrs
#define H5LTyyrindex vtk__H5LTyyrindex
#define H5LTyysindex vtk__H5LTyysindex
#define H5LTyyss vtk__H5LTyyss
#define H5LTyysslim vtk__H5LTyysslim
#define H5LTyyssp vtk__H5LTyyssp
#define H5LTyystacksize vtk__H5LTyystacksize
#define H5LTyytable vtk__H5LTyytable
#define H5LTyytext vtk__H5LTyytext
#define H5LTyyval vtk__H5LTyyval
#define H5LTyyvs vtk__H5LTyyvs
#define H5LTyyvsp vtk__H5LTyyvsp
#define __bss_start vtk____bss_start
#define _edata vtk___edata
#define _end vtk___end
#define _fini vtk___fini
#define _init vtk___init
#define arr_stack vtk__arr_stack
#define enum_id vtk__enum_id
#define enum_memb_symbol vtk__enum_memb_symbol
#define input_len vtk__input_len
#define myinput vtk__myinput
#define str_cset vtk__str_cset
#define str_pad vtk__str_pad
#define str_size vtk__str_size

#endif
