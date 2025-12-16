<?php
    $raio = (double) fgets(STDIN);
    $pi = 3.14159;
    $area = $pi * $raio * $raio;

    echo "A=" . number_format($area, 4, '.', '') . PHP_EOL;
?>