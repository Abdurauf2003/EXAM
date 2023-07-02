const input1=document.querySelector(".input1"),
              input2=document.querySelector(".input2"),
              input3=document.querySelector(".input3"),
              input4=document.querySelector(".input4"),
              input5=document.querySelector(".input5"),
              button=document.querySelector(".btn"),
              info=document.querySelector(".info"),
              answer1="Sabzi",
              answer2="Buloq",
              answer3="Kitob",
              answer4="Kapalak",
              answer5="Shamol";
              let count=0,option1,option2,option3,option4,option5;
              input1.addEventListener("input",(e=>{option1=e.target.value})),
              input2.addEventListener("input",(e=>{option2=e.target.value})),
              input3.addEventListener("input",(e=>{option3=e.target.value})),
              input4.addEventListener("input",(e=>{option4=e.target.value})),
              input5.addEventListener("input",(e=>{option5=e.target.value})),
              button.addEventListener("click",(()=>{option1===answer1&&count++,option2===answer2&&count++,option3===answer3&&count++,option4===answer4&&count++,option5===answer5&&count++,count>=5?info.innerHTML="Barcha savollarga javob berdingiz. Bahoyingiz: 5":4===count?info.innerHTML="4 ta savolga javob berdingiz. Bahoyingiz: 4":3===count?info.innerHTML="3 ta savolga javob berdingiz. Bahoyingiz: 3":info.innerHTML="Siz yetarlicha savollarga javob berolmadingiz. Bahoyingiz: 2"}))