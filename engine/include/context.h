// Copyright 2016 Alexander Palaistras. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.

#ifndef __CONTEXT_H__
#define __CONTEXT_H__

typedef struct _engine_context {
} engine_context;

sapi_globals_struct server_context_get();
void server_context_clear();
void server_context_set(sapi_globals_struct context);
zend_executor_globals executor_context_get();
void executor_context_clear();
void executor_context_set(zend_executor_globals context);
php_core_globals core_context_get();
void core_context_clear();
void core_context_set(php_core_globals context);
engine_context *context_new();
void context_exec(engine_context *context, char *filename);
void *context_eval(engine_context *context, char *script);
void context_bind(engine_context *context, char *name, void *value);
void context_destroy(engine_context *context);

#include "_context.h"

#endif
