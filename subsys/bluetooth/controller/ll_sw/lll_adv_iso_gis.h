/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

int lll_adv_iso_gis_init(void);
int lll_adv_iso_gis_reset(void);
void lll_adv_iso_gis_create_prepare(void *param);
void lll_adv_iso_gis_prepare(void *param);

extern struct lll_adv_iso_stream *ull_adv_iso_gis_lll_stream_get(uint16_t handle);
