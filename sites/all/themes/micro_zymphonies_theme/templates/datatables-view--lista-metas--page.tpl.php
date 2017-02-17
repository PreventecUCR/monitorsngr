<?php
/**
 * @file
 * Template to display a datatable.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 */
//drupal_add_css(drupal_get_path('module', 'datatables') .'/dataTables/media/css/demo_table.css');
?>
<table id="<?php print $id ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!empty($title)) : ?>
    <caption><?php print $title; ?></caption>
  <?php endif; ?>
  <thead>
  <tr>
    <?php foreach ($header as $field => $label): ?>
      <th class="views-field views-field-<?php print $fields[$field]; ?>">
        <?php print $label; ?>
      </th>
    <?php endforeach; ?>
  </tr>
  </thead>
  <tbody>
  <?php foreach ($rows as $count => $row): ?>
    <tr class="<?php print implode(' ', $row_classes[$count]); ?>">
      <?php foreach ($row as $field => $content): ?>
        <td class="views-field views-field-<?php print $fields[$field]; ?>">
          <?php print $content; ?>
        </td>
      <?php endforeach; ?>

    </tr>
  <?php endforeach; ?>
  </tbody>
  <?php $options = $view->style_plugin->options; ?>

<!--Carga de las taxonomias para los debidos dropdowns-->

  <?php $lineam = return_lineamiento_tax();
  $count_lineam=0;
  $valores_lineam=array();
  foreach ($lineam as $keys_lin => $values_lin) {
    $valores_lineam[$count_lineam] = array($values_lin->name);
    $count_lineam++;
  }
  ?>
  <?php $ambit = return_ambito_tax();
  $count_ambit=0;
  $valores_ambit=array();
  foreach ($ambit as $keys_amb => $values_amb) {
    $valores_ambit[$count_ambit] = array($values_amb->name);
    $count_ambit++;
  }
  ?>
  <?php $ejes = return_eje_tax();
  $count_ejes=0;
  $valores_ejes=array();
  foreach ($ejes as $keys_eje => $values_eje) {
    $valores_ejes[$count_ejes] = array($values_eje->name);
    $count_ejes++;
  }
  ?>

  <?php
  $valores_institucion = return_institucion_entity();
  $valores_porcent = return_porcent_field();
  $valores_estad = return_estado_field();
//  dpm($valores_estad);

//  dpm($valores_porcent);
  ?>

<!--Fin de carga de taxonomias-->

  <?php
  ?>
  <?php if ($options['elements']['multi_filter']): ?>

    <tfoot>
    <tr>
      <th>
<!--        <input id="compro_input" type="text" name="compro" placeholder="compromiso" />-->
      </th>
      <th>
<!--        <input id="insti_input" type="text" name="insti" placeholder="institucion" />-->
<!--        <select id="select_insti">-->
<!--          <option value="">--Seleccione una institucion--</option>-->
<!--          --><?php //foreach ($valores_institucion as $llave => $valReal): ?>
<!--            <option value="--><?php //print $valores_institucion[$llave]?><!--">--><?php //print $valores_institucion[$llave]?><!--</option>-->
<!--          --><?php //endforeach; ?>
<!--        </select>-->
      </th>
      <th>
<!--        <input id="meta_input" type="text" name="meta" placeholder="meta"  />-->
      </th>
    </tr>
    <tr>
      <th>
<!--        <select id="select_lin">-->
<!--          <option value="">--Seleccione un lineamiento--</option>-->
<!--          --><?php //foreach ($valores_lineam as $llave => $valReal): ?>
<!--            <option value="--><?php //print $valores_lineam[$llave][0]?><!--">--><?php //print $valores_lineam[$llave][0]?><!--</option>-->
<!--          --><?php //endforeach; ?>
<!--        </select>-->
      </th>
      <th>
<!--        <select id="select_amb">-->
<!--          <option value="">--Seleccione un ambito--</option>-->
<!--          --><?php //foreach ($valores_ambit as $llave => $valReal): ?>
<!--            <option value="--><?php //print $valores_ambit[$llave][0]?><!--">--><?php //print $valores_ambit[$llave][0]?><!--</option>-->
<!--          --><?php //endforeach; ?>
<!--        </select>-->
      </th>
      <th>
<!--        <select id="select_eje">-->
<!--          <option value="">--Seleccione un eje--</option>-->
<!--          --><?php //foreach ($valores_ejes as $llave => $valReal): ?>
<!--            <option value="--><?php //print $valores_ejes[$llave][0]?><!--">--><?php //print $valores_ejes[$llave][0]?><!--</option>-->
<!--          --><?php //endforeach; ?>
<!--        </select>-->
      </th>
    </tr>
    <tr>
      <th>
<!--        <input id="creacion_input" type="text" name="anho" placeholder="creacion" />-->
      </th>
      <th>
<!--        <select id="select_porcent">-->
<!--          <option value="">--Seleccione un porcentaje--</option>-->
<!--          --><?php //foreach ($valores_porcent as $llave => $valReal): ?>
<!--            <option value="--><?php //print $valores_porcent[$llave]?><!--">1</option>-->
<!--          --><?php //endforeach; ?>
<!--        </select>-->
<!--        <input type="text" name="porce" placeholder="porcentaje"  />-->
      </th>
      <th>
<!--        <select id="select_estado">-->
<!--          <option value="">--Seleccione un estado--</option>-->
<!--          --><?php //foreach ($valores_estad as $llave => $valReal): ?>
<!--            <option value="--><?php //print $valores_estad[$llave]?><!--">--><?php //print $valores_estad[$llave]?><!--</option>-->
<!--          --><?php //endforeach; ?>
<!--        </select>-->
<!--        <input type="text" name="estado" placeholder="estado"  />-->
      </th>
    </tr>
    </tfoot>
  <?php endif; ?>
</table>

<table style="width: auto;">
  <tbody>
    <tr>
      <td>
        <input id="compro_input" type="text" name="compro" placeholder="compromiso" />
      </td>
    </tr>
    <tr>
      <td>
        <select id="select_insti">
          <option value="">--Seleccione una institucion--</option>
          <?php foreach ($valores_institucion as $llave => $valReal): ?>
            <option value="<?php print $valores_institucion[$llave]?>"><?php print $valores_institucion[$llave]?></option>
          <?php endforeach; ?>
        </select>
      </td>
    </tr>
    <tr>
      <td>
        <input id="meta_input" type="text" name="meta" placeholder="meta"  />
      </td>
    </tr>
    <tr>
      <td>
        <select id="select_lin">
          <option value="">--Seleccione un lineamiento--</option>
          <?php foreach ($valores_lineam as $llave => $valReal): ?>
            <option value="<?php print $valores_lineam[$llave][0]?>"><?php print $valores_lineam[$llave][0]?></option>
          <?php endforeach; ?>
        </select>
      </td>
    </tr>
    <tr>
      <td>
        <select id="select_amb">
          <option value="">--Seleccione un ambito--</option>
          <?php foreach ($valores_ambit as $llave => $valReal): ?>
            <option value="<?php print $valores_ambit[$llave][0]?>"><?php print $valores_ambit[$llave][0]?></option>
          <?php endforeach; ?>
        </select>
      </td>
    </tr>
    <tr>
      <td>
        <select id="select_eje">
          <option value="">--Seleccione un eje--</option>
          <?php foreach ($valores_ejes as $llave => $valReal): ?>
            <option value="<?php print $valores_ejes[$llave][0]?>"><?php print $valores_ejes[$llave][0]?></option>
          <?php endforeach; ?>
        </select>
      </td>
    </tr>
    <tr>
      <td>
        <input id="creacion_input" type="text" name="anho" placeholder="creacion" />
      </td>
    </tr>
    <tr>
      <td>
        <select id="select_porcent">
          <option value="">--Seleccione un porcentaje--</option>
          <?php foreach ($valores_porcent as $llave => $valReal): ?>
            <option value="<?php print $valores_porcent[$llave]?>"><?php print $valores_porcent[$llave]?></option>
          <?php endforeach; ?>
        </select>
      </td>
    </tr>
    <tr>
      <td>
        <select id="select_estado">
          <option value="">--Seleccione un estado--</option>
          <?php foreach ($valores_estad as $llave => $valReal): ?>
            <option value="<?php print $valores_estad[$llave]?>"><?php print $valores_estad[$llave]?></option>
          <?php endforeach; ?>
        </select>
      </td>
    </tr>
  </tbody>
</table>