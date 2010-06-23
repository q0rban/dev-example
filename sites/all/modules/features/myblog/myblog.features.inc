<?php

/**
 * Implementation of hook_content_default_fields().
 */
function myblog_content_default_fields() {
  module_load_include('inc', 'myblog', 'myblog.defaults');
  $args = func_get_args();
  return call_user_func_array('_myblog_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function myblog_ctools_plugin_api() {
  module_load_include('inc', 'myblog', 'myblog.defaults');
  $args = func_get_args();
  return call_user_func_array('_myblog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function myblog_node_info() {
  module_load_include('inc', 'myblog', 'myblog.features.node');
  $args = func_get_args();
  return call_user_func_array('_myblog_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function myblog_strongarm() {
  module_load_include('inc', 'myblog', 'myblog.defaults');
  $args = func_get_args();
  return call_user_func_array('_myblog_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function myblog_views_default_views() {
  module_load_include('inc', 'myblog', 'myblog.features.views');
  $args = func_get_args();
  return call_user_func_array('_myblog_views_default_views', $args);
}
