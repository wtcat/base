/*
 * Copyright 2024 wtcat
 */
#ifndef BASEWORK_PARAMS_H_
#define BASEWORK_PARAMS_H_

#include <stddef.h>
#include "basework/container/queue.h"
#include "basework/thirdparty/lua/src/lua.h"

#ifdef __cplusplus
extern "C"{
#endif

struct param_context;
struct param_node {
    TAILQ_ENTRY(param_node) link;
    char *name;
    char *val;
};

extern struct param_context *_system__params;

/*
 * Private interface
 */
int param_context_setval(struct param_context *ctx, const char *name, 
    char *pval, size_t len);
int param_context_getval(struct param_context *ctx, const char *name, 
    char *pval, size_t len);


/*
 * Public Interface
 */
struct param_context *param_context_create(void);
void param_context_delete(struct param_context *ctx);
int param_context_setstr(struct param_context *ctx, const char *name, 
    const char *str);
int param_context_getstr(struct param_context *ctx, const char *name, 
    const char **pstr);
int param_context_remove(struct param_context *ctx, const char *name);
void param_context_clean(struct param_context *ctx);
void param_context_dump(struct param_context *ctx);


int param_init(void);

static inline void param_clean(void) {
    param_context_clean(_system__params);
}

static inline void param_dump(void) {
    param_context_dump(_system__params);
}

static inline int param_setstr(const char *name, const char *str) {
    return param_context_setstr(_system__params, name, str);
}

static inline int param_getstr(const char *name, const char **pstr) {
    return param_context_getstr(_system__params, name, pstr); 
}

#define param_setval(_name, _val, _type) ({ \
    _type __uv = _val; \
    param_context_setval(_system__params, _name, \
        (char *)&__uv, sizeof(_type)); \
})

#define param_getval(_name, _val, _type) ({ \
    _type __uv;\
    int __err = param_context_getval(_system__params,_name, \
        (char *)&__uv, sizeof(_type)); \
    *(_type *)(_val) = __uv; \
    __err; \
})

#ifdef __cplusplus
}
#endif
#endif /* BASEWORK_PARAMS_H_ */
