<?php
  /**
   * @file
   * Library for connecting to Swiftype.
   */
  $info = $results['body']->info;
  $search_term = $info->page->query;
  $has_results = $info->page->total_result_count > 0;
  $records = $results['body']->records->page;
  $facets = $info->page->facets->{'department-name'};
?>
<form id="searchForm" action="/swiftype" accept-charset="UTF-8" method="get">
  <input name="utf8" type="hidden" value="✓">
  <div class="b b--fw">
    <div class="b-c">
      <div class="sf">
        <label class="sf-l" for="q">Employee Directory:</label>
        <div class="sf-i">
          <input type="text" name="query" id="query" class="sf-i-f" value="<?php print $search_term ?>">
          <button class="sf-i-b">Search</button>
        </div>
      </div>
    </div>
  </div>
  <div class="b b--fw b--g">
    <div class="b-c b-c--mh">
      <?php if ($has_results) { ?>
        <div class="g m-t000">
            <div class="g--3">
              <?php if ($facets) { ?>
                <div class="co">
                  <input id="collapsible" type="checkbox" class="co-f d-n" aria-hidden="true">
                  <label for="collapsible" class="co-t">Filter</label>
                  <div class="co-b co-b--pl">
                    <div class="t--intro m-b200">Filter by Department</div>
                    <div class="m-b300">
                      <?php foreach ($facets as $key => $facet) { ?>
                        <label class="cb" for="check_<?php print $key ?>">
                          <input type="checkbox" name="facet[]" id="check_<?php print $key ?>" value="<?php print $key ?>" class="cb-f" <?php if(in_array($key, $selected_facets)) { ?>checked<?php } ?>>
                          <span class="cb-l"><?php print $key ?> (<?php print $facet ?>)</span>
                        </label>
                      <?php } ?>
                    </div>
                    <button type="submit" class="btn btn--sb">Apply</button>
                    <script type="text/javascript">
                      var reset_button = document.getElementById('resetForm');

                      reset_button.style.display = 'inline-block';
                      reset_button.addEventListener('click', function (e) {
                        e.preventDefault()

                        var checks = document.querySelectorAll('input.cb-f');
                        for (var i = 0; i < checks.length; i++) {
                          checks[i].checked = false;
                        }

                        document.getElementById('searchForm').submit();
                      });
                    </script>
                  </div>
                </div>
              <?php } ?>
            </div>
            <div class="g--9">
              <div class="g">
                <?php foreach ($records as $key => $record) { ?>
                  <article class="cdp m-t500 g--1 g--6">
                    <a href="<?php print($record->url) ?>" class="cdp-l d-b p-h100 p-v700">
                      <div>
                        <div class="cdp-t t--sans t--upper"><?php print($record->{'title'}[0]) ?></div>
                        <div class="cdp-st t--subinfo t--g300"><?php print($record->{'department-name'}) ?></div>
                      </div>
                    </a>
                    <a href="mailto:kidani.abadi@boston.gov" class="d-b bg--cb cdp-a ta-c p-a300 t--upper t--sans t--w t--ob--h t--s100">Send an email<span class="a11y--hidden"> to <?php print($record->{'title'}[0]) ?></span></a>
                  </article>
                <?php } ?>
              </div>
              <?php if ($info->page->num_pages > 1) { ?>
                <ul class="pg">
                  <li class="pg-li">
                    <?php if ($info->page->current_page > 1) { ?>
                      <a class="pg-li-i pg-li-i--a pg-li-i--link" href="/employees?page=<?php print $info->page->current_page - 1 ?>&amp;query=<?php print $search_term ?>&amp;<?php print http_build_query(array('facet' => $selected_facets)) ?>">
                        <span class="pg-li-i-h">&lt; previous</span>
                      </a>
                    <?php } else { ?>
                      <span class="pg-li-i">&lt; previous</span>
                    <?php } ?>
                  </li>
                  <?php foreach ($range as $number) { ?>
                    <li class="pg-li"><a class="pg-li-i pg-li-i--link<?php if ($number == $info->page->current_page) { ?> pg-li-i--a<?php } ?>" href="/employees?page=<?php print $number ?>&amp;query=<?php print $search_term ?>&amp;<?php print http_build_query(array('facet' => $selected_facets)) ?>"><?php print $number ?></a></li>
                  <?php } ?>
                  <li class="pg-li">
                    <?php if ($info->page->current_page === $info->page->num_pages) { ?>
                      <span class="pg-li-i">next &gt;</span>
                    <?php } else { ?>
                      <a class="pg-li-i pg-li-i--a pg-li-i--link" href="/employees?page=<?php print $info->page->current_page + 1 ?>&amp;query=<?php print $search_term ?>&amp;<?php print http_build_query(array('facet' => $selected_facets)) ?>">
                        <span class="pg-li-i-h">next &gt;</span>
                      </a>
                    <?php } ?>
                  </li>
                </ul>
              <?php } ?>
            </div>
          </div>
      <?php } else { ?>
        <h2 class="h2 m-t000 m-b300">No Results Found</h2>
        <div class="intro-text supporting-text lh--200">Thomas Paine noted "These are the times that try men's souls." Well this is a time to try another search.</div>
      <?php } ?>
    </div>
  </div>
</form>
<div class="b">
  <div class="b-c">
    <div class="h2 tt-u ta-c p-h300">Can't find who you're looking for?</div>
    <hr class="hr hr--sq m-h300 m-v500">
    <div class="ta-c p-h200 t--intro">
      Please contact Employee Connect via email <a href="mailto:EMPLOYEECONNECT@BOSTON.GOV">employeeconnect@boston.gov</a>, <a href="/need-something-else">via the web</a>, or via phone <a href="tel:617-635-3221">617-635-3221</a>.
    </div>
  </div>
</div>
