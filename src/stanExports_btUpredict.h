// Generated by rstantools.  Do not edit by hand.

/*
    bpc is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    bpc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with bpc.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.21.0
#include <stan/model/model_header.hpp>
namespace model_btUpredict_namespace {
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;
static int current_statement_begin__;
stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_btUpredict");
    reader.add_event(40, 38, "end", "model_btUpredict");
    return reader;
}
#include <stan_meta_header.hpp>
class model_btUpredict
  : public stan::model::model_base_crtp<model_btUpredict> {
private:
        int N_newdata;
        int N_players;
        std::vector<int> player0_indexes;
        std::vector<int> player1_indexes;
        int N_U;
        std::vector<int> U_indexes;
public:
    model_btUpredict(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, 0, pstream__);
    }
    model_btUpredict(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, random_seed__, pstream__);
    }
    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;
        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning
        current_statement_begin__ = -1;
        static const char* function__ = "model_btUpredict_namespace::model_btUpredict";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        try {
            // initialize data block variables from context__
            current_statement_begin__ = 8;
            context__.validate_dims("data initialization", "N_newdata", "int", context__.to_vec());
            N_newdata = int(0);
            vals_i__ = context__.vals_i("N_newdata");
            pos__ = 0;
            N_newdata = vals_i__[pos__++];
            check_greater_or_equal(function__, "N_newdata", N_newdata, 1);
            current_statement_begin__ = 9;
            context__.validate_dims("data initialization", "N_players", "int", context__.to_vec());
            N_players = int(0);
            vals_i__ = context__.vals_i("N_players");
            pos__ = 0;
            N_players = vals_i__[pos__++];
            check_greater_or_equal(function__, "N_players", N_players, 1);
            current_statement_begin__ = 10;
            validate_non_negative_index("player0_indexes", "N_newdata", N_newdata);
            context__.validate_dims("data initialization", "player0_indexes", "int", context__.to_vec(N_newdata));
            player0_indexes = std::vector<int>(N_newdata, int(0));
            vals_i__ = context__.vals_i("player0_indexes");
            pos__ = 0;
            size_t player0_indexes_k_0_max__ = N_newdata;
            for (size_t k_0__ = 0; k_0__ < player0_indexes_k_0_max__; ++k_0__) {
                player0_indexes[k_0__] = vals_i__[pos__++];
            }
            size_t player0_indexes_i_0_max__ = N_newdata;
            for (size_t i_0__ = 0; i_0__ < player0_indexes_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "player0_indexes[i_0__]", player0_indexes[i_0__], 1);
            }
            current_statement_begin__ = 11;
            validate_non_negative_index("player1_indexes", "N_newdata", N_newdata);
            context__.validate_dims("data initialization", "player1_indexes", "int", context__.to_vec(N_newdata));
            player1_indexes = std::vector<int>(N_newdata, int(0));
            vals_i__ = context__.vals_i("player1_indexes");
            pos__ = 0;
            size_t player1_indexes_k_0_max__ = N_newdata;
            for (size_t k_0__ = 0; k_0__ < player1_indexes_k_0_max__; ++k_0__) {
                player1_indexes[k_0__] = vals_i__[pos__++];
            }
            size_t player1_indexes_i_0_max__ = N_newdata;
            for (size_t i_0__ = 0; i_0__ < player1_indexes_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "player1_indexes[i_0__]", player1_indexes[i_0__], 1);
            }
            current_statement_begin__ = 12;
            context__.validate_dims("data initialization", "N_U", "int", context__.to_vec());
            N_U = int(0);
            vals_i__ = context__.vals_i("N_U");
            pos__ = 0;
            N_U = vals_i__[pos__++];
            check_greater_or_equal(function__, "N_U", N_U, 1);
            current_statement_begin__ = 13;
            validate_non_negative_index("U_indexes", "N_newdata", N_newdata);
            context__.validate_dims("data initialization", "U_indexes", "int", context__.to_vec(N_newdata));
            U_indexes = std::vector<int>(N_newdata, int(0));
            vals_i__ = context__.vals_i("U_indexes");
            pos__ = 0;
            size_t U_indexes_k_0_max__ = N_newdata;
            for (size_t k_0__ = 0; k_0__ < U_indexes_k_0_max__; ++k_0__) {
                U_indexes[k_0__] = vals_i__[pos__++];
            }
            // initialize transformed data variables
            // execute transformed data statements
            // validate transformed data
            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 17;
            validate_non_negative_index("lambda", "N_players", N_players);
            num_params_r__ += (1 * N_players);
            current_statement_begin__ = 18;
            num_params_r__ += 1;
            current_statement_begin__ = 19;
            validate_non_negative_index("U", "N_players", N_players);
            validate_non_negative_index("U", "N_U", N_U);
            num_params_r__ += (N_players * N_U);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    ~model_btUpredict() { }
    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;
        current_statement_begin__ = 17;
        if (!(context__.contains_r("lambda")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable lambda missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("lambda");
        pos__ = 0U;
        validate_non_negative_index("lambda", "N_players", N_players);
        context__.validate_dims("parameter initialization", "lambda", "double", context__.to_vec(N_players));
        std::vector<double> lambda(N_players, double(0));
        size_t lambda_k_0_max__ = N_players;
        for (size_t k_0__ = 0; k_0__ < lambda_k_0_max__; ++k_0__) {
            lambda[k_0__] = vals_r__[pos__++];
        }
        size_t lambda_i_0_max__ = N_players;
        for (size_t i_0__ = 0; i_0__ < lambda_i_0_max__; ++i_0__) {
            try {
                writer__.scalar_unconstrain(lambda[i_0__]);
            } catch (const std::exception& e) {
                stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable lambda: ") + e.what()), current_statement_begin__, prog_reader__());
            }
        }
        current_statement_begin__ = 18;
        if (!(context__.contains_r("U_std")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable U_std missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("U_std");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "U_std", "double", context__.to_vec());
        double U_std(0);
        U_std = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(U_std);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable U_std: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        current_statement_begin__ = 19;
        if (!(context__.contains_r("U")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable U missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("U");
        pos__ = 0U;
        validate_non_negative_index("U", "N_players", N_players);
        validate_non_negative_index("U", "N_U", N_U);
        context__.validate_dims("parameter initialization", "U", "matrix_d", context__.to_vec(N_players,N_U));
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> U(N_players, N_U);
        size_t U_j_2_max__ = N_U;
        size_t U_j_1_max__ = N_players;
        for (size_t j_2__ = 0; j_2__ < U_j_2_max__; ++j_2__) {
            for (size_t j_1__ = 0; j_1__ < U_j_1_max__; ++j_1__) {
                U(j_1__, j_2__) = vals_r__[pos__++];
            }
        }
        try {
            writer__.matrix_unconstrain(U);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable U: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }
    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }
    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {
        typedef T__ local_scalar_t__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning
        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
            // model parameters
            current_statement_begin__ = 17;
            std::vector<local_scalar_t__> lambda;
            size_t lambda_d_0_max__ = N_players;
            lambda.reserve(lambda_d_0_max__);
            for (size_t d_0__ = 0; d_0__ < lambda_d_0_max__; ++d_0__) {
                if (jacobian__)
                    lambda.push_back(in__.scalar_constrain(lp__));
                else
                    lambda.push_back(in__.scalar_constrain());
            }
            current_statement_begin__ = 18;
            local_scalar_t__ U_std;
            (void) U_std;  // dummy to suppress unused var warning
            if (jacobian__)
                U_std = in__.scalar_constrain(lp__);
            else
                U_std = in__.scalar_constrain();
            current_statement_begin__ = 19;
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, Eigen::Dynamic> U;
            (void) U;  // dummy to suppress unused var warning
            if (jacobian__)
                U = in__.matrix_constrain(N_players, N_U, lp__);
            else
                U = in__.matrix_constrain(N_players, N_U);
            // model body
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
        lp_accum__.add(lp__);
        return lp_accum__.sum();
    } // log_prob()
    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }
    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("lambda");
        names__.push_back("U_std");
        names__.push_back("U");
        names__.push_back("y_pred");
    }
    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dims__.push_back(N_players);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(N_players);
        dims__.push_back(N_U);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(N_newdata);
        dimss__.push_back(dims__);
    }
    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;
        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_btUpredict_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        std::vector<double> lambda;
        size_t lambda_d_0_max__ = N_players;
        lambda.reserve(lambda_d_0_max__);
        for (size_t d_0__ = 0; d_0__ < lambda_d_0_max__; ++d_0__) {
            lambda.push_back(in__.scalar_constrain());
        }
        size_t lambda_k_0_max__ = N_players;
        for (size_t k_0__ = 0; k_0__ < lambda_k_0_max__; ++k_0__) {
            vars__.push_back(lambda[k_0__]);
        }
        double U_std = in__.scalar_constrain();
        vars__.push_back(U_std);
        Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> U = in__.matrix_constrain(N_players, N_U);
        size_t U_j_2_max__ = N_U;
        size_t U_j_1_max__ = N_players;
        for (size_t j_2__ = 0; j_2__ < U_j_2_max__; ++j_2__) {
            for (size_t j_1__ = 0; j_1__ < U_j_1_max__; ++j_1__) {
                vars__.push_back(U(j_1__, j_2__));
            }
        }
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        if (!include_tparams__ && !include_gqs__) return;
        try {
            if (!include_gqs__ && !include_tparams__) return;
            if (!include_gqs__) return;
            // declare and define generated quantities
            current_statement_begin__ = 24;
            validate_non_negative_index("y_pred", "N_newdata", N_newdata);
            Eigen::Matrix<double, Eigen::Dynamic, 1> y_pred(N_newdata);
            stan::math::initialize(y_pred, DUMMY_VAR__);
            stan::math::fill(y_pred, DUMMY_VAR__);
            // generated quantities statements
            current_statement_begin__ = 25;
            for (int i = 1; i <= N_newdata; ++i) {
                {
                current_statement_begin__ = 26;
                local_scalar_t__ p1_win(DUMMY_VAR__);
                (void) p1_win;  // dummy to suppress unused var warning
                stan::math::initialize(p1_win, DUMMY_VAR__);
                stan::math::fill(p1_win, DUMMY_VAR__);
                current_statement_begin__ = 27;
                local_scalar_t__ p1(DUMMY_VAR__);
                (void) p1;  // dummy to suppress unused var warning
                stan::math::initialize(p1, DUMMY_VAR__);
                stan::math::fill(p1, DUMMY_VAR__);
                current_statement_begin__ = 28;
                local_scalar_t__ p0(DUMMY_VAR__);
                (void) p0;  // dummy to suppress unused var warning
                stan::math::initialize(p0, DUMMY_VAR__);
                stan::math::fill(p0, DUMMY_VAR__);
                current_statement_begin__ = 29;
                local_scalar_t__ lambda1(DUMMY_VAR__);
                (void) lambda1;  // dummy to suppress unused var warning
                stan::math::initialize(lambda1, DUMMY_VAR__);
                stan::math::fill(lambda1, DUMMY_VAR__);
                current_statement_begin__ = 30;
                local_scalar_t__ lambda0(DUMMY_VAR__);
                (void) lambda0;  // dummy to suppress unused var warning
                stan::math::initialize(lambda0, DUMMY_VAR__);
                stan::math::fill(lambda0, DUMMY_VAR__);
                current_statement_begin__ = 31;
                stan::math::assign(lambda1, (get_base1(lambda, get_base1(player1_indexes, i, "player1_indexes", 1), "lambda", 1) + (U_std * get_base1(U, get_base1(player1_indexes, i, "player1_indexes", 1), get_base1(U_indexes, i, "U_indexes", 1), "U", 1))));
                current_statement_begin__ = 32;
                stan::math::assign(lambda0, (get_base1(lambda, get_base1(player0_indexes, i, "player0_indexes", 1), "lambda", 1) + (U_std * get_base1(U, get_base1(player0_indexes, i, "player0_indexes", 1), get_base1(U_indexes, i, "U_indexes", 1), "U", 1))));
                current_statement_begin__ = 33;
                stan::math::assign(p1, stan::math::exp(lambda1));
                current_statement_begin__ = 34;
                stan::math::assign(p0, stan::math::exp(lambda0));
                current_statement_begin__ = 35;
                stan::math::assign(p1_win, (p1 / (p0 + p1)));
                current_statement_begin__ = 36;
                stan::model::assign(y_pred, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            bernoulli_rng(p1_win, base_rng__), 
                            "assigning variable y_pred");
                }
            }
            // validate, write generated quantities
            current_statement_begin__ = 24;
            size_t y_pred_j_1_max__ = N_newdata;
            for (size_t j_1__ = 0; j_1__ < y_pred_j_1_max__; ++j_1__) {
                vars__.push_back(y_pred(j_1__));
            }
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }
    std::string model_name() const {
        return "model_btUpredict";
    }
    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        size_t lambda_k_0_max__ = N_players;
        for (size_t k_0__ = 0; k_0__ < lambda_k_0_max__; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "lambda" << '.' << k_0__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        param_name_stream__.str(std::string());
        param_name_stream__ << "U_std";
        param_names__.push_back(param_name_stream__.str());
        size_t U_j_2_max__ = N_U;
        size_t U_j_1_max__ = N_players;
        for (size_t j_2__ = 0; j_2__ < U_j_2_max__; ++j_2__) {
            for (size_t j_1__ = 0; j_1__ < U_j_1_max__; ++j_1__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "U" << '.' << j_1__ + 1 << '.' << j_2__ + 1;
                param_names__.push_back(param_name_stream__.str());
            }
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
        }
        if (!include_gqs__) return;
        size_t y_pred_j_1_max__ = N_newdata;
        for (size_t j_1__ = 0; j_1__ < y_pred_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "y_pred" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
    }
    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        size_t lambda_k_0_max__ = N_players;
        for (size_t k_0__ = 0; k_0__ < lambda_k_0_max__; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "lambda" << '.' << k_0__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        param_name_stream__.str(std::string());
        param_name_stream__ << "U_std";
        param_names__.push_back(param_name_stream__.str());
        size_t U_j_2_max__ = N_U;
        size_t U_j_1_max__ = N_players;
        for (size_t j_2__ = 0; j_2__ < U_j_2_max__; ++j_2__) {
            for (size_t j_1__ = 0; j_1__ < U_j_1_max__; ++j_1__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "U" << '.' << j_1__ + 1 << '.' << j_2__ + 1;
                param_names__.push_back(param_name_stream__.str());
            }
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
        }
        if (!include_gqs__) return;
        size_t y_pred_j_1_max__ = N_newdata;
        for (size_t j_1__ = 0; j_1__ < y_pred_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "y_pred" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
    }
}; // model
}  // namespace
typedef model_btUpredict_namespace::model_btUpredict stan_model;
#ifndef USING_R
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
#endif
#endif
