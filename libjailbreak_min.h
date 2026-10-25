#ifndef LIBJAILBREAK_MIN_H
#define LIBJAILBREAK_MIN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// 弱引用，防止 libjailbreak 签名变化导致加载失败
__attribute__((weak_import))
int jbclient_root_steal_ucred(uint64_t ucredToSteal, uint64_t *orgUcred);

#ifdef __cplusplus
}
#endif

#endif
