<?php

/**
 * @file
 *
 * Contains Migrate API declaration.
**/

/**
 * Implements hook_migrate_api().
**/
function gcfsikno_blog_migrate_api() {
  $migrations = array(
    'api' => 2,
    'groups' => array(
      'image_to_media' => array(
        'title' => t('Blog entry image to media migration'),
      ),
    ),
    'migrations' => array(
      'ImageReference' => array(
        'class_name' => 'BlogImageReferenceMigration',
        'group_name' => 'image_to_media',
      ),
    ),
  );

  return $migrations;
}
