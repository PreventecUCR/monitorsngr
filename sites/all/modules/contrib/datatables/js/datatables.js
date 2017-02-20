(function ($) {
  Drupal.behaviors.datatables = {
    attach: function (context, settings) {
      $.each(settings.datatables, function (selector) {
        $(selector, context).once('datatables', function() {
          // Check if table contains expandable hidden rows.
          var settings = Drupal.settings.datatables[selector];
          if (settings.bExpandable) {
            // Insert a "view more" column to the table.
            var nCloneTh = document.createElement('th');
            var nCloneTd = document.createElement('td');
            nCloneTd.innerHTML = '<a href="#" class="datatables-expand datatables-closed">' + Drupal.t('Show Details') + '</a>';

            $(selector + ' thead tr').each( function () {
              this.insertBefore( nCloneTh, this.childNodes[0] );
            });

            $(selector + ' tbody tr').each( function () {
              this.insertBefore(  nCloneTd.cloneNode( true ), this.childNodes[0] );
            });

            settings.aoColumns.unshift({"bSortable": false});
          }

          var datatable = $(selector).dataTable(settings);

          if (settings.bMultiFilter) {
            // The code below is taken almost verbatim from the examples at datatables.net
            // @see http://www.datatables.net/examples/api/multi_filter.html

            /*-------------------------     codigo original       -------------------------*/
            // Apply the actual filter to the table.
//             $("tfoot input").keyup(function() {
//               // Filter on the column (the index) of this element.
//               datatable.fnFilter(this.value, $("tfoot input").index(this));
//             });


            // Support functions to provide a little bit of 'user friendlyness' to the textboxes in the footer.
//             var asInitVals = new Array();
//             $("tfoot input").each(function(i) {
//               asInitVals[i] = this.value;
//             });


            /*-------------------------     codigo original       -------------------------*/

            /*-------------------------     codigo customizado by xemaxemax       -------------------------*/

            //inputs

            $("#compro_input").keyup(function () {
              datatable.fnFilter(this.value, $("#compro_input").index(this));
            });

            $("#meta_input").keyup(function () {
              datatable.fnFilter(this.value, 2);
            });

            $("#creacion_input").keyup(function () {
              datatable.fnFilter(this.value, 6);
            });

            //clases de search

            $("tfoot input").focus(function() {
              if (this.className == "search_init") {
                this.className = "";
                this.value = "";
              }
            });

            $("tfoot input").blur(function(i) {
              if (this.value == "") {
                this.className = "search_init";
                this.value = asInitVals[$("tfoot input").index(this)];
              }
            });

            //selects o dropdowns

                //taxonomias

            $("#select_lin").change(function () {
              datatable.fnFilter(this.value, 3);
            });

            $("#select_amb").change(function () {
              datatable.fnFilter(this.value, 4);
            });

            $("#select_eje").change(function () {
              datatable.fnFilter(this.value, 5);
            });

                //campos de institucion porcentaje y estado

            $("#select_insti").change(function () {
              datatable.fnFilter(this.value, 1);
            });

            $("#select_porcent").change(function () {
              datatable.fnFilter(this.value, 7);
            });

            $("#select_estado").change(function () {
              datatable.fnFilter(this.value, 8);
            });



          }

             /*-------------------------     codigo customizado by xemaxemax       -------------------------*/

          if (settings.bExpandable) {
            // Add column headers to table settings.
            var datatables_settings = datatable.fnSettings();
            // Add blank column header for show details column.
            settings.aoColumnHeaders.unshift('');
            // Add column headers to table settings.
            datatables_settings.aoColumnHeaders = settings.aoColumnHeaders;

            /* Add event listener for opening and closing details
             * Note that the indicator for showing which row is open is not controlled by DataTables,
             * rather it is done here
             */
            $('td a.datatables-expand', datatable.fnGetNodes() ).each( function () {
              $(this).click( function () {
                var row = this.parentNode.parentNode;
                if (datatable.fnIsOpen(row)) {
                  datatable.fnClose(row);
                  $(this).html(Drupal.t('Show Details'));
                }
                else {
                  datatable.fnOpen( row, Drupal.theme('datatablesExpandableRow', datatable, row), 'details' );
                  $(this).html(Drupal.t('Hide Details'));
                }
                return false;
              });
            });
          }
        });
      });
    }
  };

  /**
   * Theme an expandable hidden row.
   *
   * @param object
   *   The datatable object.
   * @param array
   *   The row array for which the hidden row is being displayed.
   * @return
   *   The formatted text (html).
   */
  Drupal.theme.prototype.datatablesExpandableRow = function(datatable, row) {
    var rowData = datatable.fnGetData(row);
    var settings = datatable.fnSettings();

    var output = '<table style="padding-left: 50px">';
    $.each(rowData, function(index) {
      if (!settings.aoColumns[index].bVisible) {
        output += '<tr><td>' + settings.aoColumnHeaders[index] + '</td><td style="text-align: left">' + this + '</td></tr>';
      }
    });
    output += '</table>';
    return output;
  };
})(jQuery);
