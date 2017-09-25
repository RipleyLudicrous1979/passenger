/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2010-2017 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

/*
 * LocationConfig.h is automatically generated from LocationConfig.h.cxxcodebuilder,
 * using definitions from src/ruby_supportlib/phusion_passenger/nginx/config_options.rb.
 * Edits to LocationConfig.h will be lost.
 *
 * To update LocationConfig.h:
 *   rake nginx
 *
 * To force regeneration of LocationConfig.h:
 *   rm -f src/nginx_module/LocationConfig.h
 *   rake src/nginx_module/LocationConfig.h
 */

typedef struct {
    ngx_array_t children;
    ngx_http_core_srv_conf_t *cscf;
    ngx_http_core_loc_conf_t *clcf;
    ngx_str_t context_source_file;
    ngx_uint_t context_source_line;

    ngx_http_upstream_conf_t upstream_config;
    ngx_array_t *flushes;
    ngx_array_t *headers_set_len;
    ngx_array_t *headers_set;
    ngx_hash_t   headers_set_hash;

    /** Raw HTTP header data for this location are cached here. */
    ngx_str_t    options_cache;
    ngx_str_t    env_vars_cache;

    ngx_flag_t abort_websockets_on_process_shutdown;
    ngx_uint_t app_file_descriptor_ulimit;
    ngx_array_t *base_uris;
    ngx_flag_t debugger;
    ngx_flag_t enabled;
    ngx_array_t *env_vars;
    ngx_int_t force_max_concurrent_requests_per_process;
    ngx_flag_t friendly_error_pages;
    ngx_uint_t headers_hash_bucket_size;
    ngx_uint_t headers_hash_max_size;
    ngx_array_t *headers_source;
    ngx_flag_t load_shell_envvars;
    ngx_int_t max_instances_per_app;
    ngx_int_t max_preloader_idle_time;
    ngx_int_t max_request_queue_size;
    ngx_int_t max_requests;
    ngx_int_t min_instances;
    ngx_int_t request_queue_overflow_status_code;
    ngx_int_t start_timeout;
    ngx_flag_t sticky_sessions;
    ngx_str_t app_group_name;
    ngx_str_t app_rights;
    ngx_str_t app_root;
    ngx_str_t app_type;
    ngx_str_t document_root;
    ngx_str_t environment;
    ngx_str_t group;
    ngx_str_t meteor_app_settings;
    ngx_str_t nodejs;
    ngx_str_t python;
    ngx_str_t restart_dir;
    ngx_str_t ruby;
    ngx_str_t spawn_method;
    ngx_str_t startup_file;
    ngx_str_t sticky_sessions_cookie_name;
    ngx_str_t user;
    ngx_str_t vary_turbocache_by_cookie;

    ngx_str_t abort_websockets_on_process_shutdown_source_file;
    ngx_str_t app_file_descriptor_ulimit_source_file;
    ngx_str_t app_group_name_source_file;
    ngx_str_t app_rights_source_file;
    ngx_str_t app_root_source_file;
    ngx_str_t app_type_source_file;
    ngx_str_t base_uris_source_file;
    ngx_str_t debugger_source_file;
    ngx_str_t document_root_source_file;
    ngx_str_t enabled_source_file;
    ngx_str_t env_vars_source_file;
    ngx_str_t environment_source_file;
    ngx_str_t force_max_concurrent_requests_per_process_source_file;
    ngx_str_t friendly_error_pages_source_file;
    ngx_str_t group_source_file;
    ngx_str_t headers_hash_bucket_size_source_file;
    ngx_str_t headers_hash_max_size_source_file;
    ngx_str_t headers_source_source_file;
    ngx_str_t load_shell_envvars_source_file;
    ngx_str_t max_instances_per_app_source_file;
    ngx_str_t max_preloader_idle_time_source_file;
    ngx_str_t max_request_queue_size_source_file;
    ngx_str_t max_requests_source_file;
    ngx_str_t meteor_app_settings_source_file;
    ngx_str_t min_instances_source_file;
    ngx_str_t nodejs_source_file;
    ngx_str_t python_source_file;
    ngx_str_t request_queue_overflow_status_code_source_file;
    ngx_str_t restart_dir_source_file;
    ngx_str_t ruby_source_file;
    ngx_str_t spawn_method_source_file;
    ngx_str_t start_timeout_source_file;
    ngx_str_t startup_file_source_file;
    ngx_str_t sticky_sessions_source_file;
    ngx_str_t sticky_sessions_cookie_name_source_file;
    ngx_str_t upstream_config_buffer_size_source_file;
    ngx_str_t upstream_config_buffering_source_file;
    ngx_str_t upstream_config_bufs_source_file;
    ngx_str_t upstream_config_busy_buffers_size_conf_source_file;
    ngx_str_t upstream_config_ignore_client_abort_source_file;
    ngx_str_t upstream_config_ignore_headers_source_file;
    ngx_str_t upstream_config_intercept_errors_source_file;
    ngx_str_t upstream_config_pass_headers_source_file;
    ngx_str_t upstream_config_read_timeout_source_file;
    ngx_str_t user_source_file;
    ngx_str_t vary_turbocache_by_cookie_source_file;

    ngx_uint_t abort_websockets_on_process_shutdown_source_line;
    ngx_uint_t app_file_descriptor_ulimit_source_line;
    ngx_uint_t app_group_name_source_line;
    ngx_uint_t app_rights_source_line;
    ngx_uint_t app_root_source_line;
    ngx_uint_t app_type_source_line;
    ngx_uint_t base_uris_source_line;
    ngx_uint_t debugger_source_line;
    ngx_uint_t document_root_source_line;
    ngx_uint_t enabled_source_line;
    ngx_uint_t env_vars_source_line;
    ngx_uint_t environment_source_line;
    ngx_uint_t force_max_concurrent_requests_per_process_source_line;
    ngx_uint_t friendly_error_pages_source_line;
    ngx_uint_t group_source_line;
    ngx_uint_t headers_hash_bucket_size_source_line;
    ngx_uint_t headers_hash_max_size_source_line;
    ngx_uint_t headers_source_source_line;
    ngx_uint_t load_shell_envvars_source_line;
    ngx_uint_t max_instances_per_app_source_line;
    ngx_uint_t max_preloader_idle_time_source_line;
    ngx_uint_t max_request_queue_size_source_line;
    ngx_uint_t max_requests_source_line;
    ngx_uint_t meteor_app_settings_source_line;
    ngx_uint_t min_instances_source_line;
    ngx_uint_t nodejs_source_line;
    ngx_uint_t python_source_line;
    ngx_uint_t request_queue_overflow_status_code_source_line;
    ngx_uint_t restart_dir_source_line;
    ngx_uint_t ruby_source_line;
    ngx_uint_t spawn_method_source_line;
    ngx_uint_t start_timeout_source_line;
    ngx_uint_t startup_file_source_line;
    ngx_uint_t sticky_sessions_source_line;
    ngx_uint_t sticky_sessions_cookie_name_source_line;
    ngx_uint_t upstream_config_buffer_size_source_line;
    ngx_uint_t upstream_config_buffering_source_line;
    ngx_uint_t upstream_config_bufs_source_line;
    ngx_uint_t upstream_config_busy_buffers_size_conf_source_line;
    ngx_uint_t upstream_config_ignore_client_abort_source_line;
    ngx_uint_t upstream_config_ignore_headers_source_line;
    ngx_uint_t upstream_config_intercept_errors_source_line;
    ngx_uint_t upstream_config_pass_headers_source_line;
    ngx_uint_t upstream_config_read_timeout_source_line;
    ngx_uint_t user_source_line;
    ngx_uint_t vary_turbocache_by_cookie_source_line;

    ngx_int_t abort_websockets_on_process_shutdown_explicitly_set;
    ngx_int_t app_file_descriptor_ulimit_explicitly_set;
    ngx_int_t app_group_name_explicitly_set;
    ngx_int_t app_rights_explicitly_set;
    ngx_int_t app_root_explicitly_set;
    ngx_int_t app_type_explicitly_set;
    ngx_int_t base_uris_explicitly_set;
    ngx_int_t debugger_explicitly_set;
    ngx_int_t document_root_explicitly_set;
    ngx_int_t enabled_explicitly_set;
    ngx_int_t env_vars_explicitly_set;
    ngx_int_t environment_explicitly_set;
    ngx_int_t force_max_concurrent_requests_per_process_explicitly_set;
    ngx_int_t friendly_error_pages_explicitly_set;
    ngx_int_t group_explicitly_set;
    ngx_int_t headers_hash_bucket_size_explicitly_set;
    ngx_int_t headers_hash_max_size_explicitly_set;
    ngx_int_t headers_source_explicitly_set;
    ngx_int_t load_shell_envvars_explicitly_set;
    ngx_int_t max_instances_per_app_explicitly_set;
    ngx_int_t max_preloader_idle_time_explicitly_set;
    ngx_int_t max_request_queue_size_explicitly_set;
    ngx_int_t max_requests_explicitly_set;
    ngx_int_t meteor_app_settings_explicitly_set;
    ngx_int_t min_instances_explicitly_set;
    ngx_int_t nodejs_explicitly_set;
    ngx_int_t python_explicitly_set;
    ngx_int_t request_queue_overflow_status_code_explicitly_set;
    ngx_int_t restart_dir_explicitly_set;
    ngx_int_t ruby_explicitly_set;
    ngx_int_t spawn_method_explicitly_set;
    ngx_int_t start_timeout_explicitly_set;
    ngx_int_t startup_file_explicitly_set;
    ngx_int_t sticky_sessions_explicitly_set;
    ngx_int_t sticky_sessions_cookie_name_explicitly_set;
    ngx_int_t upstream_config_buffer_size_explicitly_set;
    ngx_int_t upstream_config_buffering_explicitly_set;
    ngx_int_t upstream_config_bufs_explicitly_set;
    ngx_int_t upstream_config_busy_buffers_size_conf_explicitly_set;
    ngx_int_t upstream_config_ignore_client_abort_explicitly_set;
    ngx_int_t upstream_config_ignore_headers_explicitly_set;
    ngx_int_t upstream_config_intercept_errors_explicitly_set;
    ngx_int_t upstream_config_pass_headers_explicitly_set;
    ngx_int_t upstream_config_read_timeout_explicitly_set;
    ngx_int_t user_explicitly_set;
    ngx_int_t vary_turbocache_by_cookie_explicitly_set;

    #if (NGX_HTTP_CACHE)
        ngx_http_complex_value_t cache_key;
    #endif
} passenger_loc_conf_t;
