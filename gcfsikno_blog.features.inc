<?php
/**
 * @file
 * gcfsikno_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gcfsikno_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gcfsikno_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gcfsikno_blog_image_default_styles() {
  $styles = array();

  // Exported image style: blog.
  $styles['blog'] = array(
    'label' => 'blog',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 810,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_blog.
  $styles['homepage_blog'] = array(
    'label' => 'Homepage Blog',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
