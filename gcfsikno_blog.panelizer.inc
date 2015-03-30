<?php
/**
 * @file
 * gcfsikno_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gcfsikno_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Author',
      'keyword' => 'author',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = 'eeb84a9d-3279-4570-b620-0a1f695bd632';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-760aeb51-b4be-426d-8b69-603507d28dc2';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'blog',
        'image_link' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '760aeb51-b4be-426d-8b69-603507d28dc2';
    $display->content['new-760aeb51-b4be-426d-8b69-603507d28dc2'] = $pane;
    $display->panels['left'][0] = 'new-760aeb51-b4be-426d-8b69-603507d28dc2';
    $pane = new stdClass();
    $pane->pid = 'new-882fecf6-e00a-44a6-b67e-5a6518e52855';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '882fecf6-e00a-44a6-b67e-5a6518e52855';
    $display->content['new-882fecf6-e00a-44a6-b67e-5a6518e52855'] = $pane;
    $display->panels['left'][1] = 'new-882fecf6-e00a-44a6-b67e-5a6518e52855';
    $pane = new stdClass();
    $pane->pid = 'new-762cabcd-855b-4cf6-8de8-8cee485d3937';
    $pane->panel = 'left';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '762cabcd-855b-4cf6-8de8-8cee485d3937';
    $display->content['new-762cabcd-855b-4cf6-8de8-8cee485d3937'] = $pane;
    $display->panels['left'][2] = 'new-762cabcd-855b-4cf6-8de8-8cee485d3937';
    $pane = new stdClass();
    $pane->pid = 'new-ab56450a-dd68-4240-b89c-2b8905905a7d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab56450a-dd68-4240-b89c-2b8905905a7d';
    $display->content['new-ab56450a-dd68-4240-b89c-2b8905905a7d'] = $pane;
    $display->panels['right'][0] = 'new-ab56450a-dd68-4240-b89c-2b8905905a7d';
    $pane = new stdClass();
    $pane->pid = 'new-1c27f91d-b041-4fde-a6de-c48b407da86a';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '1c27f91d-b041-4fde-a6de-c48b407da86a';
    $display->content['new-1c27f91d-b041-4fde-a6de-c48b407da86a'] = $pane;
    $display->panels['right'][1] = 'new-1c27f91d-b041-4fde-a6de-c48b407da86a';
    $pane = new stdClass();
    $pane->pid = 'new-8f86ac1b-d53a-4668-8c61-9d4821bdffa8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8f86ac1b-d53a-4668-8c61-9d4821bdffa8';
    $display->content['new-8f86ac1b-d53a-4668-8c61-9d4821bdffa8'] = $pane;
    $display->panels['right'][2] = 'new-8f86ac1b-d53a-4668-8c61-9d4821bdffa8';
    $pane = new stdClass();
    $pane->pid = 'new-314b882b-447f-468b-974b-25be6fa968f5';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_feature_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '314b882b-447f-468b-974b-25be6fa968f5';
    $display->content['new-314b882b-447f-468b-974b-25be6fa968f5'] = $pane;
    $display->panels['right'][3] = 'new-314b882b-447f-468b-974b-25be6fa968f5';
    $pane = new stdClass();
    $pane->pid = 'new-49213b30-41e3-4418-bf67-e5b926380379';
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
        'file_view_mode' => 'default',
        'image_style' => 'medium',
        'image_link' => '',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '49213b30-41e3-4418-bf67-e5b926380379';
    $display->content['new-49213b30-41e3-4418-bf67-e5b926380379'] = $pane;
    $display->panels['right'][4] = 'new-49213b30-41e3-4418-bf67-e5b926380379';
    $pane = new stdClass();
    $pane->pid = 'new-ea96b2d0-72db-46a2-b6b8-7c818f72ea8f';
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
      'override_title_text' => 'Author',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ea96b2d0-72db-46a2-b6b8-7c818f72ea8f';
    $display->content['new-ea96b2d0-72db-46a2-b6b8-7c818f72ea8f'] = $pane;
    $display->panels['right'][5] = 'new-ea96b2d0-72db-46a2-b6b8-7c818f72ea8f';
    $pane = new stdClass();
    $pane->pid = 'new-d21dd78d-a423-4c71-b2f3-3e8962bf0163';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd21dd78d-a423-4c71-b2f3-3e8962bf0163';
    $display->content['new-d21dd78d-a423-4c71-b2f3-3e8962bf0163'] = $pane;
    $display->panels['right'][6] = 'new-d21dd78d-a423-4c71-b2f3-3e8962bf0163';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-882fecf6-e00a-44a6-b67e-5a6518e52855';
  $panelizer->display = $display;
  $export['node:blog:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Author',
      'keyword' => 'author',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'spartan_twocol_tworow';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'upper_left' => NULL,
      'upper_right' => NULL,
      'lower_left' => NULL,
      'lower_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Default';
  $display->uuid = 'b381b8f9-7b0a-4136-9012-edd653ac0045';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3d01864f-c403-435f-a4f3-6907892d21c3';
    $pane->panel = 'lower_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d01864f-c403-435f-a4f3-6907892d21c3';
    $display->content['new-3d01864f-c403-435f-a4f3-6907892d21c3'] = $pane;
    $display->panels['lower_left'][0] = 'new-3d01864f-c403-435f-a4f3-6907892d21c3';
    $pane = new stdClass();
    $pane->pid = 'new-f35614ef-36cb-4072-a0b8-24700828f9fb';
    $pane->panel = 'lower_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f35614ef-36cb-4072-a0b8-24700828f9fb';
    $display->content['new-f35614ef-36cb-4072-a0b8-24700828f9fb'] = $pane;
    $display->panels['lower_right'][0] = 'new-f35614ef-36cb-4072-a0b8-24700828f9fb';
    $pane = new stdClass();
    $pane->pid = 'new-1419b0be-d2f7-40a2-a95b-f94ca7edced5';
    $pane->panel = 'lower_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_field_of_study';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
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
    $pane->uuid = '1419b0be-d2f7-40a2-a95b-f94ca7edced5';
    $display->content['new-1419b0be-d2f7-40a2-a95b-f94ca7edced5'] = $pane;
    $display->panels['lower_right'][1] = 'new-1419b0be-d2f7-40a2-a95b-f94ca7edced5';
    $pane = new stdClass();
    $pane->pid = 'new-eee5da39-e21b-4a9f-93c2-23957f882fe6';
    $pane->panel = 'lower_right';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eee5da39-e21b-4a9f-93c2-23957f882fe6';
    $display->content['new-eee5da39-e21b-4a9f-93c2-23957f882fe6'] = $pane;
    $display->panels['lower_right'][2] = 'new-eee5da39-e21b-4a9f-93c2-23957f882fe6';
    $pane = new stdClass();
    $pane->pid = 'new-26da5de2-2714-4bed-8854-79075af8344f';
    $pane->panel = 'upper_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'blog',
        'image_link' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '26da5de2-2714-4bed-8854-79075af8344f';
    $display->content['new-26da5de2-2714-4bed-8854-79075af8344f'] = $pane;
    $display->panels['upper_left'][0] = 'new-26da5de2-2714-4bed-8854-79075af8344f';
    $pane = new stdClass();
    $pane->pid = 'new-499dacb5-9d35-406d-9885-f753594d4616';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '499dacb5-9d35-406d-9885-f753594d4616';
    $display->content['new-499dacb5-9d35-406d-9885-f753594d4616'] = $pane;
    $display->panels['upper_right'][0] = 'new-499dacb5-9d35-406d-9885-f753594d4616';
    $pane = new stdClass();
    $pane->pid = 'new-6a1f7061-3c0f-4434-a759-f26f7f782b07';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6a1f7061-3c0f-4434-a759-f26f7f782b07';
    $display->content['new-6a1f7061-3c0f-4434-a759-f26f7f782b07'] = $pane;
    $display->panels['upper_right'][1] = 'new-6a1f7061-3c0f-4434-a759-f26f7f782b07';
    $pane = new stdClass();
    $pane->pid = 'new-563d612b-4672-4185-9865-61ac321bce9f';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '563d612b-4672-4185-9865-61ac321bce9f';
    $display->content['new-563d612b-4672-4185-9865-61ac321bce9f'] = $pane;
    $display->panels['upper_right'][2] = 'new-563d612b-4672-4185-9865-61ac321bce9f';
    $pane = new stdClass();
    $pane->pid = 'new-b0f51894-7fbc-4912-ad46-2739e1480713';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_feature_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b0f51894-7fbc-4912-ad46-2739e1480713';
    $display->content['new-b0f51894-7fbc-4912-ad46-2739e1480713'] = $pane;
    $display->panels['upper_right'][3] = 'new-b0f51894-7fbc-4912-ad46-2739e1480713';
    $pane = new stdClass();
    $pane->pid = 'new-c6b4dd54-2d02-4ad4-ba0e-6c598e1b031a';
    $pane->panel = 'upper_right';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c6b4dd54-2d02-4ad4-ba0e-6c598e1b031a';
    $display->content['new-c6b4dd54-2d02-4ad4-ba0e-6c598e1b031a'] = $pane;
    $display->panels['upper_right'][4] = 'new-c6b4dd54-2d02-4ad4-ba0e-6c598e1b031a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3d01864f-c403-435f-a4f3-6907892d21c3';
  $panelizer->display = $display;
  $export['node:blog:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:two_column_two_row';
  $panelizer->title = 'Two Column, Two Row';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Author',
      'keyword' => 'author',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'spartan_twocol_tworow';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'upper_left' => NULL,
      'upper_right' => NULL,
      'lower_left' => NULL,
      'lower_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'eabf938a-cc44-47d9-a9e2-05bed126652a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f02278dc-5549-4ef7-99c2-27d1cf206a8d';
    $pane->panel = 'lower_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f02278dc-5549-4ef7-99c2-27d1cf206a8d';
    $display->content['new-f02278dc-5549-4ef7-99c2-27d1cf206a8d'] = $pane;
    $display->panels['lower_left'][0] = 'new-f02278dc-5549-4ef7-99c2-27d1cf206a8d';
    $pane = new stdClass();
    $pane->pid = 'new-05809215-1fd5-4181-b636-4fc920fa38f2';
    $pane->panel = 'lower_right';
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
    $pane->uuid = '05809215-1fd5-4181-b636-4fc920fa38f2';
    $display->content['new-05809215-1fd5-4181-b636-4fc920fa38f2'] = $pane;
    $display->panels['lower_right'][0] = 'new-05809215-1fd5-4181-b636-4fc920fa38f2';
    $pane = new stdClass();
    $pane->pid = 'new-4d7ca55c-5fab-4c7c-ab00-d7d18e80e762';
    $pane->panel = 'lower_right';
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
      'override_title_text' => 'Author',
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
    $pane->uuid = '4d7ca55c-5fab-4c7c-ab00-d7d18e80e762';
    $display->content['new-4d7ca55c-5fab-4c7c-ab00-d7d18e80e762'] = $pane;
    $display->panels['lower_right'][1] = 'new-4d7ca55c-5fab-4c7c-ab00-d7d18e80e762';
    $pane = new stdClass();
    $pane->pid = 'new-e990f6d2-e0e1-4659-8a29-c398af321d7d';
    $pane->panel = 'lower_right';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e990f6d2-e0e1-4659-8a29-c398af321d7d';
    $display->content['new-e990f6d2-e0e1-4659-8a29-c398af321d7d'] = $pane;
    $display->panels['lower_right'][2] = 'new-e990f6d2-e0e1-4659-8a29-c398af321d7d';
    $pane = new stdClass();
    $pane->pid = 'new-75bb89c7-9370-4389-ad28-b30507bcec8a';
    $pane->panel = 'upper_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'blog',
        'image_link' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '75bb89c7-9370-4389-ad28-b30507bcec8a';
    $display->content['new-75bb89c7-9370-4389-ad28-b30507bcec8a'] = $pane;
    $display->panels['upper_left'][0] = 'new-75bb89c7-9370-4389-ad28-b30507bcec8a';
    $pane = new stdClass();
    $pane->pid = 'new-1b69b6d0-38d4-40b0-99d5-4c86e0396720';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '1b69b6d0-38d4-40b0-99d5-4c86e0396720';
    $display->content['new-1b69b6d0-38d4-40b0-99d5-4c86e0396720'] = $pane;
    $display->panels['upper_right'][0] = 'new-1b69b6d0-38d4-40b0-99d5-4c86e0396720';
    $pane = new stdClass();
    $pane->pid = 'new-b7d5270f-b837-48f0-ad42-42608f22a1cb';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = 'b7d5270f-b837-48f0-ad42-42608f22a1cb';
    $display->content['new-b7d5270f-b837-48f0-ad42-42608f22a1cb'] = $pane;
    $display->panels['upper_right'][1] = 'new-b7d5270f-b837-48f0-ad42-42608f22a1cb';
    $pane = new stdClass();
    $pane->pid = 'new-d9c959cb-c118-4938-915e-eee623649d30';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd9c959cb-c118-4938-915e-eee623649d30';
    $display->content['new-d9c959cb-c118-4938-915e-eee623649d30'] = $pane;
    $display->panels['upper_right'][2] = 'new-d9c959cb-c118-4938-915e-eee623649d30';
    $pane = new stdClass();
    $pane->pid = 'new-8e5be9ae-3be5-452b-821f-adf69b6387de';
    $pane->panel = 'upper_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_feature_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8e5be9ae-3be5-452b-821f-adf69b6387de';
    $display->content['new-8e5be9ae-3be5-452b-821f-adf69b6387de'] = $pane;
    $display->panels['upper_right'][3] = 'new-8e5be9ae-3be5-452b-821f-adf69b6387de';
    $pane = new stdClass();
    $pane->pid = 'new-932f4750-bb0e-4b8d-b671-2bb5fdc2c456';
    $pane->panel = 'upper_right';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '932f4750-bb0e-4b8d-b671-2bb5fdc2c456';
    $display->content['new-932f4750-bb0e-4b8d-b671-2bb5fdc2c456'] = $pane;
    $display->panels['upper_right'][4] = 'new-932f4750-bb0e-4b8d-b671-2bb5fdc2c456';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f02278dc-5549-4ef7-99c2-27d1cf206a8d';
  $panelizer->display = $display;
  $export['node:blog:two_column_two_row'] = $panelizer;

  return $export;
}