<?php

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 *
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 *
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 *
 * Arguments to the theme call:
 * - $node: The node object. For node content, this is a normal node object.
 *   For system-generated pages, this contains usually only the title, path
 *   and content elements.
 * - $format: The output format being used ('html' for the Web version, 'mail'
 *   for the send by email, 'pdf' for the PDF version, etc.).
 * - $expand_css: TRUE if the CSS used in the file should be provided as text
 *   instead of a list of @include directives.
 * - $message: The message included in the send by email version with the
 *   text provided by the sender of the email.
 *
 * Variables created in the preprocess stage:
 * - $print_logo: the image tag with the configured logo image.
 * - $content: the rendered HTML of the node content.
 * - $scripts: the HTML used to include the JavaScript files in the page head.
 * - $footer_scripts: the HTML  to include the JavaScript files in the page
 *   footer.
 * - $sourceurl_enabled: TRUE if the source URL infromation should be
 *   displayed.
 * - $url: absolute URL of the original source page.
 * - $source_url: absolute URL of the original source page, either as an alias
 *   or as a system path, as configured by the user.
 * - $cid: comment ID of the node being displayed.
 * - $print_title: the title of the page.
 * - $head: HTML contents of the head tag, provided by drupal_get_html_head().
 * - $robots_meta: meta tag with the configured robots directives.
 * - $css: the syle tags contaning the list of include directives or the full
 *   text of the files for inline CSS use.
 * - $sendtoprinter: depending on configuration, this is the script tag
 *   including the JavaScript to send the page to the printer and to close the
 *   window afterwards.
 *
 * print[--format][--node--content-type[--nodeid]].tpl.php
 *
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 *
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 *
 * @see print_preprocess_print()
 * @see theme_print_published
 * @see theme_print_breadcrumb
 * @see theme_print_footer
 * @see theme_print_sourceurl
 * @see theme_print_url_list
 * @see page.tpl.php
 * @ingroup print
 */
?>

<!DOCTYPE html PUBLIC
  "-//W3C//DTD XHTML+RDFa 1.0//EN""http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"
      xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0"
      dir="<?php print $language->dir; ?>">
<head>
  <?php print $head; ?>
  <base href='<?php print $url ?>'/>
  <title><?php print $print_title; ?></title>
  <?php print $scripts; ?>
  <?php if (isset($sendtoprinter)) {
    print $sendtoprinter;
  } ?>
  <?php print $robots_meta; ?>
  <?php if (theme_get_setting('toggle_favicon')): ?>
    <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>'
          type='image/x-icon'/>
  <?php endif; ?>
  <?php print $css; ?>
</head>
<body>
<?php if (!empty($message)): ?>
  <div class="print-message"><?php print $message; ?></div><p/>
<?php endif; ?>
<?php if ($print_logo): ?>
  <div class="print-logo"><?php print $print_logo; ?></div>
<?php endif; ?>
<div class="print-site_name"><?php print theme('print_published'); ?></div>
<p/>
<div
  class="print-breadcrumb"><?php print theme('print_breadcrumb', array('node' => $node)); ?></div>
<hr class="print-hr"/>
<?php if (!isset($node->type)): ?>
  <h2 class="print-title"><?php print $print_title; ?></h2>
<?php endif; ?>
<div class="print-content">
  <h1><?php print t('Compromiso de gestión @title', array('@title' => $node->title)); ?></h1>
  <p><b>Porcentaje de Avance:</b> <?php print intval($node->field_porcentaje_de_avance_compr[LANGUAGE_NONE][0]['value']); ?>%</p>
  <h2>Metas evaluadas:</h2>
  <?php foreach ($metas as $meta) : ?>
    <h3><?php print $meta['field_title']; ?></h3>
    <ul>
      <li><b>Eje:</b> <?php print $meta['field_eje']; ?></li>
      <li><b>Ámbito:</b> <?php print $meta['field_ambito']; ?></li>
      <li><b>Lineamiento:</b> <?php print $meta['field_lineamiento']; ?></li>
      <li><b>Descripcion del lineamiento:</b> <?php print $meta['field_description_lineamiento']; ?></li>
      <li>
        <b>Acción Estratégica:</b> <?php print $meta['field_accion_estrategica']; ?>
        <ul>
          <li><b>Código:</b> <?php print $meta['field_accion_codigo']; ?></li>
          <li><b>Descripción:</b> <?php print $meta['field_accion_descripcion']; ?></li>
        </ul>
      </li>
      <li>
        <b>Meta:</b> <?php print $meta['field_meta']; ?>
        <ul>
          <li><b>Código:</b> <?php print $meta['field_meta_codigo']; ?></li>
          <li><b>Descripción:</b> <?php print $meta['field_meta_description']; ?></li>
        </ul>
      </li>
      <li><b>Avance:</b> <?php print t('@percentage%', array('@percentage' => $meta['field_porcentaje_avance'])); ?></li>
      <li><b>Comentario sobre avance:</b> <?php print $meta['field_porcentaje_avance_coment']; ?></li>
      <li><b>Aspectos Postivo:</b> <?php print $meta['field_aspecto_positivo']; ?></li>
      <li><b>Obstáculos:</b> <?php print $meta['field_obstaculo']; ?></li>
      <li><b>¿Reciben Asesoría?:</b> <?php print $meta['field_recibio_asesoria_meta']; ?></li>
      <li><b>Organización Asesora:</b> <?php print $meta['field_organizacion_capacitadora']; ?></li>
      <li><b>¿Su organización requiere asesorías?:</b> <?php print $meta['field_su_org_requiere_asesoria']; ?></li>
      <li>
        <b>Temas de Necesidad de Asesoría:</b>
        <ul>
          <?php foreach ($meta['field_tema_necesidad_meta'] as $tema) : ?>
            <li><?php print $tema; ?></li>
          <?php endforeach; ?>
        </ul>
      </li>
      <li>
        <b>Productos: </b>
        <?php foreach ($meta['field_productos'] as $producto) : ?>
          <br>
          <b><?php print $producto['field_producto']; ?></b>
          <ul>
            <li><b>Código:</b> <?php print $producto['field_producto_codigo']; ?></li>
            <li><b>Detalle:</b> <?php print $producto['field_detalle_del_producto']; ?></li>
            <li><b>Descripción:</b> <?php print $producto['field_producto_descripcion']; ?></li>
            <li><b>Año Incial:</b> <?php print $producto['field_producto_ano_inicial']; ?></li>
            <li><b>Año Final:</b> <?php print $producto['field_producto_ano_final']; ?></li>
            <li><b>Descripción de Fuentes de Verificación:</b> <?php print $producto['field_descripc_fuente_verifica']; ?></li>
            <li><b>Fuentes de Verificación:</b>
              <ul>
              <?php foreach ($producto['field_prod_fuente_verifica'] as $file) : ?>
                <li><?php print $file; ?></li>
              <?php endforeach; ?>
              </ul>
            </li>
          </ul>
        <?php endforeach; ?>
      </li>
    </ul>
  <?php endforeach; ?>
</div>
<div class="print-footer"><?php print theme('print_footer'); ?></div>
<hr class="print-hr"/>
<?php if ($sourceurl_enabled): ?>
  <div class="print-source_url">
    <?php print theme('print_sourceurl', array(
      'url' => $source_url,
      'node' => $node,
      'cid' => $cid
    )); ?>
  </div>
<?php endif; ?>
<div class="print-links"><?php print theme('print_url_list'); ?></div>
<?php print $footer_scripts; ?>
</body>
</html>
