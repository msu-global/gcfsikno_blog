<?php

/**
 * @file
 *
 * Contains BlogImageReferenceMigration class.
**/
class BlogImageReferenceMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $query = db_select('field_data_field_image', 'im')
      ->fields('im')
      ->condition('entity_type', 'node', '=')
      ->condition('bundle', 'blog', '=');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationTable('field_data_field_featured_media');

    $this->map = new MigrateSQLMap($this->machineName,
      MigrateDestinationTable::getKeySchema('field_data_field_image'),
      MigrateDestinationTable::getKeySchema('field_data_field_featured_media')
    );

    $this->addSimpleMappings(array('entity_type', 'bundle', 'entity_id', 'revision_id', 'delta', 'language'));
    $this->addFieldMapping('field_featured_media_fid', 'field_image_fid');
    $this->addFieldMapping('field_featured_media_display')->defaultValue(1);
  }
}
