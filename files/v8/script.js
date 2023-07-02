const input = document.querySelector(".input");
const techniques = document.querySelector(".techniques");
const button = document.querySelector(".btn");
const info = document.querySelector(".info");

let amount;
let selectedItem;

input.addEventListener("input", (e) => {
  amount = +e.target.value;
});
techniques.addEventListener("click", (e) => {
  selectedItem = +e.target.value;
});
button.addEventListener("click", () => {
  console.log(amount);
  console.log(selectedItem);
  if (amount >= selectedItem) {
    info.innerHTML = "Sotib oldingiz";
  } else {
    info.innerHTML = "Uzr, pul yetmadi";
  }
});