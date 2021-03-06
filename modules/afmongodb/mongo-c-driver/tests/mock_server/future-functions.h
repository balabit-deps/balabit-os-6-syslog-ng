#ifndef FUTURE_FUNCTIONS_H
#define FUTURE_FUNCTIONS_H

#include "future-value.h"
#include "future.h"
#include "mongoc-bulk-operation.h"

/**************************************************
 *
 * Generated by build/generate-future-functions.py.
 *
 * DO NOT EDIT THIS FILE.
 *
 *************************************************/


future_t *
future_bulk_operation_execute (

   mongoc_bulk_operation_ptr bulk,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_command_simple (

   mongoc_client_ptr client,
   const_char_ptr db_name,
   const_bson_ptr command,
   const_mongoc_read_prefs_ptr read_prefs,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_kill_cursor (

   mongoc_client_ptr client,
   int64_t cursor_id
);


future_t *
future_collection_aggregate (

   mongoc_collection_ptr collection,
   mongoc_query_flags_t flags,
   const_bson_ptr pipeline,
   const_bson_ptr options,
   const_mongoc_read_prefs_ptr read_prefs
);


future_t *
future_collection_insert_bulk (

   mongoc_collection_ptr collection,
   mongoc_insert_flags_t flags,
   const_bson_ptr_ptr documents,
   uint32_t n_documents,
   const_mongoc_write_concern_ptr write_concern,
   bson_error_ptr error
);


future_t *
future_cursor_destroy (

   mongoc_cursor_ptr cursor
);


future_t *
future_cursor_next (

   mongoc_cursor_ptr cursor,
   const_bson_ptr_ptr doc
);


future_t *
future_client_get_database_names (

   mongoc_client_ptr client,
   bson_error_ptr error
);


future_t *
future_database_get_collection_names (

   mongoc_database_ptr database,
   bson_error_ptr error
);


future_t *
future_topology_select (

   mongoc_topology_ptr topology,
   mongoc_ss_optype_t optype,
   const_mongoc_read_prefs_ptr read_prefs,
   int64_t local_threshold_ms,
   bson_error_ptr error
);



#endif /* FUTURE_FUNCTIONS_H */