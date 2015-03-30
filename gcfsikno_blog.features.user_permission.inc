<?php
/**
 * @file
 * gcfsikno_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gcfsikno_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'scholar' => 'scholar',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content admin' => 'content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content admin' => 'content admin',
      'scholar' => 'scholar',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in categories'.
  $permissions['delete terms in categories'] = array(
    'name' => 'delete terms in categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topics'.
  $permissions['delete terms in topics'] = array(
    'name' => 'delete terms in topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content admin' => 'content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content admin' => 'content admin',
      'scholar' => 'scholar',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in categories'.
  $permissions['edit terms in categories'] = array(
    'name' => 'edit terms in categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topics'.
  $permissions['edit terms in topics'] = array(
    'name' => 'edit terms in topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
