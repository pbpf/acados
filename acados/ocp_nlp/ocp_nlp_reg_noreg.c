/*
 *    This file is part of acados.
 *
 *    acados is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    acados is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with acados; if not, write to the Free Software Foundation,
 *    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "acados/ocp_nlp/ocp_nlp_reg_noreg.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "acados/ocp_nlp/ocp_nlp_reg_common.h"
#include "acados/utils/math.h"

#include "blasfeo/include/blasfeo_d_aux.h"
#include "blasfeo/include/blasfeo_d_blas.h"



/************************************************
 * opts
 ************************************************/

int ocp_nlp_reg_noreg_opts_calculate_size(void)
{
    return sizeof(ocp_nlp_reg_noreg_opts);
}



void *ocp_nlp_reg_noreg_opts_assign(void *raw_memory)
{
    return raw_memory;
}



void ocp_nlp_reg_noreg_opts_initialize_default(void *config_, ocp_nlp_reg_dims *dims, void *opts_)
{

    return;
}



void ocp_nlp_reg_noreg_opts_set(void *config_, ocp_nlp_reg_dims *dims, void *opts_, char *field, void* value)
{

    printf("\nerror: field %s not available in ocp_nlp_reg_noreg_opts_set\n", field);
    exit(1);

}



/************************************************
 * memory
 ************************************************/

int ocp_nlp_reg_noreg_memory_calculate_size(void *config_, ocp_nlp_reg_dims *dims, void *opts_)
{
    int size = 0;

    return size;
}



void *ocp_nlp_reg_noreg_memory_assign(void *config_, ocp_nlp_reg_dims *dims, void *opts_, void *raw_memory)
{
    return raw_memory;
}



void ocp_nlp_reg_noreg_memory_set_RSQrq_ptr(ocp_nlp_reg_dims *dims, struct blasfeo_dmat *RSQrq, void *memory_)
{
    return;
}



void ocp_nlp_reg_noreg_memory_set_rq_ptr(ocp_nlp_reg_dims *dims, struct blasfeo_dvec *rq, void *memory_)
{
    return;
}



void ocp_nlp_reg_noreg_memory_set_BAbt_ptr(ocp_nlp_reg_dims *dims, struct blasfeo_dmat *BAbt, void *memory_)
{
    return;
}



void ocp_nlp_reg_noreg_memory_set_b_ptr(ocp_nlp_reg_dims *dims, struct blasfeo_dvec *b, void *memory_)
{
    return;
}



void ocp_nlp_reg_noreg_memory_set_ux_ptr(ocp_nlp_reg_dims *dims, struct blasfeo_dvec *ux, void *memory_)
{
    return;
}



void ocp_nlp_reg_noreg_memory_set_pi_ptr(ocp_nlp_reg_dims *dims, struct blasfeo_dvec *pi, void *memory_)
{
    return;
}



void ocp_nlp_reg_noreg_memory_set(void *config_, ocp_nlp_reg_dims *dims, void *memory_, char *field, void *value)
{

    printf("\nerror: field %s not available in ocp_nlp_reg_noreg_set\n", field);
    exit(1);

    return;
}



/************************************************
 * functions
 ************************************************/

void ocp_nlp_reg_noreg_regularize_hessian(void *config, ocp_nlp_reg_dims *dims, void *opts_, void *mem_)
{
    return;
}


void ocp_nlp_reg_noreg_correct_dual_sol(void *config, ocp_nlp_reg_dims *dims, void *opts_, void *mem_)
{
    return;
}



void ocp_nlp_reg_noreg_config_initialize_default(ocp_nlp_reg_config *config)
{
    // dims
    config->dims_calculate_size = &ocp_nlp_reg_dims_calculate_size;
    config->dims_assign = &ocp_nlp_reg_dims_assign;
    config->dims_set = &ocp_nlp_reg_dims_set;
    // opts
    config->opts_calculate_size = &ocp_nlp_reg_noreg_opts_calculate_size;
    config->opts_assign = &ocp_nlp_reg_noreg_opts_assign;
    config->opts_initialize_default = &ocp_nlp_reg_noreg_opts_initialize_default;
    config->opts_set = &ocp_nlp_reg_noreg_opts_set;
    // memory
    config->memory_calculate_size = &ocp_nlp_reg_noreg_memory_calculate_size;
    config->memory_assign = &ocp_nlp_reg_noreg_memory_assign;
    config->memory_set = &ocp_nlp_reg_noreg_memory_set;
    config->memory_set_RSQrq_ptr = &ocp_nlp_reg_noreg_memory_set_RSQrq_ptr;
    config->memory_set_rq_ptr = &ocp_nlp_reg_noreg_memory_set_rq_ptr;
    config->memory_set_BAbt_ptr = &ocp_nlp_reg_noreg_memory_set_BAbt_ptr;
    config->memory_set_b_ptr = &ocp_nlp_reg_noreg_memory_set_b_ptr;
    config->memory_set_ux_ptr = &ocp_nlp_reg_noreg_memory_set_ux_ptr;
    config->memory_set_pi_ptr = &ocp_nlp_reg_noreg_memory_set_pi_ptr;
    // functions
    config->regularize_hessian = &ocp_nlp_reg_noreg_regularize_hessian;
    config->correct_dual_sol = &ocp_nlp_reg_noreg_correct_dual_sol;
}

