<?php error_reporting(E_ERROR || E_PARSE);

include 'db.php';

$name = $_REQUEST['name'];
$score = $_REQUEST['score'];

if (empty($name) || empty($score)) {
	echo "<h1>Forbbiden</h1>";
	echo "<p>You don't have permission to access</p>";
} else {
	$sql = "INSERT INTO scores (`name`, `score`) VALUES ('$name', '$score');";
	mysqli_query($conn, $sql);
	header("Location: ../index.php");
}