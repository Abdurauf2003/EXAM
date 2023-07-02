function convertCurrency() {
  var amount = parseFloat(document.getElementById("amount").value);
  var currency = document.getElementById("currency").value;
  var result = 0;

  if (currency === "usd-to-uzs") {
    result = amount * 10500; // Dollarni so'mga nisbatan kursi
  } else if (currency === "uzs-to-usd") {
    result = amount / 10500; // So'mni dollarga nisbatan kursi
  }

  document.getElementById("result").innerHTML = result.toFixed(2);
}