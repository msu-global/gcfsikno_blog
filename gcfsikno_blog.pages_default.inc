<?php
/**
 * @file
 * gcfsikno_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gcfsikno_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog__list';
  $handler->task = 'blog';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Listing',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'list',
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0f321524-7360-4e3d-a826-5c8313b56d4e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ca31093-8410-4aea-8178-1c153c5671fa';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_recent-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ca31093-8410-4aea-8178-1c153c5671fa';
    $display->content['new-2ca31093-8410-4aea-8178-1c153c5671fa'] = $pane;
    $display->panels['left'][0] = 'new-2ca31093-8410-4aea-8178-1c153c5671fa';
    $pane = new stdClass();
    $pane->pid = 'new-3ef3aef8-f69a-441e-b7d1-9a4308a86567';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-blog_recent-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ef3aef8-f69a-441e-b7d1-9a4308a86567';
    $display->content['new-3ef3aef8-f69a-441e-b7d1-9a4308a86567'] = $pane;
    $display->panels['right'][0] = 'new-3ef3aef8-f69a-441e-b7d1-9a4308a86567';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog__list'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_user__default';
  $handler->task = 'blog_user';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:name\'s Blog';
  $display->uuid = 'd2ee2e6d-eaa9-4ed9-87fd-5150376bdf12';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7aaa1ff5-b58d-4a88-8406-4960351a12ad';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_recent-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_uid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7aaa1ff5-b58d-4a88-8406-4960351a12ad';
    $display->content['new-7aaa1ff5-b58d-4a88-8406-4960351a12ad'] = $pane;
    $display->panels['left'][0] = 'new-7aaa1ff5-b58d-4a88-8406-4960351a12ad';
    $pane = new stdClass();
    $pane->pid = 'new-db2af744-f6db-48c5-95ca-e2fe406e252f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_avatar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'argument_uid_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db2af744-f6db-48c5-95ca-e2fe406e252f';
    $display->content['new-db2af744-f6db-48c5-95ca-e2fe406e252f'] = $pane;
    $display->panels['right'][0] = 'new-db2af744-f6db-48c5-95ca-e2fe406e252f';
    $pane = new stdClass();
    $pane->pid = 'new-83b52252-3c81-4ae2-a207-30a02ef7a833';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_uid_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '83b52252-3c81-4ae2-a207-30a02ef7a833';
    $display->content['new-83b52252-3c81-4ae2-a207-30a02ef7a833'] = $pane;
    $display->panels['right'][1] = 'new-83b52252-3c81-4ae2-a207-30a02ef7a833';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7aaa1ff5-b58d-4a88-8406-4960351a12ad';
  $handler->conf['display'] = $display;
  $export['blog_user__default'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__blog';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'upper_left' => NULL,
      'upper_right' => NULL,
      'lower_left' => NULL,
      'lower_right' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'afbd108f-abe5-4d7b-b1a6-e8477c869a0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7915113c-ce7d-4ef9-9648-471a3151e3e3';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_featured_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7915113c-ce7d-4ef9-9648-471a3151e3e3';
    $display->content['new-7915113c-ce7d-4ef9-9648-471a3151e3e3'] = $pane;
    $display->panels['left'][0] = 'new-7915113c-ce7d-4ef9-9648-471a3151e3e3';
    $pane = new stdClass();
    $pane->pid = 'new-a3f8d180-2e7f-4b32-bcf9-180539cac250';
    $pane->panel = 'main';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3f8d180-2e7f-4b32-bcf9-180539cac250';
    $display->content['new-a3f8d180-2e7f-4b32-bcf9-180539cac250'] = $pane;
    $display->panels['main'][0] = 'new-a3f8d180-2e7f-4b32-bcf9-180539cac250';
    $pane = new stdClass();
    $pane->pid = 'new-f78d1d73-05a7-4f25-8f7b-78b99f612232';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f78d1d73-05a7-4f25-8f7b-78b99f612232';
    $display->content['new-f78d1d73-05a7-4f25-8f7b-78b99f612232'] = $pane;
    $display->panels['right'][0] = 'new-f78d1d73-05a7-4f25-8f7b-78b99f612232';
    $pane = new stdClass();
    $pane->pid = 'new-c0f3c905-5887-4fdb-a7ae-c4abdc62d6cb';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c0f3c905-5887-4fdb-a7ae-c4abdc62d6cb';
    $display->content['new-c0f3c905-5887-4fdb-a7ae-c4abdc62d6cb'] = $pane;
    $display->panels['right'][1] = 'new-c0f3c905-5887-4fdb-a7ae-c4abdc62d6cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a3f8d180-2e7f-4b32-bcf9-180539cac250';
  $handler->conf['display'] = $display;
  $export['node_edit__blog'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Blog Entry',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Author',
        'keyword' => 'author',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'blog',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'upper_left' => NULL,
      'upper_right' => NULL,
      'lower_left' => NULL,
      'lower_right' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cbe743cd-75db-439a-9be3-831aa66d9716';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a1b2b9f-b84e-4214-ab31-49bba31d53ca';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a1b2b9f-b84e-4214-ab31-49bba31d53ca';
    $display->content['new-6a1b2b9f-b84e-4214-ab31-49bba31d53ca'] = $pane;
    $display->panels['left'][0] = 'new-6a1b2b9f-b84e-4214-ab31-49bba31d53ca';
    $pane = new stdClass();
    $pane->pid = 'new-8e95c643-6ac7-4638-92e9-cfe92ad3ce51';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e95c643-6ac7-4638-92e9-cfe92ad3ce51';
    $display->content['new-8e95c643-6ac7-4638-92e9-cfe92ad3ce51'] = $pane;
    $display->panels['left'][1] = 'new-8e95c643-6ac7-4638-92e9-cfe92ad3ce51';
    $pane = new stdClass();
    $pane->pid = 'new-03c53678-dbe2-467b-814f-b343435c218f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '03c53678-dbe2-467b-814f-b343435c218f';
    $display->content['new-03c53678-dbe2-467b-814f-b343435c218f'] = $pane;
    $display->panels['right'][0] = 'new-03c53678-dbe2-467b-814f-b343435c218f';
    $pane = new stdClass();
    $pane->pid = 'new-4c114b44-ad07-46c3-9737-981845d0ea17';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_avatar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => 'About the Author',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c114b44-ad07-46c3-9737-981845d0ea17';
    $display->content['new-4c114b44-ad07-46c3-9737-981845d0ea17'] = $pane;
    $display->panels['right'][1] = 'new-4c114b44-ad07-46c3-9737-981845d0ea17';
    $pane = new stdClass();
    $pane->pid = 'new-397981a2-542e-4faa-947c-a72fbdb9aa3c';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'name_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'markup' => 0,
        'output' => 'default',
        'format' => 'default',
        'multiple' => 'default',
        'multiple_delimiter' => ', ',
        'multiple_and' => 'text',
        'multiple_delimiter_precedes_last' => 'never',
        'multiple_el_al_min' => '3',
        'multiple_el_al_first' => '1',
      ),
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'name-display',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '397981a2-542e-4faa-947c-a72fbdb9aa3c';
    $display->content['new-397981a2-542e-4faa-947c-a72fbdb9aa3c'] = $pane;
    $display->panels['right'][2] = 'new-397981a2-542e-4faa-947c-a72fbdb9aa3c';
    $pane = new stdClass();
    $pane->pid = 'new-4ccbaf84-1438-4a62-a2e9-0340228630df';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4ccbaf84-1438-4a62-a2e9-0340228630df';
    $display->content['new-4ccbaf84-1438-4a62-a2e9-0340228630df'] = $pane;
    $display->panels['right'][3] = 'new-4ccbaf84-1438-4a62-a2e9-0340228630df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog'] = $handler;

  return $export;
}
