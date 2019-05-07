/*!
 * @copyright
 * Copyright (c) 2015-2017 Intel Corporation
 *
 * @copyright
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * @copyright
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * @copyright
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *
 * @file trans_info.hpp
 * @brief Trans info
 * */
#pragma once
#include "agent-framework/module/utils/utils.hpp"
#include <json/json.h>
#include <string>

namespace agent_framework {
namespace model {
namespace attribute {

/*! Neighbor info */
class TransInfo {
public:

    explicit TransInfo();

    TransInfo(const std::string& switch_identifier,
                 const std::string& port_identifier,
                 const std::string& cable_id):
                 m_switch_identifier(switch_identifier),
                 m_port_identifier(port_identifier),
                 m_cable_id(cable_id)
                 {}

    ~TransInfo();

    /*! Enable copy */
    TransInfo(const TransInfo&) = default;
    TransInfo& operator=(const TransInfo&) = default;
    TransInfo(TransInfo&&) = default;
    TransInfo& operator=(TransInfo&&) = default;

    /*!
     * @brief Set switch identifier
     * @param[in] switch_identifier Switch identifier
     * */
    void set_switch_identifier(const OptionalField<std::string>& switch_identifier) {
        m_switch_identifier = switch_identifier;
    }

    /*!
     * Gets switch identifier.
     * */
    const OptionalField<std::string>& get_switch_identifier() const {
        return m_switch_identifier;
    }

    /*!
     * @brief Set port identifier
     * @param[in] port_identifier Port identifier
     * */
    void set_port_identifier(const OptionalField<std::string>& port_identifier) {
        m_port_identifier = port_identifier;
    }

    /*!
     * Gets port identifier.
     * */
    const OptionalField<std::string>& get_port_identifier() const {
        return m_port_identifier;
    }

    /*!
     * @brief Set cable id
     * @param[in] cable_id Cable ID
     * */
    void set_cable_id(const OptionalField<std::string>& cable_id) {
        m_cable_id = cable_id;
    }

    /*!
     * Gets cable ID.
     * */
    const OptionalField<std::string>& get_cable_id() const {
        return m_cable_id;
    }


    /*!
     * Gets SFP Vendor Name
     * */
    const OptionalField<std::string>& get_spf_vendor_name() const 
    {
        return m_sfp_vendor_name;
    }

    /*!
     * @brief Set SFP Vendor Name
     * @param[in] SFP Vendor Name
     * */
    void set_spf_vendor_name(const OptionalField<std::string>& sfp_vendor_name) 
    {
        m_sfp_vendor_name = sfp_vendor_name;
    }	

    /*!
     * Gets SFP Part Number
     * */
    const OptionalField<std::string>& get_part_number() const 
    {
        return m_part_number;
    }

    /*!
     * @brief SFP Part Number
     * @param[in] SFP Part Number
     * */
    void set_part_number(const OptionalField<std::string>& part_number) 
    {
        m_part_number = part_number;
    }	

    /*!
     * Gets SFP Serial Number
     * */
    const OptionalField<std::string>& get_serial_number() const 
    {
        return m_serial_number;
    }
	
    /*!
     * @brief  SFP Serial Number
     * @param[in]  SFP Serial Number
     * */
    void set_serial_number(const OptionalField<std::string>& serial_number) 
    {
        m_serial_number = serial_number;
    }	

    /*!
     * Gets SFP manufacture date
     * */
    const OptionalField<std::string>& get_manufacture_date() const 
    {
        return m_manufacture_date;
    }

    /*!
     * @brief  SFP manufacture date
     * @param[in]  SFP manufacture date
     * */
    void set_manufacture_date(const OptionalField<std::string>& manufacture_date) 
    {
        m_manufacture_date = manufacture_date;
    }	

    /*!
     * Gets SFP temperature reading
     * */
    const OptionalField<std::int32_t>& get_temp_reading() const 
    {
        return m_temperature_reading;
    }

    /*!
     * @brief  set SFP temperature reading
     * @param[in]  SFP temperature reading
     * */
    void set_temp_reading(const OptionalField<std::int32_t>& temperature_reading) 
    {
        m_temperature_reading = temperature_reading;
    }	

    /*!
     * Gets SFP temperature upper threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_temp_upper_th_fatal() const 
    {
        return m_temperature_upper_threshold_fatal;
    }

    /*!
     * @brief  set SFP temperature upper threahold fatal value
     * @param[in]  SFP temperature upper threahold fatal value
     * */
    void set_temp_upper_th_fatal(const OptionalField<std::int32_t>& temperature_upper_threshold_fatal) 
    {
        m_temperature_upper_threshold_fatal = temperature_upper_threshold_fatal;
    }	

    /*!
     * Gets SFP temperature upper threahold critical value
     * */
    const OptionalField<std::int32_t>& get_temp_upper_th_critical() const 
    {
        return m_temperature_upper_threshold_critical;
    }

    /*!
     * @brief  set SFP temperature upper threahold critical value
     * @param[in]  SFP temperature upper threahold critical value
     * */
    void set_temp_upper_th_critical(const OptionalField<std::int32_t>& temperature_upper_threshold_critical) 
    {
        m_temperature_upper_threshold_critical = temperature_upper_threshold_critical;
    }	

    /*!
     * Gets SFP temperature upper threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_temp_upper_th_non_critical() const 
    {
        return m_temperature_upper_threshold_non_critical;
    }

    /*!
     * @brief  set SFP temperature upper threahold non critical value
     * @param[in] SFP temperature upper threahold non critical value
     * */
    void set_temp_upper_th_non_critical(const OptionalField<std::int32_t>& temperature_upper_threshold_non_critical) 
    {
        m_temperature_upper_threshold_non_critical = temperature_upper_threshold_non_critical;
    }		

    /*!
     * Gets SFP temperature lower threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_temp_lower_th_fatal() const 
    {
        return m_temperature_lower_threshold_fatal;
    }

    /*!
     * @brief  set SFP temperature lower threahold fatal value
     * @param[in] SFP temperature lower threahold fatal value
     * */
    void set_temp_lower_th_fatal(const OptionalField<std::int32_t>& temperature_lower_threshold_fatal) 
    {
        m_temperature_lower_threshold_fatal = temperature_lower_threshold_fatal;
    }		

    /*!
     * Gets SFP temperature lower threahold critical value
     * */
    const OptionalField<std::int32_t>& get_temp_lower_th_critical() const 
    {
        return m_temperature_lower_threshold_critical;
    }

    /*!
     * @brief  set SFP temperature lower threahold critical value
     * @param[in] SFP temperature lower threahold critical value
     * */
    void set_temp_lower_th_critical(const OptionalField<std::int32_t>& temperature_lower_threshold_critical) 
    {
        m_temperature_lower_threshold_critical = temperature_lower_threshold_critical;
    }		


    /*!
     * Gets SFP temperature lower threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_temp_lower_th_non_critical() const 
    {
        return m_temperature_lower_threshold_non_critical;
    }

    /*!
     * @brief  set SFP temperature lower threahold non critical value
     * @param[in] SFP temperature lower threahold non critical value
     * */
    void set_temp_lower_th_non_critical(const OptionalField<std::int32_t>& temperature_lower_threshold_non_critical) 
    {
        m_temperature_lower_threshold_non_critical = temperature_lower_threshold_non_critical;
    }		

    /*!
     * Gets SFP bias current reading
     * */
    const OptionalField<std::int32_t>& get_bias_current_reading() const 
    {
        return m_bias_current_reading;
    }

    /*!
     * @brief  set SFP bias current reading
     * @param[in] SFP bias current reading
     * */
    void set_bias_current_reading(const OptionalField<std::int32_t>& bias_current_reading) 
    {
        m_bias_current_reading = bias_current_reading;
    }		

    /*!
     * Gets SFP bias current upper threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_bias_current_upper_th_fatal() const 
    {
        return m_bias_current_upper_threshold_fatal;
    }

    /*!
     * @brief  set SFP bias current upper threahold fatal value
     * @param[in] SFP bias current upper threahold fatal value
     * */
    void set_bias_current_upper_th_fatal(const OptionalField<std::int32_t>& bias_current_upper_threshold_fatal) 
    {
        m_bias_current_upper_threshold_fatal = bias_current_upper_threshold_fatal;
    }	

    /*!
     * Gets SFP bias current upper threahold critical value
     * */
    const OptionalField<std::int32_t>& get_bias_current_upper_th_critical() const 
    {
        return m_bias_current_upper_threshold_critical;
    }

    /*!
     * @brief  set SFP bias current upper threahold critical value
     * @param[in] SFP bias current upper threahold critical value
     * */
    void set_bias_current_upper_th_critical(const OptionalField<std::int32_t>& bias_current_upper_threshold_critical) 
    {
        m_bias_current_upper_threshold_critical = bias_current_upper_threshold_critical;
    }	

    /*!
     * Gets SFP bias current upper threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_bias_current_upper_th_non_critical() const 
    {
        return m_bias_current_upper_threshold_non_critical;
    }

    /*!
     * @brief  set  SFP bias current upper threahold non critical value
     * @param[in] SFP bias current upper threahold non critical value
     * */
    void set_bias_current_upper_th_non_critical(const OptionalField<std::int32_t>& bias_current_upper_threshold_non_critical) 
    {
        m_bias_current_upper_threshold_non_critical = bias_current_upper_threshold_non_critical;
    }	

    /*!
     * Gets SFP bias current lower threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_bias_current_lower_th_fatal() const 
    {
        return m_bias_current_lower_threshold_fatal;
    }


    /*!
     * @brief  set  SFP bias current lower threahold fatal value
     * @param[in]SFP bias current lower threahold fatal value
     * */
    void set_bias_current_lower_th_fatal(const OptionalField<std::int32_t>& bias_current_lower_threshold_fatal) 
    {
        m_bias_current_lower_threshold_fatal = bias_current_lower_threshold_fatal;
    }	


    /*!
     * Gets SFP bias current lower threahold critical value
     * */
    const OptionalField<std::int32_t>& get_bias_current_lower_th_critical() const 
    {
        return m_bias_current_lower_threshold_critical;
    }

    /*!
     * @brief set SFP bias current lower threahold critical value
     * @param[in]SFP bias current lower threahold critical value
     * */
    void set_bias_current_lower_th_critical(const OptionalField<std::int32_t>& bias_current_lower_threshold_critical) 
    {
        m_bias_current_lower_threshold_critical = bias_current_lower_threshold_critical;
    }	

    /*!
     * Gets SFP bias current lower threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_bias_current_lower_th_non_critical() const 
    {
        return m_bias_current_lower_threshold_non_critical;
    }

    /*!
     * @brief set SFP bias current lower threahold non critical value
     * @param[in]SFP bias current lower threahold non critical value
     * */
    void set_bias_current_lower_th_non_critical(const OptionalField<std::int32_t>& bias_current_lower_threshold_non_critical) 
    {
        m_bias_current_lower_threshold_non_critical = bias_current_lower_threshold_non_critical;
    }	

    /*!
     * Gets SFP voltage reading
     * */
    const OptionalField<std::int32_t>& get_voltage_reading() const 
    {
        return m_voltage_reading;
    }

    /*!
     * @brief set SFP voltage reading
     * @param[in]SFP voltage reading
     * */
    void set_voltage_reading(const OptionalField<std::int32_t>& voltage_reading) 
    {
        m_voltage_reading = voltage_reading;
    }	

    /*!
     * Gets SFP voltage upper threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_voltage_upper_th_fatal() const 
    {
        return m_voltage_upper_threshold_fatal;
    }

    /*!
     * @brief set SFP voltage upper threahold fatal value
     * @param[in]SFP voltage upper threahold fatal value
     * */
    void set_voltage_upper_th_fatal(const OptionalField<std::int32_t>& voltage_upper_threshold_fatal) 
    {
        m_voltage_upper_threshold_fatal = voltage_upper_threshold_fatal;
    }	

    /*!
     * Gets SFP voltage upper threahold critical value
     * */
    const OptionalField<std::int32_t>& get_voltage_upper_th_critical() const 
    {
        return m_voltage_upper_threshold_critical;
    }

    /*!
     * @brief set SFP voltage upper threahold critical value
     * @param[in]SFP voltage upper threahold critical value
     * */
    void set_voltage_upper_th_critical(const OptionalField<std::int32_t>& voltage_upper_threshold_critical) 
    {
        m_voltage_upper_threshold_critical = voltage_upper_threshold_critical;
    }	

    /*!
     * Gets SFP voltage upper threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_voltage_upper_th_non_critical() const 
    {
        return m_voltage_upper_threshold_non_critical;
    }

    /*!
     * @brief set SFP voltage upper threahold non critical value
     * @param[in]SFP voltage upper threahold non critical value
     * */
    void set_voltage_upper_th_non_critical(const OptionalField<std::int32_t>& voltage_upper_threshold_non_critical) 
    {
        m_voltage_upper_threshold_non_critical = voltage_upper_threshold_non_critical;
    }	

    /*!
     * Gets SFP voltage lower threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_voltage_lower_th_fatal() const 
    {
        return m_voltage_lower_threshold_fatal;
    }

    /*!
     * @brief set SFP voltage lower threahold fatal value
     * @param[in]SFP voltage lower threahold fatal value
     * */
    void set_voltage_lower_th_fatal(const OptionalField<std::int32_t>& voltage_lower_threshold_fatal) 
    {
        m_voltage_lower_threshold_fatal = voltage_lower_threshold_fatal;
    }	

    /*!
     * Gets SFP voltage lower threahold critical value
     * */
    const OptionalField<std::int32_t>& get_voltage_lower_th_critical() const 
    {
        return m_voltage_lower_threshold_critical;
    }

    /*!
     * @brief set SFP voltage lower threahold critical value
     * @param[in]SFP voltage lower threahold critical value
     * */
    void set_voltage_lower_th_critical(const OptionalField<std::int32_t>& voltage_lower_threshold_critical) 
    {
        m_voltage_lower_threshold_critical = voltage_lower_threshold_critical;
    }	

    /*!
     * Gets SFP voltage lower threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_voltage_lower_th_non_critical() const 
    {
        return m_voltage_lower_threshold_non_critical;
    }

    /*!
     * @brief set SFP voltage lower threahold non critical value
     * @param[in]SFP voltage lower threahold non critical value
     * */
    void set_voltage_lower_th_non_critical(const OptionalField<std::int32_t>& voltage_lower_threshold_non_critical) 
    {
        m_voltage_lower_threshold_non_critical = voltage_lower_threshold_non_critical;
    }	
	
    /*!
     * Gets SFP get tx power reading
     * */
    const OptionalField<std::int32_t>& get_tx_power_reading() const 
    {
        return m_tx_power_reading;
    }

    /*!
     * @brief set SFP get tx power reading
     * @param[in]SFP get tx power reading
     * */
    void set_tx_power_reading(const OptionalField<std::int32_t>& tx_power_reading) 
    {
        m_tx_power_reading = tx_power_reading;
    }	

    /*!
     * Gets SFP tx power upper threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_tx_power_upper_th_fatal() const 
    {
        return m_tx_power_upper_threshold_fatal;
    }

    /*!
     * @brief set SFP tx power upper threahold fatal value
     * @param[in]SFP tx power upper threahold fatal value
     * */
    void set_tx_power_upper_th_fatal(const OptionalField<std::int32_t>& tx_power_upper_threshold_fatal) 
    {
        m_tx_power_upper_threshold_fatal = tx_power_upper_threshold_fatal;
    }	

    /*!
     * Gets SFP tx power upper threahold critical value
     * */
    const OptionalField<std::int32_t>& get_tx_power_upper_th_critical() const 
    {
        return m_tx_power_upper_threshold_critical;
    }

    /*!
     * @brief set SFP tx power upper threahold critical value
     * @param[in]SFP tx power upper threahold critical value
     * */
    void set_tx_power_upper_th_critical(const OptionalField<std::int32_t>& tx_power_upper_threshold_critical) 
    {
        m_tx_power_upper_threshold_critical = tx_power_upper_threshold_critical;
    }	

    /*!
     * Gets SFP tx power upper threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_tx_power_upper_th_non_critical() const 
    {
        return m_tx_power_upper_threshold_non_critical;
    }

    /*!
     * @brief set SFP tx power upper threahold non critical value
     * @param[in]SFP tx power upper threahold non critical value
     * */
    void set_tx_power_upper_th_non_critical(const OptionalField<std::int32_t>& tx_power_upper_threshold_non_critical) 
    {
        m_tx_power_upper_threshold_non_critical = tx_power_upper_threshold_non_critical;
    }	

    /*!
     * Gets SFP tx power lower threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_tx_power_lower_th_fatal() const 
    {
        return m_tx_power_lower_threshold_fatal;
    }

    /*!
     * @brief set SFP tx power lower threahold fatal value
     * @param[in]SFP tx power lower threahold fatal value
     * */
    void set_tx_power_lower_th_fatal(const OptionalField<std::int32_t>& tx_power_lower_threshold_fatal) 
    {
        m_tx_power_lower_threshold_fatal = tx_power_lower_threshold_fatal;
    }	

    /*!
     * Gets SFP tx power lower threahold critical value
     * */
    const OptionalField<std::int32_t>& get_tx_power_lower_th_critical() const 
    {
        return m_tx_power_lower_threshold_critical;
    }

    /*!
     * @brief set SFP tx power lower threahold critical value
     * @param[in]SFP tx power lower threahold critical value
     * */
    void set_tx_power_lower_th_critical(const OptionalField<std::int32_t>& tx_power_lower_threshold_critical) 
    {
        m_tx_power_lower_threshold_critical = tx_power_lower_threshold_critical;
    }	
	
    /*!
     * Gets SFP tx power lower threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_tx_power_lower_th_non_critical() const 
    {
        return m_tx_power_lower_threshold_non_critical;
    }
	
    /*!
     * @brief set SFP tx power lower threahold non critical value
     * @param[in]SFP tx power lower threahold non critical value
     * */
    void set_tx_power_lower_th_non_critical(const OptionalField<std::int32_t>& tx_power_lower_threshold_non_critical) 
    {
        m_tx_power_lower_threshold_non_critical = tx_power_lower_threshold_non_critical;
    }	

    /*!
     * Gets SFP get rx power reading
     * */
    const OptionalField<std::int32_t>& get_rx_power_reading() const 
    {
        return m_rx_power_reading;
    }

    /*!
     * @brief set SFP get rx power reading
     * @param[in]SFP get rx power reading
     * */
    void set_rx_power_reading(const OptionalField<std::int32_t>& rx_power_reading) 
    {
        m_rx_power_reading = rx_power_reading;
    }	
	
    /*!
     * Gets SFP rx power upper threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_rx_power_upper_th_fatal() const 
    {
        return m_rx_power_upper_threshold_fatal;
    }

    /*!
     * @brief set SFP rx power upper threahold fatal value
     * @param[in]SFP rx power upper threahold fatal value
     * */
    void set_rx_power_upper_th_fatal(const OptionalField<std::int32_t>& rx_power_upper_threshold_fatal) 
    {
        m_rx_power_upper_threshold_fatal = rx_power_upper_threshold_fatal;
    }	

    /*!
     * Gets SFP rx power upper threahold critical value
     * */
    const OptionalField<std::int32_t>& get_rx_power_upper_th_critical() const 
    {
        return m_rx_power_upper_threshold_critical;
    }

    /*!
     * @brief set SFP rx power upper threahold critical value
     * @param[in]SFP rx power upper threahold critical value
     * */
    void set_rx_power_upper_th_critical(const OptionalField<std::int32_t>& rx_power_upper_threshold_critical) 
    {
        m_rx_power_upper_threshold_critical = rx_power_upper_threshold_critical;
    }	
	
    /*!
     * Gets SFP rx power upper threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_rx_power_upper_th_non_critical() const 
    {
        return m_rx_power_upper_threshold_non_critical;
    }

    /*!
     * @brief set SFP rx power upper threahold non critical value
     * @param[in]SFP rx power upper threahold non critical value
     * */
    void set_rx_power_upper_th_non_critical(const OptionalField<std::int32_t>& rx_power_upper_threshold_non_critical) 
    {
        m_rx_power_upper_threshold_non_critical = rx_power_upper_threshold_non_critical;
    }	
	
    /*!
     * Gets SFP rx power lower threahold fatal value
     * */
    const OptionalField<std::int32_t>& get_rx_power_lower_th_fatal() const 
    {
        return m_rx_power_lower_threshold_fatal;
    }

    /*!
     * @brief set SFP rx power lower threahold fatal value
     * @param[in]SFP rx power lower threahold fatal value
     * */
    void set_rx_power_lower_th_fatal(const OptionalField<std::int32_t>& rx_power_lower_threshold_fatal) 
    {
        m_rx_power_lower_threshold_fatal = rx_power_lower_threshold_fatal;
    }	
	
    /*!
     * Gets SFP rx power lower threahold critical value
     * */
    const OptionalField<std::int32_t>& get_rx_power_lower_th_critical() const 
    {
        return m_rx_power_lower_threshold_critical;
    }

    /*!
     * @brief set SFP rx power lower threahold critical value
     * @param[in]SFP rx power lower threahold critical value
     * */
    void set_rx_power_lower_th_critical(const OptionalField<std::int32_t>& rx_power_lower_threshold_critical) 
    {
        m_rx_power_lower_threshold_critical = rx_power_lower_threshold_critical;
    }	
	
    /*!
     * Gets SFP rx power lower threahold non critical value
     * */
    const OptionalField<std::int32_t>& get_rx_power_lower_th_non_critical() const 
    {
        return m_rx_power_lower_threshold_non_critical;
    }

    /*!
     * @brief set SFP rx power lower threahold non critical value
     * @param[in]SFP rx power lower threahold non critical value
     * */
    void set_rx_power_lower_th_non_critical(const OptionalField<std::int32_t>& rx_power_lower_threshold_non_critical) 
    {
        m_rx_power_lower_threshold_non_critical = rx_power_lower_threshold_non_critical;
    }	

    /*!
     * @brief Set status state.
     * @param[in] status state
     * */
    void set_temp_status_state(const OptionalField<std::string>& state) {
        m_temp_state = state;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_temp_status_state() const {
        return m_temp_state;
    }

    /*!
     * @brief Set status health.
     * @param[in] status health.
     * */
    void set_temp_status_health(const OptionalField<std::string>& health) {
        m_temp_health = health;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_temp_status_health() const {
        return m_temp_health;
    }

    /*!
     * @brief Set status health roll up.
     * @param[in] status health roll up.
     * */
    void set_temp_status_health_roll_up(const OptionalField<std::string>& health_rollup) {
        m_temp_health_rollup = health_rollup;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_temp_status_health_roll_up() const {
        return m_temp_health_rollup;
    }
	
  /*!
     * @brief Set status state.
     * @param[in] status state
     * */
    void set_voltage_status_state(const OptionalField<std::string>& state) {
        m_voltage_state = state;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_voltage_status_state() const {
        return m_voltage_state;
    }

    /*!
     * @brief Set status health.
     * @param[in] status health.
     * */
    void set_voltage_status_health(const OptionalField<std::string>& health) {
        m_voltage_health = health;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_voltage_status_health() const {
        return m_voltage_health;
    }

    /*!
     * @brief Set status health roll up.
     * @param[in] status health roll up.
     * */
    void set_voltage_status_health_roll_up(const OptionalField<std::string>& health_rollup) {
        m_temp_health_rollup = health_rollup;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_voltage_status_health_roll_up() const {
        return m_voltage_health_rollup;
    }
	
	
  /*!
     * @brief Set status state.
     * @param[in] status state
     * */
    void set_bias_current_status_state(const OptionalField<std::string>& state) {
        m_bias_current_state = state;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_bias_current_status_state() const {
        return m_bias_current_state;
    }

    /*!
     * @brief Set status health.
     * @param[in] status health.
     * */
    void set_bias_current_status_health(const OptionalField<std::string>& health) {
        m_bias_current_health = health;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_bias_current_status_health() const {
        return m_bias_current_health;
    }

    /*!
     * @brief Set status health roll up.
     * @param[in] status health roll up.
     * */
    void set_bias_current_status_health_roll_up(const OptionalField<std::string>& health_rollup) {
        m_bias_current_health_rollup = health_rollup;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_bias_current_status_health_roll_up() const {
        return m_bias_current_health_rollup;
    }
	
	
	
  /*!
     * @brief Set status state.
     * @param[in] status state
     * */
    void set_tx_power_status_state(const OptionalField<std::string>& state) {
        m_tx_power_state = state;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_tx_power_status_state() const {
        return m_tx_power_state;
    }

    /*!
     * @brief Set status health.
     * @param[in] status health.
     * */
    void set_tx_power_status_health(const OptionalField<std::string>& health) {
        m_tx_power_health = health;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_tx_power_status_health() const {
        return m_tx_power_health;
    }

    /*!
     * @brief Set status health roll up.
     * @param[in] status health roll up.
     * */
    void set_tx_power_status_health_roll_up(const OptionalField<std::string>& health_rollup) {
        m_tx_power_health_rollup = health_rollup;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_tx_power_status_health_roll_up() const {
        return m_tx_power_health_rollup;
    }
	

	
  /*!
     * @brief Set status state.
     * @param[in] status state
     * */
    void set_rx_power_status_state(const OptionalField<std::string>& state) {
        m_rx_power_state = state;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_rx_power_status_state() const {
        return m_rx_power_state;
    }

    /*!
     * @brief Set status health.
     * @param[in] status health.
     * */
    void set_rx_power_status_health(const OptionalField<std::string>& health) {
        m_rx_power_health = health;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_rx_power_status_health() const {
        return m_rx_power_health;
    }

    /*!
     * @brief Set status health roll up.
     * @param[in] status health roll up.
     * */
    void set_rx_power_status_health_roll_up(const OptionalField<std::string>& health_rollup) {
        m_rx_power_health_rollup = health_rollup;
    }

    /*!
     * Gets status state.
     * */
    const OptionalField<std::string>& get_rx_power_status_health_roll_up() const {
        return m_rx_power_health_rollup;
    }
	
    /*!
     * @brief Convert TransInfo to JSON object
     * @return JSON representation of TransInfo object
     * */
    Json::Value to_json() const;

    /*!
     * @brief construct an object of class TransInfo from JSON
     *
     * @param json the Json::Value deserialized to object
     *
     * @return the newly constructed TransInfo object
     */
    static TransInfo from_json(const Json::Value& json);

private:

    OptionalField<std::string> m_switch_identifier{""};
    OptionalField<std::string> m_port_identifier{""};
    OptionalField<std::string> m_cable_id{""};

    OptionalField<std::string> m_sfp_vendor_name{""};
    OptionalField<std::string> m_part_number{""};
    OptionalField<std::string> m_serial_number{""};
    OptionalField<std::string> m_manufacture_date{""};

    OptionalField<std::int32_t> m_temperature_reading{0};
    OptionalField<std::int32_t> m_temperature_upper_threshold_fatal{0};
    OptionalField<std::int32_t> m_temperature_upper_threshold_critical{0};
    OptionalField<std::int32_t> m_temperature_upper_threshold_non_critical{0};
    OptionalField<std::int32_t> m_temperature_lower_threshold_fatal{0};
    OptionalField<std::int32_t> m_temperature_lower_threshold_critical{0};
    OptionalField<std::int32_t> m_temperature_lower_threshold_non_critical{0};

    OptionalField<std::int32_t> m_bias_current_reading{0};
    OptionalField<std::int32_t> m_bias_current_upper_threshold_fatal{0};
    OptionalField<std::int32_t> m_bias_current_upper_threshold_critical{0};
    OptionalField<std::int32_t> m_bias_current_upper_threshold_non_critical{0};
    OptionalField<std::int32_t> m_bias_current_lower_threshold_fatal{0};
    OptionalField<std::int32_t> m_bias_current_lower_threshold_critical{0};
    OptionalField<std::int32_t> m_bias_current_lower_threshold_non_critical{0};

    OptionalField<std::int32_t> m_voltage_reading{0};
    OptionalField<std::int32_t> m_voltage_upper_threshold_fatal{0};
    OptionalField<std::int32_t> m_voltage_upper_threshold_critical{0};
    OptionalField<std::int32_t> m_voltage_upper_threshold_non_critical{0};
    OptionalField<std::int32_t> m_voltage_lower_threshold_fatal{0};
    OptionalField<std::int32_t> m_voltage_lower_threshold_critical{0};
    OptionalField<std::int32_t> m_voltage_lower_threshold_non_critical{0};

    OptionalField<std::int32_t> m_tx_power_reading{0};
    OptionalField<std::int32_t> m_tx_power_upper_threshold_fatal{0};
    OptionalField<std::int32_t> m_tx_power_upper_threshold_critical{0};
    OptionalField<std::int32_t> m_tx_power_upper_threshold_non_critical{0};
    OptionalField<std::int32_t> m_tx_power_lower_threshold_fatal{0};
    OptionalField<std::int32_t> m_tx_power_lower_threshold_critical{0};
    OptionalField<std::int32_t> m_tx_power_lower_threshold_non_critical{0};	

    OptionalField<std::int32_t> m_rx_power_reading{0};
    OptionalField<std::int32_t> m_rx_power_upper_threshold_fatal{0};
    OptionalField<std::int32_t> m_rx_power_upper_threshold_critical{0};
    OptionalField<std::int32_t> m_rx_power_upper_threshold_non_critical{0};
    OptionalField<std::int32_t> m_rx_power_lower_threshold_fatal{0};
    OptionalField<std::int32_t> m_rx_power_lower_threshold_critical{0};
    OptionalField<std::int32_t> m_rx_power_lower_threshold_non_critical{0};

    OptionalField<std::string> m_temp_state{""};
    OptionalField<std::string> m_temp_health{""};
    OptionalField<std::string> m_temp_health_rollup{""};

    OptionalField<std::string> m_voltage_state{""};
    OptionalField<std::string> m_voltage_health{""};
    OptionalField<std::string> m_voltage_health_rollup{""};

    OptionalField<std::string> m_bias_current_state{""};
    OptionalField<std::string> m_bias_current_health{""};
    OptionalField<std::string> m_bias_current_health_rollup{""};

    OptionalField<std::string> m_tx_power_state{""};
    OptionalField<std::string> m_tx_power_health{""};
    OptionalField<std::string> m_tx_power_health_rollup{""};	

    OptionalField<std::string> m_rx_power_state{""};
    OptionalField<std::string> m_rx_power_health{""};
    OptionalField<std::string> m_rx_power_health_rollup{""};		
};

}
}
}

