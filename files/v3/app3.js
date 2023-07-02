window.addEventListener('DOMContentLoaded', function() {
    var filePath = '../files/v3/2program.cpp';
    var xhr = new XMLHttpRequest();
    xhr.responseType = 'text';
    xhr.open('GET', filePath, true);
    xhr.onload = function() {
      if (xhr.status === 200) {
        var fileContent = xhr.responseText;
        var fileContentElement = document.getElementById('file-content3');
        fileContentElement.textContent = fileContent;
        var copyBtn = document.querySelector('.copy-btn3');
        copyBtn.addEventListener('click', function() {
          var range = document.createRange();
          range.selectNodeContents(fileContentElement);
          window.getSelection().removeAllRanges();
          window.getSelection().addRange(range);
          try {
            var successful = document.execCommand("copy");
            var message = successful ? 'Copied!' : 'Copy failed!';
            console.log(message);
            if (successful == true) {
                copyBtn.innerHTML = "Nusxalandi!";
            } else {
                copyBtn.innerHTML = "Nusxalanmadi!";
            }
          } catch (err) {
            console.log('Unable to copy');
          }
          window.getSelection().removeAllRanges();
        });
      }
    };
    xhr.send();
});
// @HanSiBinUz