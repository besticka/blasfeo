/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS For Embedded Optimization.                                                      *
* Copyright (C) 2016-2018 by Gianluca Frison.                                                     *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* This program is free software: you can redistribute it and/or modify                            *
* it under the terms of the GNU General Public License as published by                            *
* the Free Software Foundation, either version 3 of the License, or                               *
* (at your option) any later version                                                              *.
*                                                                                                 *
* This program is distributed in the hope that it will be useful,                                 *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                                   *
* GNU General Public License for more details.                                                    *
*                                                                                                 *
* You should have received a copy of the GNU General Public License                               *
* along with this program.  If not, see <https://www.gnu.org/licenses/>.                          *
*                                                                                                 *
* The authors designate this particular file as subject to the "Classpath" exception              *
* as provided by the authors in the LICENSE file that accompained this code.                      *
*                                                                                                 *
* Author: Gianluca Frison, gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/

#ifndef BLASFEO_D_KERNEL_H_
#define BLASFEO_D_KERNEL_H_



#include "blasfeo_target.h"



#ifdef __cplusplus
extern "C" {
#endif



// utils
void blasfeo_align_64_byte(void *ptr, void **ptr_align);



// level 2 BLAS
// 12
void kernel_dgemv_n_12_lib4(int k, double *alpha, double *A, int sda, double *x, double *beta, double *y, double *z);
void kernel_dgemv_t_12_lib4(int k, double *alpha, double *A, int sda, double *x, double *beta, double *y, double *z);
// 8
void kernel_dgemv_n_8_lib4(int k, double *alpha, double *A, int sda, double *x, double *beta, double *y, double *z);
void kernel_dgemv_t_8_lib4(int k, double *alpha, double *A, int sda, double *x, double *beta, double *y, double *z);
void kernel_dtrmv_un_8_lib4(int k, double *A, int sda, double *x, double *z);
// 4
void kernel_dgemv_n_4_lib4(int k, double *alpha, double *A, double *x, double *beta, double *y, double *z);
void kernel_dgemv_n_4_vs_lib4(int k, double *alpha, double *A, double *x, double *beta, double *y, double *z, int k1);
void kernel_dgemv_n_4_gen_lib4(int kmax, double *alpha, double *A, double *x, double *beta, double *y, double *z, int k0, int k1);
void kernel_dgemv_t_4_lib4(int k, double *alpha, double *A, int sda, double *x, double *beta, double *y, double *z);
void kernel_dgemv_t_4_vs_lib4(int k, double *alpha, double *A, int sda, double *x, double *beta, double *y, double *z, int k1);
void kernel_dgemv_t_4_gen_lib4(int k, double *alpha, int offA, double *A, int sda, double *x, double *beta, double *C, double *D, int km);
void kernel_dtrsv_ln_inv_4_lib4(int k, double *A, double *inv_diag_A, double *x, double *y, double *z);
void kernel_dtrsv_ln_inv_4_vs_lib4(int k, double *A, double *inv_diag_A, double *x, double *y, double *z, int km, int kn);
void kernel_dtrsv_lt_inv_4_lib4(int k, double *A, int sda, double *inv_diag_A, double *x, double *y, double *z);
void kernel_dtrsv_lt_inv_3_lib4(int k, double *A, int sda, double *inv_diag_A, double *x, double *y, double *z);
void kernel_dtrsv_lt_inv_2_lib4(int k, double *A, int sda, double *inv_diag_A, double *x, double *y, double *z);
void kernel_dtrsv_lt_inv_1_lib4(int k, double *A, int sda, double *inv_diag_A, double *x, double *y, double *z);
void kernel_dtrsv_lt_one_4_lib4(int k, double *A, int sda, double *x, double *y, double *z);
void kernel_dtrsv_lt_one_3_lib4(int k, double *A, int sda, double *x, double *y, double *z);
void kernel_dtrsv_lt_one_2_lib4(int k, double *A, int sda, double *x, double *y, double *z);
void kernel_dtrsv_lt_one_1_lib4(int k, double *A, int sda, double *x, double *y, double *z);
void kernel_dtrsv_ln_one_4_vs_lib4(int kmax, double *A, double *x, double *y, double *z, int km, int kn);
void kernel_dtrsv_ln_one_4_lib4(int kmax, double *A, double *x, double *y, double *z);
void kernel_dtrsv_un_inv_4_lib4(int kmax, double *A, double *inv_diag_A, double *x, double *y, double *z);
void kernel_dtrsv_ut_inv_4_lib4(int kmax, double *A, int sda, double *inv_diag_A, double *x, double *y, double *z);
void kernel_dtrsv_ut_inv_4_vs_lib4(int kmax, double *A, int sda, double *inv_diag_A, double *x, double *y, double *z, int m1, int n1);
void kernel_dtrmv_un_4_lib4(int k, double *A, double *x, double *z);
void kernel_dtrmv_ut_4_lib4(int k, double *A, int sda, double *x, double *z);
void kernel_dtrmv_ut_4_vs_lib4(int k, double *A, int sda, double *x, double *z, int km);
void kernel_dgemv_nt_6_lib4(int kmax, double *alpha_n, double *alpha_t, double *A, int sda, double *x_n, double *x_t, double *beta_t, double *y_t, double *z_n, double *z_t);
void kernel_dgemv_nt_4_lib4(int kmax, double *alpha_n, double *alpha_t, double *A, int sda, double *x_n, double *x_t, double *beta_t, double *y_t, double *z_n, double *z_t);
void kernel_dgemv_nt_4_vs_lib4(int kmax, double *alpha_n, double *alpha_t, double *A, int sda, double *x_n, double *x_t, double *beta_t, double *y_t, double *z_n, double *z_t, int km);
void kernel_dsymv_l_4_lib4(int kmax, double *alpha, double *A, int sda, double *x, double *z);
void kernel_dsymv_l_4_gen_lib4(int kmax, double *alpha, int offA, double *A, int sda, double *x, double *z, int km);



// level 3 BLAS
// 12x4
void kernel_dgemm_nt_12x4_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nt_12x4_vs_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); //
void kernel_dgemm_nt_12x4_gen_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int k0, int k1);
void kernel_dgemm_nn_12x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_12x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); //
void kernel_dgemm_nn_12x4_gen_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1); //
void kernel_dsyrk_nn_u_12x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dsyrk_nn_u_12x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dsyrk_nt_l_12x4_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dsyrk_nt_l_12x4_vs_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); //
void kernel_dtrmm_nt_ru_12x4_lib4(int k, double *alpha, double *A, int sda, double *B, double *D, int sdd); //
void kernel_dtrmm_nt_ru_12x4_vs_lib4(int k, double *alpha, double *A, int sda, double *B, double *D, int sdd, int km, int kn); //
void kernel_dtrmm_nn_rl_12x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *D, int sdd);
void kernel_dtrmm_nn_rl_12x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *D, int sdd, int km, int kn);
void kernel_dtrsm_nt_rl_inv_12x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dtrsm_nt_rl_inv_12x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nt_rl_one_12x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E);
void kernel_dtrsm_nt_rl_one_12x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, int km, int kn);
void kernel_dtrsm_nt_ru_inv_12x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dtrsm_nt_ru_inv_12x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nt_ru_one_12x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E);
void kernel_dtrsm_nt_ru_one_12x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, int km, int kn);
void kernel_dtrsm_nn_ru_inv_12x4_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dtrsm_nn_ru_inv_12x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nn_ll_inv_12x4_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E);
void kernel_dtrsm_nn_ll_inv_12x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nn_ll_one_12x4_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde);
void kernel_dtrsm_nn_ll_one_12x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde, int km, int kn);
void kernel_dtrsm_nn_lu_inv_12x4_lib4(int kmax, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E);
void kernel_dtrsm_nn_lu_inv_12x4_vs_lib4(int kmax, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E, int km, int kn);
// 4x12
void kernel_dgemm_nt_4x12_lib4(int k, double *alpha, double *A, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nt_4x12_vs_lib4(int k, double *alpha, double *A, double *B, int sdb, double *beta, double *C, double *D, int km, int kn); //
void kernel_dgemm_nn_4x12_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nn_4x12_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D, int m1, int n1); //
void kernel_dtrsm_nt_rl_inv_4x12_lib4(int k, double *A, double *B, int sdb, double *C, double *D, double *E, int sed, double *inv_diag_E);
void kernel_dtrsm_nt_rl_inv_4x12_vs_lib4(int k, double *A, double *B, int sdb, double *C, double *D, double *E, int sed, double *inv_diag_E, int km, int kn);
// 8x8
void kernel_dgemm_nt_8x8l_lib4(int k, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); // computes [A00 *; A10 A11]
void kernel_dgemm_nt_8x8u_lib4(int k, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); // computes [A00 *; A10 A11]
void kernel_dgemm_nt_8x8l_vs_lib4(int k, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); // computes [A00 *; A10 A11]
void kernel_dgemm_nt_8x8u_vs_lib4(int k, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); // computes [A00 *; A10 A11]
void kernel_dsyrk_nn_u_8x8_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dsyrk_nn_u_8x8_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dsyrk_nt_l_8x8_lib4(int k, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); // computes [L00 *; A10 L11]
void kernel_dsyrk_nt_l_8x8_vs_lib4(int k, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); // computes [L00 *; A10 L11]
void kernel_dtrsm_nt_rl_inv_8x8l_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sed, double *inv_diag_E);
void kernel_dtrsm_nt_rl_inv_8x8l_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sed, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nt_rl_inv_8x8u_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sed, double *inv_diag_E);
void kernel_dtrsm_nt_rl_inv_8x8u_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sed, double *inv_diag_E, int km, int kn);
// 8x4
void kernel_dgemm_nt_8x4_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nt_8x4_vs_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); //
void kernel_dgemm_nt_8x4_gen_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int k0, int k1);
void kernel_dgemm_nn_8x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_8x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dgemm_nn_8x4_gen_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1); //
void kernel_dsyrk_nn_u_8x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dsyrk_nn_u_8x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dsyrk_nt_l_8x4_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dsyrk_nt_l_8x4_vs_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, int km, int kn); //
void kernel_dsyrk_nt_l_8x4_gen_lib4(int k, double *alpha, double *A, int sda, double *B, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int k0, int k1);
void kernel_dtrmm_nt_ru_8x4_lib4(int k, double *alpha, double *A, int sda, double *B, double *D, int sdd); //
void kernel_dtrmm_nt_ru_8x4_vs_lib4(int k, double *alpha, double *A, int sda, double *B, double *D, int sdd, int km, int kn); //
void kernel_dtrmm_nn_rl_8x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *D, int sdd);
void kernel_dtrmm_nn_rl_8x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *D, int sdd, int km, int kn);
void kernel_dtrmm_nn_rl_8x4_gen_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_dtrsm_nt_rl_inv_8x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nt_rl_inv_8x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dtrsm_nt_rl_one_8x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E);
void kernel_dtrsm_nt_rl_one_8x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, int km, int kn);
void kernel_dtrsm_nt_ru_inv_8x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dtrsm_nt_ru_inv_8x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nt_ru_one_8x4_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E);
void kernel_dtrsm_nt_ru_one_8x4_vs_lib4(int k, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd, double *E, int km, int kn);
void kernel_dtrsm_nn_ru_inv_8x4_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dtrsm_nn_ru_inv_8x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nn_ll_inv_8x4_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E);
void kernel_dtrsm_nn_ll_inv_8x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nn_ll_one_8x4_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde);
void kernel_dtrsm_nn_ll_one_8x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int sde, int km, int kn);
void kernel_dtrsm_nn_lu_inv_8x4_lib4(int kmax, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E);
void kernel_dtrsm_nn_lu_inv_8x4_vs_lib4(int kmax, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E, int km, int kn);
// 4x8
void kernel_dgemm_nt_4x8_lib4(int k, double *alpha, double *A, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nt_4x8_vs_lib4(int k, double *alpha, double *A, double *B, int sdb, double *beta, double *C, double *D, int km, int kn); //
void kernel_dgemm_nn_4x8_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nn_4x8_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D, int m1, int n1); //
void kernel_dtrsm_nt_rl_inv_4x8_lib4(int k, double *A, double *B, int sdb, double *C, double *D, double *E, int sed, double *inv_diag_E);
void kernel_dtrsm_nt_rl_inv_4x8_vs_lib4(int k, double *A, double *B, int sdb, double *C, double *D, double *E, int sed, double *inv_diag_E, int km, int kn);
// 8x2
void kernel_dgemm_nn_8x2_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_8x2_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
// 2x8
void kernel_dgemm_nn_2x8_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nn_2x8_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D, int m1, int n1); //
// 10xX
void kernel_dgemm_nn_10x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_10x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dgemm_nn_10x2_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_10x2_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
// 6xX
void kernel_dgemm_nn_8x6_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_8x6_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dgemm_nn_6x8_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_6x8_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dgemm_nn_6x6_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_6x6_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dgemm_nn_6x4_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_6x4_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
void kernel_dgemm_nn_6x2_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd); //
void kernel_dgemm_nn_6x2_vs_lib4(int k, double *alpha, double *A, int sda, int offsetB, double *B, int sdb, double *beta, double *C, int sdc, double *D, int sdd, int m1, int n1); //
// 4x4
void kernel_dgemm_nt_4x4_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D); //
void kernel_dgemm_nt_4x4_vs_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D, int km, int kn); //
void kernel_dgemm_nt_4x4_gen_lib4(int k, double *alpha, double *A, double *B, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_dgemm_nn_4x4_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nn_4x4_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D, int m1, int n1); //
void kernel_dgemm_nn_4x4_gen_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1); //
void kernel_dsyrk_nn_u_4x4_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dsyrk_nn_u_4x4_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D, int m1, int n1); //
void kernel_dsyrk_nt_l_4x4_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D); //
void kernel_dsyrk_nt_l_4x4_vs_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D, int km, int kn); //
void kernel_dsyrk_nt_l_4x4_gen_lib4(int k, double *alpha, double *A, double *B, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_dsyrk_nt_u_4x4_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D); //
void kernel_dsyrk_nt_u_4x4_vs_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D, int km, int kn); //
void kernel_dsyrk_nt_u_4x4_gen_lib4(int k, double *alpha, double *A, double *B, double *beta, int offsetC, double *C, int sdc, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_dtrmm_nt_ru_4x4_lib4(int k, double *alpha, double *A, double *B, double *D); //
void kernel_dtrmm_nt_ru_4x4_vs_lib4(int k, double *alpha, double *A, double *B, double *D, int km, int kn); //
void kernel_dtrmm_nn_rl_4x4_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *D);
void kernel_dtrmm_nn_rl_4x4_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *D, int m1, int n1);
void kernel_dtrmm_nn_rl_4x4_gen_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, int offsetD, double *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_dtrsm_nt_rl_inv_4x4_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dtrsm_nt_rl_inv_4x4_vs_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nt_rl_one_4x4_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E);
void kernel_dtrsm_nt_rl_one_4x4_vs_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, int km, int kn);
void kernel_dtrsm_nt_ru_inv_4x4_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dtrsm_nt_ru_inv_4x4_vs_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nt_ru_one_4x4_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E);
void kernel_dtrsm_nt_ru_one_4x4_vs_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, int km, int kn);
void kernel_dtrsm_nn_ru_inv_4x4_lib4(int k, double *A, double *B, int sdb, double *beta, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dtrsm_nn_ru_inv_4x4_vs_lib4(int k, double *A, double *B, int sdb, double *beta, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nn_ll_inv_4x4_lib4(int k, double *A, double *B, int sdb, double *beta, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dtrsm_nn_ll_inv_4x4_vs_lib4(int k, double *A, double *B, int sdb, double *beta, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
void kernel_dtrsm_nn_ll_one_4x4_lib4(int k, double *A, double *B, int sdb, double *beta, double *C, double *D, double *E);
void kernel_dtrsm_nn_ll_one_4x4_vs_lib4(int k, double *A, double *B, int sdb, double *beta, double *C, double *D, double *E, int km, int kn);
void kernel_dtrsm_nn_lu_inv_4x4_lib4(int kmax, double *A, double *B, int sdb, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dtrsm_nn_lu_inv_4x4_vs_lib4(int kmax, double *A, double *B, int sdb, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
// 4x2
void kernel_dgemm_nn_4x2_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nn_4x2_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D, int m1, int n1); //
void kernel_dgemm_nt_4x2_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D);
void kernel_dgemm_nt_4x2_vs_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D, int m1, int n1);
void kernel_dsyrk_nt_l_4x2_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D); //
void kernel_dsyrk_nt_l_4x2_vs_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D, int km, int kn); //
void kernel_dtrmm_nn_rl_4x2_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *D);
void kernel_dtrmm_nn_rl_4x2_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *D, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_4x2_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dtrsm_nt_rl_inv_4x2_vs_lib4(int k, double *A, double *B, double *beta, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
// 2x4
void kernel_dgemm_nn_2x4_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dgemm_nn_2x4_vs_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D, int m1, int n1); //
// 2x2
void kernel_dgemm_nn_2x2_lib4(int k, double *alpha, double *A, int offsetB, double *B, int sdb, double *beta, double *C, double *D); //
void kernel_dsyrk_nt_l_2x2_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D); //
void kernel_dsyrk_nt_l_2x2_vs_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D, int km, int kn); //
// diag
void kernel_dgemm_diag_right_4_a0_lib4(int kmax, double *alpha, double *A, int sda, double *B, double *D, int sdd);
void kernel_dgemm_diag_right_4_lib4(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd);
void kernel_dgemm_diag_right_3_lib4(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd);
void kernel_dgemm_diag_right_2_lib4(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd);
void kernel_dgemm_diag_right_1_lib4(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int sdc, double *D, int sdd);
void kernel_dgemm_diag_left_4_a0_lib4(int kmax, double *alpha, double *A, double *B, double *D);
void kernel_dgemm_diag_left_4_lib4(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D);
void kernel_dgemm_diag_left_3_lib4(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D);
void kernel_dgemm_diag_left_2_lib4(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D);
void kernel_dgemm_diag_left_1_lib4(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D);
// low rank update
void kernel_dger4_sub_12r_lib4(int k, double *A, int sda, double *B, double *C, int sdc);
void kernel_dger4_sub_12r_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, int km);
void kernel_dger4_sub_8r_lib4(int k, double *A, int sda, double *B, double *C, int sdc);
void kernel_dger4_sub_8r_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, int km);
void kernel_dger4_sub_4r_lib4(int n, double *A, double *B, double *C);
void kernel_dger4_sub_4r_vs_lib4(int n, double *A, double *B, double *C, int km);



// LAPACK
// 12x4
void kernel_dpotrf_nt_l_12x4_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dpotrf_nt_l_12x4_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nn_l_12x4_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nn_l_12x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nn_m_12x4_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nn_m_12x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nn_r_12x4_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nn_r_12x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nt_l_12x4_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nt_l_12x4_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nt_m_12x4_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nt_m_12x4_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nt_r_12x4_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nt_r_12x4_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
// 8x8
void kernel_dpotrf_nt_l_8x8_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dpotrf_nt_l_8x8_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
// 8x4
void kernel_dpotrf_nt_l_8x4_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dpotrf_nt_l_8x4_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nn_l_8x4_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nn_l_8x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nn_r_8x4_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nn_r_8x4_vs_lib4(int k, double *A, int sda, double *B, int sdb, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nt_l_8x4_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nt_l_8x4_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nt_r_8x4_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dgetrf_nt_r_8x4_vs_lib4(int k, double *A, int sda, double *B, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
// 4x4
void kernel_dpotrf_nt_l_4x4_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D);
void kernel_dpotrf_nt_l_4x4_vs_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D, int km, int kn);
#if defined(TARGET_X64_INTEL_SANDY_BRIDGE)
void kernel_dlauum_nt_4x4_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D); //
void kernel_dlauum_nt_4x4_vs_lib4(int k, double *alpha, double *A, double *B, double *beta, double *C, double *D, int km, int kn); //
#endif
void kernel_dgetrf_nn_4x4_lib4(int k, double *A, double *B, int sdb, double *C, double *D, double *inv_diag_D);
void kernel_dgetrf_nn_4x4_vs_lib4(int k, double *A, double *B, int sdb, double *C, double *D, double *inv_diag_D, int km, int kn);
void kernel_dgetrf_nt_4x4_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D);
void kernel_dgetrf_nt_4x4_vs_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D, int km, int kn);
void kernel_dgeqrf_4_lib4(int m, double *pD, int sdd, double *dD);
void kernel_dgeqrf_vs_lib4(int m, int n, int k, int offD, double *pD, int sdd, double *dD);
void kernel_dlarf_4_lib4(int m, int n, double *pV, int sdv, double *tau, double *pC, int sdc); // rank-4 reflector
void kernel_dlarf_t_4_lib4(int m, int n, double *pD, int sdd, double *pVt, double *dD, double *pC0, int sdc, double *pW);
void kernel_dgelqf_4_lib4(int n, double *pD, double *dD);
void kernel_dgelqf_vs_lib4(int m, int n, int k, int offD, double *pD, int sdd, double *dD);
void kernel_dlarft_4_lib4(int kmax, double *pD, double *dD, double *pT);
void kernel_dgelqf_dlarft12_12_lib4(int n, double *pD, int sdd, double *dD, double *pT);
void kernel_dgelqf_dlarft4_12_lib4(int n, double *pD, int sdd, double *dD, double *pT);
void kernel_dgelqf_dlarft4_8_lib4(int n, double *pD, int sdd, double *dD, double *pT);
void kernel_dgelqf_dlarft4_4_lib4(int n, double *pD, double *dD, double *pT);
void kernel_dlarfb12_r_12_lib4(int kmax, double *pV, int sdd, double *pT, double *pD, double *pK);
void kernel_dlarfb12_r_4_lib4(int kmax, double *pV, int sdd, double *pT, double *pD, double *pK, int km);
void kernel_dlarfb4_r_12_lib4(int kmax, double *pV, double *pT, double *pD, int sdd);
void kernel_dlarfb4_r_8_lib4(int kmax, double *pV, double *pT, double *pD, int sdd);
void kernel_dlarfb4_r_4_lib4(int kmax, double *pV, double *pT, double *pD);
void kernel_dlarfb4_r_1_lib4(int kmax, double *pV, double *pT, double *pD);
void kernel_dgelqf_pd_dlarft12_12_lib4(int n, double *pD, int sdd, double *dD, double *pT);
void kernel_dgelqf_pd_dlarft4_8_lib4(int n, double *pD, int sdd, double *dD, double *pT);
void kernel_dgelqf_pd_dlarft4_4_lib4(int n, double *pD, double *dD, double *pT);
void kernel_dgelqf_pd_4_lib4(int n, double *pD, double *dD);
void kernel_dgelqf_pd_vs_lib4(int m, int n, int k, int offD, double *pD, int sdd, double *dD);
void kernel_dgelqf_pd_la_vs_lib4(int m, int n1, int k, int offD, double *pD, int sdd, double *dD, int offA, double *pA, int sda);
void kernel_dlarft_4_la_lib4(int n1, double *dD, double *pA, double *pT);
void kernel_dlarfb4_r_12_la_lib4(int n1, double *pVA, double *pT, double *pD, int sdd, double *pA, int sda);
void kernel_dlarfb4_r_8_la_lib4(int n1, double *pVA, double *pT, double *pD, int sdd, double *pA, int sda);
void kernel_dlarfb4_r_4_la_lib4(int n1, double *pVA, double *pT, double *pD, double *pA);
void kernel_dlarfb4_r_1_la_lib4(int n1, double *pVA, double *pT, double *pD, double *pA);
void kernel_dgelqf_pd_lla_vs_lib4(int m, int n0, int n1, int k, int offD, double *pD, int sdd, double *dD, int offL, double *pL, int sdl, int offA, double *pA, int sda);
void kernel_dlarft_4_lla_lib4(int n0, int n1, double *dD, double *pL, double *pA, double *pT);
void kernel_dlarfb4_r_12_lla_lib4(int n0, int n1, double *pVL, double *pVA, double *pT, double *pD, int sdd, double *pL, int sdl, double *pA, int sda);
void kernel_dlarfb4_r_8_lla_lib4(int n0, int n1, double *pVL, double *pVA, double *pT, double *pD, int sdd, double *pL, int sdl, double *pA, int sda);
void kernel_dlarfb4_r_4_lla_lib4(int n0, int n1, double *pVL, double *pVA, double *pT, double *pD, double *pL, double *pA);
void kernel_dlarfb4_r_1_lla_lib4(int n0, int n1, double *pVL, double *pVA, double *pT, double *pD, double *pL, double *pA);
// 4x2
void kernel_dpotrf_nt_l_4x2_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D);
void kernel_dpotrf_nt_l_4x2_vs_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D, int km, int kn);
// 2x2
void kernel_dpotrf_nt_l_2x2_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D);
void kernel_dpotrf_nt_l_2x2_vs_lib4(int k, double *A, double *B, double *C, double *D, double *inv_diag_D, int km, int kn);
// 12
void kernel_dgetrf_pivot_12_lib4(int m, double *pA, int sda, double *inv_diag_A, int* ipiv);
void kernel_dgetrf_pivot_12_vs_lib4(int m, double *pA, int sda, double *inv_diag_A, int* ipiv, int n);
// 8
void kernel_dgetrf_pivot_8_lib4(int m, double *pA, int sda, double *inv_diag_A, int* ipiv);
void kernel_dgetrf_pivot_8_vs_lib4(int m, double *pA, int sda, double *inv_diag_A, int* ipiv, int n);
// 4
void kernel_dgetrf_pivot_4_lib4(int m, double *pA, int sda, double *inv_diag_A, int* ipiv);
void kernel_dgetrf_pivot_4_vs_lib4(int m, double *pA, int sda, double *inv_diag_A, int* ipiv, int n1);
// vector
void kernel_drowsw_lib4(int kmax, double *pA, double *pC);



// merged routines
// 12x4
void kernel_dgemm_dtrsm_nt_rl_inv_12x4_vs_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dgemm_dtrsm_nt_rl_inv_12x4_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dsyrk_dpotrf_nt_l_12x4_vs_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dsyrk_dpotrf_nt_l_12x4_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
// 4x12
void kernel_dgemm_dtrsm_nt_rl_inv_4x12_vs_lib4(int kp, double *Ap, double *Bp, int sdbp, int km_, double *Am, double *Bm, int sdbm, double *C, double *D, double *E, int sde, double *inv_diag_E, int km, int kn);
// 8x8
void kernel_dsyrk_dpotrf_nt_l_8x8_lib4(int kp, double *Ap, int sdap, double *Bp, int sdbp, int km_, double *Am, int sdam, double *Bm, int sdbm, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dsyrk_dpotrf_nt_l_8x8_vs_lib4(int kp, double *Ap, int sdap, double *Bp, int sdbp, int km_, double *Am, int sdam, double *Bm, int sdbm, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
void kernel_dgemm_dtrsm_nt_rl_inv_8x8l_vs_lib4(int kp, double *Ap, int sdap, double *Bp, int sdb, int km_, double *Am, int sdam, double *Bm, int sdbm, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E, int km, int kn);
void kernel_dgemm_dtrsm_nt_rl_inv_8x8u_vs_lib4(int kp, double *Ap, int sdap, double *Bp, int sdb, int km_, double *Am, int sdam, double *Bm, int sdbm, double *C, int sdc, double *D, int sdd, double *E, int sde, double *inv_diag_E, int km, int kn);
// 8x4
void kernel_dgemm_dtrsm_nt_rl_inv_8x4_vs_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E, int km, int kn);
void kernel_dgemm_dtrsm_nt_rl_inv_8x4_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *E, double *inv_diag_E);
void kernel_dsyrk_dpotrf_nt_l_8x4_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *inv_diag_D);
void kernel_dsyrk_dpotrf_nt_l_8x4_vs_lib4(int kp, double *Ap, int sdap, double *Bp, int km_, double *Am, int sdam, double *Bm, double *C, int sdc, double *D, int sdd, double *inv_diag_D, int km, int kn);
// 4x8
void kernel_dgemm_dtrsm_nt_rl_inv_4x8_vs_lib4(int kp, double *Ap, double *Bp, int sdbp, int km_, double *Am, double *Bm, int sdbm, double *C, double *D, double *E, int sde, double *inv_diag_E, int km, int kn);
// 4x4
void kernel_dgemm_dtrsm_nt_rl_inv_4x4_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dgemm_dtrsm_nt_rl_inv_4x4_vs_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
void kernel_dsyrk_dpotrf_nt_l_4x4_vs_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *inv_diag_D, int km, int kn);
void kernel_dsyrk_dpotrf_nt_l_4x4_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *inv_diag_D);
// 4x2
void kernel_dgemm_dtrsm_nt_rl_inv_4x2_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *E, double *inv_diag_E);
void kernel_dgemm_dtrsm_nt_rl_inv_4x2_vs_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *E, double *inv_diag_E, int km, int kn);
void kernel_dsyrk_dpotrf_nt_l_4x2_vs_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *inv_diag_D, int km, int kn);
void kernel_dsyrk_dpotrf_nt_l_4x2_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *inv_diag_D);
// 2x2
void kernel_dsyrk_dpotrf_nt_l_2x2_vs_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *inv_diag_D, int km, int kn);
void kernel_dsyrk_dpotrf_nt_l_2x2_lib4(int kp, double *Ap, double *Bp, int km_, double *Am, double *Bm, double *C, double *D, double *inv_diag_D);

/*
 *
 * Auxiliary routines
 *
 * cpsc copy and scale, scale
 * cp copy
 * add
 * set and scale
 * transpose and scale
 * set and scale
 *
 */

// copy and scale
void kernel_dgecpsc_8_0_lib4(int tri, int kmax, double alpha, double *A0, int sda,  double *B, int sdb);
void kernel_dgecpsc_8_1_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B, int sdb);
void kernel_dgecpsc_8_2_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B, int sdb);
void kernel_dgecpsc_8_3_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B, int sdb);

void kernel_dgecpsc_4_0_lib4(int tri, int kmax, double alpha, double *A, double *B);
void kernel_dgecpsc_4_1_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgecpsc_4_2_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgecpsc_4_3_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B);

void kernel_dgecpsc_3_0_lib4(int tri, int kmax, double alpha, double *A, double *B);
void kernel_dgecpsc_3_2_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgecpsc_3_3_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B);

void kernel_dgecpsc_2_0_lib4(int tri, int kmax, double alpha, double *A, double *B);
void kernel_dgecpsc_2_3_lib4(int tri, int kmax, double alpha, double *A0, int sda, double *B);

void kernel_dgecpsc_1_0_lib4(int tri, int kmax, double alpha, double *A, double *B);

// copy only
void kernel_dgecp_8_0_lib4(int tri, int kmax, double *A, int sda, double *B, int sdb);

void kernel_dgecp_4_0_lib4(int tri, int kmax, double *A, double *B);

// add
void kernel_dgead_8_0_lib4(int kmax, double alpha, double *A0, int sda,  double *B, int sdb);
void kernel_dgead_8_1_lib4(int kmax, double alpha, double *A0, int sda, double *B, int sdb);
void kernel_dgead_8_2_lib4(int kmax, double alpha, double *A0, int sda, double *B, int sdb);
void kernel_dgead_8_3_lib4(int kmax, double alpha, double *A0, int sda, double *B, int sdb);
void kernel_dgead_4_0_lib4(int kmax, double alpha, double *A, double *B);
void kernel_dgead_4_1_lib4(int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgead_4_2_lib4(int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgead_4_3_lib4(int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgead_3_0_lib4(int kmax, double alpha, double *A, double *B);
void kernel_dgead_3_2_lib4(int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgead_3_3_lib4(int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgead_2_0_lib4(int kmax, double alpha, double *A, double *B);
void kernel_dgead_2_3_lib4(int kmax, double alpha, double *A0, int sda, double *B);
void kernel_dgead_1_0_lib4(int kmax, double alpha, double *A, double *B);

// set
void kernel_dgeset_4_lib4(int kmax, double alpha, double *A);
void kernel_dtrset_4_lib4(int kmax, double alpha, double *A);

// traspose
void kernel_dgetr_8_lib4(int tri, int kmax, int kna, double alpha, double *A, int sda, double *C, int sdc);
void kernel_dgetr_4_lib4(int tri, int kmax, int kna, double alpha, double *A, double *C, int sdc);
void kernel_dgetr_3_lib4(int tri, int kmax, int kna, double alpha, double *A, double *C, int sdc);
void kernel_dgetr_2_lib4(int tri, int kmax, int kna, double alpha, double *A, double *C, int sdc);
void kernel_dgetr_1_lib4(int tri, int kmax, int kna, double alpha, double *A, double *C, int sdc);
void kernel_dgetr_4_0_lib4(int m, double *A, int sda, double *B);



// pack
// 12
void kernel_dpack_nn_12_lib4(int kmax, double *A, int lda, double *B, int sdb);
void kernel_dpack_nn_12_vs_lib4(int kmax, double *A, int lda, double *B, int sdb, int m1);
void kernel_dpack_tt_12_lib4(int kmax, double *A, int lda, double *B, int sdb);
// 8
void kernel_dpack_nn_8_lib4(int kmax, double *A, int lda, double *B, int sdb);
void kernel_dpack_nn_8_vs_lib4(int kmax, double *A, int lda, double *B, int sdb, int m1);
void kernel_dpack_tt_8_lib4(int kmax, double *A, int lda, double *B, int sdb);
// 4
void kernel_dpack_nn_4_lib4(int kmax, double *A, int lda, double *B);
void kernel_dpack_nn_4_vs_lib4(int kmax, double *A, int lda, double *B, int m1);
void kernel_dpack_tn_4_lib4(int kmax, double *A, int lda, double *B);
void kernel_dpack_tn_4_vs_lib4(int kmax, double *A, int lda, double *B, int m1);
void kernel_dpack_tt_4_lib4(int kmax, double *A, int lda, double *B, int sdb);
void kernel_dpack_tt_4_vs_lib4(int kmax, double *A, int lda, double *B, int sdb, int m1);
// unpack
// 12
void kernel_dunpack_nn_12_lib4(int kmax, double *A, int sda, double *B, int ldb);
void kernel_dunpack_nn_12_vs_lib4(int kmax, double *A, int sda, double *B, int ldb, int m1);
void kernel_dunpack_tt_12_lib4(int kmax, double *A, int sda, double *B, int ldb);
// 8
void kernel_dunpack_nn_8_lib4(int kmax, double *A, int sda, double *B, int ldb);
void kernel_dunpack_nn_8_vs_lib4(int kmax, double *A, int sda, double *B, int ldb, int m1);
void kernel_dunpack_tt_8_lib4(int kmax, double *A, int sda, double *B, int ldb);
// 4
void kernel_dunpack_nn_4_lib4(int kmax, double *A, double *B, int ldb);
void kernel_dunpack_nn_4_vs_lib4(int kmax, double *A, double *B, int ldb, int m1);
void kernel_dunpack_nt_4_lib4(int kmax, double *A, double *B, int ldb);
void kernel_dunpack_nt_4_vs_lib4(int kmax, double *A, double *B, int ldb, int m1);
void kernel_dunpack_tt_4_lib4(int kmax, double *A, int sda, double *B, int ldb);

// panel copy
// 12
void kernel_dpacp_nn_12_lib4(int kmax, int offsetA, double *A, int sda, double *B, int sdb);
void kernel_dpacp_nn_12_vs_lib4(int kmax, int offsetA, double *A, int sda, double *B, int sdb, int m1);
// 8
void kernel_dpacp_nn_8_lib4(int kmax, int offsetA, double *A, int sda, double *B, int sdb);
void kernel_dpacp_nn_8_vs_lib4(int kmax, int offsetA, double *A, int sda, double *B, int sdb, int m1);
// 4
void kernel_dpacp_nt_4_lib4(int kmax, double *A, int offsetB, double *B, int sdb);
void kernel_dpacp_tn_4_lib4(int kmax, int offsetA, double *A, int sda, double *B);
void kernel_dpacp_nn_4_lib4(int kmax, int offsetA, double *A, int sda, double *B);
void kernel_dpacp_nn_4_vs_lib4(int kmax, int offsetA, double *A, int sda, double *B, int m1);



/************************************************
* BLAS API kernels
************************************************/

#ifdef BLAS_API

// A panel-major bs=4; B, C, D column-major
// 12x4
void kernel_dgemm_nn_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_rl_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_one_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_rl_one_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_12x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_12x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrsm_nn_ll_one_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nn_ll_one_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_rl_inv_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_rl_inv_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_rl_one_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nn_rl_one_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nt_rl_one_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_ru_inv_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_ru_inv_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_ru_one_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nn_ru_one_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_ru_inv_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_12x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nt_ru_one_12x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
// 4x12
void kernel_dgemm_nn_4x12_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_4x12_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_4x12_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x12_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 8x4
void kernel_dgemm_nn_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_rl_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_one_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_rl_one_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_8x4_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_8x4_vs_lib4ccc(int kmax, double *alpha, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrsm_nn_ll_one_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nn_ll_one_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_rl_inv_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_rl_inv_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_rl_one_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nn_rl_one_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nt_rl_one_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_ru_inv_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_ru_inv_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_ru_one_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nn_ru_one_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_ru_inv_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_8x4_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nt_ru_one_8x4_vs_lib4cccc(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
// 4x8
void kernel_dgemm_nn_4x8_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_4x8_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_4x8_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x8_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 4x4
void kernel_dgemm_nn_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_rl_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nn_rl_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_one_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_rl_one_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_rl_one_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nn_rl_one_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_ru_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_ru_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_ru_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nn_ru_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_ru_one_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nn_ru_one_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nn_ru_one_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nn_ru_one_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_rl_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_ru_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_4x4_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_4x4_vs_lib4ccc(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_4x4_tran_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_4x4_tran_vs_lib4c4c(int kmax, double *alpha, double *A, double *B, int ldb, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrsm_nn_ll_one_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nn_ll_one_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_rl_inv_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_rl_inv_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_rl_one_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nn_rl_one_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nt_rl_one_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_ru_inv_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_ru_inv_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_ru_one_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nn_ru_one_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_ru_inv_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_4x4_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde);
void kernel_dtrsm_nt_ru_one_4x4_vs_lib4cccc(int kmax, double *A, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, double *E, int lde, int m1, int n1);

// B panel-major bs=4; A, C, D column-major
// 12x4
void kernel_dgemm_nt_12x4_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_12x4_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_12x4_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_12x4_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 4x12
void kernel_dgemm_nt_4x12_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x12_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_4x12_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_4x12_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 8x4
void kernel_dgemm_nt_8x4_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_8x4_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_8x4_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_8x4_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 4x8
void kernel_dgemm_nt_4x8_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x8_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_4x8_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_4x8_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 4x4
void kernel_dgemm_nt_4x4_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x4_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_4x4_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_4x4_vs_libc4cc(int kmax, double *alpha, double *A, int lda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);

// A, B panel-major bs=4; C, D column-major
// 12x4
void kernel_dgemm_nt_12x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_12x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dsyrk_nt_l_12x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_l_12x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dsyrk_nt_u_12x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_u_12x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_12x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_12x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_12x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_12x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_12x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_12x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_12x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_12x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_12x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE);
void kernel_dtrsm_nt_rl_inv_12x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_12x4_lib44ccc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_12x4_vs_lib44ccc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_12x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nt_rl_one_12x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_12x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE);
void kernel_dtrsm_nt_ru_inv_12x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_12x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nt_ru_one_12x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, int m1, int n1);
void kernel_dpotrf_nt_l_12x4_lib44cc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *dD);
void kernel_dpotrf_nt_l_12x4_vs_lib44cc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *dD, int m1, int n1);
// 8x8
void kernel_dsyrk_nt_l_8x8_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_l_8x8_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dsyrk_nt_u_8x8_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_u_8x8_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, int sdb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dpotrf_nt_l_8x8_lib44cc(int kmax, double *A, int sda, double *B, int sdb, double *C, int ldc, double *D, int ldd, double *dD);
void kernel_dpotrf_nt_l_8x8_vs_lib44cc(int kmax, double *A, int sda, double *B, int sdb, double *C, int ldc, double *D, int ldd, double *dD, int m1, int n1);
// 8x4
void kernel_dgemm_nt_8x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_8x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dsyrk_nt_l_8x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_l_8x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dsyrk_nt_u_8x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_u_8x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_8x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_8x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_8x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_8x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_8x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_8x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_8x4_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_8x4_vs_lib44cc(int kmax, double *alpha, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_8x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE);
void kernel_dtrsm_nt_rl_inv_8x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_8x4_lib44ccc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_8x4_vs_lib44ccc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_8x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nt_rl_one_8x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_8x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE);
void kernel_dtrsm_nt_ru_inv_8x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_8x4_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nt_ru_one_8x4_vs_lib44cc4(int kmax, double *A, int sda, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, int m1, int n1);
void kernel_dpotrf_nt_l_8x4_lib44cc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *dD);
void kernel_dpotrf_nt_l_8x4_vs_lib44cc(int kmax, double *A, int sda, double *B, double *C, int ldc, double *D, int ldd, double *dD, int m1, int n1);
// 4x4
void kernel_dgemm_nt_4x4_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x4_vs_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dsyrk_nt_l_4x4_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_l_4x4_vs_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dsyrk_nt_u_4x4_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dsyrk_nt_u_4x4_vs_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_4x4_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_4x4_vs_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_4x4_tran_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_rl_4x4_tran_vs_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_4x4_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_4x4_vs_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_rl_one_4x4_tran_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_rl_one_4x4_tran_vs_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_4x4_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_4x4_vs_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_4x4_tran_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_ru_4x4_tran_vs_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_4x4_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_4x4_vs_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dtrmm_nt_ru_one_4x4_tran_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd);
void kernel_dtrmm_nt_ru_one_4x4_tran_vs_lib444c(int kmax, double *alpha, double *A, double *B, double *beta, double *C, double *D, int ldd, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_4x4_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE);
void kernel_dtrsm_nt_rl_inv_4x4_vs_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_4x4_lib44ccc(int kmax, double *A, double *B, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_4x4_vs_lib44ccc(int kmax, double *A, double *B, double *C, int ldc, double *D, int ldd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_4x4_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nt_rl_one_4x4_vs_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_4x4_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE);
void kernel_dtrsm_nt_ru_inv_4x4_vs_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_4x4_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E);
void kernel_dtrsm_nt_ru_one_4x4_vs_lib44cc4(int kmax, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd, double *E, int m1, int n1);
void kernel_dpotrf_nt_l_4x4_lib44cc(int kmax, double *A, double *B, double *C, int ldc, double *D, int ldd, double *dD);
void kernel_dpotrf_nt_l_4x4_vs_lib44cc(int kmax, double *A, double *B, double *C, int ldc, double *D, int ldd, double *dD, int m1, int n1);
// 4x2
void kernel_dgemm_nt_4x2_lib44cc(int kmax, double *alpha, double *A, double *B, double *beta, double *C, int ldc, double *D, int ldd);

// A, C, D panel-major; B, E column-major
// TODO merge with above
// 12x4
void kernel_dtrsm_nn_rl_inv_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_rl_inv_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_rl_one_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nn_rl_one_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_ru_inv_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_ru_inv_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_ru_one_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nn_ru_one_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nt_rl_one_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_ru_inv_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_12x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nt_ru_one_12x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
// 8x4
void kernel_dtrsm_nn_rl_inv_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_rl_inv_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_rl_one_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nn_rl_one_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_ru_inv_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nn_ru_inv_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_ru_one_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nn_ru_one_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nt_rl_one_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE);
void kernel_dtrsm_nt_ru_inv_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_8x4_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde);
void kernel_dtrsm_nt_ru_one_8x4_vs_lib4c44c(int kmax, double *A, int sda, double *B, int ldb, double *beta, double *C, int sdc, double *D, int sdd, double *E, int lde, int m1, int n1);
// 4x4
void kernel_dtrsm_nn_rl_inv_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE);
void kernel_dtrsm_nn_rl_inv_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_rl_one_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde);
void kernel_dtrsm_nn_rl_one_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nn_ru_inv_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE);
void kernel_dtrsm_nn_ru_inv_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nn_ru_one_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde);
void kernel_dtrsm_nn_ru_one_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_rl_inv_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE);
void kernel_dtrsm_nt_rl_inv_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_rl_one_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde);
void kernel_dtrsm_nt_rl_one_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, int m1, int n1);
void kernel_dtrsm_nt_ru_inv_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE);
void kernel_dtrsm_nt_ru_inv_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, double *dE, int m1, int n1);
void kernel_dtrsm_nt_ru_one_4x4_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde);
void kernel_dtrsm_nt_ru_one_4x4_vs_lib4c44c(int kmax, double *A, double *B, int ldb, double *beta, double *C, double *D, double *E, int lde, int m1, int n1);

// A, B, C, D column-major
// 12x4
void kernel_dgemm_nn_12x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_12x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_12x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_12x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_12x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_12x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 4x12
void kernel_dgemm_nn_4x12_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_4x12_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_4x12_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x12_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_4x12_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_4x12_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 8x4
void kernel_dgemm_nn_8x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_8x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_8x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_8x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_8x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_8x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 4x8
void kernel_dgemm_nn_4x8_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_4x8_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_4x8_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x8_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_4x8_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_4x8_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
// 4x4
void kernel_dgemm_nn_4x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nn_4x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_nt_4x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_nt_4x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);
void kernel_dgemm_tt_4x4_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd);
void kernel_dgemm_tt_4x4_vs_libcccc(int kmax, double *alpha, double *A, int lda, double *B, int ldb, double *beta, double *C, int ldc, double *D, int ldd, int m1, int n1);

// A column-major
// 12
void kernel_dgetrf_pivot_12_lib(int m, double *pA, int lda, double *inv_diag_A, int* ipiv);
void kernel_dgetrf_pivot_12_vs_lib(int m, double *pA, int lda, double *inv_diag_A, int* ipiv, int n);
// 8
void kernel_dgetrf_pivot_8_lib(int m, double *pA, int lda, double *inv_diag_A, int* ipiv);
void kernel_dgetrf_pivot_8_vs_lib(int m, double *pA, int lda, double *inv_diag_A, int* ipiv, int n);
// 4
void kernel_dgetrf_pivot_4_lib(int m, double *pA, int lda, double *inv_diag_A, int* ipiv);
void kernel_dgetrf_pivot_4_vs_lib(int m, double *pA, int lda, double *inv_diag_A, int* ipiv, int n);

// vector
void kernel_drowsw_lib(int kmax, double *pA, int lda, double *pC, int ldc);

#endif // BLAS_API



#ifdef __cplusplus
}
#endif

#endif  // BLASFEO_D_KERNEL_H_
