/*
 * Copyright (c) 2020-2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

int lll_sync_iso_gis_init(void);
int lll_sync_iso_gis_reset(void);
void lll_sync_iso_gis_create_prepare(void *param);
void lll_sync_iso_gis_prepare(void *param);
void lll_sync_iso_gis_flush(uint8_t handle, struct lll_sync_iso *lll);

extern uint8_t ull_sync_iso_gis_lll_index_get(struct lll_sync_iso *lll);
extern struct lll_sync_iso_stream *ull_sync_iso_gis_lll_stream_get(uint16_t handle);
extern void ll_iso_rx_put(memq_link_t *link, void *rx);
extern void ll_rx_sched(void);