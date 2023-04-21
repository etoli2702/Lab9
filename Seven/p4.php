<html>
    <style>

        table, th, td {
            border:1px solid black;
        }
    </style>
    <body>
        <table>
            <?php
                echo "<tr>";
                for($k = 0; $k <= $_POST['val']; $k++){
                    if($k == "0"){
                        echo "<td>" . "" . "</td>";
                    }
                    else{
                        echo "<td>" . $k . "</td>";
                    }

                }
                echo "</tr>";


                for($i = 1; $i <= $_POST['val']; $i++){
                    echo "<tr>";
                    for($j = 0; $j <= $_POST['val']; $j++){
                        if($j > "0"){
                            echo "<td>" . ($i * $j) . "</td>";
                        }
                        else{
                            echo "<td>" . $i . "</td>";
                        }

                    }
                    echo "</tr>";
                }

            ?>
        </table>
    </body>
</html>