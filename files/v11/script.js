const selectedMonth = document.querySelector(".month");
const button = document.querySelector(".btn");
const info = document.querySelector(".info");

let month;

selectedMonth.addEventListener("click", (e) => {
  month = e.target.value;
});
button.addEventListener("click", () => {
  switch (month) {
    case "Dekabr":
    case "Yanvar":
    case "Fevral":
      info.innerHTML = "Qish fasli";
      break;
    case "Mart":
    case "Aprel":
    case "May":
      info.innerHTML = "Bahor fasli";
      break;
    case "Iyun":
    case "Iyul":
    case "Avgust":
      info.innerHTML = "Yoz fasli";
      break;
    case "Sentabr":
    case "Oktabr":
    case "Noyabr":
      info.innerHTML = "Kuz fasli";
      break;

    default:
      info.innerHTML = "Bunday oy mavjud emas";
      break;
  }
});
